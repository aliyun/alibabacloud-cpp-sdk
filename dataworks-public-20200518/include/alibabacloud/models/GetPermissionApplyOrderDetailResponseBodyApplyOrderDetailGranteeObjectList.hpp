// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAILGRANTEEOBJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONAPPLYORDERDETAILRESPONSEBODYAPPLYORDERDETAILGRANTEEOBJECTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList& obj) { 
      DARABONBA_PTR_TO_JSON(GranteeId, granteeId_);
      DARABONBA_PTR_TO_JSON(GranteeName, granteeName_);
      DARABONBA_PTR_TO_JSON(GranteeType, granteeType_);
      DARABONBA_PTR_TO_JSON(GranteeTypeSub, granteeTypeSub_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(GranteeId, granteeId_);
      DARABONBA_PTR_FROM_JSON(GranteeName, granteeName_);
      DARABONBA_PTR_FROM_JSON(GranteeType, granteeType_);
      DARABONBA_PTR_FROM_JSON(GranteeTypeSub, granteeTypeSub_);
    };
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList &&) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList() = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList& operator=(const GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList &) = default ;
    GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList& operator=(GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->granteeId_ != nullptr
        && this->granteeName_ != nullptr && this->granteeType_ != nullptr && this->granteeTypeSub_ != nullptr; };
    // granteeId Field Functions 
    bool hasGranteeId() const { return this->granteeId_ != nullptr;};
    void deleteGranteeId() { this->granteeId_ = nullptr;};
    inline string granteeId() const { DARABONBA_PTR_GET_DEFAULT(granteeId_, "") };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList& setGranteeId(string granteeId) { DARABONBA_PTR_SET_VALUE(granteeId_, granteeId) };


    // granteeName Field Functions 
    bool hasGranteeName() const { return this->granteeName_ != nullptr;};
    void deleteGranteeName() { this->granteeName_ = nullptr;};
    inline string granteeName() const { DARABONBA_PTR_GET_DEFAULT(granteeName_, "") };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList& setGranteeName(string granteeName) { DARABONBA_PTR_SET_VALUE(granteeName_, granteeName) };


    // granteeType Field Functions 
    bool hasGranteeType() const { return this->granteeType_ != nullptr;};
    void deleteGranteeType() { this->granteeType_ = nullptr;};
    inline int32_t granteeType() const { DARABONBA_PTR_GET_DEFAULT(granteeType_, 0) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList& setGranteeType(int32_t granteeType) { DARABONBA_PTR_SET_VALUE(granteeType_, granteeType) };


    // granteeTypeSub Field Functions 
    bool hasGranteeTypeSub() const { return this->granteeTypeSub_ != nullptr;};
    void deleteGranteeTypeSub() { this->granteeTypeSub_ = nullptr;};
    inline int32_t granteeTypeSub() const { DARABONBA_PTR_GET_DEFAULT(granteeTypeSub_, 0) };
    inline GetPermissionApplyOrderDetailResponseBodyApplyOrderDetailGranteeObjectList& setGranteeTypeSub(int32_t granteeTypeSub) { DARABONBA_PTR_SET_VALUE(granteeTypeSub_, granteeTypeSub) };


  protected:
    // The ID of the account that is used to request permissions.
    std::shared_ptr<string> granteeId_ = nullptr;
    // The name of the account that is used to request permissions. The name is in the same format as that of the account used to access the MaxCompute project.
    // 
    // *   If the account is an Alibaba Cloud account, the value is in the ALIYUN$+Account name format.
    // *   If the account is a RAM user, the value is in the RAM$+Account name format.
    std::shared_ptr<string> granteeName_ = nullptr;
    // The type of the subject that requests permissions. The value is fixed as 1, which indicates users.
    std::shared_ptr<int32_t> granteeType_ = nullptr;
    // The subtype of the subject that requests permissions. Valid values:
    // 
    // *   101: production account
    // *   103: individual account
    // *   105: account that requests permissions for others
    std::shared_ptr<int32_t> granteeTypeSub_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
