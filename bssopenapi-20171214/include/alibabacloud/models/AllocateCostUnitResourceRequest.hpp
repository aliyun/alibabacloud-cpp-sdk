// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECOSTUNITRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECOSTUNITRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AllocateCostUnitResourceRequestResourceInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class AllocateCostUnitResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateCostUnitResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromUnitId, fromUnitId_);
      DARABONBA_PTR_TO_JSON(FromUnitUserId, fromUnitUserId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceList, resourceInstanceList_);
      DARABONBA_PTR_TO_JSON(ToUnitId, toUnitId_);
      DARABONBA_PTR_TO_JSON(ToUnitUserId, toUnitUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateCostUnitResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromUnitId, fromUnitId_);
      DARABONBA_PTR_FROM_JSON(FromUnitUserId, fromUnitUserId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceList, resourceInstanceList_);
      DARABONBA_PTR_FROM_JSON(ToUnitId, toUnitId_);
      DARABONBA_PTR_FROM_JSON(ToUnitUserId, toUnitUserId_);
    };
    AllocateCostUnitResourceRequest() = default ;
    AllocateCostUnitResourceRequest(const AllocateCostUnitResourceRequest &) = default ;
    AllocateCostUnitResourceRequest(AllocateCostUnitResourceRequest &&) = default ;
    AllocateCostUnitResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateCostUnitResourceRequest() = default ;
    AllocateCostUnitResourceRequest& operator=(const AllocateCostUnitResourceRequest &) = default ;
    AllocateCostUnitResourceRequest& operator=(AllocateCostUnitResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromUnitId_ != nullptr
        && this->fromUnitUserId_ != nullptr && this->resourceInstanceList_ != nullptr && this->toUnitId_ != nullptr && this->toUnitUserId_ != nullptr; };
    // fromUnitId Field Functions 
    bool hasFromUnitId() const { return this->fromUnitId_ != nullptr;};
    void deleteFromUnitId() { this->fromUnitId_ = nullptr;};
    inline int64_t fromUnitId() const { DARABONBA_PTR_GET_DEFAULT(fromUnitId_, 0L) };
    inline AllocateCostUnitResourceRequest& setFromUnitId(int64_t fromUnitId) { DARABONBA_PTR_SET_VALUE(fromUnitId_, fromUnitId) };


    // fromUnitUserId Field Functions 
    bool hasFromUnitUserId() const { return this->fromUnitUserId_ != nullptr;};
    void deleteFromUnitUserId() { this->fromUnitUserId_ = nullptr;};
    inline int64_t fromUnitUserId() const { DARABONBA_PTR_GET_DEFAULT(fromUnitUserId_, 0L) };
    inline AllocateCostUnitResourceRequest& setFromUnitUserId(int64_t fromUnitUserId) { DARABONBA_PTR_SET_VALUE(fromUnitUserId_, fromUnitUserId) };


    // resourceInstanceList Field Functions 
    bool hasResourceInstanceList() const { return this->resourceInstanceList_ != nullptr;};
    void deleteResourceInstanceList() { this->resourceInstanceList_ = nullptr;};
    inline const vector<AllocateCostUnitResourceRequestResourceInstanceList> & resourceInstanceList() const { DARABONBA_PTR_GET_CONST(resourceInstanceList_, vector<AllocateCostUnitResourceRequestResourceInstanceList>) };
    inline vector<AllocateCostUnitResourceRequestResourceInstanceList> resourceInstanceList() { DARABONBA_PTR_GET(resourceInstanceList_, vector<AllocateCostUnitResourceRequestResourceInstanceList>) };
    inline AllocateCostUnitResourceRequest& setResourceInstanceList(const vector<AllocateCostUnitResourceRequestResourceInstanceList> & resourceInstanceList) { DARABONBA_PTR_SET_VALUE(resourceInstanceList_, resourceInstanceList) };
    inline AllocateCostUnitResourceRequest& setResourceInstanceList(vector<AllocateCostUnitResourceRequestResourceInstanceList> && resourceInstanceList) { DARABONBA_PTR_SET_RVALUE(resourceInstanceList_, resourceInstanceList) };


    // toUnitId Field Functions 
    bool hasToUnitId() const { return this->toUnitId_ != nullptr;};
    void deleteToUnitId() { this->toUnitId_ = nullptr;};
    inline int64_t toUnitId() const { DARABONBA_PTR_GET_DEFAULT(toUnitId_, 0L) };
    inline AllocateCostUnitResourceRequest& setToUnitId(int64_t toUnitId) { DARABONBA_PTR_SET_VALUE(toUnitId_, toUnitId) };


    // toUnitUserId Field Functions 
    bool hasToUnitUserId() const { return this->toUnitUserId_ != nullptr;};
    void deleteToUnitUserId() { this->toUnitUserId_ = nullptr;};
    inline int64_t toUnitUserId() const { DARABONBA_PTR_GET_DEFAULT(toUnitUserId_, 0L) };
    inline AllocateCostUnitResourceRequest& setToUnitUserId(int64_t toUnitUserId) { DARABONBA_PTR_SET_VALUE(toUnitUserId_, toUnitUserId) };


  protected:
    // The ID of the source cost center.
    // 
    // *   A value of 0 indicates that the resources to be transferred have not been allocated to a cost center.
    // *   A value greater than 0 indicates the ID of an existing cost center.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> fromUnitId_ = nullptr;
    // The user ID of the owner of the source cost center.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> fromUnitUserId_ = nullptr;
    // The resource instances to be transferred.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AllocateCostUnitResourceRequestResourceInstanceList>> resourceInstanceList_ = nullptr;
    // The ID of the destination cost center.
    // 
    // *   A value of -1 indicates that the allocated resources are changed to unallocated.
    // *   A value greater than 0 indicates the ID of an existing cost center.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> toUnitId_ = nullptr;
    // The user ID of the owner of the destination cost center.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> toUnitUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
