// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXTERNALAGENTBOOTSTRAPOPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXTERNALAGENTBOOTSTRAPOPTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetExternalAgentBootstrapOptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExternalAgentBootstrapOptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetExternalAgentBootstrapOptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetExternalAgentBootstrapOptionsResponseBody() = default ;
    GetExternalAgentBootstrapOptionsResponseBody(const GetExternalAgentBootstrapOptionsResponseBody &) = default ;
    GetExternalAgentBootstrapOptionsResponseBody(GetExternalAgentBootstrapOptionsResponseBody &&) = default ;
    GetExternalAgentBootstrapOptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExternalAgentBootstrapOptionsResponseBody() = default ;
    GetExternalAgentBootstrapOptionsResponseBody& operator=(const GetExternalAgentBootstrapOptionsResponseBody &) = default ;
    GetExternalAgentBootstrapOptionsResponseBody& operator=(GetExternalAgentBootstrapOptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(agentId, agentId_);
        DARABONBA_PTR_TO_JSON(networkOptions, networkOptions_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(agentId, agentId_);
        DARABONBA_PTR_FROM_JSON(networkOptions, networkOptions_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
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
      class NetworkOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkOptions& obj) { 
          DARABONBA_PTR_TO_JSON(available, available_);
          DARABONBA_PTR_TO_JSON(networkType, networkType_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(available, available_);
          DARABONBA_PTR_FROM_JSON(networkType, networkType_);
        };
        NetworkOptions() = default ;
        NetworkOptions(const NetworkOptions &) = default ;
        NetworkOptions(NetworkOptions &&) = default ;
        NetworkOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkOptions() = default ;
        NetworkOptions& operator=(const NetworkOptions &) = default ;
        NetworkOptions& operator=(NetworkOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->available_ == nullptr
        && this->networkType_ == nullptr; };
        // available Field Functions 
        bool hasAvailable() const { return this->available_ != nullptr;};
        void deleteAvailable() { this->available_ = nullptr;};
        inline bool getAvailable() const { DARABONBA_PTR_GET_DEFAULT(available_, false) };
        inline NetworkOptions& setAvailable(bool available) { DARABONBA_PTR_SET_VALUE(available_, available) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline NetworkOptions& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


      protected:
        // Indicates whether the network access type is available.
        shared_ptr<bool> available_ {};
        // The network type. Valid values:
        // - INTRANET: internal network.
        // - INTERNET: public network.
        shared_ptr<string> networkType_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->networkOptions_ == nullptr && this->workspaceId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // networkOptions Field Functions 
      bool hasNetworkOptions() const { return this->networkOptions_ != nullptr;};
      void deleteNetworkOptions() { this->networkOptions_ = nullptr;};
      inline const vector<Data::NetworkOptions> & getNetworkOptions() const { DARABONBA_PTR_GET_CONST(networkOptions_, vector<Data::NetworkOptions>) };
      inline vector<Data::NetworkOptions> getNetworkOptions() { DARABONBA_PTR_GET(networkOptions_, vector<Data::NetworkOptions>) };
      inline Data& setNetworkOptions(const vector<Data::NetworkOptions> & networkOptions) { DARABONBA_PTR_SET_VALUE(networkOptions_, networkOptions) };
      inline Data& setNetworkOptions(vector<Data::NetworkOptions> && networkOptions) { DARABONBA_PTR_SET_RVALUE(networkOptions_, networkOptions) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The external agent ID.
      shared_ptr<string> agentId_ {};
      // The list of available network access options.
      shared_ptr<vector<Data::NetworkOptions>> networkOptions_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetExternalAgentBootstrapOptionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetExternalAgentBootstrapOptionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetExternalAgentBootstrapOptionsResponseBody::Data) };
    inline GetExternalAgentBootstrapOptionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetExternalAgentBootstrapOptionsResponseBody::Data) };
    inline GetExternalAgentBootstrapOptionsResponseBody& setData(const GetExternalAgentBootstrapOptionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetExternalAgentBootstrapOptionsResponseBody& setData(GetExternalAgentBootstrapOptionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetExternalAgentBootstrapOptionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetExternalAgentBootstrapOptionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExternalAgentBootstrapOptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetExternalAgentBootstrapOptionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business status code. The value SUCCESS indicates success.
    shared_ptr<string> code_ {};
    // The available network access information for the external agent.
    shared_ptr<GetExternalAgentBootstrapOptionsResponseBody::Data> data_ {};
    // The HTTP status code. The value 200 indicates success.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The result message of the request.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
