// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLIENTUSERDEFINERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCLIENTUSERDEFINERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddClientUserDefineRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddClientUserDefineRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDefineRuleAddResult, userDefineRuleAddResult_);
    };
    friend void from_json(const Darabonba::Json& j, AddClientUserDefineRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDefineRuleAddResult, userDefineRuleAddResult_);
    };
    AddClientUserDefineRuleResponseBody() = default ;
    AddClientUserDefineRuleResponseBody(const AddClientUserDefineRuleResponseBody &) = default ;
    AddClientUserDefineRuleResponseBody(AddClientUserDefineRuleResponseBody &&) = default ;
    AddClientUserDefineRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddClientUserDefineRuleResponseBody() = default ;
    AddClientUserDefineRuleResponseBody& operator=(const AddClientUserDefineRuleResponseBody &) = default ;
    AddClientUserDefineRuleResponseBody& operator=(AddClientUserDefineRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserDefineRuleAddResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserDefineRuleAddResult& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      };
      friend void from_json(const Darabonba::Json& j, UserDefineRuleAddResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      };
      UserDefineRuleAddResult() = default ;
      UserDefineRuleAddResult(const UserDefineRuleAddResult &) = default ;
      UserDefineRuleAddResult(UserDefineRuleAddResult &&) = default ;
      UserDefineRuleAddResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserDefineRuleAddResult() = default ;
      UserDefineRuleAddResult& operator=(const UserDefineRuleAddResult &) = default ;
      UserDefineRuleAddResult& operator=(UserDefineRuleAddResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->platform_ == nullptr && this->switchId_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UserDefineRuleAddResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline UserDefineRuleAddResult& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline UserDefineRuleAddResult& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    protected:
      // The ID of the rule.
      shared_ptr<int64_t> id_ {};
      // The type of the operating system. Valid values:
      // 
      // *   **windows**: Windows
      // *   **linux**: Linux
      // *   **all**: all types
      shared_ptr<string> platform_ {};
      // The switch ID of the custom defense rule.
      shared_ptr<string> switchId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userDefineRuleAddResult_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddClientUserDefineRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDefineRuleAddResult Field Functions 
    bool hasUserDefineRuleAddResult() const { return this->userDefineRuleAddResult_ != nullptr;};
    void deleteUserDefineRuleAddResult() { this->userDefineRuleAddResult_ = nullptr;};
    inline const AddClientUserDefineRuleResponseBody::UserDefineRuleAddResult & getUserDefineRuleAddResult() const { DARABONBA_PTR_GET_CONST(userDefineRuleAddResult_, AddClientUserDefineRuleResponseBody::UserDefineRuleAddResult) };
    inline AddClientUserDefineRuleResponseBody::UserDefineRuleAddResult getUserDefineRuleAddResult() { DARABONBA_PTR_GET(userDefineRuleAddResult_, AddClientUserDefineRuleResponseBody::UserDefineRuleAddResult) };
    inline AddClientUserDefineRuleResponseBody& setUserDefineRuleAddResult(const AddClientUserDefineRuleResponseBody::UserDefineRuleAddResult & userDefineRuleAddResult) { DARABONBA_PTR_SET_VALUE(userDefineRuleAddResult_, userDefineRuleAddResult) };
    inline AddClientUserDefineRuleResponseBody& setUserDefineRuleAddResult(AddClientUserDefineRuleResponseBody::UserDefineRuleAddResult && userDefineRuleAddResult) { DARABONBA_PTR_SET_RVALUE(userDefineRuleAddResult_, userDefineRuleAddResult) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The identifier of the custom defense rule.
    shared_ptr<AddClientUserDefineRuleResponseBody::UserDefineRuleAddResult> userDefineRuleAddResult_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
