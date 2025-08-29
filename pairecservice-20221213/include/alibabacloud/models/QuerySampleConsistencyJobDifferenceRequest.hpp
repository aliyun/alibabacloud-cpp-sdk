// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSAMPLECONSISTENCYJOBDIFFERENCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QuerySampleConsistencyJobDifferenceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySampleConsistencyJobDifferenceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(FeatureType, featureType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySampleConsistencyJobDifferenceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(FeatureType, featureType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    QuerySampleConsistencyJobDifferenceRequest() = default ;
    QuerySampleConsistencyJobDifferenceRequest(const QuerySampleConsistencyJobDifferenceRequest &) = default ;
    QuerySampleConsistencyJobDifferenceRequest(QuerySampleConsistencyJobDifferenceRequest &&) = default ;
    QuerySampleConsistencyJobDifferenceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySampleConsistencyJobDifferenceRequest() = default ;
    QuerySampleConsistencyJobDifferenceRequest& operator=(const QuerySampleConsistencyJobDifferenceRequest &) = default ;
    QuerySampleConsistencyJobDifferenceRequest& operator=(QuerySampleConsistencyJobDifferenceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureName_ != nullptr
        && this->featureType_ != nullptr && this->instanceId_ != nullptr; };
    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline QuerySampleConsistencyJobDifferenceRequest& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // featureType Field Functions 
    bool hasFeatureType() const { return this->featureType_ != nullptr;};
    void deleteFeatureType() { this->featureType_ = nullptr;};
    inline string featureType() const { DARABONBA_PTR_GET_DEFAULT(featureType_, "") };
    inline QuerySampleConsistencyJobDifferenceRequest& setFeatureType(string featureType) { DARABONBA_PTR_SET_VALUE(featureType_, featureType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QuerySampleConsistencyJobDifferenceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> featureName_ = nullptr;
    std::shared_ptr<string> featureType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
