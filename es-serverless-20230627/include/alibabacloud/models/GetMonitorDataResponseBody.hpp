// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONITORDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMONITORDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetMonitorDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMonitorDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetMonitorDataResponseBody() = default ;
    GetMonitorDataResponseBody(const GetMonitorDataResponseBody &) = default ;
    GetMonitorDataResponseBody(GetMonitorDataResponseBody &&) = default ;
    GetMonitorDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMonitorDataResponseBody() = default ;
    GetMonitorDataResponseBody& operator=(const GetMonitorDataResponseBody &) = default ;
    GetMonitorDataResponseBody& operator=(GetMonitorDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_ANY_TO_JSON(dps, dps_);
        DARABONBA_PTR_TO_JSON(integrity, integrity_);
        DARABONBA_PTR_TO_JSON(messageWatermark, messageWatermark_);
        DARABONBA_PTR_TO_JSON(metric, metric_);
        DARABONBA_PTR_TO_JSON(summary, summary_);
        DARABONBA_ANY_TO_JSON(tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_ANY_FROM_JSON(dps, dps_);
        DARABONBA_PTR_FROM_JSON(integrity, integrity_);
        DARABONBA_PTR_FROM_JSON(messageWatermark, messageWatermark_);
        DARABONBA_PTR_FROM_JSON(metric, metric_);
        DARABONBA_PTR_FROM_JSON(summary, summary_);
        DARABONBA_ANY_FROM_JSON(tags, tags_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dps_ == nullptr
        && this->integrity_ == nullptr && this->messageWatermark_ == nullptr && this->metric_ == nullptr && this->summary_ == nullptr && this->tags_ == nullptr; };
      // dps Field Functions 
      bool hasDps() const { return this->dps_ != nullptr;};
      void deleteDps() { this->dps_ = nullptr;};
      inline       const Darabonba::Json & getDps() const { DARABONBA_GET(dps_) };
      Darabonba::Json & getDps() { DARABONBA_GET(dps_) };
      inline Result& setDps(const Darabonba::Json & dps) { DARABONBA_SET_VALUE(dps_, dps) };
      inline Result& setDps(Darabonba::Json && dps) { DARABONBA_SET_RVALUE(dps_, dps) };


      // integrity Field Functions 
      bool hasIntegrity() const { return this->integrity_ != nullptr;};
      void deleteIntegrity() { this->integrity_ = nullptr;};
      inline float getIntegrity() const { DARABONBA_PTR_GET_DEFAULT(integrity_, 0.0) };
      inline Result& setIntegrity(float integrity) { DARABONBA_PTR_SET_VALUE(integrity_, integrity) };


      // messageWatermark Field Functions 
      bool hasMessageWatermark() const { return this->messageWatermark_ != nullptr;};
      void deleteMessageWatermark() { this->messageWatermark_ = nullptr;};
      inline int64_t getMessageWatermark() const { DARABONBA_PTR_GET_DEFAULT(messageWatermark_, 0L) };
      inline Result& setMessageWatermark(int64_t messageWatermark) { DARABONBA_PTR_SET_VALUE(messageWatermark_, messageWatermark) };


      // metric Field Functions 
      bool hasMetric() const { return this->metric_ != nullptr;};
      void deleteMetric() { this->metric_ = nullptr;};
      inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
      inline Result& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline float getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, 0.0) };
      inline Result& setSummary(float summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Result& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Result& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    protected:
      Darabonba::Json dps_ {};
      shared_ptr<float> integrity_ {};
      shared_ptr<int64_t> messageWatermark_ {};
      shared_ptr<string> metric_ {};
      shared_ptr<float> summary_ {};
      Darabonba::Json tags_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMonitorDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMonitorDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMonitorDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetMonitorDataResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetMonitorDataResponseBody::Result>) };
    inline vector<GetMonitorDataResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetMonitorDataResponseBody::Result>) };
    inline GetMonitorDataResponseBody& setResult(const vector<GetMonitorDataResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetMonitorDataResponseBody& setResult(vector<GetMonitorDataResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMonitorDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<GetMonitorDataResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
