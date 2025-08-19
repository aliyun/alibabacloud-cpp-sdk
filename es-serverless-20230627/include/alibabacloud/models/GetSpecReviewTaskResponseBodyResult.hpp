// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPECREVIEWTASKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSPECREVIEWTASKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class GetSpecReviewTaskResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpecReviewTaskResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetSpecReviewTaskResponseBodyResult& obj) { 
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
    GetSpecReviewTaskResponseBodyResult() = default ;
    GetSpecReviewTaskResponseBodyResult(const GetSpecReviewTaskResponseBodyResult &) = default ;
    GetSpecReviewTaskResponseBodyResult(GetSpecReviewTaskResponseBodyResult &&) = default ;
    GetSpecReviewTaskResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpecReviewTaskResponseBodyResult() = default ;
    GetSpecReviewTaskResponseBodyResult& operator=(const GetSpecReviewTaskResponseBodyResult &) = default ;
    GetSpecReviewTaskResponseBodyResult& operator=(GetSpecReviewTaskResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->appName_ != nullptr && this->applyLimiter_ != nullptr && this->applyQuota_ != nullptr && this->applyReason_ != nullptr && this->effectiveLimiter_ != nullptr
        && this->effectiveQuota_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->oldLimiter_ != nullptr && this->oldQuota_ != nullptr
        && this->source_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetSpecReviewTaskResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetSpecReviewTaskResponseBodyResult& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // applyLimiter Field Functions 
    bool hasApplyLimiter() const { return this->applyLimiter_ != nullptr;};
    void deleteApplyLimiter() { this->applyLimiter_ = nullptr;};
    inline     const Darabonba::Json & applyLimiter() const { DARABONBA_GET(applyLimiter_) };
    Darabonba::Json & applyLimiter() { DARABONBA_GET(applyLimiter_) };
    inline GetSpecReviewTaskResponseBodyResult& setApplyLimiter(const Darabonba::Json & applyLimiter) { DARABONBA_SET_VALUE(applyLimiter_, applyLimiter) };
    inline GetSpecReviewTaskResponseBodyResult& setApplyLimiter(Darabonba::Json & applyLimiter) { DARABONBA_SET_RVALUE(applyLimiter_, applyLimiter) };


    // applyQuota Field Functions 
    bool hasApplyQuota() const { return this->applyQuota_ != nullptr;};
    void deleteApplyQuota() { this->applyQuota_ = nullptr;};
    inline     const Darabonba::Json & applyQuota() const { DARABONBA_GET(applyQuota_) };
    Darabonba::Json & applyQuota() { DARABONBA_GET(applyQuota_) };
    inline GetSpecReviewTaskResponseBodyResult& setApplyQuota(const Darabonba::Json & applyQuota) { DARABONBA_SET_VALUE(applyQuota_, applyQuota) };
    inline GetSpecReviewTaskResponseBodyResult& setApplyQuota(Darabonba::Json & applyQuota) { DARABONBA_SET_RVALUE(applyQuota_, applyQuota) };


    // applyReason Field Functions 
    bool hasApplyReason() const { return this->applyReason_ != nullptr;};
    void deleteApplyReason() { this->applyReason_ = nullptr;};
    inline string applyReason() const { DARABONBA_PTR_GET_DEFAULT(applyReason_, "") };
    inline GetSpecReviewTaskResponseBodyResult& setApplyReason(string applyReason) { DARABONBA_PTR_SET_VALUE(applyReason_, applyReason) };


    // effectiveLimiter Field Functions 
    bool hasEffectiveLimiter() const { return this->effectiveLimiter_ != nullptr;};
    void deleteEffectiveLimiter() { this->effectiveLimiter_ = nullptr;};
    inline     const Darabonba::Json & effectiveLimiter() const { DARABONBA_GET(effectiveLimiter_) };
    Darabonba::Json & effectiveLimiter() { DARABONBA_GET(effectiveLimiter_) };
    inline GetSpecReviewTaskResponseBodyResult& setEffectiveLimiter(const Darabonba::Json & effectiveLimiter) { DARABONBA_SET_VALUE(effectiveLimiter_, effectiveLimiter) };
    inline GetSpecReviewTaskResponseBodyResult& setEffectiveLimiter(Darabonba::Json & effectiveLimiter) { DARABONBA_SET_RVALUE(effectiveLimiter_, effectiveLimiter) };


    // effectiveQuota Field Functions 
    bool hasEffectiveQuota() const { return this->effectiveQuota_ != nullptr;};
    void deleteEffectiveQuota() { this->effectiveQuota_ = nullptr;};
    inline     const Darabonba::Json & effectiveQuota() const { DARABONBA_GET(effectiveQuota_) };
    Darabonba::Json & effectiveQuota() { DARABONBA_GET(effectiveQuota_) };
    inline GetSpecReviewTaskResponseBodyResult& setEffectiveQuota(const Darabonba::Json & effectiveQuota) { DARABONBA_SET_VALUE(effectiveQuota_, effectiveQuota) };
    inline GetSpecReviewTaskResponseBodyResult& setEffectiveQuota(Darabonba::Json & effectiveQuota) { DARABONBA_SET_RVALUE(effectiveQuota_, effectiveQuota) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetSpecReviewTaskResponseBodyResult& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetSpecReviewTaskResponseBodyResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // oldLimiter Field Functions 
    bool hasOldLimiter() const { return this->oldLimiter_ != nullptr;};
    void deleteOldLimiter() { this->oldLimiter_ = nullptr;};
    inline     const Darabonba::Json & oldLimiter() const { DARABONBA_GET(oldLimiter_) };
    Darabonba::Json & oldLimiter() { DARABONBA_GET(oldLimiter_) };
    inline GetSpecReviewTaskResponseBodyResult& setOldLimiter(const Darabonba::Json & oldLimiter) { DARABONBA_SET_VALUE(oldLimiter_, oldLimiter) };
    inline GetSpecReviewTaskResponseBodyResult& setOldLimiter(Darabonba::Json & oldLimiter) { DARABONBA_SET_RVALUE(oldLimiter_, oldLimiter) };


    // oldQuota Field Functions 
    bool hasOldQuota() const { return this->oldQuota_ != nullptr;};
    void deleteOldQuota() { this->oldQuota_ = nullptr;};
    inline     const Darabonba::Json & oldQuota() const { DARABONBA_GET(oldQuota_) };
    Darabonba::Json & oldQuota() { DARABONBA_GET(oldQuota_) };
    inline GetSpecReviewTaskResponseBodyResult& setOldQuota(const Darabonba::Json & oldQuota) { DARABONBA_SET_VALUE(oldQuota_, oldQuota) };
    inline GetSpecReviewTaskResponseBodyResult& setOldQuota(Darabonba::Json & oldQuota) { DARABONBA_SET_RVALUE(oldQuota_, oldQuota) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetSpecReviewTaskResponseBodyResult& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSpecReviewTaskResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSpecReviewTaskResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 代表资源一级ID的资源属性字段
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    Darabonba::Json applyLimiter_ = nullptr;
    Darabonba::Json applyQuota_ = nullptr;
    std::shared_ptr<string> applyReason_ = nullptr;
    Darabonba::Json effectiveLimiter_ = nullptr;
    Darabonba::Json effectiveQuota_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    Darabonba::Json oldLimiter_ = nullptr;
    Darabonba::Json oldQuota_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
