// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTFEATUREVIEWSRESPONSEBODYFEATUREVIEWS_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTFEATUREVIEWSRESPONSEBODYFEATUREVIEWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectFeatureViewsResponseBodyFeatureViewsFeatures.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListProjectFeatureViewsResponseBodyFeatureViews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectFeatureViewsResponseBodyFeatureViews& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_TO_JSON(Features, features_);
      DARABONBA_PTR_TO_JSON(JoinId, joinId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentJoinId, parentJoinId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectFeatureViewsResponseBodyFeatureViews& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_FROM_JSON(Features, features_);
      DARABONBA_PTR_FROM_JSON(JoinId, joinId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentJoinId, parentJoinId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListProjectFeatureViewsResponseBodyFeatureViews() = default ;
    ListProjectFeatureViewsResponseBodyFeatureViews(const ListProjectFeatureViewsResponseBodyFeatureViews &) = default ;
    ListProjectFeatureViewsResponseBodyFeatureViews(ListProjectFeatureViewsResponseBodyFeatureViews &&) = default ;
    ListProjectFeatureViewsResponseBodyFeatureViews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectFeatureViewsResponseBodyFeatureViews() = default ;
    ListProjectFeatureViewsResponseBodyFeatureViews& operator=(const ListProjectFeatureViewsResponseBodyFeatureViews &) = default ;
    ListProjectFeatureViewsResponseBodyFeatureViews& operator=(ListProjectFeatureViewsResponseBodyFeatureViews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureViewId_ == nullptr
        && return this->features_ == nullptr && return this->joinId_ == nullptr && return this->name_ == nullptr && return this->parentJoinId_ == nullptr && return this->type_ == nullptr; };
    // featureViewId Field Functions 
    bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
    void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
    inline string featureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
    inline ListProjectFeatureViewsResponseBodyFeatureViews& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline const vector<Models::ListProjectFeatureViewsResponseBodyFeatureViewsFeatures> & features() const { DARABONBA_PTR_GET_CONST(features_, vector<Models::ListProjectFeatureViewsResponseBodyFeatureViewsFeatures>) };
    inline vector<Models::ListProjectFeatureViewsResponseBodyFeatureViewsFeatures> features() { DARABONBA_PTR_GET(features_, vector<Models::ListProjectFeatureViewsResponseBodyFeatureViewsFeatures>) };
    inline ListProjectFeatureViewsResponseBodyFeatureViews& setFeatures(const vector<Models::ListProjectFeatureViewsResponseBodyFeatureViewsFeatures> & features) { DARABONBA_PTR_SET_VALUE(features_, features) };
    inline ListProjectFeatureViewsResponseBodyFeatureViews& setFeatures(vector<Models::ListProjectFeatureViewsResponseBodyFeatureViewsFeatures> && features) { DARABONBA_PTR_SET_RVALUE(features_, features) };


    // joinId Field Functions 
    bool hasJoinId() const { return this->joinId_ != nullptr;};
    void deleteJoinId() { this->joinId_ = nullptr;};
    inline string joinId() const { DARABONBA_PTR_GET_DEFAULT(joinId_, "") };
    inline ListProjectFeatureViewsResponseBodyFeatureViews& setJoinId(string joinId) { DARABONBA_PTR_SET_VALUE(joinId_, joinId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectFeatureViewsResponseBodyFeatureViews& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentJoinId Field Functions 
    bool hasParentJoinId() const { return this->parentJoinId_ != nullptr;};
    void deleteParentJoinId() { this->parentJoinId_ = nullptr;};
    inline string parentJoinId() const { DARABONBA_PTR_GET_DEFAULT(parentJoinId_, "") };
    inline ListProjectFeatureViewsResponseBodyFeatureViews& setParentJoinId(string parentJoinId) { DARABONBA_PTR_SET_VALUE(parentJoinId_, parentJoinId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectFeatureViewsResponseBodyFeatureViews& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> featureViewId_ = nullptr;
    std::shared_ptr<vector<Models::ListProjectFeatureViewsResponseBodyFeatureViewsFeatures>> features_ = nullptr;
    std::shared_ptr<string> joinId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parentJoinId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
