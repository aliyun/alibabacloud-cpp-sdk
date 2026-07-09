// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCONTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCONTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class SearchContextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchContextRequest& obj) { 
      DARABONBA_ANY_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(formatted, formatted_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(retrievalOption, retrievalOption_);
      DARABONBA_PTR_TO_JSON(threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, SearchContextRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(formatted, formatted_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(retrievalOption, retrievalOption_);
      DARABONBA_PTR_FROM_JSON(threshold, threshold_);
    };
    SearchContextRequest() = default ;
    SearchContextRequest(const SearchContextRequest &) = default ;
    SearchContextRequest(SearchContextRequest &&) = default ;
    SearchContextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchContextRequest() = default ;
    SearchContextRequest& operator=(const SearchContextRequest &) = default ;
    SearchContextRequest& operator=(SearchContextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->formatted_ == nullptr && this->limit_ == nullptr && this->query_ == nullptr && this->retrievalOption_ == nullptr && this->threshold_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline     const Darabonba::Json & getFilter() const { DARABONBA_GET(filter_) };
    Darabonba::Json & getFilter() { DARABONBA_GET(filter_) };
    inline SearchContextRequest& setFilter(const Darabonba::Json & filter) { DARABONBA_SET_VALUE(filter_, filter) };
    inline SearchContextRequest& setFilter(Darabonba::Json && filter) { DARABONBA_SET_RVALUE(filter_, filter) };


    // formatted Field Functions 
    bool hasFormatted() const { return this->formatted_ != nullptr;};
    void deleteFormatted() { this->formatted_ = nullptr;};
    inline bool getFormatted() const { DARABONBA_PTR_GET_DEFAULT(formatted_, false) };
    inline SearchContextRequest& setFormatted(bool formatted) { DARABONBA_PTR_SET_VALUE(formatted_, formatted) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline SearchContextRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchContextRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // retrievalOption Field Functions 
    bool hasRetrievalOption() const { return this->retrievalOption_ != nullptr;};
    void deleteRetrievalOption() { this->retrievalOption_ = nullptr;};
    inline string getRetrievalOption() const { DARABONBA_PTR_GET_DEFAULT(retrievalOption_, "") };
    inline SearchContextRequest& setRetrievalOption(string retrievalOption) { DARABONBA_PTR_SET_VALUE(retrievalOption_, retrievalOption) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline SearchContextRequest& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The structured filter conditions. The key is the field name, and the value is the expected matching value.
    Darabonba::Json filter_ {};
    // Specifies whether to apply structured formatting to the returned results.
    shared_ptr<bool> formatted_ {};
    // The maximum number of returned results (similarity Top-N).
    shared_ptr<int32_t> limit_ {};
    // The retrieval query text. Natural language is supported.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
    // The retrieval options that control the retrieval strategy.
    shared_ptr<string> retrievalOption_ {};
    // The similarity threshold. Results with a similarity score lower than this value are filtered out. Valid values: 0 to 1.
    shared_ptr<double> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
