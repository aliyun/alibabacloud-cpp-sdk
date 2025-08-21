// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINDICESRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListComponentIndicesResponseBodyResultContentTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListComponentIndicesResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentIndicesResponseBodyResultContent& obj) { 
      DARABONBA_ANY_TO_JSON(_meta, meta_);
      DARABONBA_PTR_TO_JSON(template, template_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentIndicesResponseBodyResultContent& obj) { 
      DARABONBA_ANY_FROM_JSON(_meta, meta_);
      DARABONBA_PTR_FROM_JSON(template, template_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListComponentIndicesResponseBodyResultContent() = default ;
    ListComponentIndicesResponseBodyResultContent(const ListComponentIndicesResponseBodyResultContent &) = default ;
    ListComponentIndicesResponseBodyResultContent(ListComponentIndicesResponseBodyResultContent &&) = default ;
    ListComponentIndicesResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentIndicesResponseBodyResultContent() = default ;
    ListComponentIndicesResponseBodyResultContent& operator=(const ListComponentIndicesResponseBodyResultContent &) = default ;
    ListComponentIndicesResponseBodyResultContent& operator=(ListComponentIndicesResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->meta_ != nullptr
        && this->template_ != nullptr && this->version_ != nullptr; };
    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline     const Darabonba::Json & meta() const { DARABONBA_GET(meta_) };
    Darabonba::Json & meta() { DARABONBA_GET(meta_) };
    inline ListComponentIndicesResponseBodyResultContent& setMeta(const Darabonba::Json & meta) { DARABONBA_SET_VALUE(meta_, meta) };
    inline ListComponentIndicesResponseBodyResultContent& setMeta(Darabonba::Json & meta) { DARABONBA_SET_RVALUE(meta_, meta) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const Models::ListComponentIndicesResponseBodyResultContentTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, Models::ListComponentIndicesResponseBodyResultContentTemplate) };
    inline Models::ListComponentIndicesResponseBodyResultContentTemplate _template() { DARABONBA_PTR_GET(template_, Models::ListComponentIndicesResponseBodyResultContentTemplate) };
    inline ListComponentIndicesResponseBodyResultContent& setTemplate(const Models::ListComponentIndicesResponseBodyResultContentTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline ListComponentIndicesResponseBodyResultContent& setTemplate(Models::ListComponentIndicesResponseBodyResultContentTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline ListComponentIndicesResponseBodyResultContent& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    Darabonba::Json meta_ = nullptr;
    std::shared_ptr<Models::ListComponentIndicesResponseBodyResultContentTemplate> template_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
