// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAILAPPROVEACCOUNTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAILAPPROVEACCOUNTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
    };
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList &&) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList& operator=(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList& operator=(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseId_ != nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailApproveAccountList& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


  protected:
    // The ID of the Alibaba Cloud account that is used to process the permission request order.
    std::shared_ptr<string> baseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
