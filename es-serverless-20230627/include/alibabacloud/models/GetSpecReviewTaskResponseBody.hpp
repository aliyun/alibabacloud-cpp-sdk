// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPECREVIEWTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPECREVIEWTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetSpecReviewTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpecReviewTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetSpecReviewTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    GetSpecReviewTaskResponseBody() = default ;
    GetSpecReviewTaskResponseBody(const GetSpecReviewTaskResponseBody &) = default ;
    GetSpecReviewTaskResponseBody(GetSpecReviewTaskResponseBody &&) = default ;
    GetSpecReviewTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpecReviewTaskResponseBody() = default ;
    GetSpecReviewTaskResponseBody& operator=(const GetSpecReviewTaskResponseBody &) = default ;
    GetSpecReviewTaskResponseBody& operator=(GetSpecReviewTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(appName, appName_);
        DARABONBA_ANY_TO_JSON(applyLimiter, applyLimiter_);
        DARABONBA_ANY_TO_JSON(applyQuota, applyQuota_);
        DARABONBA_PTR_TO_JSON(applyReason, applyReason_);
        DARABONBA_ANY_TO_JSON(effectiveLimiter, effectiveLimiter_);
        DARABONBA_ANY_TO_JSON(effectiveQuota, effectiveQuota_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_ANY_TO_JSON(oldLimiter, oldLimiter_);
        DARABONBA_ANY_TO_JSON(oldQuota, oldQuota_);
        DARABONBA_PTR_TO_JSON(source, source_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(appName, appName_);
        DARABONBA_ANY_FROM_JSON(applyLimiter, applyLimiter_);
        DARABONBA_ANY_FROM_JSON(applyQuota, applyQuota_);
        DARABONBA_PTR_FROM_JSON(applyReason, applyReason_);
        DARABONBA_ANY_FROM_JSON(effectiveLimiter, effectiveLimiter_);
        DARABONBA_ANY_FROM_JSON(effectiveQuota, effectiveQuota_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_ANY_FROM_JSON(oldLimiter, oldLimiter_);
        DARABONBA_ANY_FROM_JSON(oldQuota, oldQuota_);
        DARABONBA_PTR_FROM_JSON(source, source_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->appName_ == nullptr && this->applyLimiter_ == nullptr && this->applyQuota_ == nullptr && this->applyReason_ == nullptr && this->effectiveLimiter_ == nullptr
        && this->effectiveQuota_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->oldLimiter_ == nullptr && this->oldQuota_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Result& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // applyLimiter Field Functions 
      bool hasApplyLimiter() const { return this->applyLimiter_ != nullptr;};
      void deleteApplyLimiter() { this->applyLimiter_ = nullptr;};
      inline       const Darabonba::Json & getApplyLimiter() const { DARABONBA_GET(applyLimiter_) };
      Darabonba::Json & getApplyLimiter() { DARABONBA_GET(applyLimiter_) };
      inline Result& setApplyLimiter(const Darabonba::Json & applyLimiter) { DARABONBA_SET_VALUE(applyLimiter_, applyLimiter) };
      inline Result& setApplyLimiter(Darabonba::Json && applyLimiter) { DARABONBA_SET_RVALUE(applyLimiter_, applyLimiter) };


      // applyQuota Field Functions 
      bool hasApplyQuota() const { return this->applyQuota_ != nullptr;};
      void deleteApplyQuota() { this->applyQuota_ = nullptr;};
      inline       const Darabonba::Json & getApplyQuota() const { DARABONBA_GET(applyQuota_) };
      Darabonba::Json & getApplyQuota() { DARABONBA_GET(applyQuota_) };
      inline Result& setApplyQuota(const Darabonba::Json & applyQuota) { DARABONBA_SET_VALUE(applyQuota_, applyQuota) };
      inline Result& setApplyQuota(Darabonba::Json && applyQuota) { DARABONBA_SET_RVALUE(applyQuota_, applyQuota) };


      // applyReason Field Functions 
      bool hasApplyReason() const { return this->applyReason_ != nullptr;};
      void deleteApplyReason() { this->applyReason_ = nullptr;};
      inline string getApplyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
      inline Result& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


      // effectiveLimiter Field Functions 
      bool hasEffectiveLimiter() const { return this->effectiveLimiter_ != nullptr;};
      void deleteEffectiveLimiter() { this->effectiveLimiter_ = nullptr;};
      inline       const Darabonba::Json & getEffectiveLimiter() const { DARABONBA_GET(effectiveLimiter_) };
      Darabonba::Json & getEffectiveLimiter() { DARABONBA_GET(effectiveLimiter_) };
      inline Result& setEffectiveLimiter(const Darabonba::Json & effectiveLimiter) { DARABONBA_SET_VALUE(effectiveLimiter_, effectiveLimiter) };
      inline Result& setEffectiveLimiter(Darabonba::Json && effectiveLimiter) { DARABONBA_SET_RVALUE(effectiveLimiter_, effectiveLimiter) };


      // effectiveQuota Field Functions 
      bool hasEffectiveQuota() const { return this->effectiveQuota_ != nullptr;};
      void deleteEffectiveQuota() { this->effectiveQuota_ = nullptr;};
      inline       const Darabonba::Json & getEffectiveQuota() const { DARABONBA_GET(effectiveQuota_) };
      Darabonba::Json & getEffectiveQuota() { DARABONBA_GET(effectiveQuota_) };
      inline Result& setEffectiveQuota(const Darabonba::Json & effectiveQuota) { DARABONBA_SET_VALUE(effectiveQuota_, effectiveQuota) };
      inline Result& setEffectiveQuota(Darabonba::Json && effectiveQuota) { DARABONBA_SET_RVALUE(effectiveQuota_, effectiveQuota) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Result& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // oldLimiter Field Functions 
      bool hasOldLimiter() const { return this->oldLimiter_ != nullptr;};
      void deleteOldLimiter() { this->oldLimiter_ = nullptr;};
      inline       const Darabonba::Json & getOldLimiter() const { DARABONBA_GET(oldLimiter_) };
      Darabonba::Json & getOldLimiter() { DARABONBA_GET(oldLimiter_) };
      inline Result& setOldLimiter(const Darabonba::Json & oldLimiter) { DARABONBA_SET_VALUE(oldLimiter_, oldLimiter) };
      inline Result& setOldLimiter(Darabonba::Json && oldLimiter) { DARABONBA_SET_RVALUE(oldLimiter_, oldLimiter) };


      // oldQuota Field Functions 
      bool hasOldQuota() const { return this->oldQuota_ != nullptr;};
      void deleteOldQuota() { this->oldQuota_ = nullptr;};
      inline       const Darabonba::Json & getOldQuota() const { DARABONBA_GET(oldQuota_) };
      Darabonba::Json & getOldQuota() { DARABONBA_GET(oldQuota_) };
      inline Result& setOldQuota(const Darabonba::Json & oldQuota) { DARABONBA_SET_VALUE(oldQuota_, oldQuota) };
      inline Result& setOldQuota(Darabonba::Json && oldQuota) { DARABONBA_SET_RVALUE(oldQuota_, oldQuota) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Result& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // 代表资源一级ID的资源属性字段
      shared_ptr<string> id_ {};
      shared_ptr<string> appName_ {};
      Darabonba::Json applyLimiter_ {};
      Darabonba::Json applyQuota_ {};
      shared_ptr<string> applyReason_ {};
      Darabonba::Json effectiveLimiter_ {};
      Darabonba::Json effectiveQuota_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      Darabonba::Json oldLimiter_ {};
      Darabonba::Json oldQuota_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSpecReviewTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetSpecReviewTaskResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetSpecReviewTaskResponseBody::Result) };
    inline GetSpecReviewTaskResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetSpecReviewTaskResponseBody::Result) };
    inline GetSpecReviewTaskResponseBody& setResult(const GetSpecReviewTaskResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetSpecReviewTaskResponseBody& setResult(GetSpecReviewTaskResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSpecReviewTaskResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
