// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPRECATEDTEMPLATERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPRECATEDTEMPLATERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDeprecatedTemplateResponseBodyResultTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeDeprecatedTemplateResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeprecatedTemplateResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(dataStream, dataStream_);
      DARABONBA_PTR_TO_JSON(indexPatterns, indexPatterns_);
      DARABONBA_PTR_TO_JSON(indexTemplate, indexTemplate_);
      DARABONBA_PTR_TO_JSON(order, order_);
      DARABONBA_PTR_TO_JSON(template, template_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeprecatedTemplateResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(dataStream, dataStream_);
      DARABONBA_PTR_FROM_JSON(indexPatterns, indexPatterns_);
      DARABONBA_PTR_FROM_JSON(indexTemplate, indexTemplate_);
      DARABONBA_PTR_FROM_JSON(order, order_);
      DARABONBA_PTR_FROM_JSON(template, template_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeDeprecatedTemplateResponseBodyResult() = default ;
    DescribeDeprecatedTemplateResponseBodyResult(const DescribeDeprecatedTemplateResponseBodyResult &) = default ;
    DescribeDeprecatedTemplateResponseBodyResult(DescribeDeprecatedTemplateResponseBodyResult &&) = default ;
    DescribeDeprecatedTemplateResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeprecatedTemplateResponseBodyResult() = default ;
    DescribeDeprecatedTemplateResponseBodyResult& operator=(const DescribeDeprecatedTemplateResponseBodyResult &) = default ;
    DescribeDeprecatedTemplateResponseBodyResult& operator=(DescribeDeprecatedTemplateResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataStream_ != nullptr
        && this->indexPatterns_ != nullptr && this->indexTemplate_ != nullptr && this->order_ != nullptr && this->template_ != nullptr && this->version_ != nullptr; };
    // dataStream Field Functions 
    bool hasDataStream() const { return this->dataStream_ != nullptr;};
    void deleteDataStream() { this->dataStream_ = nullptr;};
    inline bool dataStream() const { DARABONBA_PTR_GET_DEFAULT(dataStream_, false) };
    inline DescribeDeprecatedTemplateResponseBodyResult& setDataStream(bool dataStream) { DARABONBA_PTR_SET_VALUE(dataStream_, dataStream) };


    // indexPatterns Field Functions 
    bool hasIndexPatterns() const { return this->indexPatterns_ != nullptr;};
    void deleteIndexPatterns() { this->indexPatterns_ = nullptr;};
    inline const vector<string> & indexPatterns() const { DARABONBA_PTR_GET_CONST(indexPatterns_, vector<string>) };
    inline vector<string> indexPatterns() { DARABONBA_PTR_GET(indexPatterns_, vector<string>) };
    inline DescribeDeprecatedTemplateResponseBodyResult& setIndexPatterns(const vector<string> & indexPatterns) { DARABONBA_PTR_SET_VALUE(indexPatterns_, indexPatterns) };
    inline DescribeDeprecatedTemplateResponseBodyResult& setIndexPatterns(vector<string> && indexPatterns) { DARABONBA_PTR_SET_RVALUE(indexPatterns_, indexPatterns) };


    // indexTemplate Field Functions 
    bool hasIndexTemplate() const { return this->indexTemplate_ != nullptr;};
    void deleteIndexTemplate() { this->indexTemplate_ = nullptr;};
    inline string indexTemplate() const { DARABONBA_PTR_GET_DEFAULT(indexTemplate_, "") };
    inline DescribeDeprecatedTemplateResponseBodyResult& setIndexTemplate(string indexTemplate) { DARABONBA_PTR_SET_VALUE(indexTemplate_, indexTemplate) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int64_t order() const { DARABONBA_PTR_GET_DEFAULT(order_, 0L) };
    inline DescribeDeprecatedTemplateResponseBodyResult& setOrder(int64_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const Models::DescribeDeprecatedTemplateResponseBodyResultTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, Models::DescribeDeprecatedTemplateResponseBodyResultTemplate) };
    inline Models::DescribeDeprecatedTemplateResponseBodyResultTemplate _template() { DARABONBA_PTR_GET(template_, Models::DescribeDeprecatedTemplateResponseBodyResultTemplate) };
    inline DescribeDeprecatedTemplateResponseBodyResult& setTemplate(const Models::DescribeDeprecatedTemplateResponseBodyResultTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline DescribeDeprecatedTemplateResponseBodyResult& setTemplate(Models::DescribeDeprecatedTemplateResponseBodyResultTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeDeprecatedTemplateResponseBodyResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<bool> dataStream_ = nullptr;
    std::shared_ptr<vector<string>> indexPatterns_ = nullptr;
    std::shared_ptr<string> indexTemplate_ = nullptr;
    std::shared_ptr<int64_t> order_ = nullptr;
    std::shared_ptr<Models::DescribeDeprecatedTemplateResponseBodyResultTemplate> template_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
