// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTFEATURESRESPONSEBODYFEATURES_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTFEATURESRESPONSEBODYFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListProjectFeaturesResponseBodyFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectFeaturesResponseBodyFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(AliasNames, aliasNames_);
      DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_TO_JSON(FeatureViewName, featureViewName_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(ModelFeatureCount, modelFeatureCount_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectFeaturesResponseBodyFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasNames, aliasNames_);
      DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_FROM_JSON(FeatureViewName, featureViewName_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(ModelFeatureCount, modelFeatureCount_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListProjectFeaturesResponseBodyFeatures() = default ;
    ListProjectFeaturesResponseBodyFeatures(const ListProjectFeaturesResponseBodyFeatures &) = default ;
    ListProjectFeaturesResponseBodyFeatures(ListProjectFeaturesResponseBodyFeatures &&) = default ;
    ListProjectFeaturesResponseBodyFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectFeaturesResponseBodyFeatures() = default ;
    ListProjectFeaturesResponseBodyFeatures& operator=(const ListProjectFeaturesResponseBodyFeatures &) = default ;
    ListProjectFeaturesResponseBodyFeatures& operator=(ListProjectFeaturesResponseBodyFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasNames_ == nullptr
        && return this->featureViewId_ == nullptr && return this->featureViewName_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->modelFeatureCount_ == nullptr && return this->name_ == nullptr
        && return this->owner_ == nullptr && return this->type_ == nullptr; };
    // aliasNames Field Functions 
    bool hasAliasNames() const { return this->aliasNames_ != nullptr;};
    void deleteAliasNames() { this->aliasNames_ = nullptr;};
    inline string aliasNames() const { DARABONBA_PTR_GET_DEFAULT(aliasNames_, "") };
    inline ListProjectFeaturesResponseBodyFeatures& setAliasNames(string aliasNames) { DARABONBA_PTR_SET_VALUE(aliasNames_, aliasNames) };


    // featureViewId Field Functions 
    bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
    void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
    inline string featureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
    inline ListProjectFeaturesResponseBodyFeatures& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


    // featureViewName Field Functions 
    bool hasFeatureViewName() const { return this->featureViewName_ != nullptr;};
    void deleteFeatureViewName() { this->featureViewName_ = nullptr;};
    inline string featureViewName() const { DARABONBA_PTR_GET_DEFAULT(featureViewName_, "") };
    inline ListProjectFeaturesResponseBodyFeatures& setFeatureViewName(string featureViewName) { DARABONBA_PTR_SET_VALUE(featureViewName_, featureViewName) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListProjectFeaturesResponseBodyFeatures& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // modelFeatureCount Field Functions 
    bool hasModelFeatureCount() const { return this->modelFeatureCount_ != nullptr;};
    void deleteModelFeatureCount() { this->modelFeatureCount_ = nullptr;};
    inline int32_t modelFeatureCount() const { DARABONBA_PTR_GET_DEFAULT(modelFeatureCount_, 0) };
    inline ListProjectFeaturesResponseBodyFeatures& setModelFeatureCount(int32_t modelFeatureCount) { DARABONBA_PTR_SET_VALUE(modelFeatureCount_, modelFeatureCount) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListProjectFeaturesResponseBodyFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListProjectFeaturesResponseBodyFeatures& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectFeaturesResponseBodyFeatures& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> aliasNames_ = nullptr;
    std::shared_ptr<string> featureViewId_ = nullptr;
    std::shared_ptr<string> featureViewName_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<int32_t> modelFeatureCount_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
