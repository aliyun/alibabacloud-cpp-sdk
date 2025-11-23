// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSEBODYOWNERAPPLYORDERDETAILRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSEBODYOWNERAPPLYORDERDETAILRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources& obj) { 
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(ResourceDetail, resourceDetail_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(ResourceDetail, resourceDetail_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources() = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources(const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources &) = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources(GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources &&) = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources() = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources& operator=(const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources &) = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources& operator=(GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logic_ == nullptr
        && return this->resourceDetail_ == nullptr && return this->targetId_ == nullptr; };
    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // resourceDetail Field Functions 
    bool hasResourceDetail() const { return this->resourceDetail_ != nullptr;};
    void deleteResourceDetail() { this->resourceDetail_ = nullptr;};
    inline const Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail & resourceDetail() const { DARABONBA_PTR_GET_CONST(resourceDetail_, Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail) };
    inline Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail resourceDetail() { DARABONBA_PTR_GET(resourceDetail_, Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail) };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources& setResourceDetail(const Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail & resourceDetail) { DARABONBA_PTR_SET_VALUE(resourceDetail_, resourceDetail) };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources& setResourceDetail(Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail && resourceDetail) { DARABONBA_PTR_SET_RVALUE(resourceDetail_, resourceDetail) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true**: The instance is a logical database.
    // *   **false**: The instance is not a logical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The details of the resource.
    std::shared_ptr<Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail> resourceDetail_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> targetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
