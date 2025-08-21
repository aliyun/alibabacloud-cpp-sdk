// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPONENTINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPONENTINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateComponentIndexRequestTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateComponentIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateComponentIndexRequest& obj) { 
      DARABONBA_ANY_TO_JSON(_meta, meta_);
      DARABONBA_PTR_TO_JSON(template, template_);
    };
    friend void from_json(const Darabonba::Json& j, CreateComponentIndexRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(_meta, meta_);
      DARABONBA_PTR_FROM_JSON(template, template_);
    };
    CreateComponentIndexRequest() = default ;
    CreateComponentIndexRequest(const CreateComponentIndexRequest &) = default ;
    CreateComponentIndexRequest(CreateComponentIndexRequest &&) = default ;
    CreateComponentIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateComponentIndexRequest() = default ;
    CreateComponentIndexRequest& operator=(const CreateComponentIndexRequest &) = default ;
    CreateComponentIndexRequest& operator=(CreateComponentIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->meta_ != nullptr
        && this->template_ != nullptr; };
    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline     const Darabonba::Json & meta() const { DARABONBA_GET(meta_) };
    Darabonba::Json & meta() { DARABONBA_GET(meta_) };
    inline CreateComponentIndexRequest& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
    inline CreateComponentIndexRequest& setMeta(Darabonba::Json & meta) { DARABONBA_SET_RVALUE(meta_, meta) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const CreateComponentIndexRequestTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, CreateComponentIndexRequestTemplate) };
    inline CreateComponentIndexRequestTemplate _template() { DARABONBA_PTR_GET(template_, CreateComponentIndexRequestTemplate) };
    inline CreateComponentIndexRequest& setTemplate(const CreateComponentIndexRequestTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline CreateComponentIndexRequest& setTemplate(CreateComponentIndexRequestTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    Darabonba::Json meta_ = nullptr;
    std::shared_ptr<CreateComponentIndexRequestTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
