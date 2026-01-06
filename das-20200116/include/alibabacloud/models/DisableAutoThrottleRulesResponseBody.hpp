// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAUTOTHROTTLERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAUTOTHROTTLERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DisableAutoThrottleRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableAutoThrottleRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DisableAutoThrottleRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DisableAutoThrottleRulesResponseBody() = default ;
    DisableAutoThrottleRulesResponseBody(const DisableAutoThrottleRulesResponseBody &) = default ;
    DisableAutoThrottleRulesResponseBody(DisableAutoThrottleRulesResponseBody &&) = default ;
    DisableAutoThrottleRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableAutoThrottleRulesResponseBody() = default ;
    DisableAutoThrottleRulesResponseBody& operator=(const DisableAutoThrottleRulesResponseBody &) = default ;
    DisableAutoThrottleRulesResponseBody& operator=(DisableAutoThrottleRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigFailInstanceCount, configFailInstanceCount_);
        DARABONBA_PTR_TO_JSON(ConfigFailInstanceList, configFailInstanceList_);
        DARABONBA_PTR_TO_JSON(ConfigSuccessInstanceCount, configSuccessInstanceCount_);
        DARABONBA_PTR_TO_JSON(ConfigSuccessInstanceList, configSuccessInstanceList_);
        DARABONBA_PTR_TO_JSON(TotalInstanceCount, totalInstanceCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigFailInstanceCount, configFailInstanceCount_);
        DARABONBA_PTR_FROM_JSON(ConfigFailInstanceList, configFailInstanceList_);
        DARABONBA_PTR_FROM_JSON(ConfigSuccessInstanceCount, configSuccessInstanceCount_);
        DARABONBA_PTR_FROM_JSON(ConfigSuccessInstanceList, configSuccessInstanceList_);
        DARABONBA_PTR_FROM_JSON(TotalInstanceCount, totalInstanceCount_);
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
      class ConfigSuccessInstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigSuccessInstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigSuccess, configSuccess_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigSuccessInstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigSuccess, configSuccess_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        ConfigSuccessInstanceList() = default ;
        ConfigSuccessInstanceList(const ConfigSuccessInstanceList &) = default ;
        ConfigSuccessInstanceList(ConfigSuccessInstanceList &&) = default ;
        ConfigSuccessInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigSuccessInstanceList() = default ;
        ConfigSuccessInstanceList& operator=(const ConfigSuccessInstanceList &) = default ;
        ConfigSuccessInstanceList& operator=(ConfigSuccessInstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configSuccess_ == nullptr
        && this->instanceId_ == nullptr; };
        // configSuccess Field Functions 
        bool hasConfigSuccess() const { return this->configSuccess_ != nullptr;};
        void deleteConfigSuccess() { this->configSuccess_ = nullptr;};
        inline bool getConfigSuccess() const { DARABONBA_PTR_GET_DEFAULT(configSuccess_, false) };
        inline ConfigSuccessInstanceList& setConfigSuccess(bool configSuccess) { DARABONBA_PTR_SET_VALUE(configSuccess_, configSuccess) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ConfigSuccessInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // Indicates whether the automatic SQL throttling feature is disabled. Valid values:
        // 
        // * **true**
        // 
        // * **false**
        shared_ptr<bool> configSuccess_ {};
        // The database instance ID.
        shared_ptr<string> instanceId_ {};
      };

      class ConfigFailInstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigFailInstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigSuccess, configSuccess_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigFailInstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigSuccess, configSuccess_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        ConfigFailInstanceList() = default ;
        ConfigFailInstanceList(const ConfigFailInstanceList &) = default ;
        ConfigFailInstanceList(ConfigFailInstanceList &&) = default ;
        ConfigFailInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigFailInstanceList() = default ;
        ConfigFailInstanceList& operator=(const ConfigFailInstanceList &) = default ;
        ConfigFailInstanceList& operator=(ConfigFailInstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configSuccess_ == nullptr
        && this->errorMessage_ == nullptr && this->instanceId_ == nullptr; };
        // configSuccess Field Functions 
        bool hasConfigSuccess() const { return this->configSuccess_ != nullptr;};
        void deleteConfigSuccess() { this->configSuccess_ = nullptr;};
        inline bool getConfigSuccess() const { DARABONBA_PTR_GET_DEFAULT(configSuccess_, false) };
        inline ConfigFailInstanceList& setConfigSuccess(bool configSuccess) { DARABONBA_PTR_SET_VALUE(configSuccess_, configSuccess) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ConfigFailInstanceList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline ConfigFailInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // Indicates whether the automatic SQL throttling feature is disabled. Valid values:
        // 
        // * **true**
        // 
        // * **false**
        shared_ptr<bool> configSuccess_ {};
        // The error message returned.
        shared_ptr<string> errorMessage_ {};
        // The database instance ID.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->configFailInstanceCount_ == nullptr
        && this->configFailInstanceList_ == nullptr && this->configSuccessInstanceCount_ == nullptr && this->configSuccessInstanceList_ == nullptr && this->totalInstanceCount_ == nullptr; };
      // configFailInstanceCount Field Functions 
      bool hasConfigFailInstanceCount() const { return this->configFailInstanceCount_ != nullptr;};
      void deleteConfigFailInstanceCount() { this->configFailInstanceCount_ = nullptr;};
      inline int64_t getConfigFailInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(configFailInstanceCount_, 0L) };
      inline Data& setConfigFailInstanceCount(int64_t configFailInstanceCount) { DARABONBA_PTR_SET_VALUE(configFailInstanceCount_, configFailInstanceCount) };


      // configFailInstanceList Field Functions 
      bool hasConfigFailInstanceList() const { return this->configFailInstanceList_ != nullptr;};
      void deleteConfigFailInstanceList() { this->configFailInstanceList_ = nullptr;};
      inline const vector<Data::ConfigFailInstanceList> & getConfigFailInstanceList() const { DARABONBA_PTR_GET_CONST(configFailInstanceList_, vector<Data::ConfigFailInstanceList>) };
      inline vector<Data::ConfigFailInstanceList> getConfigFailInstanceList() { DARABONBA_PTR_GET(configFailInstanceList_, vector<Data::ConfigFailInstanceList>) };
      inline Data& setConfigFailInstanceList(const vector<Data::ConfigFailInstanceList> & configFailInstanceList) { DARABONBA_PTR_SET_VALUE(configFailInstanceList_, configFailInstanceList) };
      inline Data& setConfigFailInstanceList(vector<Data::ConfigFailInstanceList> && configFailInstanceList) { DARABONBA_PTR_SET_RVALUE(configFailInstanceList_, configFailInstanceList) };


      // configSuccessInstanceCount Field Functions 
      bool hasConfigSuccessInstanceCount() const { return this->configSuccessInstanceCount_ != nullptr;};
      void deleteConfigSuccessInstanceCount() { this->configSuccessInstanceCount_ = nullptr;};
      inline int64_t getConfigSuccessInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(configSuccessInstanceCount_, 0L) };
      inline Data& setConfigSuccessInstanceCount(int64_t configSuccessInstanceCount) { DARABONBA_PTR_SET_VALUE(configSuccessInstanceCount_, configSuccessInstanceCount) };


      // configSuccessInstanceList Field Functions 
      bool hasConfigSuccessInstanceList() const { return this->configSuccessInstanceList_ != nullptr;};
      void deleteConfigSuccessInstanceList() { this->configSuccessInstanceList_ = nullptr;};
      inline const vector<Data::ConfigSuccessInstanceList> & getConfigSuccessInstanceList() const { DARABONBA_PTR_GET_CONST(configSuccessInstanceList_, vector<Data::ConfigSuccessInstanceList>) };
      inline vector<Data::ConfigSuccessInstanceList> getConfigSuccessInstanceList() { DARABONBA_PTR_GET(configSuccessInstanceList_, vector<Data::ConfigSuccessInstanceList>) };
      inline Data& setConfigSuccessInstanceList(const vector<Data::ConfigSuccessInstanceList> & configSuccessInstanceList) { DARABONBA_PTR_SET_VALUE(configSuccessInstanceList_, configSuccessInstanceList) };
      inline Data& setConfigSuccessInstanceList(vector<Data::ConfigSuccessInstanceList> && configSuccessInstanceList) { DARABONBA_PTR_SET_RVALUE(configSuccessInstanceList_, configSuccessInstanceList) };


      // totalInstanceCount Field Functions 
      bool hasTotalInstanceCount() const { return this->totalInstanceCount_ != nullptr;};
      void deleteTotalInstanceCount() { this->totalInstanceCount_ = nullptr;};
      inline int64_t getTotalInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalInstanceCount_, 0L) };
      inline Data& setTotalInstanceCount(int64_t totalInstanceCount) { DARABONBA_PTR_SET_VALUE(totalInstanceCount_, totalInstanceCount) };


    protected:
      // The number of database instances for which the automatic SQL throttling feature failed to be disabled.
      shared_ptr<int64_t> configFailInstanceCount_ {};
      // The database instances for which the automatic SQL throttling feature failed to be disabled.
      shared_ptr<vector<Data::ConfigFailInstanceList>> configFailInstanceList_ {};
      // The number of database instances for which the automatic SQL throttling feature is disabled.
      shared_ptr<int64_t> configSuccessInstanceCount_ {};
      // The database instances for which the automatic SQL throttling feature is disabled.
      shared_ptr<vector<Data::ConfigSuccessInstanceList>> configSuccessInstanceList_ {};
      // The total number of database instances.
      shared_ptr<int64_t> totalInstanceCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline DisableAutoThrottleRulesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DisableAutoThrottleRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DisableAutoThrottleRulesResponseBody::Data) };
    inline DisableAutoThrottleRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DisableAutoThrottleRulesResponseBody::Data) };
    inline DisableAutoThrottleRulesResponseBody& setData(const DisableAutoThrottleRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DisableAutoThrottleRulesResponseBody& setData(DisableAutoThrottleRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DisableAutoThrottleRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableAutoThrottleRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DisableAutoThrottleRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The returned data.
    shared_ptr<DisableAutoThrottleRulesResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
