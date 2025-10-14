// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNORMALIZATIONSCHEMARESPONSEBODYNORMALIZATIONSCHEMANORMALIZATIONFIELDS_HPP_
#define ALIBABACLOUD_MODELS_GETNORMALIZATIONSCHEMARESPONSEBODYNORMALIZATIONSCHEMANORMALIZATIONFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldExample, normalizationFieldExample_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldName, normalizationFieldName_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldRequirement, normalizationFieldRequirement_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldReserved, normalizationFieldReserved_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldType, normalizationFieldType_);
    };
    friend void from_json(const Darabonba::Json& j, GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldExample, normalizationFieldExample_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldName, normalizationFieldName_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldRequirement, normalizationFieldRequirement_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldReserved, normalizationFieldReserved_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldType, normalizationFieldType_);
    };
    GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields() = default ;
    GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields(const GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields &) = default ;
    GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields(GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields &&) = default ;
    GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields() = default ;
    GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields& operator=(const GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields &) = default ;
    GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields& operator=(GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalizationFieldDescription_ == nullptr
        && return this->normalizationFieldExample_ == nullptr && return this->normalizationFieldName_ == nullptr && return this->normalizationFieldRequirement_ == nullptr && return this->normalizationFieldReserved_ == nullptr && return this->normalizationFieldType_ == nullptr; };
    // normalizationFieldDescription Field Functions 
    bool hasNormalizationFieldDescription() const { return this->normalizationFieldDescription_ != nullptr;};
    void deleteNormalizationFieldDescription() { this->normalizationFieldDescription_ = nullptr;};
    inline string normalizationFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldDescription_, "") };
    inline GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields& setNormalizationFieldDescription(string normalizationFieldDescription) { DARABONBA_PTR_SET_VALUE(normalizationFieldDescription_, normalizationFieldDescription) };


    // normalizationFieldExample Field Functions 
    bool hasNormalizationFieldExample() const { return this->normalizationFieldExample_ != nullptr;};
    void deleteNormalizationFieldExample() { this->normalizationFieldExample_ = nullptr;};
    inline string normalizationFieldExample() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldExample_, "") };
    inline GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields& setNormalizationFieldExample(string normalizationFieldExample) { DARABONBA_PTR_SET_VALUE(normalizationFieldExample_, normalizationFieldExample) };


    // normalizationFieldName Field Functions 
    bool hasNormalizationFieldName() const { return this->normalizationFieldName_ != nullptr;};
    void deleteNormalizationFieldName() { this->normalizationFieldName_ = nullptr;};
    inline string normalizationFieldName() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldName_, "") };
    inline GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields& setNormalizationFieldName(string normalizationFieldName) { DARABONBA_PTR_SET_VALUE(normalizationFieldName_, normalizationFieldName) };


    // normalizationFieldRequirement Field Functions 
    bool hasNormalizationFieldRequirement() const { return this->normalizationFieldRequirement_ != nullptr;};
    void deleteNormalizationFieldRequirement() { this->normalizationFieldRequirement_ = nullptr;};
    inline bool normalizationFieldRequirement() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldRequirement_, false) };
    inline GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields& setNormalizationFieldRequirement(bool normalizationFieldRequirement) { DARABONBA_PTR_SET_VALUE(normalizationFieldRequirement_, normalizationFieldRequirement) };


    // normalizationFieldReserved Field Functions 
    bool hasNormalizationFieldReserved() const { return this->normalizationFieldReserved_ != nullptr;};
    void deleteNormalizationFieldReserved() { this->normalizationFieldReserved_ = nullptr;};
    inline bool normalizationFieldReserved() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldReserved_, false) };
    inline GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields& setNormalizationFieldReserved(bool normalizationFieldReserved) { DARABONBA_PTR_SET_VALUE(normalizationFieldReserved_, normalizationFieldReserved) };


    // normalizationFieldType Field Functions 
    bool hasNormalizationFieldType() const { return this->normalizationFieldType_ != nullptr;};
    void deleteNormalizationFieldType() { this->normalizationFieldType_ = nullptr;};
    inline string normalizationFieldType() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldType_, "") };
    inline GetNormalizationSchemaResponseBodyNormalizationSchemaNormalizationFields& setNormalizationFieldType(string normalizationFieldType) { DARABONBA_PTR_SET_VALUE(normalizationFieldType_, normalizationFieldType) };


  protected:
    std::shared_ptr<string> normalizationFieldDescription_ = nullptr;
    std::shared_ptr<string> normalizationFieldExample_ = nullptr;
    std::shared_ptr<string> normalizationFieldName_ = nullptr;
    std::shared_ptr<bool> normalizationFieldRequirement_ = nullptr;
    std::shared_ptr<bool> normalizationFieldReserved_ = nullptr;
    std::shared_ptr<string> normalizationFieldType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
