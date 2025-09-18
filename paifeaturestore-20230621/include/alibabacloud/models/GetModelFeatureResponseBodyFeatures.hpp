// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODYFEATURES_HPP_
#define ALIBABACLOUD_MODELS_GETMODELFEATURERESPONSEBODYFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class GetModelFeatureResponseBodyFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelFeatureResponseBodyFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_TO_JSON(FeatureViewName, featureViewName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelFeatureResponseBodyFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(FeatureViewId, featureViewId_);
      DARABONBA_PTR_FROM_JSON(FeatureViewName, featureViewName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetModelFeatureResponseBodyFeatures() = default ;
    GetModelFeatureResponseBodyFeatures(const GetModelFeatureResponseBodyFeatures &) = default ;
    GetModelFeatureResponseBodyFeatures(GetModelFeatureResponseBodyFeatures &&) = default ;
    GetModelFeatureResponseBodyFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelFeatureResponseBodyFeatures() = default ;
    GetModelFeatureResponseBodyFeatures& operator=(const GetModelFeatureResponseBodyFeatures &) = default ;
    GetModelFeatureResponseBodyFeatures& operator=(GetModelFeatureResponseBodyFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->featureViewId_ != nullptr && this->featureViewName_ != nullptr && this->name_ != nullptr && this->type_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline GetModelFeatureResponseBodyFeatures& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // featureViewId Field Functions 
    bool hasFeatureViewId() const { return this->featureViewId_ != nullptr;};
    void deleteFeatureViewId() { this->featureViewId_ = nullptr;};
    inline string featureViewId() const { DARABONBA_PTR_GET_DEFAULT(featureViewId_, "") };
    inline GetModelFeatureResponseBodyFeatures& setFeatureViewId(string featureViewId) { DARABONBA_PTR_SET_VALUE(featureViewId_, featureViewId) };


    // featureViewName Field Functions 
    bool hasFeatureViewName() const { return this->featureViewName_ != nullptr;};
    void deleteFeatureViewName() { this->featureViewName_ = nullptr;};
    inline string featureViewName() const { DARABONBA_PTR_GET_DEFAULT(featureViewName_, "") };
    inline GetModelFeatureResponseBodyFeatures& setFeatureViewName(string featureViewName) { DARABONBA_PTR_SET_VALUE(featureViewName_, featureViewName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetModelFeatureResponseBodyFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetModelFeatureResponseBodyFeatures& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> aliasName_ = nullptr;
    std::shared_ptr<string> featureViewId_ = nullptr;
    std::shared_ptr<string> featureViewName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
