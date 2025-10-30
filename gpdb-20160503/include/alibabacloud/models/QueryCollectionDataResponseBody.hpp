// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCollectionDataResponseBodyMatches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryCollectionDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Matches, matches_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Matches, matches_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryCollectionDataResponseBody() = default ;
    QueryCollectionDataResponseBody(const QueryCollectionDataResponseBody &) = default ;
    QueryCollectionDataResponseBody(QueryCollectionDataResponseBody &&) = default ;
    QueryCollectionDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataResponseBody() = default ;
    QueryCollectionDataResponseBody& operator=(const QueryCollectionDataResponseBody &) = default ;
    QueryCollectionDataResponseBody& operator=(QueryCollectionDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matches_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->total_ == nullptr; };
    // matches Field Functions 
    bool hasMatches() const { return this->matches_ != nullptr;};
    void deleteMatches() { this->matches_ = nullptr;};
    inline const QueryCollectionDataResponseBodyMatches & matches() const { DARABONBA_PTR_GET_CONST(matches_, QueryCollectionDataResponseBodyMatches) };
    inline QueryCollectionDataResponseBodyMatches matches() { DARABONBA_PTR_GET(matches_, QueryCollectionDataResponseBodyMatches) };
    inline QueryCollectionDataResponseBody& setMatches(const QueryCollectionDataResponseBodyMatches & matches) { DARABONBA_PTR_SET_VALUE(matches_, matches) };
    inline QueryCollectionDataResponseBody& setMatches(QueryCollectionDataResponseBodyMatches && matches) { DARABONBA_PTR_SET_RVALUE(matches_, matches) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCollectionDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCollectionDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryCollectionDataResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline QueryCollectionDataResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Data list.
    std::shared_ptr<QueryCollectionDataResponseBodyMatches> matches_ = nullptr;
    // Detailed information when the request fails.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Status, with the following values:
    // - **success**: Success.
    // - **fail**: Failure.
    std::shared_ptr<string> status_ = nullptr;
    // Only returned when the Offset is not 0, this value represents the total number of hits for the search criteria.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
