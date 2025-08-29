// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBFEATUREREPORTSRESPONSEBODYREPORTSOFFEATUREDIFF_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATURECONSISTENCYCHECKJOBFEATUREREPORTSRESPONSEBODYREPORTSOFFEATUREDIFF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(LogItemId, logItemId_);
      DARABONBA_PTR_TO_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_TO_JSON(OfflineValue, offlineValue_);
      DARABONBA_PTR_TO_JSON(OnlineValue, onlineValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(LogItemId, logItemId_);
      DARABONBA_PTR_FROM_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_FROM_JSON(OfflineValue, offlineValue_);
      DARABONBA_PTR_FROM_JSON(OnlineValue, onlineValue_);
    };
    ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff() = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff(const ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff &) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff(ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff &&) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff() = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff& operator=(const ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff &) = default ;
    ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff& operator=(ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureName_ != nullptr
        && this->logItemId_ != nullptr && this->logRequestId_ != nullptr && this->logUserId_ != nullptr && this->offlineValue_ != nullptr && this->onlineValue_ != nullptr; };
    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // logItemId Field Functions 
    bool hasLogItemId() const { return this->logItemId_ != nullptr;};
    void deleteLogItemId() { this->logItemId_ = nullptr;};
    inline string logItemId() const { DARABONBA_PTR_GET_DEFAULT(logItemId_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff& setLogItemId(string logItemId) { DARABONBA_PTR_SET_VALUE(logItemId_, logItemId) };


    // logRequestId Field Functions 
    bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
    void deleteLogRequestId() { this->logRequestId_ = nullptr;};
    inline string logRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline string logUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff& setLogUserId(string logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // offlineValue Field Functions 
    bool hasOfflineValue() const { return this->offlineValue_ != nullptr;};
    void deleteOfflineValue() { this->offlineValue_ = nullptr;};
    inline string offlineValue() const { DARABONBA_PTR_GET_DEFAULT(offlineValue_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff& setOfflineValue(string offlineValue) { DARABONBA_PTR_SET_VALUE(offlineValue_, offlineValue) };


    // onlineValue Field Functions 
    bool hasOnlineValue() const { return this->onlineValue_ != nullptr;};
    void deleteOnlineValue() { this->onlineValue_ = nullptr;};
    inline string onlineValue() const { DARABONBA_PTR_GET_DEFAULT(onlineValue_, "") };
    inline ListFeatureConsistencyCheckJobFeatureReportsResponseBodyReportsOfFeatureDiff& setOnlineValue(string onlineValue) { DARABONBA_PTR_SET_VALUE(onlineValue_, onlineValue) };


  protected:
    std::shared_ptr<string> featureName_ = nullptr;
    std::shared_ptr<string> logItemId_ = nullptr;
    std::shared_ptr<string> logRequestId_ = nullptr;
    std::shared_ptr<string> logUserId_ = nullptr;
    std::shared_ptr<string> offlineValue_ = nullptr;
    std::shared_ptr<string> onlineValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
