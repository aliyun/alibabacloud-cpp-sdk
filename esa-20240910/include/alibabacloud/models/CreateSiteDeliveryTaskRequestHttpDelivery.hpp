// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKREQUESTHTTPDELIVERY_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKREQUESTHTTPDELIVERY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/HttpDeliveryHeaderParamValue.hpp>
#include <alibabacloud/models/HttpDeliveryQueryParamValue.hpp>
#include <alibabacloud/models/CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteDeliveryTaskRequestHttpDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteDeliveryTaskRequestHttpDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(Compress, compress_);
      DARABONBA_PTR_TO_JSON(DestUrl, destUrl_);
      DARABONBA_PTR_TO_JSON(HeaderParam, headerParam_);
      DARABONBA_PTR_TO_JSON(LastLogSplit, lastLogSplit_);
      DARABONBA_PTR_TO_JSON(LogBodyPrefix, logBodyPrefix_);
      DARABONBA_PTR_TO_JSON(LogBodySuffix, logBodySuffix_);
      DARABONBA_PTR_TO_JSON(LogSplit, logSplit_);
      DARABONBA_PTR_TO_JSON(LogSplitWords, logSplitWords_);
      DARABONBA_PTR_TO_JSON(MaxBatchMB, maxBatchMB_);
      DARABONBA_PTR_TO_JSON(MaxBatchSize, maxBatchSize_);
      DARABONBA_PTR_TO_JSON(MaxRetry, maxRetry_);
      DARABONBA_PTR_TO_JSON(QueryParam, queryParam_);
      DARABONBA_PTR_TO_JSON(StandardAuthOn, standardAuthOn_);
      DARABONBA_PTR_TO_JSON(StandardAuthParam, standardAuthParam_);
      DARABONBA_PTR_TO_JSON(TransformTimeout, transformTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteDeliveryTaskRequestHttpDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(Compress, compress_);
      DARABONBA_PTR_FROM_JSON(DestUrl, destUrl_);
      DARABONBA_PTR_FROM_JSON(HeaderParam, headerParam_);
      DARABONBA_PTR_FROM_JSON(LastLogSplit, lastLogSplit_);
      DARABONBA_PTR_FROM_JSON(LogBodyPrefix, logBodyPrefix_);
      DARABONBA_PTR_FROM_JSON(LogBodySuffix, logBodySuffix_);
      DARABONBA_PTR_FROM_JSON(LogSplit, logSplit_);
      DARABONBA_PTR_FROM_JSON(LogSplitWords, logSplitWords_);
      DARABONBA_PTR_FROM_JSON(MaxBatchMB, maxBatchMB_);
      DARABONBA_PTR_FROM_JSON(MaxBatchSize, maxBatchSize_);
      DARABONBA_PTR_FROM_JSON(MaxRetry, maxRetry_);
      DARABONBA_PTR_FROM_JSON(QueryParam, queryParam_);
      DARABONBA_PTR_FROM_JSON(StandardAuthOn, standardAuthOn_);
      DARABONBA_PTR_FROM_JSON(StandardAuthParam, standardAuthParam_);
      DARABONBA_PTR_FROM_JSON(TransformTimeout, transformTimeout_);
    };
    CreateSiteDeliveryTaskRequestHttpDelivery() = default ;
    CreateSiteDeliveryTaskRequestHttpDelivery(const CreateSiteDeliveryTaskRequestHttpDelivery &) = default ;
    CreateSiteDeliveryTaskRequestHttpDelivery(CreateSiteDeliveryTaskRequestHttpDelivery &&) = default ;
    CreateSiteDeliveryTaskRequestHttpDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteDeliveryTaskRequestHttpDelivery() = default ;
    CreateSiteDeliveryTaskRequestHttpDelivery& operator=(const CreateSiteDeliveryTaskRequestHttpDelivery &) = default ;
    CreateSiteDeliveryTaskRequestHttpDelivery& operator=(CreateSiteDeliveryTaskRequestHttpDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compress_ == nullptr
        && return this->destUrl_ == nullptr && return this->headerParam_ == nullptr && return this->lastLogSplit_ == nullptr && return this->logBodyPrefix_ == nullptr && return this->logBodySuffix_ == nullptr
        && return this->logSplit_ == nullptr && return this->logSplitWords_ == nullptr && return this->maxBatchMB_ == nullptr && return this->maxBatchSize_ == nullptr && return this->maxRetry_ == nullptr
        && return this->queryParam_ == nullptr && return this->standardAuthOn_ == nullptr && return this->standardAuthParam_ == nullptr && return this->transformTimeout_ == nullptr; };
    // compress Field Functions 
    bool hasCompress() const { return this->compress_ != nullptr;};
    void deleteCompress() { this->compress_ = nullptr;};
    inline string compress() const { DARABONBA_PTR_GET_DEFAULT(compress_, "") };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setCompress(string compress) { DARABONBA_PTR_SET_VALUE(compress_, compress) };


    // destUrl Field Functions 
    bool hasDestUrl() const { return this->destUrl_ != nullptr;};
    void deleteDestUrl() { this->destUrl_ = nullptr;};
    inline string destUrl() const { DARABONBA_PTR_GET_DEFAULT(destUrl_, "") };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setDestUrl(string destUrl) { DARABONBA_PTR_SET_VALUE(destUrl_, destUrl) };


    // headerParam Field Functions 
    bool hasHeaderParam() const { return this->headerParam_ != nullptr;};
    void deleteHeaderParam() { this->headerParam_ = nullptr;};
    inline const map<string, Models::HttpDeliveryHeaderParamValue> & headerParam() const { DARABONBA_PTR_GET_CONST(headerParam_, map<string, Models::HttpDeliveryHeaderParamValue>) };
    inline map<string, Models::HttpDeliveryHeaderParamValue> headerParam() { DARABONBA_PTR_GET(headerParam_, map<string, Models::HttpDeliveryHeaderParamValue>) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setHeaderParam(const map<string, Models::HttpDeliveryHeaderParamValue> & headerParam) { DARABONBA_PTR_SET_VALUE(headerParam_, headerParam) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setHeaderParam(map<string, Models::HttpDeliveryHeaderParamValue> && headerParam) { DARABONBA_PTR_SET_RVALUE(headerParam_, headerParam) };


    // lastLogSplit Field Functions 
    bool hasLastLogSplit() const { return this->lastLogSplit_ != nullptr;};
    void deleteLastLogSplit() { this->lastLogSplit_ = nullptr;};
    inline bool lastLogSplit() const { DARABONBA_PTR_GET_DEFAULT(lastLogSplit_, false) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setLastLogSplit(bool lastLogSplit) { DARABONBA_PTR_SET_VALUE(lastLogSplit_, lastLogSplit) };


    // logBodyPrefix Field Functions 
    bool hasLogBodyPrefix() const { return this->logBodyPrefix_ != nullptr;};
    void deleteLogBodyPrefix() { this->logBodyPrefix_ = nullptr;};
    inline string logBodyPrefix() const { DARABONBA_PTR_GET_DEFAULT(logBodyPrefix_, "") };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setLogBodyPrefix(string logBodyPrefix) { DARABONBA_PTR_SET_VALUE(logBodyPrefix_, logBodyPrefix) };


    // logBodySuffix Field Functions 
    bool hasLogBodySuffix() const { return this->logBodySuffix_ != nullptr;};
    void deleteLogBodySuffix() { this->logBodySuffix_ = nullptr;};
    inline string logBodySuffix() const { DARABONBA_PTR_GET_DEFAULT(logBodySuffix_, "") };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setLogBodySuffix(string logBodySuffix) { DARABONBA_PTR_SET_VALUE(logBodySuffix_, logBodySuffix) };


    // logSplit Field Functions 
    bool hasLogSplit() const { return this->logSplit_ != nullptr;};
    void deleteLogSplit() { this->logSplit_ = nullptr;};
    inline bool logSplit() const { DARABONBA_PTR_GET_DEFAULT(logSplit_, false) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setLogSplit(bool logSplit) { DARABONBA_PTR_SET_VALUE(logSplit_, logSplit) };


    // logSplitWords Field Functions 
    bool hasLogSplitWords() const { return this->logSplitWords_ != nullptr;};
    void deleteLogSplitWords() { this->logSplitWords_ = nullptr;};
    inline string logSplitWords() const { DARABONBA_PTR_GET_DEFAULT(logSplitWords_, "") };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setLogSplitWords(string logSplitWords) { DARABONBA_PTR_SET_VALUE(logSplitWords_, logSplitWords) };


    // maxBatchMB Field Functions 
    bool hasMaxBatchMB() const { return this->maxBatchMB_ != nullptr;};
    void deleteMaxBatchMB() { this->maxBatchMB_ = nullptr;};
    inline int64_t maxBatchMB() const { DARABONBA_PTR_GET_DEFAULT(maxBatchMB_, 0L) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setMaxBatchMB(int64_t maxBatchMB) { DARABONBA_PTR_SET_VALUE(maxBatchMB_, maxBatchMB) };


    // maxBatchSize Field Functions 
    bool hasMaxBatchSize() const { return this->maxBatchSize_ != nullptr;};
    void deleteMaxBatchSize() { this->maxBatchSize_ = nullptr;};
    inline int64_t maxBatchSize() const { DARABONBA_PTR_GET_DEFAULT(maxBatchSize_, 0L) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setMaxBatchSize(int64_t maxBatchSize) { DARABONBA_PTR_SET_VALUE(maxBatchSize_, maxBatchSize) };


    // maxRetry Field Functions 
    bool hasMaxRetry() const { return this->maxRetry_ != nullptr;};
    void deleteMaxRetry() { this->maxRetry_ = nullptr;};
    inline int64_t maxRetry() const { DARABONBA_PTR_GET_DEFAULT(maxRetry_, 0L) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setMaxRetry(int64_t maxRetry) { DARABONBA_PTR_SET_VALUE(maxRetry_, maxRetry) };


    // queryParam Field Functions 
    bool hasQueryParam() const { return this->queryParam_ != nullptr;};
    void deleteQueryParam() { this->queryParam_ = nullptr;};
    inline const map<string, Models::HttpDeliveryQueryParamValue> & queryParam() const { DARABONBA_PTR_GET_CONST(queryParam_, map<string, Models::HttpDeliveryQueryParamValue>) };
    inline map<string, Models::HttpDeliveryQueryParamValue> queryParam() { DARABONBA_PTR_GET(queryParam_, map<string, Models::HttpDeliveryQueryParamValue>) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setQueryParam(const map<string, Models::HttpDeliveryQueryParamValue> & queryParam) { DARABONBA_PTR_SET_VALUE(queryParam_, queryParam) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setQueryParam(map<string, Models::HttpDeliveryQueryParamValue> && queryParam) { DARABONBA_PTR_SET_RVALUE(queryParam_, queryParam) };


    // standardAuthOn Field Functions 
    bool hasStandardAuthOn() const { return this->standardAuthOn_ != nullptr;};
    void deleteStandardAuthOn() { this->standardAuthOn_ = nullptr;};
    inline bool standardAuthOn() const { DARABONBA_PTR_GET_DEFAULT(standardAuthOn_, false) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setStandardAuthOn(bool standardAuthOn) { DARABONBA_PTR_SET_VALUE(standardAuthOn_, standardAuthOn) };


    // standardAuthParam Field Functions 
    bool hasStandardAuthParam() const { return this->standardAuthParam_ != nullptr;};
    void deleteStandardAuthParam() { this->standardAuthParam_ = nullptr;};
    inline const Models::CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam & standardAuthParam() const { DARABONBA_PTR_GET_CONST(standardAuthParam_, Models::CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam) };
    inline Models::CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam standardAuthParam() { DARABONBA_PTR_GET(standardAuthParam_, Models::CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setStandardAuthParam(const Models::CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam & standardAuthParam) { DARABONBA_PTR_SET_VALUE(standardAuthParam_, standardAuthParam) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setStandardAuthParam(Models::CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam && standardAuthParam) { DARABONBA_PTR_SET_RVALUE(standardAuthParam_, standardAuthParam) };


    // transformTimeout Field Functions 
    bool hasTransformTimeout() const { return this->transformTimeout_ != nullptr;};
    void deleteTransformTimeout() { this->transformTimeout_ = nullptr;};
    inline int64_t transformTimeout() const { DARABONBA_PTR_GET_DEFAULT(transformTimeout_, 0L) };
    inline CreateSiteDeliveryTaskRequestHttpDelivery& setTransformTimeout(int64_t transformTimeout) { DARABONBA_PTR_SET_VALUE(transformTimeout_, transformTimeout) };


  protected:
    // The compression method. By default, data is not compressed.
    std::shared_ptr<string> compress_ = nullptr;
    // The address of the HTTP server.
    std::shared_ptr<string> destUrl_ = nullptr;
    // The custom headers.
    std::shared_ptr<map<string, Models::HttpDeliveryHeaderParamValue>> headerParam_ = nullptr;
    std::shared_ptr<bool> lastLogSplit_ = nullptr;
    // The prefix of the log delivery package.
    std::shared_ptr<string> logBodyPrefix_ = nullptr;
    // The suffix of the log delivery package.
    std::shared_ptr<string> logBodySuffix_ = nullptr;
    std::shared_ptr<bool> logSplit_ = nullptr;
    std::shared_ptr<string> logSplitWords_ = nullptr;
    // The maximum size of data for each delivery. Unit: MB.
    std::shared_ptr<int64_t> maxBatchMB_ = nullptr;
    // The maximum number of entries for each delivery.
    std::shared_ptr<int64_t> maxBatchSize_ = nullptr;
    // The maximum number of retries.
    std::shared_ptr<int64_t> maxRetry_ = nullptr;
    // The custom query parameters.
    std::shared_ptr<map<string, Models::HttpDeliveryQueryParamValue>> queryParam_ = nullptr;
    // Specifies whether to use server authentication.
    std::shared_ptr<bool> standardAuthOn_ = nullptr;
    // The authentication configurations.
    std::shared_ptr<Models::CreateSiteDeliveryTaskRequestHttpDeliveryStandardAuthParam> standardAuthParam_ = nullptr;
    // The timeout period. Unit: seconds.
    std::shared_ptr<int64_t> transformTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
