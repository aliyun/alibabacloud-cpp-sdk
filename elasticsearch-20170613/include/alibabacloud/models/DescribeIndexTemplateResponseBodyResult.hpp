// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINDEXTEMPLATERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINDEXTEMPLATERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIndexTemplateResponseBodyResultTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeIndexTemplateResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIndexTemplateResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(dataStream, dataStream_);
      DARABONBA_PTR_TO_JSON(ilmPolicy, ilmPolicy_);
      DARABONBA_PTR_TO_JSON(indexPatterns, indexPatterns_);
      DARABONBA_PTR_TO_JSON(indexTemplate, indexTemplate_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIndexTemplateResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(dataStream, dataStream_);
      DARABONBA_PTR_FROM_JSON(ilmPolicy, ilmPolicy_);
      DARABONBA_PTR_FROM_JSON(indexPatterns, indexPatterns_);
      DARABONBA_PTR_FROM_JSON(indexTemplate, indexTemplate_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(template, template_);
    };
    DescribeIndexTemplateResponseBodyResult() = default ;
    DescribeIndexTemplateResponseBodyResult(const DescribeIndexTemplateResponseBodyResult &) = default ;
    DescribeIndexTemplateResponseBodyResult(DescribeIndexTemplateResponseBodyResult &&) = default ;
    DescribeIndexTemplateResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIndexTemplateResponseBodyResult() = default ;
    DescribeIndexTemplateResponseBodyResult& operator=(const DescribeIndexTemplateResponseBodyResult &) = default ;
    DescribeIndexTemplateResponseBodyResult& operator=(DescribeIndexTemplateResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataStream_ != nullptr
        && this->ilmPolicy_ != nullptr && this->indexPatterns_ != nullptr && this->indexTemplate_ != nullptr && this->priority_ != nullptr && this->template_ != nullptr; };
    // dataStream Field Functions 
    bool hasDataStream() const { return this->dataStream_ != nullptr;};
    void deleteDataStream() { this->dataStream_ = nullptr;};
    inline bool dataStream() const { DARABONBA_PTR_GET_DEFAULT(dataStream_, false) };
    inline DescribeIndexTemplateResponseBodyResult& setDataStream(bool dataStream) { DARABONBA_PTR_SET_VALUE(dataStream_, dataStream) };


    // ilmPolicy Field Functions 
    bool hasIlmPolicy() const { return this->ilmPolicy_ != nullptr;};
    void deleteIlmPolicy() { this->ilmPolicy_ = nullptr;};
    inline string ilmPolicy() const { DARABONBA_PTR_GET_DEFAULT(ilmPolicy_, "") };
    inline DescribeIndexTemplateResponseBodyResult& setIlmPolicy(string ilmPolicy) { DARABONBA_PTR_SET_VALUE(ilmPolicy_, ilmPolicy) };


    // indexPatterns Field Functions 
    bool hasIndexPatterns() const { return this->indexPatterns_ != nullptr;};
    void deleteIndexPatterns() { this->indexPatterns_ = nullptr;};
    inline const vector<string> & indexPatterns() const { DARABONBA_PTR_GET_CONST(indexPatterns_, vector<string>) };
    inline vector<string> indexPatterns() { DARABONBA_PTR_GET(indexPatterns_, vector<string>) };
    inline DescribeIndexTemplateResponseBodyResult& setIndexPatterns(const vector<string> & indexPatterns) { DARABONBA_PTR_SET_VALUE(indexPatterns_, indexPatterns) };
    inline DescribeIndexTemplateResponseBodyResult& setIndexPatterns(vector<string> && indexPatterns) { DARABONBA_PTR_SET_RVALUE(indexPatterns_, indexPatterns) };


    // indexTemplate Field Functions 
    bool hasIndexTemplate() const { return this->indexTemplate_ != nullptr;};
    void deleteIndexTemplate() { this->indexTemplate_ = nullptr;};
    inline string indexTemplate() const { DARABONBA_PTR_GET_DEFAULT(indexTemplate_, "") };
    inline DescribeIndexTemplateResponseBodyResult& setIndexTemplate(string indexTemplate) { DARABONBA_PTR_SET_VALUE(indexTemplate_, indexTemplate) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeIndexTemplateResponseBodyResult& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const Models::DescribeIndexTemplateResponseBodyResultTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, Models::DescribeIndexTemplateResponseBodyResultTemplate) };
    inline Models::DescribeIndexTemplateResponseBodyResultTemplate _template() { DARABONBA_PTR_GET(template_, Models::DescribeIndexTemplateResponseBodyResultTemplate) };
    inline DescribeIndexTemplateResponseBodyResult& setTemplate(const Models::DescribeIndexTemplateResponseBodyResultTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline DescribeIndexTemplateResponseBodyResult& setTemplate(Models::DescribeIndexTemplateResponseBodyResultTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<bool> dataStream_ = nullptr;
    std::shared_ptr<string> ilmPolicy_ = nullptr;
    std::shared_ptr<vector<string>> indexPatterns_ = nullptr;
    std::shared_ptr<string> indexTemplate_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<Models::DescribeIndexTemplateResponseBodyResultTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
