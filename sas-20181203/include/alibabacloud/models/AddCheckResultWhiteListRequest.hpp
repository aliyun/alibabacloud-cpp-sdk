// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCHECKRESULTWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCHECKRESULTWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddCheckResultWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCheckResultWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, AddCheckResultWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    AddCheckResultWhiteListRequest() = default ;
    AddCheckResultWhiteListRequest(const AddCheckResultWhiteListRequest &) = default ;
    AddCheckResultWhiteListRequest(AddCheckResultWhiteListRequest &&) = default ;
    AddCheckResultWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCheckResultWhiteListRequest() = default ;
    AddCheckResultWhiteListRequest& operator=(const AddCheckResultWhiteListRequest &) = default ;
    AddCheckResultWhiteListRequest& operator=(AddCheckResultWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkIds_ == nullptr
        && this->clientToken_ == nullptr && this->instanceIds_ == nullptr && this->remark_ == nullptr && this->ruleType_ == nullptr; };
    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<int64_t> & getCheckIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<int64_t>) };
    inline vector<int64_t> getCheckIds() { DARABONBA_PTR_GET(checkIds_, vector<int64_t>) };
    inline AddCheckResultWhiteListRequest& setCheckIds(const vector<int64_t> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline AddCheckResultWhiteListRequest& setCheckIds(vector<int64_t> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline AddCheckResultWhiteListRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline AddCheckResultWhiteListRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline AddCheckResultWhiteListRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddCheckResultWhiteListRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline AddCheckResultWhiteListRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The IDs of the check items.
    // > Call the [ListCheckResult](~~ListCheckResult~~) operation to obtain this parameter.
    shared_ptr<vector<int64_t>> checkIds_ {};
    // The client token that is used to ensure the idempotence of the request. Different requests should use different tokens. The token supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The instance IDs of the cloud service instances to add to the whitelist. Separate multiple instance IDs with commas (,).
    shared_ptr<vector<string>> instanceIds_ {};
    // The remarks. Maximum length: 65,535 bytes.
    shared_ptr<string> remark_ {};
    // The rule type. Default value: **WHITE**. Valid values:
    // - **WHITE**: adds to the whitelist.
    shared_ptr<string> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
