// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDETECTIONRULESRESPONSEBODYDETECTIONRULESENTITYMAPPINGSNORMALIZATIONFIELDMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTDETECTIONRULESRESPONSEBODYDETECTIONRULESENTITYMAPPINGSNORMALIZATIONFIELDMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings& obj) { 
      DARABONBA_PTR_TO_JSON(MappingFieldName, mappingFieldName_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldName, normalizationFieldName_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldType, normalizationFieldType_);
    };
    friend void from_json(const Darabonba::Json& j, ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(MappingFieldName, mappingFieldName_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldName, normalizationFieldName_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldType, normalizationFieldType_);
    };
    ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings() = default ;
    ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings(const ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings &) = default ;
    ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings(ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings &&) = default ;
    ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings() = default ;
    ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings& operator=(const ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings &) = default ;
    ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings& operator=(ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mappingFieldName_ == nullptr
        && return this->normalizationFieldName_ == nullptr && return this->normalizationFieldType_ == nullptr; };
    // mappingFieldName Field Functions 
    bool hasMappingFieldName() const { return this->mappingFieldName_ != nullptr;};
    void deleteMappingFieldName() { this->mappingFieldName_ = nullptr;};
    inline string mappingFieldName() const { DARABONBA_PTR_GET_DEFAULT(mappingFieldName_, "") };
    inline ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings& setMappingFieldName(string mappingFieldName) { DARABONBA_PTR_SET_VALUE(mappingFieldName_, mappingFieldName) };


    // normalizationFieldName Field Functions 
    bool hasNormalizationFieldName() const { return this->normalizationFieldName_ != nullptr;};
    void deleteNormalizationFieldName() { this->normalizationFieldName_ = nullptr;};
    inline string normalizationFieldName() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldName_, "") };
    inline ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings& setNormalizationFieldName(string normalizationFieldName) { DARABONBA_PTR_SET_VALUE(normalizationFieldName_, normalizationFieldName) };


    // normalizationFieldType Field Functions 
    bool hasNormalizationFieldType() const { return this->normalizationFieldType_ != nullptr;};
    void deleteNormalizationFieldType() { this->normalizationFieldType_ = nullptr;};
    inline string normalizationFieldType() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldType_, "") };
    inline ListDetectionRulesResponseBodyDetectionRulesEntityMappingsNormalizationFieldMappings& setNormalizationFieldType(string normalizationFieldType) { DARABONBA_PTR_SET_VALUE(normalizationFieldType_, normalizationFieldType) };


  protected:
    std::shared_ptr<string> mappingFieldName_ = nullptr;
    std::shared_ptr<string> normalizationFieldName_ = nullptr;
    std::shared_ptr<string> normalizationFieldType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
