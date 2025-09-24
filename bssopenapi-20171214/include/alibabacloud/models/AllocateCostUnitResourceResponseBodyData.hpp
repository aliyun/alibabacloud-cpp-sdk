// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALLOCATECOSTUNITRESOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ALLOCATECOSTUNITRESOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class AllocateCostUnitResourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AllocateCostUnitResourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(ToUnitId, toUnitId_);
      DARABONBA_PTR_TO_JSON(ToUnitUserId, toUnitUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AllocateCostUnitResourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(ToUnitId, toUnitId_);
      DARABONBA_PTR_FROM_JSON(ToUnitUserId, toUnitUserId_);
    };
    AllocateCostUnitResourceResponseBodyData() = default ;
    AllocateCostUnitResourceResponseBodyData(const AllocateCostUnitResourceResponseBodyData &) = default ;
    AllocateCostUnitResourceResponseBodyData(AllocateCostUnitResourceResponseBodyData &&) = default ;
    AllocateCostUnitResourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AllocateCostUnitResourceResponseBodyData() = default ;
    AllocateCostUnitResourceResponseBodyData& operator=(const AllocateCostUnitResourceResponseBodyData &) = default ;
    AllocateCostUnitResourceResponseBodyData& operator=(AllocateCostUnitResourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isSuccess_ != nullptr
        && this->toUnitId_ != nullptr && this->toUnitUserId_ != nullptr; };
    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool isSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline AllocateCostUnitResourceResponseBodyData& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // toUnitId Field Functions 
    bool hasToUnitId() const { return this->toUnitId_ != nullptr;};
    void deleteToUnitId() { this->toUnitId_ = nullptr;};
    inline int64_t toUnitId() const { DARABONBA_PTR_GET_DEFAULT(toUnitId_, 0L) };
    inline AllocateCostUnitResourceResponseBodyData& setToUnitId(int64_t toUnitId) { DARABONBA_PTR_SET_VALUE(toUnitId_, toUnitId) };


    // toUnitUserId Field Functions 
    bool hasToUnitUserId() const { return this->toUnitUserId_ != nullptr;};
    void deleteToUnitUserId() { this->toUnitUserId_ = nullptr;};
    inline int64_t toUnitUserId() const { DARABONBA_PTR_GET_DEFAULT(toUnitUserId_, 0L) };
    inline AllocateCostUnitResourceResponseBodyData& setToUnitUserId(int64_t toUnitUserId) { DARABONBA_PTR_SET_VALUE(toUnitUserId_, toUnitUserId) };


  protected:
    // Indicates whether resources are allocated to the specified cost center. Valid values:
    // 
    // *   true: The resources are allocated to the specified cost center.
    // *   false: The resources fail to be allocated to the specified cost center.
    std::shared_ptr<bool> isSuccess_ = nullptr;
    // The ID of the destination cost center.
    std::shared_ptr<int64_t> toUnitId_ = nullptr;
    // The user ID of the owner of the destination cost center.
    std::shared_ptr<int64_t> toUnitUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
