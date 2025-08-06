// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILDINGTALKPROVISIONINGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERRESPONSEBODYIDENTITYPROVIDERDETAILDINGTALKPROVISIONINGCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedDepartmentIds.hpp>
#include <alibabacloud/models/GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AuthedDepartmentIds, authedDepartmentIds_);
      DARABONBA_PTR_TO_JSON(AuthedUsers, authedUsers_);
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(CorpName, corpName_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthedDepartmentIds, authedDepartmentIds_);
      DARABONBA_PTR_FROM_JSON(AuthedUsers, authedUsers_);
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(CorpName, corpName_);
    };
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig(const GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig(GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig &&) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig() = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig& operator=(const GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig &) = default ;
    GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig& operator=(GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authedDepartmentIds_ != nullptr
        && this->authedUsers_ != nullptr && this->corpId_ != nullptr && this->corpName_ != nullptr; };
    // authedDepartmentIds Field Functions 
    bool hasAuthedDepartmentIds() const { return this->authedDepartmentIds_ != nullptr;};
    void deleteAuthedDepartmentIds() { this->authedDepartmentIds_ = nullptr;};
    inline const vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedDepartmentIds> & authedDepartmentIds() const { DARABONBA_PTR_GET_CONST(authedDepartmentIds_, vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedDepartmentIds>) };
    inline vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedDepartmentIds> authedDepartmentIds() { DARABONBA_PTR_GET(authedDepartmentIds_, vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedDepartmentIds>) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig& setAuthedDepartmentIds(const vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedDepartmentIds> & authedDepartmentIds) { DARABONBA_PTR_SET_VALUE(authedDepartmentIds_, authedDepartmentIds) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig& setAuthedDepartmentIds(vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedDepartmentIds> && authedDepartmentIds) { DARABONBA_PTR_SET_RVALUE(authedDepartmentIds_, authedDepartmentIds) };


    // authedUsers Field Functions 
    bool hasAuthedUsers() const { return this->authedUsers_ != nullptr;};
    void deleteAuthedUsers() { this->authedUsers_ = nullptr;};
    inline const vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedUsers> & authedUsers() const { DARABONBA_PTR_GET_CONST(authedUsers_, vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedUsers>) };
    inline vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedUsers> authedUsers() { DARABONBA_PTR_GET(authedUsers_, vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedUsers>) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig& setAuthedUsers(const vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedUsers> & authedUsers) { DARABONBA_PTR_SET_VALUE(authedUsers_, authedUsers) };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig& setAuthedUsers(vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedUsers> && authedUsers) { DARABONBA_PTR_SET_RVALUE(authedUsers_, authedUsers) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfig& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


  protected:
    // List of authorized DingTalk departments.
    std::shared_ptr<vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedDepartmentIds>> authedDepartmentIds_ = nullptr;
    // Authorized DingTalk account list.
    std::shared_ptr<vector<Models::GetIdentityProviderResponseBodyIdentityProviderDetailDingtalkProvisioningConfigAuthedUsers>> authedUsers_ = nullptr;
    // DingTalk enterprise corpId.
    std::shared_ptr<string> corpId_ = nullptr;
    // The name of the company.
    std::shared_ptr<string> corpName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
