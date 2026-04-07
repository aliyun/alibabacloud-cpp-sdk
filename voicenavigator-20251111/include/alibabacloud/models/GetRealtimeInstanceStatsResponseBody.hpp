// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMEINSTANCESTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMEINSTANCESTATSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class GetRealtimeInstanceStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeInstanceStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeInstanceStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRealtimeInstanceStatsResponseBody() = default ;
    GetRealtimeInstanceStatsResponseBody(const GetRealtimeInstanceStatsResponseBody &) = default ;
    GetRealtimeInstanceStatsResponseBody(GetRealtimeInstanceStatsResponseBody &&) = default ;
    GetRealtimeInstanceStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeInstanceStatsResponseBody() = default ;
    GetRealtimeInstanceStatsResponseBody& operator=(const GetRealtimeInstanceStatsResponseBody &) = default ;
    GetRealtimeInstanceStatsResponseBody& operator=(GetRealtimeInstanceStatsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConfiguredConcurrency, configuredConcurrency_);
        DARABONBA_PTR_TO_JSON(RealtimeScriptStatsList, realtimeScriptStatsList_);
        DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
        DARABONBA_PTR_TO_JSON(UsedConcurrency, usedConcurrency_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfiguredConcurrency, configuredConcurrency_);
        DARABONBA_PTR_FROM_JSON(RealtimeScriptStatsList, realtimeScriptStatsList_);
        DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
        DARABONBA_PTR_FROM_JSON(UsedConcurrency, usedConcurrency_);
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
      class RealtimeScriptStatsList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RealtimeScriptStatsList& obj) { 
          DARABONBA_PTR_TO_JSON(ConfiguredConcurrency, configuredConcurrency_);
          DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_TO_JSON(StatsTime, statsTime_);
          DARABONBA_PTR_TO_JSON(UsedConcurrency, usedConcurrency_);
        };
        friend void from_json(const Darabonba::Json& j, RealtimeScriptStatsList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfiguredConcurrency, configuredConcurrency_);
          DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
          DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
          DARABONBA_PTR_FROM_JSON(StatsTime, statsTime_);
          DARABONBA_PTR_FROM_JSON(UsedConcurrency, usedConcurrency_);
        };
        RealtimeScriptStatsList() = default ;
        RealtimeScriptStatsList(const RealtimeScriptStatsList &) = default ;
        RealtimeScriptStatsList(RealtimeScriptStatsList &&) = default ;
        RealtimeScriptStatsList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RealtimeScriptStatsList() = default ;
        RealtimeScriptStatsList& operator=(const RealtimeScriptStatsList &) = default ;
        RealtimeScriptStatsList& operator=(RealtimeScriptStatsList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configuredConcurrency_ == nullptr
        && this->scriptId_ == nullptr && this->scriptName_ == nullptr && this->statsTime_ == nullptr && this->usedConcurrency_ == nullptr; };
        // configuredConcurrency Field Functions 
        bool hasConfiguredConcurrency() const { return this->configuredConcurrency_ != nullptr;};
        void deleteConfiguredConcurrency() { this->configuredConcurrency_ = nullptr;};
        inline int32_t getConfiguredConcurrency() const { DARABONBA_PTR_GET_DEFAULT(configuredConcurrency_, 0) };
        inline RealtimeScriptStatsList& setConfiguredConcurrency(int32_t configuredConcurrency) { DARABONBA_PTR_SET_VALUE(configuredConcurrency_, configuredConcurrency) };


        // scriptId Field Functions 
        bool hasScriptId() const { return this->scriptId_ != nullptr;};
        void deleteScriptId() { this->scriptId_ = nullptr;};
        inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
        inline RealtimeScriptStatsList& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


        // scriptName Field Functions 
        bool hasScriptName() const { return this->scriptName_ != nullptr;};
        void deleteScriptName() { this->scriptName_ = nullptr;};
        inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
        inline RealtimeScriptStatsList& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


        // statsTime Field Functions 
        bool hasStatsTime() const { return this->statsTime_ != nullptr;};
        void deleteStatsTime() { this->statsTime_ = nullptr;};
        inline int64_t getStatsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
        inline RealtimeScriptStatsList& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


        // usedConcurrency Field Functions 
        bool hasUsedConcurrency() const { return this->usedConcurrency_ != nullptr;};
        void deleteUsedConcurrency() { this->usedConcurrency_ = nullptr;};
        inline int32_t getUsedConcurrency() const { DARABONBA_PTR_GET_DEFAULT(usedConcurrency_, 0) };
        inline RealtimeScriptStatsList& setUsedConcurrency(int32_t usedConcurrency) { DARABONBA_PTR_SET_VALUE(usedConcurrency_, usedConcurrency) };


      protected:
        shared_ptr<int32_t> configuredConcurrency_ {};
        shared_ptr<string> scriptId_ {};
        shared_ptr<string> scriptName_ {};
        shared_ptr<int64_t> statsTime_ {};
        shared_ptr<int32_t> usedConcurrency_ {};
      };

      virtual bool empty() const override { return this->configuredConcurrency_ == nullptr
        && this->realtimeScriptStatsList_ == nullptr && this->statsTime_ == nullptr && this->usedConcurrency_ == nullptr; };
      // configuredConcurrency Field Functions 
      bool hasConfiguredConcurrency() const { return this->configuredConcurrency_ != nullptr;};
      void deleteConfiguredConcurrency() { this->configuredConcurrency_ = nullptr;};
      inline int32_t getConfiguredConcurrency() const { DARABONBA_PTR_GET_DEFAULT(configuredConcurrency_, 0) };
      inline Data& setConfiguredConcurrency(int32_t configuredConcurrency) { DARABONBA_PTR_SET_VALUE(configuredConcurrency_, configuredConcurrency) };


      // realtimeScriptStatsList Field Functions 
      bool hasRealtimeScriptStatsList() const { return this->realtimeScriptStatsList_ != nullptr;};
      void deleteRealtimeScriptStatsList() { this->realtimeScriptStatsList_ = nullptr;};
      inline const vector<Data::RealtimeScriptStatsList> & getRealtimeScriptStatsList() const { DARABONBA_PTR_GET_CONST(realtimeScriptStatsList_, vector<Data::RealtimeScriptStatsList>) };
      inline vector<Data::RealtimeScriptStatsList> getRealtimeScriptStatsList() { DARABONBA_PTR_GET(realtimeScriptStatsList_, vector<Data::RealtimeScriptStatsList>) };
      inline Data& setRealtimeScriptStatsList(const vector<Data::RealtimeScriptStatsList> & realtimeScriptStatsList) { DARABONBA_PTR_SET_VALUE(realtimeScriptStatsList_, realtimeScriptStatsList) };
      inline Data& setRealtimeScriptStatsList(vector<Data::RealtimeScriptStatsList> && realtimeScriptStatsList) { DARABONBA_PTR_SET_RVALUE(realtimeScriptStatsList_, realtimeScriptStatsList) };


      // statsTime Field Functions 
      bool hasStatsTime() const { return this->statsTime_ != nullptr;};
      void deleteStatsTime() { this->statsTime_ = nullptr;};
      inline int64_t getStatsTime() const { DARABONBA_PTR_GET_DEFAULT(statsTime_, 0L) };
      inline Data& setStatsTime(int64_t statsTime) { DARABONBA_PTR_SET_VALUE(statsTime_, statsTime) };


      // usedConcurrency Field Functions 
      bool hasUsedConcurrency() const { return this->usedConcurrency_ != nullptr;};
      void deleteUsedConcurrency() { this->usedConcurrency_ = nullptr;};
      inline int32_t getUsedConcurrency() const { DARABONBA_PTR_GET_DEFAULT(usedConcurrency_, 0) };
      inline Data& setUsedConcurrency(int32_t usedConcurrency) { DARABONBA_PTR_SET_VALUE(usedConcurrency_, usedConcurrency) };


    protected:
      shared_ptr<int32_t> configuredConcurrency_ {};
      shared_ptr<vector<Data::RealtimeScriptStatsList>> realtimeScriptStatsList_ {};
      shared_ptr<int64_t> statsTime_ {};
      shared_ptr<int32_t> usedConcurrency_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRealtimeInstanceStatsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRealtimeInstanceStatsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRealtimeInstanceStatsResponseBody::Data) };
    inline GetRealtimeInstanceStatsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRealtimeInstanceStatsResponseBody::Data) };
    inline GetRealtimeInstanceStatsResponseBody& setData(const GetRealtimeInstanceStatsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRealtimeInstanceStatsResponseBody& setData(GetRealtimeInstanceStatsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRealtimeInstanceStatsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRealtimeInstanceStatsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetRealtimeInstanceStatsResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetRealtimeInstanceStatsResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRealtimeInstanceStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetRealtimeInstanceStatsResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
