// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHKGBYSEMANTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHKGBYSEMANTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SearchKgBySemanticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchKgBySemanticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SearchKgBySemanticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SearchKgBySemanticResponseBody() = default ;
    SearchKgBySemanticResponseBody(const SearchKgBySemanticResponseBody &) = default ;
    SearchKgBySemanticResponseBody(SearchKgBySemanticResponseBody &&) = default ;
    SearchKgBySemanticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchKgBySemanticResponseBody() = default ;
    SearchKgBySemanticResponseBody& operator=(const SearchKgBySemanticResponseBody &) = default ;
    SearchKgBySemanticResponseBody& operator=(SearchKgBySemanticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SearchResults, searchResults_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SearchResults, searchResults_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SearchResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SearchResults& obj) { 
          DARABONBA_PTR_TO_JSON(ItemId, itemId_);
          DARABONBA_PTR_TO_JSON(ItemTypeCode, itemTypeCode_);
          DARABONBA_PTR_TO_JSON(MatchedPropertyCode, matchedPropertyCode_);
          DARABONBA_PTR_TO_JSON(MatchedPropertyValue, matchedPropertyValue_);
          DARABONBA_PTR_TO_JSON(SimilarityScore, similarityScore_);
        };
        friend void from_json(const Darabonba::Json& j, SearchResults& obj) { 
          DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
          DARABONBA_PTR_FROM_JSON(ItemTypeCode, itemTypeCode_);
          DARABONBA_PTR_FROM_JSON(MatchedPropertyCode, matchedPropertyCode_);
          DARABONBA_PTR_FROM_JSON(MatchedPropertyValue, matchedPropertyValue_);
          DARABONBA_PTR_FROM_JSON(SimilarityScore, similarityScore_);
        };
        SearchResults() = default ;
        SearchResults(const SearchResults &) = default ;
        SearchResults(SearchResults &&) = default ;
        SearchResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SearchResults() = default ;
        SearchResults& operator=(const SearchResults &) = default ;
        SearchResults& operator=(SearchResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->itemId_ == nullptr
        && this->itemTypeCode_ == nullptr && this->matchedPropertyCode_ == nullptr && this->matchedPropertyValue_ == nullptr && this->similarityScore_ == nullptr; };
        // itemId Field Functions 
        bool hasItemId() const { return this->itemId_ != nullptr;};
        void deleteItemId() { this->itemId_ = nullptr;};
        inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
        inline SearchResults& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


        // itemTypeCode Field Functions 
        bool hasItemTypeCode() const { return this->itemTypeCode_ != nullptr;};
        void deleteItemTypeCode() { this->itemTypeCode_ = nullptr;};
        inline string getItemTypeCode() const { DARABONBA_PTR_GET_DEFAULT(itemTypeCode_, "") };
        inline SearchResults& setItemTypeCode(string itemTypeCode) { DARABONBA_PTR_SET_VALUE(itemTypeCode_, itemTypeCode) };


        // matchedPropertyCode Field Functions 
        bool hasMatchedPropertyCode() const { return this->matchedPropertyCode_ != nullptr;};
        void deleteMatchedPropertyCode() { this->matchedPropertyCode_ = nullptr;};
        inline string getMatchedPropertyCode() const { DARABONBA_PTR_GET_DEFAULT(matchedPropertyCode_, "") };
        inline SearchResults& setMatchedPropertyCode(string matchedPropertyCode) { DARABONBA_PTR_SET_VALUE(matchedPropertyCode_, matchedPropertyCode) };


        // matchedPropertyValue Field Functions 
        bool hasMatchedPropertyValue() const { return this->matchedPropertyValue_ != nullptr;};
        void deleteMatchedPropertyValue() { this->matchedPropertyValue_ = nullptr;};
        inline string getMatchedPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(matchedPropertyValue_, "") };
        inline SearchResults& setMatchedPropertyValue(string matchedPropertyValue) { DARABONBA_PTR_SET_VALUE(matchedPropertyValue_, matchedPropertyValue) };


        // similarityScore Field Functions 
        bool hasSimilarityScore() const { return this->similarityScore_ != nullptr;};
        void deleteSimilarityScore() { this->similarityScore_ = nullptr;};
        inline float getSimilarityScore() const { DARABONBA_PTR_GET_DEFAULT(similarityScore_, 0.0) };
        inline SearchResults& setSimilarityScore(float similarityScore) { DARABONBA_PTR_SET_VALUE(similarityScore_, similarityScore) };


      protected:
        // The ID of the matched entity record.
        shared_ptr<string> itemId_ {};
        // The entity type code.
        shared_ptr<string> itemTypeCode_ {};
        // The property code that matched the semantic search.
        shared_ptr<string> matchedPropertyCode_ {};
        // The actual value of the matched property.
        shared_ptr<string> matchedPropertyValue_ {};
        // The similarity score ranging from 0.0 to 1.0, based on cosine similarity.
        shared_ptr<float> similarityScore_ {};
      };

      virtual bool empty() const override { return this->searchResults_ == nullptr
        && this->totalCount_ == nullptr; };
      // searchResults Field Functions 
      bool hasSearchResults() const { return this->searchResults_ != nullptr;};
      void deleteSearchResults() { this->searchResults_ = nullptr;};
      inline const vector<Data::SearchResults> & getSearchResults() const { DARABONBA_PTR_GET_CONST(searchResults_, vector<Data::SearchResults>) };
      inline vector<Data::SearchResults> getSearchResults() { DARABONBA_PTR_GET(searchResults_, vector<Data::SearchResults>) };
      inline Data& setSearchResults(const vector<Data::SearchResults> & searchResults) { DARABONBA_PTR_SET_VALUE(searchResults_, searchResults) };
      inline Data& setSearchResults(vector<Data::SearchResults> && searchResults) { DARABONBA_PTR_SET_RVALUE(searchResults_, searchResults) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of search results.
      shared_ptr<vector<Data::SearchResults>> searchResults_ {};
      // The total number of results.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchKgBySemanticResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const SearchKgBySemanticResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SearchKgBySemanticResponseBody::Data) };
    inline SearchKgBySemanticResponseBody::Data getData() { DARABONBA_PTR_GET(data_, SearchKgBySemanticResponseBody::Data) };
    inline SearchKgBySemanticResponseBody& setData(const SearchKgBySemanticResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SearchKgBySemanticResponseBody& setData(SearchKgBySemanticResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline SearchKgBySemanticResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchKgBySemanticResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchKgBySemanticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchKgBySemanticResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The search results.
    shared_ptr<SearchKgBySemanticResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
