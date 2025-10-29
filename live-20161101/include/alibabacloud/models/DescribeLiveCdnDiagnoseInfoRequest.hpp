// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECDNDIAGNOSEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECDNDIAGNOSEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCdnDiagnoseInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCdnDiagnoseInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(app, app_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(intervalType, intervalType_);
      DARABONBA_PTR_TO_JSON(phase, phase_);
      DARABONBA_PTR_TO_JSON(requestType, requestType_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(streamName, streamName_);
      DARABONBA_PTR_TO_JSON(streamSuffix, streamSuffix_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCdnDiagnoseInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(app, app_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(intervalType, intervalType_);
      DARABONBA_PTR_FROM_JSON(phase, phase_);
      DARABONBA_PTR_FROM_JSON(requestType, requestType_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(streamName, streamName_);
      DARABONBA_PTR_FROM_JSON(streamSuffix, streamSuffix_);
    };
    DescribeLiveCdnDiagnoseInfoRequest() = default ;
    DescribeLiveCdnDiagnoseInfoRequest(const DescribeLiveCdnDiagnoseInfoRequest &) = default ;
    DescribeLiveCdnDiagnoseInfoRequest(DescribeLiveCdnDiagnoseInfoRequest &&) = default ;
    DescribeLiveCdnDiagnoseInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCdnDiagnoseInfoRequest() = default ;
    DescribeLiveCdnDiagnoseInfoRequest& operator=(const DescribeLiveCdnDiagnoseInfoRequest &) = default ;
    DescribeLiveCdnDiagnoseInfoRequest& operator=(DescribeLiveCdnDiagnoseInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityToken_ == nullptr
        && return this->app_ == nullptr && return this->domain_ == nullptr && return this->endTime_ == nullptr && return this->intervalType_ == nullptr && return this->phase_ == nullptr
        && return this->requestType_ == nullptr && return this->startTime_ == nullptr && return this->streamName_ == nullptr && return this->streamSuffix_ == nullptr; };
    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeLiveCdnDiagnoseInfoRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeLiveCdnDiagnoseInfoRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLiveCdnDiagnoseInfoRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeLiveCdnDiagnoseInfoRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // intervalType Field Functions 
    bool hasIntervalType() const { return this->intervalType_ != nullptr;};
    void deleteIntervalType() { this->intervalType_ = nullptr;};
    inline string intervalType() const { DARABONBA_PTR_GET_DEFAULT(intervalType_, "") };
    inline DescribeLiveCdnDiagnoseInfoRequest& setIntervalType(string intervalType) { DARABONBA_PTR_SET_VALUE(intervalType_, intervalType) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline int32_t phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, 0) };
    inline DescribeLiveCdnDiagnoseInfoRequest& setPhase(int32_t phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // requestType Field Functions 
    bool hasRequestType() const { return this->requestType_ != nullptr;};
    void deleteRequestType() { this->requestType_ = nullptr;};
    inline string requestType() const { DARABONBA_PTR_GET_DEFAULT(requestType_, "") };
    inline DescribeLiveCdnDiagnoseInfoRequest& setRequestType(string requestType) { DARABONBA_PTR_SET_VALUE(requestType_, requestType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeLiveCdnDiagnoseInfoRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline DescribeLiveCdnDiagnoseInfoRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // streamSuffix Field Functions 
    bool hasStreamSuffix() const { return this->streamSuffix_ != nullptr;};
    void deleteStreamSuffix() { this->streamSuffix_ = nullptr;};
    inline string streamSuffix() const { DARABONBA_PTR_GET_DEFAULT(streamSuffix_, "") };
    inline DescribeLiveCdnDiagnoseInfoRequest& setStreamSuffix(string streamSuffix) { DARABONBA_PTR_SET_VALUE(streamSuffix_, streamSuffix) };


  protected:
    std::shared_ptr<string> securityToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> app_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> intervalType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> phase_ = nullptr;
    std::shared_ptr<string> requestType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> streamSuffix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
