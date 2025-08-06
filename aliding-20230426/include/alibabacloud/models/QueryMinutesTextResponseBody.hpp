// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMINUTESTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMINUTESTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMinutesTextResponseBodyParagraphList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMinutesTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMinutesTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(paragraphList, paragraphList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMinutesTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(paragraphList, paragraphList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    QueryMinutesTextResponseBody() = default ;
    QueryMinutesTextResponseBody(const QueryMinutesTextResponseBody &) = default ;
    QueryMinutesTextResponseBody(QueryMinutesTextResponseBody &&) = default ;
    QueryMinutesTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMinutesTextResponseBody() = default ;
    QueryMinutesTextResponseBody& operator=(const QueryMinutesTextResponseBody &) = default ;
    QueryMinutesTextResponseBody& operator=(QueryMinutesTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasMore_ != nullptr
        && this->nextToken_ != nullptr && this->paragraphList_ != nullptr && this->requestId_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline QueryMinutesTextResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryMinutesTextResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // paragraphList Field Functions 
    bool hasParagraphList() const { return this->paragraphList_ != nullptr;};
    void deleteParagraphList() { this->paragraphList_ = nullptr;};
    inline const vector<QueryMinutesTextResponseBodyParagraphList> & paragraphList() const { DARABONBA_PTR_GET_CONST(paragraphList_, vector<QueryMinutesTextResponseBodyParagraphList>) };
    inline vector<QueryMinutesTextResponseBodyParagraphList> paragraphList() { DARABONBA_PTR_GET(paragraphList_, vector<QueryMinutesTextResponseBodyParagraphList>) };
    inline QueryMinutesTextResponseBody& setParagraphList(const vector<QueryMinutesTextResponseBodyParagraphList> & paragraphList) { DARABONBA_PTR_SET_VALUE(paragraphList_, paragraphList) };
    inline QueryMinutesTextResponseBody& setParagraphList(vector<QueryMinutesTextResponseBodyParagraphList> && paragraphList) { DARABONBA_PTR_SET_RVALUE(paragraphList_, paragraphList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMinutesTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline QueryMinutesTextResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline QueryMinutesTextResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<QueryMinutesTextResponseBodyParagraphList>> paragraphList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
