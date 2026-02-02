// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYQOSENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYQOSENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyQosEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyQosEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthAndroidId, authAndroidId_);
      DARABONBA_PTR_TO_JSON(AuthDesktopId, authDesktopId_);
      DARABONBA_PTR_TO_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_TO_JSON(RevokeAndroidId, revokeAndroidId_);
      DARABONBA_PTR_TO_JSON(RevokeDesktopId, revokeDesktopId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyQosEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthAndroidId, authAndroidId_);
      DARABONBA_PTR_FROM_JSON(AuthDesktopId, authDesktopId_);
      DARABONBA_PTR_FROM_JSON(QosRuleId, qosRuleId_);
      DARABONBA_PTR_FROM_JSON(RevokeAndroidId, revokeAndroidId_);
      DARABONBA_PTR_FROM_JSON(RevokeDesktopId, revokeDesktopId_);
    };
    ModifyQosEntriesRequest() = default ;
    ModifyQosEntriesRequest(const ModifyQosEntriesRequest &) = default ;
    ModifyQosEntriesRequest(ModifyQosEntriesRequest &&) = default ;
    ModifyQosEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyQosEntriesRequest() = default ;
    ModifyQosEntriesRequest& operator=(const ModifyQosEntriesRequest &) = default ;
    ModifyQosEntriesRequest& operator=(ModifyQosEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authAndroidId_ == nullptr
        && this->authDesktopId_ == nullptr && this->qosRuleId_ == nullptr && this->revokeAndroidId_ == nullptr && this->revokeDesktopId_ == nullptr; };
    // authAndroidId Field Functions 
    bool hasAuthAndroidId() const { return this->authAndroidId_ != nullptr;};
    void deleteAuthAndroidId() { this->authAndroidId_ = nullptr;};
    inline const vector<string> & getAuthAndroidId() const { DARABONBA_PTR_GET_CONST(authAndroidId_, vector<string>) };
    inline vector<string> getAuthAndroidId() { DARABONBA_PTR_GET(authAndroidId_, vector<string>) };
    inline ModifyQosEntriesRequest& setAuthAndroidId(const vector<string> & authAndroidId) { DARABONBA_PTR_SET_VALUE(authAndroidId_, authAndroidId) };
    inline ModifyQosEntriesRequest& setAuthAndroidId(vector<string> && authAndroidId) { DARABONBA_PTR_SET_RVALUE(authAndroidId_, authAndroidId) };


    // authDesktopId Field Functions 
    bool hasAuthDesktopId() const { return this->authDesktopId_ != nullptr;};
    void deleteAuthDesktopId() { this->authDesktopId_ = nullptr;};
    inline const vector<string> & getAuthDesktopId() const { DARABONBA_PTR_GET_CONST(authDesktopId_, vector<string>) };
    inline vector<string> getAuthDesktopId() { DARABONBA_PTR_GET(authDesktopId_, vector<string>) };
    inline ModifyQosEntriesRequest& setAuthDesktopId(const vector<string> & authDesktopId) { DARABONBA_PTR_SET_VALUE(authDesktopId_, authDesktopId) };
    inline ModifyQosEntriesRequest& setAuthDesktopId(vector<string> && authDesktopId) { DARABONBA_PTR_SET_RVALUE(authDesktopId_, authDesktopId) };


    // qosRuleId Field Functions 
    bool hasQosRuleId() const { return this->qosRuleId_ != nullptr;};
    void deleteQosRuleId() { this->qosRuleId_ = nullptr;};
    inline string getQosRuleId() const { DARABONBA_PTR_GET_DEFAULT(qosRuleId_, "") };
    inline ModifyQosEntriesRequest& setQosRuleId(string qosRuleId) { DARABONBA_PTR_SET_VALUE(qosRuleId_, qosRuleId) };


    // revokeAndroidId Field Functions 
    bool hasRevokeAndroidId() const { return this->revokeAndroidId_ != nullptr;};
    void deleteRevokeAndroidId() { this->revokeAndroidId_ = nullptr;};
    inline const vector<string> & getRevokeAndroidId() const { DARABONBA_PTR_GET_CONST(revokeAndroidId_, vector<string>) };
    inline vector<string> getRevokeAndroidId() { DARABONBA_PTR_GET(revokeAndroidId_, vector<string>) };
    inline ModifyQosEntriesRequest& setRevokeAndroidId(const vector<string> & revokeAndroidId) { DARABONBA_PTR_SET_VALUE(revokeAndroidId_, revokeAndroidId) };
    inline ModifyQosEntriesRequest& setRevokeAndroidId(vector<string> && revokeAndroidId) { DARABONBA_PTR_SET_RVALUE(revokeAndroidId_, revokeAndroidId) };


    // revokeDesktopId Field Functions 
    bool hasRevokeDesktopId() const { return this->revokeDesktopId_ != nullptr;};
    void deleteRevokeDesktopId() { this->revokeDesktopId_ = nullptr;};
    inline const vector<string> & getRevokeDesktopId() const { DARABONBA_PTR_GET_CONST(revokeDesktopId_, vector<string>) };
    inline vector<string> getRevokeDesktopId() { DARABONBA_PTR_GET(revokeDesktopId_, vector<string>) };
    inline ModifyQosEntriesRequest& setRevokeDesktopId(const vector<string> & revokeDesktopId) { DARABONBA_PTR_SET_VALUE(revokeDesktopId_, revokeDesktopId) };
    inline ModifyQosEntriesRequest& setRevokeDesktopId(vector<string> && revokeDesktopId) { DARABONBA_PTR_SET_RVALUE(revokeDesktopId_, revokeDesktopId) };


  protected:
    shared_ptr<vector<string>> authAndroidId_ {};
    shared_ptr<vector<string>> authDesktopId_ {};
    // This parameter is required.
    shared_ptr<string> qosRuleId_ {};
    shared_ptr<vector<string>> revokeAndroidId_ {};
    shared_ptr<vector<string>> revokeDesktopId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
