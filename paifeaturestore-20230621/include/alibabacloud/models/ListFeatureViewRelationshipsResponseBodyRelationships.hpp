// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEATUREVIEWRELATIONSHIPSRESPONSEBODYRELATIONSHIPS_HPP_
#define ALIBABACLOUD_MODELS_LISTFEATUREVIEWRELATIONSHIPSRESPONSEBODYRELATIONSHIPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFeatureViewRelationshipsResponseBodyRelationshipsModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListFeatureViewRelationshipsResponseBodyRelationships : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFeatureViewRelationshipsResponseBodyRelationships& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureViewName, featureViewName_);
      DARABONBA_PTR_TO_JSON(Models, models_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFeatureViewRelationshipsResponseBodyRelationships& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureViewName, featureViewName_);
      DARABONBA_PTR_FROM_JSON(Models, models_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    ListFeatureViewRelationshipsResponseBodyRelationships() = default ;
    ListFeatureViewRelationshipsResponseBodyRelationships(const ListFeatureViewRelationshipsResponseBodyRelationships &) = default ;
    ListFeatureViewRelationshipsResponseBodyRelationships(ListFeatureViewRelationshipsResponseBodyRelationships &&) = default ;
    ListFeatureViewRelationshipsResponseBodyRelationships(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFeatureViewRelationshipsResponseBodyRelationships() = default ;
    ListFeatureViewRelationshipsResponseBodyRelationships& operator=(const ListFeatureViewRelationshipsResponseBodyRelationships &) = default ;
    ListFeatureViewRelationshipsResponseBodyRelationships& operator=(ListFeatureViewRelationshipsResponseBodyRelationships &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureViewName_ != nullptr
        && this->models_ != nullptr && this->projectName_ != nullptr; };
    // featureViewName Field Functions 
    bool hasFeatureViewName() const { return this->featureViewName_ != nullptr;};
    void deleteFeatureViewName() { this->featureViewName_ = nullptr;};
    inline string featureViewName() const { DARABONBA_PTR_GET_DEFAULT(featureViewName_, "") };
    inline ListFeatureViewRelationshipsResponseBodyRelationships& setFeatureViewName(string featureViewName) { DARABONBA_PTR_SET_VALUE(featureViewName_, featureViewName) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<Models::ListFeatureViewRelationshipsResponseBodyRelationshipsModels> & models() const { DARABONBA_PTR_GET_CONST(models_, vector<Models::ListFeatureViewRelationshipsResponseBodyRelationshipsModels>) };
    inline vector<Models::ListFeatureViewRelationshipsResponseBodyRelationshipsModels> models() { DARABONBA_PTR_GET(models_, vector<Models::ListFeatureViewRelationshipsResponseBodyRelationshipsModels>) };
    inline ListFeatureViewRelationshipsResponseBodyRelationships& setModels(const vector<Models::ListFeatureViewRelationshipsResponseBodyRelationshipsModels> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline ListFeatureViewRelationshipsResponseBodyRelationships& setModels(vector<Models::ListFeatureViewRelationshipsResponseBodyRelationshipsModels> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListFeatureViewRelationshipsResponseBodyRelationships& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    std::shared_ptr<string> featureViewName_ = nullptr;
    std::shared_ptr<vector<Models::ListFeatureViewRelationshipsResponseBodyRelationshipsModels>> models_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
