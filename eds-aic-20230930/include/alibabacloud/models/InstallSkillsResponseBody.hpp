// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLSKILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INSTALLSKILLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class InstallSkillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallSkillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstallResults, installResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InstallSkillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstallResults, installResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    InstallSkillsResponseBody() = default ;
    InstallSkillsResponseBody(const InstallSkillsResponseBody &) = default ;
    InstallSkillsResponseBody(InstallSkillsResponseBody &&) = default ;
    InstallSkillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallSkillsResponseBody() = default ;
    InstallSkillsResponseBody& operator=(const InstallSkillsResponseBody &) = default ;
    InstallSkillsResponseBody& operator=(InstallSkillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstallResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstallResults& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, InstallResults& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      InstallResults() = default ;
      InstallResults(const InstallResults &) = default ;
      InstallResults(InstallResults &&) = default ;
      InstallResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstallResults() = default ;
      InstallResults& operator=(const InstallResults &) = default ;
      InstallResults& operator=(InstallResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->status_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstallResults& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstallResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The cloud phone instance ID.
      shared_ptr<string> instanceId_ {};
      // The installation status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->installResults_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InstallSkillsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // installResults Field Functions 
    bool hasInstallResults() const { return this->installResults_ != nullptr;};
    void deleteInstallResults() { this->installResults_ = nullptr;};
    inline const vector<InstallSkillsResponseBody::InstallResults> & getInstallResults() const { DARABONBA_PTR_GET_CONST(installResults_, vector<InstallSkillsResponseBody::InstallResults>) };
    inline vector<InstallSkillsResponseBody::InstallResults> getInstallResults() { DARABONBA_PTR_GET(installResults_, vector<InstallSkillsResponseBody::InstallResults>) };
    inline InstallSkillsResponseBody& setInstallResults(const vector<InstallSkillsResponseBody::InstallResults> & installResults) { DARABONBA_PTR_SET_VALUE(installResults_, installResults) };
    inline InstallSkillsResponseBody& setInstallResults(vector<InstallSkillsResponseBody::InstallResults> && installResults) { DARABONBA_PTR_SET_RVALUE(installResults_, installResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InstallSkillsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstallSkillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The installation results.
    shared_ptr<vector<InstallSkillsResponseBody::InstallResults>> installResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
