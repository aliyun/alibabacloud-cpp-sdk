// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBFEATUREREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBFEATUREREPORTSRESPONSEBODY_HPP_
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
  class ListFeatureConsistencyCheckJobFeatureReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobFeatureReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataPath, dataPath_);
      DARABONBA_PTR_TO_JSON(OssPath, ossPath_);
      DARABONBA_PTR_TO_JSON(ReportsOfFeatureDiff, reportsOfFeatureDiff_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobFeatureReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPath, dataPath_);
      DARABONBA_PTR_FROM_JSON(OssPath, ossPath_);
      DARABONBA_PTR_FROM_JSON(ReportsOfFeatureDiff, reportsOfFeatureDiff_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody() = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody(const ListFeatureConsistencyCheckJobFeatureReportsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody(ListFeatureConsistencyCheckJobFeatureReportsResponseBody &&) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobFeatureReportsResponseBody() = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody& operator=(const ListFeatureConsistencyCheckJobFeatureReportsResponseBody &) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBody& operator=(ListFeatureConsistencyCheckJobFeatureReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReportsOfFeatureDiff : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportsOfFeatureDiff& obj) { 
        DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
        DARABONBA_PTR_TO_JSON(LogItemId, logItemId_);
        DARABONBA_PTR_TO_JSON(LogRequestId, logRequestId_);
        DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
        DARABONBA_PTR_TO_JSON(OfflineValue, offlineValue_);
        DARABONBA_PTR_TO_JSON(OnlineValue, onlineValue_);
      };
      friend void from_json(const Darabonba::Json& j, ReportsOfFeatureDiff& obj) { 
        DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
        DARABONBA_PTR_FROM_JSON(LogItemId, logItemId_);
        DARABONBA_PTR_FROM_JSON(LogRequestId, logRequestId_);
        DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
        DARABONBA_PTR_FROM_JSON(OfflineValue, offlineValue_);
        DARABONBA_PTR_FROM_JSON(OnlineValue, onlineValue_);
      };
      ReportsOfFeatureDiff() = default ;
      ReportsOfFeatureDiff(const ReportsOfFeatureDiff &) = default ;
      ReportsOfFeatureDiff(ReportsOfFeatureDiff &&) = default ;
      ReportsOfFeatureDiff(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportsOfFeatureDiff() = default ;
      ReportsOfFeatureDiff& operator=(const ReportsOfFeatureDiff &) = default ;
      ReportsOfFeatureDiff& operator=(ReportsOfFeatureDiff &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->featureName_ == nullptr
        && this->logItemId_ == nullptr && this->logRequestId_ == nullptr && this->logUserId_ == nullptr && this->offlineValue_ == nullptr && this->onlineValue_ == nullptr; };
      // featureName Field Functions 
      bool hasFeatureName() const { return this->featureName_ != nullptr;};
      void deleteFeatureName() { this->featureName_ = nullptr;};
      inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
      inline ReportsOfFeatureDiff& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


      // logItemId Field Functions 
      bool hasLogItemId() const { return this->logItemId_ != nullptr;};
      void deleteLogItemId() { this->logItemId_ = nullptr;};
      inline string getLogItemId() const { DARABONBA_PTR_GET_DEFAULT(logItemId_, "") };
      inline ReportsOfFeatureDiff& setLogItemId(string logItemId) { DARABONBA_PTR_SET_VALUE(logItemId_, logItemId) };


      // logRequestId Field Functions 
      bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
      void deleteLogRequestId() { this->logRequestId_ = nullptr;};
      inline string getLogRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
      inline ReportsOfFeatureDiff& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


      // logUserId Field Functions 
      bool hasLogUserId() const { return this->logUserId_ != nullptr;};
      void deleteLogUserId() { this->logUserId_ = nullptr;};
      inline string getLogUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, "") };
      inline ReportsOfFeatureDiff& setLogUserId(string logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


      // offlineValue Field Functions 
      bool hasOfflineValue() const { return this->offlineValue_ != nullptr;};
      void deleteOfflineValue() { this->offlineValue_ = nullptr;};
      inline string getOfflineValue() const { DARABONBA_PTR_GET_DEFAULT(offlineValue_, "") };
      inline ReportsOfFeatureDiff& setOfflineValue(string offlineValue) { DARABONBA_PTR_SET_VALUE(offlineValue_, offlineValue) };


      // onlineValue Field Functions 
      bool hasOnlineValue() const { return this->onlineValue_ != nullptr;};
      void deleteOnlineValue() { this->onlineValue_ = nullptr;};
      inline string getOnlineValue() const { DARABONBA_PTR_GET_DEFAULT(onlineValue_, "") };
      inline ReportsOfFeatureDiff& setOnlineValue(string onlineValue) { DARABONBA_PTR_SET_VALUE(onlineValue_, onlineValue) };


    protected:
      shared_ptr<string> featureName_ {};
      shared_ptr<string> logItemId_ {};
      shared_ptr<string> logRequestId_ {};
      shared_ptr<string> logUserId_ {};
      shared_ptr<string> offlineValue_ {};
      shared_ptr<string> onlineValue_ {};
    };

    virtual bool empty() const override { return this->dataPath_ == nullptr
        && this->ossPath_ == nullptr && this->reportsOfFeatureDiff_ == nullptr && this->requestId_ == nullptr; };
    // dataPath Field Functions 
    bool hasDataPath() const { return this->dataPath_ != nullptr;};
    void deleteDataPath() { this->dataPath_ = nullptr;};
    inline string getDataPath() const { DARABONBA_PTR_GET_DEFAULT(dataPath_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBody& setDataPath(string dataPath) { DARABONBA_PTR_SET_VALUE(dataPath_, dataPath) };


    // ossPath Field Functions 
    bool hasOssPath() const { return this->ossPath_ != nullptr;};
    void deleteOssPath() { this->ossPath_ = nullptr;};
    inline string getOssPath() const { DARABONBA_PTR_GET_DEFAULT(ossPath_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBody& setOssPath(string ossPath) { DARABONBA_PTR_SET_VALUE(ossPath_, ossPath) };


    // reportsOfFeatureDiff Field Functions 
    bool hasReportsOfFeatureDiff() const { return this->reportsOfFeatureDiff_ != nullptr;};
    void deleteReportsOfFeatureDiff() { this->reportsOfFeatureDiff_ = nullptr;};
    inline const vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBody::ReportsOfFeatureDiff> & getReportsOfFeatureDiff() const { DARABONBA_PTR_GET_CONST(reportsOfFeatureDiff_, vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBody::ReportsOfFeatureDiff>) };
    inline vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBody::ReportsOfFeatureDiff> getReportsOfFeatureDiff() { DARABONBA_PTR_GET(reportsOfFeatureDiff_, vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBody::ReportsOfFeatureDiff>) };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBody& setReportsOfFeatureDiff(const vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBody::ReportsOfFeatureDiff> & reportsOfFeatureDiff) { DARABONBA_PTR_SET_VALUE(reportsOfFeatureDiff_, reportsOfFeatureDiff) };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBody& setReportsOfFeatureDiff(vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBody::ReportsOfFeatureDiff> && reportsOfFeatureDiff) { DARABONBA_PTR_SET_RVALUE(reportsOfFeatureDiff_, reportsOfFeatureDiff) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> dataPath_ {};
    shared_ptr<string> ossPath_ {};
    shared_ptr<vector<ListFeatureConsistencyCheckJobFeatureReportsResponseBody::ReportsOfFeatureDiff>> reportsOfFeatureDiff_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
