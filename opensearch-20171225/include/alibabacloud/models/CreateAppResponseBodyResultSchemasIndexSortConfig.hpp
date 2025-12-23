// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTSCHEMASINDEXSORTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTSCHEMASINDEXSORTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppResponseBodyResultSchemasIndexSortConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBodyResultSchemasIndexSortConfig& obj) { 
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(field, field_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBodyResultSchemasIndexSortConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(field, field_);
    };
    CreateAppResponseBodyResultSchemasIndexSortConfig() = default ;
    CreateAppResponseBodyResultSchemasIndexSortConfig(const CreateAppResponseBodyResultSchemasIndexSortConfig &) = default ;
    CreateAppResponseBodyResultSchemasIndexSortConfig(CreateAppResponseBodyResultSchemasIndexSortConfig &&) = default ;
    CreateAppResponseBodyResultSchemasIndexSortConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBodyResultSchemasIndexSortConfig() = default ;
    CreateAppResponseBodyResultSchemasIndexSortConfig& operator=(const CreateAppResponseBodyResultSchemasIndexSortConfig &) = default ;
    CreateAppResponseBodyResultSchemasIndexSortConfig& operator=(CreateAppResponseBodyResultSchemasIndexSortConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && return this->field_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline CreateAppResponseBodyResultSchemasIndexSortConfig& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline CreateAppResponseBodyResultSchemasIndexSortConfig& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


  protected:
    // The sort method. Valid values:
    // 
    // *   ASC
    // *   DESC
    std::shared_ptr<string> direction_ = nullptr;
    // The sort field.
    std::shared_ptr<string> field_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
