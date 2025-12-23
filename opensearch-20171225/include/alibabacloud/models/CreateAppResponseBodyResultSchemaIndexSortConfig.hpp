// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTSCHEMAINDEXSORTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULTSCHEMAINDEXSORTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class CreateAppResponseBodyResultSchemaIndexSortConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBodyResultSchemaIndexSortConfig& obj) { 
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(field, field_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBodyResultSchemaIndexSortConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(field, field_);
    };
    CreateAppResponseBodyResultSchemaIndexSortConfig() = default ;
    CreateAppResponseBodyResultSchemaIndexSortConfig(const CreateAppResponseBodyResultSchemaIndexSortConfig &) = default ;
    CreateAppResponseBodyResultSchemaIndexSortConfig(CreateAppResponseBodyResultSchemaIndexSortConfig &&) = default ;
    CreateAppResponseBodyResultSchemaIndexSortConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBodyResultSchemaIndexSortConfig() = default ;
    CreateAppResponseBodyResultSchemaIndexSortConfig& operator=(const CreateAppResponseBodyResultSchemaIndexSortConfig &) = default ;
    CreateAppResponseBodyResultSchemaIndexSortConfig& operator=(CreateAppResponseBodyResultSchemaIndexSortConfig &&) = default ;
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
    inline CreateAppResponseBodyResultSchemaIndexSortConfig& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline CreateAppResponseBodyResultSchemaIndexSortConfig& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


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
