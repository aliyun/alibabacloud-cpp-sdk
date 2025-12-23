// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUERYPROCESSORANALYZERRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUERYPROCESSORANALYZERRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListQueryProcessorAnalyzerResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueryProcessorAnalyzerResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueryProcessorAnalyzerResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(text, text_);
    };
    ListQueryProcessorAnalyzerResultsRequest() = default ;
    ListQueryProcessorAnalyzerResultsRequest(const ListQueryProcessorAnalyzerResultsRequest &) = default ;
    ListQueryProcessorAnalyzerResultsRequest(ListQueryProcessorAnalyzerResultsRequest &&) = default ;
    ListQueryProcessorAnalyzerResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueryProcessorAnalyzerResultsRequest() = default ;
    ListQueryProcessorAnalyzerResultsRequest& operator=(const ListQueryProcessorAnalyzerResultsRequest &) = default ;
    ListQueryProcessorAnalyzerResultsRequest& operator=(ListQueryProcessorAnalyzerResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ListQueryProcessorAnalyzerResultsRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The text to be tested.
    // 
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
