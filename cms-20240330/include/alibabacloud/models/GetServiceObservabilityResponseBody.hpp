// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEOBSERVABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEOBSERVABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceObservabilityResponseBodyEntryPointInfo.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetServiceObservabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceObservabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(entryPointInfo, entryPointInfo_);
      DARABONBA_PTR_TO_JSON(feeType, feeType_);
      DARABONBA_PTR_TO_JSON(quotas, quotas_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(settings, settings_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceObservabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(entryPointInfo, entryPointInfo_);
      DARABONBA_PTR_FROM_JSON(feeType, feeType_);
      DARABONBA_PTR_FROM_JSON(quotas, quotas_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(settings, settings_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetServiceObservabilityResponseBody() = default ;
    GetServiceObservabilityResponseBody(const GetServiceObservabilityResponseBody &) = default ;
    GetServiceObservabilityResponseBody(GetServiceObservabilityResponseBody &&) = default ;
    GetServiceObservabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceObservabilityResponseBody() = default ;
    GetServiceObservabilityResponseBody& operator=(const GetServiceObservabilityResponseBody &) = default ;
    GetServiceObservabilityResponseBody& operator=(GetServiceObservabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entryPointInfo_ == nullptr
        && return this->feeType_ == nullptr && return this->quotas_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->settings_ == nullptr
        && return this->status_ == nullptr && return this->type_ == nullptr && return this->workspace_ == nullptr; };
    // entryPointInfo Field Functions 
    bool hasEntryPointInfo() const { return this->entryPointInfo_ != nullptr;};
    void deleteEntryPointInfo() { this->entryPointInfo_ = nullptr;};
    inline const GetServiceObservabilityResponseBodyEntryPointInfo & entryPointInfo() const { DARABONBA_PTR_GET_CONST(entryPointInfo_, GetServiceObservabilityResponseBodyEntryPointInfo) };
    inline GetServiceObservabilityResponseBodyEntryPointInfo entryPointInfo() { DARABONBA_PTR_GET(entryPointInfo_, GetServiceObservabilityResponseBodyEntryPointInfo) };
    inline GetServiceObservabilityResponseBody& setEntryPointInfo(const GetServiceObservabilityResponseBodyEntryPointInfo & entryPointInfo) { DARABONBA_PTR_SET_VALUE(entryPointInfo_, entryPointInfo) };
    inline GetServiceObservabilityResponseBody& setEntryPointInfo(GetServiceObservabilityResponseBodyEntryPointInfo && entryPointInfo) { DARABONBA_PTR_SET_RVALUE(entryPointInfo_, entryPointInfo) };


    // feeType Field Functions 
    bool hasFeeType() const { return this->feeType_ != nullptr;};
    void deleteFeeType() { this->feeType_ = nullptr;};
    inline string feeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, "") };
    inline GetServiceObservabilityResponseBody& setFeeType(string feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


    // quotas Field Functions 
    bool hasQuotas() const { return this->quotas_ != nullptr;};
    void deleteQuotas() { this->quotas_ = nullptr;};
    inline const map<string, string> & quotas() const { DARABONBA_PTR_GET_CONST(quotas_, map<string, string>) };
    inline map<string, string> quotas() { DARABONBA_PTR_GET(quotas_, map<string, string>) };
    inline GetServiceObservabilityResponseBody& setQuotas(const map<string, string> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
    inline GetServiceObservabilityResponseBody& setQuotas(map<string, string> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceObservabilityResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceObservabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const map<string, string> & settings() const { DARABONBA_PTR_GET_CONST(settings_, map<string, string>) };
    inline map<string, string> settings() { DARABONBA_PTR_GET(settings_, map<string, string>) };
    inline GetServiceObservabilityResponseBody& setSettings(const map<string, string> & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline GetServiceObservabilityResponseBody& setSettings(map<string, string> && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceObservabilityResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetServiceObservabilityResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetServiceObservabilityResponseBody& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<GetServiceObservabilityResponseBodyEntryPointInfo> entryPointInfo_ = nullptr;
    std::shared_ptr<string> feeType_ = nullptr;
    std::shared_ptr<map<string, string>> quotas_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<map<string, string>> settings_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
