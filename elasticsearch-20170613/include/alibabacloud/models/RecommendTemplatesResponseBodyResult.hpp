// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOMMENDTEMPLATESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_RECOMMENDTEMPLATESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class RecommendTemplatesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecommendTemplatesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, RecommendTemplatesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
    };
    RecommendTemplatesResponseBodyResult() = default ;
    RecommendTemplatesResponseBodyResult(const RecommendTemplatesResponseBodyResult &) = default ;
    RecommendTemplatesResponseBodyResult(RecommendTemplatesResponseBodyResult &&) = default ;
    RecommendTemplatesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecommendTemplatesResponseBodyResult() = default ;
    RecommendTemplatesResponseBodyResult& operator=(const RecommendTemplatesResponseBodyResult &) = default ;
    RecommendTemplatesResponseBodyResult& operator=(RecommendTemplatesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->templateName_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RecommendTemplatesResponseBodyResult& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline RecommendTemplatesResponseBodyResult& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    // *
    // *
    // *
    // *
    // 
    // **
    // 
    // ****
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
