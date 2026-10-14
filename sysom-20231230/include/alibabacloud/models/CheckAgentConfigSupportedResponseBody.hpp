// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAGENTCONFIGSUPPORTEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKAGENTCONFIGSUPPORTEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class CheckAgentConfigSupportedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAgentConfigSupportedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAgentConfigSupportedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    CheckAgentConfigSupportedResponseBody() = default ;
    CheckAgentConfigSupportedResponseBody(const CheckAgentConfigSupportedResponseBody &) = default ;
    CheckAgentConfigSupportedResponseBody(CheckAgentConfigSupportedResponseBody &&) = default ;
    CheckAgentConfigSupportedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAgentConfigSupportedResponseBody() = default ;
    CheckAgentConfigSupportedResponseBody& operator=(const CheckAgentConfigSupportedResponseBody &) = default ;
    CheckAgentConfigSupportedResponseBody& operator=(CheckAgentConfigSupportedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(cluster, cluster_);
        DARABONBA_PTR_TO_JSON(instance, instance_);
        DARABONBA_PTR_TO_JSON(reason, reason_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(cluster, cluster_);
        DARABONBA_PTR_FROM_JSON(instance, instance_);
        DARABONBA_PTR_FROM_JSON(reason, reason_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cluster_ == nullptr
        && this->instance_ == nullptr && this->reason_ == nullptr; };
      // cluster Field Functions 
      bool hasCluster() const { return this->cluster_ != nullptr;};
      void deleteCluster() { this->cluster_ = nullptr;};
      inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
      inline Data& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
      inline Data& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    protected:
      // The cluster ID.
      shared_ptr<string> cluster_ {};
      // The ECS instance ID.
      shared_ptr<string> instance_ {};
      // The reason why the instance is not supported for management. This field is not empty when success is false.
      shared_ptr<string> reason_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckAgentConfigSupportedResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CheckAgentConfigSupportedResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<CheckAgentConfigSupportedResponseBody::Data>) };
    inline vector<CheckAgentConfigSupportedResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<CheckAgentConfigSupportedResponseBody::Data>) };
    inline CheckAgentConfigSupportedResponseBody& setData(const vector<CheckAgentConfigSupportedResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CheckAgentConfigSupportedResponseBody& setData(vector<CheckAgentConfigSupportedResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckAgentConfigSupportedResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckAgentConfigSupportedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline CheckAgentConfigSupportedResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    // - If `code` is `Success`, the authorization is successful.
    // - Other status codes indicate that the authorization failed. If the authorization failed, check the `message` field for the detailed fault information.
    shared_ptr<string> code_ {};
    // The returned result.
    shared_ptr<vector<CheckAgentConfigSupportedResponseBody::Data>> data_ {};
    // The error message.
    // - If code is Success, this field is empty.
    // - Otherwise, this field contains the error information of the request.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of returned results.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
