// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONSCHEMASRESPONSEBODYNORMALIZATIONSCHEMAS_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONSCHEMASRESPONSEBODYNORMALIZATIONSCHEMAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationSchemasResponseBodyNormalizationSchemas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationSchemasResponseBodyNormalizationSchemas& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaName, normalizationSchemaName_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaTargetLogStore, normalizationSchemaTargetLogStore_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationSchemasResponseBodyNormalizationSchemas& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaName, normalizationSchemaName_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaTargetLogStore, normalizationSchemaTargetLogStore_);
    };
    ListNormalizationSchemasResponseBodyNormalizationSchemas() = default ;
    ListNormalizationSchemasResponseBodyNormalizationSchemas(const ListNormalizationSchemasResponseBodyNormalizationSchemas &) = default ;
    ListNormalizationSchemasResponseBodyNormalizationSchemas(ListNormalizationSchemasResponseBodyNormalizationSchemas &&) = default ;
    ListNormalizationSchemasResponseBodyNormalizationSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationSchemasResponseBodyNormalizationSchemas() = default ;
    ListNormalizationSchemasResponseBodyNormalizationSchemas& operator=(const ListNormalizationSchemasResponseBodyNormalizationSchemas &) = default ;
    ListNormalizationSchemasResponseBodyNormalizationSchemas& operator=(ListNormalizationSchemasResponseBodyNormalizationSchemas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalizationCategoryId_ == nullptr
        && return this->normalizationSchemaId_ == nullptr && return this->normalizationSchemaName_ == nullptr && return this->normalizationSchemaTargetLogStore_ == nullptr; };
    // normalizationCategoryId Field Functions 
    bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
    void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
    inline string normalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
    inline ListNormalizationSchemasResponseBodyNormalizationSchemas& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string normalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline ListNormalizationSchemasResponseBodyNormalizationSchemas& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


    // normalizationSchemaName Field Functions 
    bool hasNormalizationSchemaName() const { return this->normalizationSchemaName_ != nullptr;};
    void deleteNormalizationSchemaName() { this->normalizationSchemaName_ = nullptr;};
    inline string normalizationSchemaName() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaName_, "") };
    inline ListNormalizationSchemasResponseBodyNormalizationSchemas& setNormalizationSchemaName(string normalizationSchemaName) { DARABONBA_PTR_SET_VALUE(normalizationSchemaName_, normalizationSchemaName) };


    // normalizationSchemaTargetLogStore Field Functions 
    bool hasNormalizationSchemaTargetLogStore() const { return this->normalizationSchemaTargetLogStore_ != nullptr;};
    void deleteNormalizationSchemaTargetLogStore() { this->normalizationSchemaTargetLogStore_ = nullptr;};
    inline string normalizationSchemaTargetLogStore() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaTargetLogStore_, "") };
    inline ListNormalizationSchemasResponseBodyNormalizationSchemas& setNormalizationSchemaTargetLogStore(string normalizationSchemaTargetLogStore) { DARABONBA_PTR_SET_VALUE(normalizationSchemaTargetLogStore_, normalizationSchemaTargetLogStore) };


  protected:
    std::shared_ptr<string> normalizationCategoryId_ = nullptr;
    std::shared_ptr<string> normalizationSchemaId_ = nullptr;
    std::shared_ptr<string> normalizationSchemaName_ = nullptr;
    std::shared_ptr<string> normalizationSchemaTargetLogStore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
