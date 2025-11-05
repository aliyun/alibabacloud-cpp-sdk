// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNASSOCIATEDCUSTOMERRESPONSEBODYINVITEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETUNASSOCIATEDCUSTOMERRESPONSEBODYINVITEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetUnassociatedCustomerResponseBodyInviteInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnassociatedCustomerResponseBodyInviteInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(InviteInfo, inviteInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnassociatedCustomerResponseBodyInviteInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(InviteInfo, inviteInfo_);
    };
    GetUnassociatedCustomerResponseBodyInviteInfoList() = default ;
    GetUnassociatedCustomerResponseBodyInviteInfoList(const GetUnassociatedCustomerResponseBodyInviteInfoList &) = default ;
    GetUnassociatedCustomerResponseBodyInviteInfoList(GetUnassociatedCustomerResponseBodyInviteInfoList &&) = default ;
    GetUnassociatedCustomerResponseBodyInviteInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnassociatedCustomerResponseBodyInviteInfoList() = default ;
    GetUnassociatedCustomerResponseBodyInviteInfoList& operator=(const GetUnassociatedCustomerResponseBodyInviteInfoList &) = default ;
    GetUnassociatedCustomerResponseBodyInviteInfoList& operator=(GetUnassociatedCustomerResponseBodyInviteInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inviteInfo_ == nullptr; };
    // inviteInfo Field Functions 
    bool hasInviteInfo() const { return this->inviteInfo_ != nullptr;};
    void deleteInviteInfo() { this->inviteInfo_ = nullptr;};
    inline const vector<Models::GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo> & inviteInfo() const { DARABONBA_PTR_GET_CONST(inviteInfo_, vector<Models::GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo>) };
    inline vector<Models::GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo> inviteInfo() { DARABONBA_PTR_GET(inviteInfo_, vector<Models::GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo>) };
    inline GetUnassociatedCustomerResponseBodyInviteInfoList& setInviteInfo(const vector<Models::GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo> & inviteInfo) { DARABONBA_PTR_SET_VALUE(inviteInfo_, inviteInfo) };
    inline GetUnassociatedCustomerResponseBodyInviteInfoList& setInviteInfo(vector<Models::GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo> && inviteInfo) { DARABONBA_PTR_SET_RVALUE(inviteInfo_, inviteInfo) };


  protected:
    std::shared_ptr<vector<Models::GetUnassociatedCustomerResponseBodyInviteInfoListInviteInfo>> inviteInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
