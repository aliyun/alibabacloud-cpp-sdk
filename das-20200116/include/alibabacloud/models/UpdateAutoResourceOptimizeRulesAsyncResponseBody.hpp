// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTORESOURCEOPTIMIZERULESASYNCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTORESOURCEOPTIMIZERULESASYNCRESPONSEBODY_HPP_
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
  class UpdateAutoResourceOptimizeRulesAsyncResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoResourceOptimizeRulesAsyncResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoResourceOptimizeRulesAsyncResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateAutoResourceOptimizeRulesAsyncResponseBody() = default ;
    UpdateAutoResourceOptimizeRulesAsyncResponseBody(const UpdateAutoResourceOptimizeRulesAsyncResponseBody &) = default ;
    UpdateAutoResourceOptimizeRulesAsyncResponseBody(UpdateAutoResourceOptimizeRulesAsyncResponseBody &&) = default ;
    UpdateAutoResourceOptimizeRulesAsyncResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoResourceOptimizeRulesAsyncResponseBody() = default ;
    UpdateAutoResourceOptimizeRulesAsyncResponseBody& operator=(const UpdateAutoResourceOptimizeRulesAsyncResponseBody &) = default ;
    UpdateAutoResourceOptimizeRulesAsyncResponseBody& operator=(UpdateAutoResourceOptimizeRulesAsyncResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Complete, complete_);
        DARABONBA_PTR_TO_JSON(ConfigResponse, configResponse_);
        DARABONBA_PTR_TO_JSON(Fail, fail_);
        DARABONBA_PTR_TO_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_TO_JSON(ResultId, resultId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Complete, complete_);
        DARABONBA_PTR_FROM_JSON(ConfigResponse, configResponse_);
        DARABONBA_PTR_FROM_JSON(Fail, fail_);
        DARABONBA_PTR_FROM_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
      class ConfigResponse : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConfigResponse& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigFailInstanceCount, configFailInstanceCount_);
          DARABONBA_PTR_TO_JSON(ConfigFailInstanceList, configFailInstanceList_);
          DARABONBA_PTR_TO_JSON(ConfigSuccessInstanceCount, configSuccessInstanceCount_);
          DARABONBA_PTR_TO_JSON(ConfigSuccessInstanceList, configSuccessInstanceList_);
          DARABONBA_PTR_TO_JSON(TotalInstanceCount, totalInstanceCount_);
        };
        friend void from_json(const Darabonba::Json& j, ConfigResponse& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigFailInstanceCount, configFailInstanceCount_);
          DARABONBA_PTR_FROM_JSON(ConfigFailInstanceList, configFailInstanceList_);
          DARABONBA_PTR_FROM_JSON(ConfigSuccessInstanceCount, configSuccessInstanceCount_);
          DARABONBA_PTR_FROM_JSON(ConfigSuccessInstanceList, configSuccessInstanceList_);
          DARABONBA_PTR_FROM_JSON(TotalInstanceCount, totalInstanceCount_);
        };
        ConfigResponse() = default ;
        ConfigResponse(const ConfigResponse &) = default ;
        ConfigResponse(ConfigResponse &&) = default ;
        ConfigResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConfigResponse() = default ;
        ConfigResponse& operator=(const ConfigResponse &) = default ;
        ConfigResponse& operator=(ConfigResponse &&) = default ;
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
          // Indicates whether the parameters are configured. Valid values:
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
          // Indicates whether the parameters are configured. Valid values:
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
        inline ConfigResponse& setConfigFailInstanceCount(int64_t configFailInstanceCount) { DARABONBA_PTR_SET_VALUE(configFailInstanceCount_, configFailInstanceCount) };


        // configFailInstanceList Field Functions 
        bool hasConfigFailInstanceList() const { return this->configFailInstanceList_ != nullptr;};
        void deleteConfigFailInstanceList() { this->configFailInstanceList_ = nullptr;};
        inline const vector<ConfigResponse::ConfigFailInstanceList> & getConfigFailInstanceList() const { DARABONBA_PTR_GET_CONST(configFailInstanceList_, vector<ConfigResponse::ConfigFailInstanceList>) };
        inline vector<ConfigResponse::ConfigFailInstanceList> getConfigFailInstanceList() { DARABONBA_PTR_GET(configFailInstanceList_, vector<ConfigResponse::ConfigFailInstanceList>) };
        inline ConfigResponse& setConfigFailInstanceList(const vector<ConfigResponse::ConfigFailInstanceList> & configFailInstanceList) { DARABONBA_PTR_SET_VALUE(configFailInstanceList_, configFailInstanceList) };
        inline ConfigResponse& setConfigFailInstanceList(vector<ConfigResponse::ConfigFailInstanceList> && configFailInstanceList) { DARABONBA_PTR_SET_RVALUE(configFailInstanceList_, configFailInstanceList) };


        // configSuccessInstanceCount Field Functions 
        bool hasConfigSuccessInstanceCount() const { return this->configSuccessInstanceCount_ != nullptr;};
        void deleteConfigSuccessInstanceCount() { this->configSuccessInstanceCount_ = nullptr;};
        inline int64_t getConfigSuccessInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(configSuccessInstanceCount_, 0L) };
        inline ConfigResponse& setConfigSuccessInstanceCount(int64_t configSuccessInstanceCount) { DARABONBA_PTR_SET_VALUE(configSuccessInstanceCount_, configSuccessInstanceCount) };


        // configSuccessInstanceList Field Functions 
        bool hasConfigSuccessInstanceList() const { return this->configSuccessInstanceList_ != nullptr;};
        void deleteConfigSuccessInstanceList() { this->configSuccessInstanceList_ = nullptr;};
        inline const vector<ConfigResponse::ConfigSuccessInstanceList> & getConfigSuccessInstanceList() const { DARABONBA_PTR_GET_CONST(configSuccessInstanceList_, vector<ConfigResponse::ConfigSuccessInstanceList>) };
        inline vector<ConfigResponse::ConfigSuccessInstanceList> getConfigSuccessInstanceList() { DARABONBA_PTR_GET(configSuccessInstanceList_, vector<ConfigResponse::ConfigSuccessInstanceList>) };
        inline ConfigResponse& setConfigSuccessInstanceList(const vector<ConfigResponse::ConfigSuccessInstanceList> & configSuccessInstanceList) { DARABONBA_PTR_SET_VALUE(configSuccessInstanceList_, configSuccessInstanceList) };
        inline ConfigResponse& setConfigSuccessInstanceList(vector<ConfigResponse::ConfigSuccessInstanceList> && configSuccessInstanceList) { DARABONBA_PTR_SET_RVALUE(configSuccessInstanceList_, configSuccessInstanceList) };


        // totalInstanceCount Field Functions 
        bool hasTotalInstanceCount() const { return this->totalInstanceCount_ != nullptr;};
        void deleteTotalInstanceCount() { this->totalInstanceCount_ = nullptr;};
        inline int64_t getTotalInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(totalInstanceCount_, 0L) };
        inline ConfigResponse& setTotalInstanceCount(int64_t totalInstanceCount) { DARABONBA_PTR_SET_VALUE(totalInstanceCount_, totalInstanceCount) };


      protected:
        // The number of database instances for which the parameters failed to be configured.
        shared_ptr<int64_t> configFailInstanceCount_ {};
        // The database instances for which the parameters failed to be configured.
        shared_ptr<vector<ConfigResponse::ConfigFailInstanceList>> configFailInstanceList_ {};
        // The number of database instances for which the parameters are configured.
        shared_ptr<int64_t> configSuccessInstanceCount_ {};
        // The database instances for which the parameters are configured.
        shared_ptr<vector<ConfigResponse::ConfigSuccessInstanceList>> configSuccessInstanceList_ {};
        // The total number of database instances.
        shared_ptr<int64_t> totalInstanceCount_ {};
      };

      virtual bool empty() const override { return this->complete_ == nullptr
        && this->configResponse_ == nullptr && this->fail_ == nullptr && this->isFinish_ == nullptr && this->resultId_ == nullptr && this->state_ == nullptr
        && this->timestamp_ == nullptr; };
      // complete Field Functions 
      bool hasComplete() const { return this->complete_ != nullptr;};
      void deleteComplete() { this->complete_ = nullptr;};
      inline bool getComplete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
      inline Data& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


      // configResponse Field Functions 
      bool hasConfigResponse() const { return this->configResponse_ != nullptr;};
      void deleteConfigResponse() { this->configResponse_ = nullptr;};
      inline const Data::ConfigResponse & getConfigResponse() const { DARABONBA_PTR_GET_CONST(configResponse_, Data::ConfigResponse) };
      inline Data::ConfigResponse getConfigResponse() { DARABONBA_PTR_GET(configResponse_, Data::ConfigResponse) };
      inline Data& setConfigResponse(const Data::ConfigResponse & configResponse) { DARABONBA_PTR_SET_VALUE(configResponse_, configResponse) };
      inline Data& setConfigResponse(Data::ConfigResponse && configResponse) { DARABONBA_PTR_SET_RVALUE(configResponse_, configResponse) };


      // fail Field Functions 
      bool hasFail() const { return this->fail_ != nullptr;};
      void deleteFail() { this->fail_ = nullptr;};
      inline bool getFail() const { DARABONBA_PTR_GET_DEFAULT(fail_, false) };
      inline Data& setFail(bool fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


      // isFinish Field Functions 
      bool hasIsFinish() const { return this->isFinish_ != nullptr;};
      void deleteIsFinish() { this->isFinish_ = nullptr;};
      inline bool getIsFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
      inline Data& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


      // resultId Field Functions 
      bool hasResultId() const { return this->resultId_ != nullptr;};
      void deleteResultId() { this->resultId_ = nullptr;};
      inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
      inline Data& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // Indicates whether the asynchronous request was complete. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> complete_ {};
      // The returned data of the configuration.
      // 
      // >  The data is returned only if the value of isFinish is **true**. This value indicates that the asynchronous request is complete.
      shared_ptr<Data::ConfigResponse> configResponse_ {};
      // Indicates whether the asynchronous request failed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> fail_ {};
      // Indicates whether the asynchronous request was complete. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isFinish_ {};
      // The ID of the asynchronous request.
      shared_ptr<string> resultId_ {};
      // The state of the asynchronous request. Valid values:
      // 
      // *   **RUNNING**
      // *   **SUCCESS**
      // *   **FAIL**
      shared_ptr<string> state_ {};
      // The time when the asynchronous request was made. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateAutoResourceOptimizeRulesAsyncResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateAutoResourceOptimizeRulesAsyncResponseBody::Data) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateAutoResourceOptimizeRulesAsyncResponseBody::Data) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBody& setData(const UpdateAutoResourceOptimizeRulesAsyncResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBody& setData(UpdateAutoResourceOptimizeRulesAsyncResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateAutoResourceOptimizeRulesAsyncResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The data returned.
    shared_ptr<UpdateAutoResourceOptimizeRulesAsyncResponseBody::Data> data_ {};
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
