// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONFIELDSRESPONSEBODYNORMALIZATIONFIELDS_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONFIELDSRESPONSEBODYNORMALIZATIONFIELDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationFieldsResponseBodyNormalizationFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationFieldsResponseBodyNormalizationFields& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldExample, normalizationFieldExample_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldName, normalizationFieldName_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldRequirement, normalizationFieldRequirement_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldReserved, normalizationFieldReserved_);
      DARABONBA_PTR_TO_JSON(NormalizationFieldType, normalizationFieldType_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationFieldsResponseBodyNormalizationFields& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldDescription, normalizationFieldDescription_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldExample, normalizationFieldExample_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldName, normalizationFieldName_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldRequirement, normalizationFieldRequirement_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldReserved, normalizationFieldReserved_);
      DARABONBA_PTR_FROM_JSON(NormalizationFieldType, normalizationFieldType_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
    };
    ListNormalizationFieldsResponseBodyNormalizationFields() = default ;
    ListNormalizationFieldsResponseBodyNormalizationFields(const ListNormalizationFieldsResponseBodyNormalizationFields &) = default ;
    ListNormalizationFieldsResponseBodyNormalizationFields(ListNormalizationFieldsResponseBodyNormalizationFields &&) = default ;
    ListNormalizationFieldsResponseBodyNormalizationFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationFieldsResponseBodyNormalizationFields() = default ;
    ListNormalizationFieldsResponseBodyNormalizationFields& operator=(const ListNormalizationFieldsResponseBodyNormalizationFields &) = default ;
    ListNormalizationFieldsResponseBodyNormalizationFields& operator=(ListNormalizationFieldsResponseBodyNormalizationFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalizationCategoryId_ == nullptr
        && return this->normalizationFieldDescription_ == nullptr && return this->normalizationFieldExample_ == nullptr && return this->normalizationFieldName_ == nullptr && return this->normalizationFieldRequirement_ == nullptr && return this->normalizationFieldReserved_ == nullptr
        && return this->normalizationFieldType_ == nullptr && return this->normalizationSchemaId_ == nullptr; };
    // normalizationCategoryId Field Functions 
    bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
    void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
    inline string normalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
    inline ListNormalizationFieldsResponseBodyNormalizationFields& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


    // normalizationFieldDescription Field Functions 
    bool hasNormalizationFieldDescription() const { return this->normalizationFieldDescription_ != nullptr;};
    void deleteNormalizationFieldDescription() { this->normalizationFieldDescription_ = nullptr;};
    inline string normalizationFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldDescription_, "") };
    inline ListNormalizationFieldsResponseBodyNormalizationFields& setNormalizationFieldDescription(string normalizationFieldDescription) { DARABONBA_PTR_SET_VALUE(normalizationFieldDescription_, normalizationFieldDescription) };


    // normalizationFieldExample Field Functions 
    bool hasNormalizationFieldExample() const { return this->normalizationFieldExample_ != nullptr;};
    void deleteNormalizationFieldExample() { this->normalizationFieldExample_ = nullptr;};
    inline string normalizationFieldExample() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldExample_, "") };
    inline ListNormalizationFieldsResponseBodyNormalizationFields& setNormalizationFieldExample(string normalizationFieldExample) { DARABONBA_PTR_SET_VALUE(normalizationFieldExample_, normalizationFieldExample) };


    // normalizationFieldName Field Functions 
    bool hasNormalizationFieldName() const { return this->normalizationFieldName_ != nullptr;};
    void deleteNormalizationFieldName() { this->normalizationFieldName_ = nullptr;};
    inline string normalizationFieldName() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldName_, "") };
    inline ListNormalizationFieldsResponseBodyNormalizationFields& setNormalizationFieldName(string normalizationFieldName) { DARABONBA_PTR_SET_VALUE(normalizationFieldName_, normalizationFieldName) };


    // normalizationFieldRequirement Field Functions 
    bool hasNormalizationFieldRequirement() const { return this->normalizationFieldRequirement_ != nullptr;};
    void deleteNormalizationFieldRequirement() { this->normalizationFieldRequirement_ = nullptr;};
    inline bool normalizationFieldRequirement() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldRequirement_, false) };
    inline ListNormalizationFieldsResponseBodyNormalizationFields& setNormalizationFieldRequirement(bool normalizationFieldRequirement) { DARABONBA_PTR_SET_VALUE(normalizationFieldRequirement_, normalizationFieldRequirement) };


    // normalizationFieldReserved Field Functions 
    bool hasNormalizationFieldReserved() const { return this->normalizationFieldReserved_ != nullptr;};
    void deleteNormalizationFieldReserved() { this->normalizationFieldReserved_ = nullptr;};
    inline bool normalizationFieldReserved() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldReserved_, false) };
    inline ListNormalizationFieldsResponseBodyNormalizationFields& setNormalizationFieldReserved(bool normalizationFieldReserved) { DARABONBA_PTR_SET_VALUE(normalizationFieldReserved_, normalizationFieldReserved) };


    // normalizationFieldType Field Functions 
    bool hasNormalizationFieldType() const { return this->normalizationFieldType_ != nullptr;};
    void deleteNormalizationFieldType() { this->normalizationFieldType_ = nullptr;};
    inline string normalizationFieldType() const { DARABONBA_PTR_GET_DEFAULT(normalizationFieldType_, "") };
    inline ListNormalizationFieldsResponseBodyNormalizationFields& setNormalizationFieldType(string normalizationFieldType) { DARABONBA_PTR_SET_VALUE(normalizationFieldType_, normalizationFieldType) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string normalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline ListNormalizationFieldsResponseBodyNormalizationFields& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


  protected:
    std::shared_ptr<string> normalizationCategoryId_ = nullptr;
    std::shared_ptr<string> normalizationFieldDescription_ = nullptr;
    std::shared_ptr<string> normalizationFieldExample_ = nullptr;
    std::shared_ptr<string> normalizationFieldName_ = nullptr;
    std::shared_ptr<bool> normalizationFieldRequirement_ = nullptr;
    std::shared_ptr<bool> normalizationFieldReserved_ = nullptr;
    std::shared_ptr<string> normalizationFieldType_ = nullptr;
    std::shared_ptr<string> normalizationSchemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
