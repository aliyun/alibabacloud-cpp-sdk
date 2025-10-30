// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATARESOURCEMETADATARESOURCEPROPERTYMETADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODYEVALUATIONMETADATAMETADATARESOURCEMETADATARESOURCEPROPERTYMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_TO_JSON(PropertyType, propertyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(PropertyName, propertyName_);
      DARABONBA_PTR_FROM_JSON(PropertyType, propertyType_);
    };
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata &&) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata() = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata& operator=(const ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata &) = default ;
    ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata& operator=(ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->propertyName_ == nullptr && return this->propertyType_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // propertyName Field Functions 
    bool hasPropertyName() const { return this->propertyName_ != nullptr;};
    void deletePropertyName() { this->propertyName_ = nullptr;};
    inline string propertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


    // propertyType Field Functions 
    bool hasPropertyType() const { return this->propertyType_ != nullptr;};
    void deletePropertyType() { this->propertyType_ = nullptr;};
    inline string propertyType() const { DARABONBA_PTR_GET_DEFAULT(propertyType_, "") };
    inline ListEvaluationMetadataResponseBodyEvaluationMetadataMetadataResourceMetadataResourcePropertyMetadata& setPropertyType(string propertyType) { DARABONBA_PTR_SET_VALUE(propertyType_, propertyType) };


  protected:
    // The display name of the resource property.
    std::shared_ptr<string> displayName_ = nullptr;
    // The name of the resource property.
    std::shared_ptr<string> propertyName_ = nullptr;
    // The type of the resource property.
    std::shared_ptr<string> propertyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
