// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWFIELDRELATIONSHIPSRESPONSEBODYRELATIONSHIPS_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWFIELDRELATIONSHIPSRESPONSEBODYRELATIONSHIPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureViewFieldRelationshipsResponseBodyRelationships : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewFieldRelationshipsResponseBodyRelationships& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(Models, models_);
      DARABONBA_PTR_TO_JSON(OfflineTableName, offlineTableName_);
      DARABONBA_PTR_TO_JSON(OnlineTableName, onlineTableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewFieldRelationshipsResponseBodyRelationships& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(Models, models_);
      DARABONBA_PTR_FROM_JSON(OfflineTableName, offlineTableName_);
      DARABONBA_PTR_FROM_JSON(OnlineTableName, onlineTableName_);
    };
    ListFeatureViewFieldRelationshipsResponseBodyRelationships() = default ;
    ListFeatureViewFieldRelationshipsResponseBodyRelationships(const ListFeatureViewFieldRelationshipsResponseBodyRelationships &) = default ;
    ListFeatureViewFieldRelationshipsResponseBodyRelationships(ListFeatureViewFieldRelationshipsResponseBodyRelationships &&) = default ;
    ListFeatureViewFieldRelationshipsResponseBodyRelationships(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewFieldRelationshipsResponseBodyRelationships() = default ;
    ListFeatureViewFieldRelationshipsResponseBodyRelationships& operator=(const ListFeatureViewFieldRelationshipsResponseBodyRelationships &) = default ;
    ListFeatureViewFieldRelationshipsResponseBodyRelationships& operator=(ListFeatureViewFieldRelationshipsResponseBodyRelationships &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureName_ == nullptr
        && return this->models_ == nullptr && return this->offlineTableName_ == nullptr && return this->onlineTableName_ == nullptr; };
    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string featureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline ListFeatureViewFieldRelationshipsResponseBodyRelationships& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<Models::ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels> & models() const { DARABONBA_PTR_GET_CONST(models_, vector<Models::ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels>) };
    inline vector<Models::ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels> models() { DARABONBA_PTR_GET(models_, vector<Models::ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels>) };
    inline ListFeatureViewFieldRelationshipsResponseBodyRelationships& setModels(const vector<Models::ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline ListFeatureViewFieldRelationshipsResponseBodyRelationships& setModels(vector<Models::ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // offlineTableName Field Functions 
    bool hasOfflineTableName() const { return this->offlineTableName_ != nullptr;};
    void deleteOfflineTableName() { this->offlineTableName_ = nullptr;};
    inline string offlineTableName() const { DARABONBA_PTR_GET_DEFAULT(offlineTableName_, "") };
    inline ListFeatureViewFieldRelationshipsResponseBodyRelationships& setOfflineTableName(string offlineTableName) { DARABONBA_PTR_SET_VALUE(offlineTableName_, offlineTableName) };


    // onlineTableName Field Functions 
    bool hasOnlineTableName() const { return this->onlineTableName_ != nullptr;};
    void deleteOnlineTableName() { this->onlineTableName_ = nullptr;};
    inline string onlineTableName() const { DARABONBA_PTR_GET_DEFAULT(onlineTableName_, "") };
    inline ListFeatureViewFieldRelationshipsResponseBodyRelationships& setOnlineTableName(string onlineTableName) { DARABONBA_PTR_SET_VALUE(onlineTableName_, onlineTableName) };


  protected:
    std::shared_ptr<string> featureName_ = nullptr;
    std::shared_ptr<vector<Models::ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels>> models_ = nullptr;
    std::shared_ptr<string> offlineTableName_ = nullptr;
    std::shared_ptr<string> onlineTableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
