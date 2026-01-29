// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECOSTUNITRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECOSTUNITRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ResourceInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(ApportionCode, apportionCode_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceUserId, resourceUserId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(ApportionCode, apportionCode_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceUserId, resourceUserId_);
      };
      ResourceInstanceList() = default ;
      ResourceInstanceList(const ResourceInstanceList &) = default ;
      ResourceInstanceList(ResourceInstanceList &&) = default ;
      ResourceInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceInstanceList() = default ;
      ResourceInstanceList& operator=(const ResourceInstanceList &) = default ;
      ResourceInstanceList& operator=(ResourceInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apportionCode_ == nullptr
        && this->commodityCode_ == nullptr && this->resourceId_ == nullptr && this->resourceUserId_ == nullptr; };
      // apportionCode Field Functions 
      bool hasApportionCode() const { return this->apportionCode_ != nullptr;};
      void deleteApportionCode() { this->apportionCode_ = nullptr;};
      inline string getApportionCode() const { DARABONBA_PTR_GET_DEFAULT(apportionCode_, "") };
      inline ResourceInstanceList& setApportionCode(string apportionCode) { DARABONBA_PTR_SET_VALUE(apportionCode_, apportionCode) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline ResourceInstanceList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceInstanceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceUserId Field Functions 
      bool hasResourceUserId() const { return this->resourceUserId_ != nullptr;};
      void deleteResourceUserId() { this->resourceUserId_ = nullptr;};
      inline int64_t getResourceUserId() const { DARABONBA_PTR_GET_DEFAULT(resourceUserId_, 0L) };
      inline ResourceInstanceList& setResourceUserId(int64_t resourceUserId) { DARABONBA_PTR_SET_VALUE(resourceUserId_, resourceUserId) };


    protected:
      // The split item of the shared instance. This parameter is required only for shared instances.
      // 
      // *   Eight cloud services support bill splitting. The commodity codes of the eight services are oss, dcdn, snapshot, vod, cdn, live, and cbwp.
      // *   You can obtain the split item of a shared instance by calling QueryCostUnitResource operation to obtain all resource instances within a cost center.
      shared_ptr<string> apportionCode_ {};
      // The commodity code of the resource instance.
      // 
      // This parameter is required.
      shared_ptr<string> commodityCode_ {};
      // The ID of the resource instance.
      // 
      // This parameter is required.
      shared_ptr<string> resourceId_ {};
      // The user ID of the resource instance owner.
      // 
      // This parameter is required.
      shared_ptr<int64_t> resourceUserId_ {};
    };

    virtual bool empty() const override { return this->fromUnitId_ == nullptr
        && this->fromUnitUserId_ == nullptr && this->resourceInstanceList_ == nullptr && this->toUnitId_ == nullptr && this->toUnitUserId_ == nullptr; };
    // fromUnitId Field Functions 
    bool hasFromUnitId() const { return this->fromUnitId_ != nullptr;};
    void deleteFromUnitId() { this->fromUnitId_ = nullptr;};
    inline int64_t getFromUnitId() const { DARABONBA_PTR_GET_DEFAULT(fromUnitId_, 0L) };
    inline AllocateCostUnitResourceRequest& setFromUnitId(int64_t fromUnitId) { DARABONBA_PTR_SET_VALUE(fromUnitId_, fromUnitId) };


    // fromUnitUserId Field Functions 
    bool hasFromUnitUserId() const { return this->fromUnitUserId_ != nullptr;};
    void deleteFromUnitUserId() { this->fromUnitUserId_ = nullptr;};
    inline int64_t getFromUnitUserId() const { DARABONBA_PTR_GET_DEFAULT(fromUnitUserId_, 0L) };
    inline AllocateCostUnitResourceRequest& setFromUnitUserId(int64_t fromUnitUserId) { DARABONBA_PTR_SET_VALUE(fromUnitUserId_, fromUnitUserId) };


    // resourceInstanceList Field Functions 
    bool hasResourceInstanceList() const { return this->resourceInstanceList_ != nullptr;};
    void deleteResourceInstanceList() { this->resourceInstanceList_ = nullptr;};
    inline const vector<AllocateCostUnitResourceRequest::ResourceInstanceList> & getResourceInstanceList() const { DARABONBA_PTR_GET_CONST(resourceInstanceList_, vector<AllocateCostUnitResourceRequest::ResourceInstanceList>) };
    inline vector<AllocateCostUnitResourceRequest::ResourceInstanceList> getResourceInstanceList() { DARABONBA_PTR_GET(resourceInstanceList_, vector<AllocateCostUnitResourceRequest::ResourceInstanceList>) };
    inline AllocateCostUnitResourceRequest& setResourceInstanceList(const vector<AllocateCostUnitResourceRequest::ResourceInstanceList> & resourceInstanceList) { DARABONBA_PTR_SET_VALUE(resourceInstanceList_, resourceInstanceList) };
    inline AllocateCostUnitResourceRequest& setResourceInstanceList(vector<AllocateCostUnitResourceRequest::ResourceInstanceList> && resourceInstanceList) { DARABONBA_PTR_SET_RVALUE(resourceInstanceList_, resourceInstanceList) };


    // toUnitId Field Functions 
    bool hasToUnitId() const { return this->toUnitId_ != nullptr;};
    void deleteToUnitId() { this->toUnitId_ = nullptr;};
    inline int64_t getToUnitId() const { DARABONBA_PTR_GET_DEFAULT(toUnitId_, 0L) };
    inline AllocateCostUnitResourceRequest& setToUnitId(int64_t toUnitId) { DARABONBA_PTR_SET_VALUE(toUnitId_, toUnitId) };


    // toUnitUserId Field Functions 
    bool hasToUnitUserId() const { return this->toUnitUserId_ != nullptr;};
    void deleteToUnitUserId() { this->toUnitUserId_ = nullptr;};
    inline int64_t getToUnitUserId() const { DARABONBA_PTR_GET_DEFAULT(toUnitUserId_, 0L) };
    inline AllocateCostUnitResourceRequest& setToUnitUserId(int64_t toUnitUserId) { DARABONBA_PTR_SET_VALUE(toUnitUserId_, toUnitUserId) };


  protected:
    // The ID of the source cost center.
    // 
    // *   A value of 0 indicates that the resources to be transferred have not been allocated to a cost center.
    // *   A value greater than 0 indicates the ID of an existing cost center.
    // 
    // This parameter is required.
    shared_ptr<int64_t> fromUnitId_ {};
    // The user ID of the owner of the source cost center.
    // 
    // This parameter is required.
    shared_ptr<int64_t> fromUnitUserId_ {};
    // The resource instances to be transferred.
    // 
    // This parameter is required.
    shared_ptr<vector<AllocateCostUnitResourceRequest::ResourceInstanceList>> resourceInstanceList_ {};
    // The ID of the destination cost center.
    // 
    // *   A value of -1 indicates that the allocated resources are changed to unallocated.
    // *   A value greater than 0 indicates the ID of an existing cost center.
    // 
    // This parameter is required.
    shared_ptr<int64_t> toUnitId_ {};
    // The user ID of the owner of the destination cost center.
    // 
    // This parameter is required.
    shared_ptr<int64_t> toUnitUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
