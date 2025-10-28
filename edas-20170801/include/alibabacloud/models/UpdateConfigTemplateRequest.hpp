// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONFIGTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONFIGTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateConfigTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConfigTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConfigTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateConfigTemplateRequest() = default ;
    UpdateConfigTemplateRequest(const UpdateConfigTemplateRequest &) = default ;
    UpdateConfigTemplateRequest(UpdateConfigTemplateRequest &&) = default ;
    UpdateConfigTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConfigTemplateRequest() = default ;
    UpdateConfigTemplateRequest& operator=(const UpdateConfigTemplateRequest &) = default ;
    UpdateConfigTemplateRequest& operator=(UpdateConfigTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->description_ == nullptr && return this->format_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateConfigTemplateRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConfigTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline UpdateConfigTemplateRequest& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateConfigTemplateRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateConfigTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The content of the configuration template. The value must be in the format that is specified by the Format parameter.
    std::shared_ptr<string> content_ = nullptr;
    // The description of the configuration template. The description can be up to 255 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The data format of the configuration template. Valid values:
    // 
    // *   JSON: JSON format
    // *   XML: XML format
    // *   YAML: YAML format
    // *   Properties: .properties format
    // *   KeyValue: key-value pairs
    // *   Custom: custom format
    std::shared_ptr<string> format_ = nullptr;
    // The ID of the configuration template.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the configuration template. The name can be up to 64 characters in length.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
