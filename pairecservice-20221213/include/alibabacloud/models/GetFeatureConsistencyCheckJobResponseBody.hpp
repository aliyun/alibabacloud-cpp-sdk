// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFEATURECONSISTENCYCHECKJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFEATURECONSISTENCYCHECKJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetFeatureConsistencyCheckJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFeatureConsistencyCheckJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobConfigName, featureConsistencyCheckJobConfigName_);
      DARABONBA_PTR_TO_JSON(GmtEndTime, gmtEndTime_);
      DARABONBA_PTR_TO_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetFeatureConsistencyCheckJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobConfigName, featureConsistencyCheckJobConfigName_);
      DARABONBA_PTR_FROM_JSON(GmtEndTime, gmtEndTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartTime, gmtStartTime_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetFeatureConsistencyCheckJobResponseBody() = default ;
    GetFeatureConsistencyCheckJobResponseBody(const GetFeatureConsistencyCheckJobResponseBody &) = default ;
    GetFeatureConsistencyCheckJobResponseBody(GetFeatureConsistencyCheckJobResponseBody &&) = default ;
    GetFeatureConsistencyCheckJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFeatureConsistencyCheckJobResponseBody() = default ;
    GetFeatureConsistencyCheckJobResponseBody& operator=(const GetFeatureConsistencyCheckJobResponseBody &) = default ;
    GetFeatureConsistencyCheckJobResponseBody& operator=(GetFeatureConsistencyCheckJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->featureConsistencyCheckJobConfigId_ != nullptr && this->featureConsistencyCheckJobConfigName_ != nullptr && this->gmtEndTime_ != nullptr && this->gmtStartTime_ != nullptr && this->logs_ != nullptr
        && this->requestId_ != nullptr && this->status_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetFeatureConsistencyCheckJobResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // featureConsistencyCheckJobConfigId Field Functions 
    bool hasFeatureConsistencyCheckJobConfigId() const { return this->featureConsistencyCheckJobConfigId_ != nullptr;};
    void deleteFeatureConsistencyCheckJobConfigId() { this->featureConsistencyCheckJobConfigId_ = nullptr;};
    inline string featureConsistencyCheckJobConfigId() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckJobConfigId_, "") };
    inline GetFeatureConsistencyCheckJobResponseBody& setFeatureConsistencyCheckJobConfigId(string featureConsistencyCheckJobConfigId) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobConfigId_, featureConsistencyCheckJobConfigId) };


    // featureConsistencyCheckJobConfigName Field Functions 
    bool hasFeatureConsistencyCheckJobConfigName() const { return this->featureConsistencyCheckJobConfigName_ != nullptr;};
    void deleteFeatureConsistencyCheckJobConfigName() { this->featureConsistencyCheckJobConfigName_ = nullptr;};
    inline string featureConsistencyCheckJobConfigName() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckJobConfigName_, "") };
    inline GetFeatureConsistencyCheckJobResponseBody& setFeatureConsistencyCheckJobConfigName(string featureConsistencyCheckJobConfigName) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobConfigName_, featureConsistencyCheckJobConfigName) };


    // gmtEndTime Field Functions 
    bool hasGmtEndTime() const { return this->gmtEndTime_ != nullptr;};
    void deleteGmtEndTime() { this->gmtEndTime_ = nullptr;};
    inline string gmtEndTime() const { DARABONBA_PTR_GET_DEFAULT(gmtEndTime_, "") };
    inline GetFeatureConsistencyCheckJobResponseBody& setGmtEndTime(string gmtEndTime) { DARABONBA_PTR_SET_VALUE(gmtEndTime_, gmtEndTime) };


    // gmtStartTime Field Functions 
    bool hasGmtStartTime() const { return this->gmtStartTime_ != nullptr;};
    void deleteGmtStartTime() { this->gmtStartTime_ = nullptr;};
    inline string gmtStartTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartTime_, "") };
    inline GetFeatureConsistencyCheckJobResponseBody& setGmtStartTime(string gmtStartTime) { DARABONBA_PTR_SET_VALUE(gmtStartTime_, gmtStartTime) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<string> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<string>) };
    inline vector<string> logs() { DARABONBA_PTR_GET(logs_, vector<string>) };
    inline GetFeatureConsistencyCheckJobResponseBody& setLogs(const vector<string> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline GetFeatureConsistencyCheckJobResponseBody& setLogs(vector<string> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFeatureConsistencyCheckJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetFeatureConsistencyCheckJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> featureConsistencyCheckJobConfigId_ = nullptr;
    std::shared_ptr<string> featureConsistencyCheckJobConfigName_ = nullptr;
    std::shared_ptr<string> gmtEndTime_ = nullptr;
    std::shared_ptr<string> gmtStartTime_ = nullptr;
    std::shared_ptr<vector<string>> logs_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
