// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKERBOOTSTRAPOPTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKERBOOTSTRAPOPTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class GetWorkerBootstrapOptionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkerBootstrapOptionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkerBootstrapOptionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWorkerBootstrapOptionsResponseBody() = default ;
    GetWorkerBootstrapOptionsResponseBody(const GetWorkerBootstrapOptionsResponseBody &) = default ;
    GetWorkerBootstrapOptionsResponseBody(GetWorkerBootstrapOptionsResponseBody &&) = default ;
    GetWorkerBootstrapOptionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkerBootstrapOptionsResponseBody() = default ;
    GetWorkerBootstrapOptionsResponseBody& operator=(const GetWorkerBootstrapOptionsResponseBody &) = default ;
    GetWorkerBootstrapOptionsResponseBody& operator=(GetWorkerBootstrapOptionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NetworkOptions, networkOptions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NetworkOptions, networkOptions_);
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
          DARABONBA_PTR_TO_JSON(Available, available_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(Available, available_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
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
        shared_ptr<bool> available_ {};
        shared_ptr<string> networkType_ {};
      };

      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->name_ == nullptr && this->networkOptions_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // networkOptions Field Functions 
      bool hasNetworkOptions() const { return this->networkOptions_ != nullptr;};
      void deleteNetworkOptions() { this->networkOptions_ = nullptr;};
      inline const vector<Data::NetworkOptions> & getNetworkOptions() const { DARABONBA_PTR_GET_CONST(networkOptions_, vector<Data::NetworkOptions>) };
      inline vector<Data::NetworkOptions> getNetworkOptions() { DARABONBA_PTR_GET(networkOptions_, vector<Data::NetworkOptions>) };
      inline Data& setNetworkOptions(const vector<Data::NetworkOptions> & networkOptions) { DARABONBA_PTR_SET_VALUE(networkOptions_, networkOptions) };
      inline Data& setNetworkOptions(vector<Data::NetworkOptions> && networkOptions) { DARABONBA_PTR_SET_RVALUE(networkOptions_, networkOptions) };


    protected:
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Data::NetworkOptions>> networkOptions_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWorkerBootstrapOptionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWorkerBootstrapOptionsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWorkerBootstrapOptionsResponseBody::Data) };
    inline GetWorkerBootstrapOptionsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWorkerBootstrapOptionsResponseBody::Data) };
    inline GetWorkerBootstrapOptionsResponseBody& setData(const GetWorkerBootstrapOptionsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorkerBootstrapOptionsResponseBody& setData(GetWorkerBootstrapOptionsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetWorkerBootstrapOptionsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkerBootstrapOptionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkerBootstrapOptionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkerBootstrapOptionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetWorkerBootstrapOptionsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
