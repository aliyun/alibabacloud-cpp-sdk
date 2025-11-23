// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSEBODYOWNERAPPLYORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSEBODYOWNERAPPLYORDERDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyType, applyType_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyType, applyType_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
    };
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail() = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail(const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail &) = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail(GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail &&) = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail() = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail& operator=(const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail &) = default ;
    GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail& operator=(GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyType_ == nullptr
        && return this->resources_ == nullptr; };
    // applyType Field Functions 
    bool hasApplyType() const { return this->applyType_ != nullptr;};
    void deleteApplyType() { this->applyType_ = nullptr;};
    inline string applyType() const { DARABONBA_PTR_GET_DEFAULT(applyType_, "") };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail& setApplyType(string applyType) { DARABONBA_PTR_SET_VALUE(applyType_, applyType) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources>) };
    inline vector<Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources> resources() { DARABONBA_PTR_GET(resources_, vector<Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources>) };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail& setResources(const vector<Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail& setResources(vector<Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


  protected:
    // The type of the submitted ticket. Valid values:
    // 
    // *   **INSTANCE**: the ticket that applies for the permissions to be an instance owner
    // *   **DB**: the ticket that applies for the permissions to be a database owner
    // *   **TABLE**: the ticket that applies for the permissions to be a table owner
    std::shared_ptr<string> applyType_ = nullptr;
    // The details of the requested resource.
    std::shared_ptr<vector<Models::GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources>> resources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
