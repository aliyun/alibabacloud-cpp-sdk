// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERVENTIONDICTIONARYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERVENTIONDICTIONARYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeInterventionDictionaryResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInterventionDictionaryResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(analyzer, analyzer_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInterventionDictionaryResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(analyzer, analyzer_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    DescribeInterventionDictionaryResponseBodyResult() = default ;
    DescribeInterventionDictionaryResponseBodyResult(const DescribeInterventionDictionaryResponseBodyResult &) = default ;
    DescribeInterventionDictionaryResponseBodyResult(DescribeInterventionDictionaryResponseBodyResult &&) = default ;
    DescribeInterventionDictionaryResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInterventionDictionaryResponseBodyResult() = default ;
    DescribeInterventionDictionaryResponseBodyResult& operator=(const DescribeInterventionDictionaryResponseBodyResult &) = default ;
    DescribeInterventionDictionaryResponseBodyResult& operator=(DescribeInterventionDictionaryResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyzer_ == nullptr
        && return this->created_ == nullptr && return this->name_ == nullptr && return this->type_ == nullptr && return this->updated_ == nullptr; };
    // analyzer Field Functions 
    bool hasAnalyzer() const { return this->analyzer_ != nullptr;};
    void deleteAnalyzer() { this->analyzer_ = nullptr;};
    inline string analyzer() const { DARABONBA_PTR_GET_DEFAULT(analyzer_, "") };
    inline DescribeInterventionDictionaryResponseBodyResult& setAnalyzer(string analyzer) { DARABONBA_PTR_SET_VALUE(analyzer_, analyzer) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeInterventionDictionaryResponseBodyResult& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInterventionDictionaryResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeInterventionDictionaryResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeInterventionDictionaryResponseBodyResult& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The custom analyzer.
    std::shared_ptr<string> analyzer_ = nullptr;
    // The time when the the intervention dictionary was created.
    std::shared_ptr<string> created_ = nullptr;
    // The name of the the intervention dictionary.
    std::shared_ptr<string> name_ = nullptr;
    // Type
    // 
    // *   stopword: an intervention dictionary for stop word filtering.
    // *   synonym: an intervention dictionary for synonym configuration.
    // *   correction: an intervention dictionary for spelling correction.
    // *   category_prediction: an intervention dictionary for category prediction.
    // *   ner: an intervention dictionary for named entity recognition.
    // *   term_weighting: an intervention dictionary for term weight analysis.
    std::shared_ptr<string> type_ = nullptr;
    // The time when the the intervention dictionary was modified.
    std::shared_ptr<string> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
