// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMODELFEATUREAVAILABLEFEATURESRESPONSEBODYAVALIABLEFEATURES_HPP_
#define ALIBABACLOUD_MODELS_LISTMODELFEATUREAVAILABLEFEATURESRESPONSEBODYAVALIABLEFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures() = default ;
    ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures(const ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures &) = default ;
    ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures(ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures &&) = default ;
    ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures() = default ;
    ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures& operator=(const ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures &) = default ;
    ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures& operator=(ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->sourceName_ != nullptr && this->sourceType_ != nullptr && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
