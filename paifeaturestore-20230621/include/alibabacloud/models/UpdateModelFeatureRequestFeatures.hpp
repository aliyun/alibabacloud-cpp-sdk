// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELFEATUREREQUESTFEATURES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELFEATUREREQUESTFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class UpdateModelFeatureRequestFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelFeatureRequestFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelFeatureRequestFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateModelFeatureRequestFeatures() = default ;
    UpdateModelFeatureRequestFeatures(const UpdateModelFeatureRequestFeatures &) = default ;
    UpdateModelFeatureRequestFeatures(UpdateModelFeatureRequestFeatures &&) = default ;
    UpdateModelFeatureRequestFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelFeatureRequestFeatures() = default ;
    UpdateModelFeatureRequestFeatures& operator=(const UpdateModelFeatureRequestFeatures &) = default ;
    UpdateModelFeatureRequestFeatures& operator=(UpdateModelFeatureRequestFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->featureViewId_ != nullptr && this->name_ != nullptr && this->type_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline UpdateModelFeatureRequestFeatures& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // featureViewId Field Functions 
    bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
    void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
    inline string featureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
    inline UpdateModelFeatureRequestFeatures& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateModelFeatureRequestFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateModelFeatureRequestFeatures& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> aliasName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> featureViewId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
