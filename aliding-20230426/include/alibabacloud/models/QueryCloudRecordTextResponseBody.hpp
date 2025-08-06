// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCLOUDRECORDTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCloudRecordTextResponseBodyParagraphList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryCloudRecordTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCloudRecordTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(paragraphList, paragraphList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCloudRecordTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(paragraphList, paragraphList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryCloudRecordTextResponseBody() = default ;
    QueryCloudRecordTextResponseBody(const QueryCloudRecordTextResponseBody &) = default ;
    QueryCloudRecordTextResponseBody(QueryCloudRecordTextResponseBody &&) = default ;
    QueryCloudRecordTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCloudRecordTextResponseBody() = default ;
    QueryCloudRecordTextResponseBody& operator=(const QueryCloudRecordTextResponseBody &) = default ;
    QueryCloudRecordTextResponseBody& operator=(QueryCloudRecordTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasMore_ != nullptr
        && this->paragraphList_ != nullptr && this->requestId_ != nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline QueryCloudRecordTextResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // paragraphList Field Functions 
    bool hasParagraphList() const { return this->paragraphList_ != nullptr;};
    void deleteParagraphList() { this->paragraphList_ = nullptr;};
    inline const vector<QueryCloudRecordTextResponseBodyParagraphList> & paragraphList() const { DARABONBA_PTR_GET_CONST(paragraphList_, vector<QueryCloudRecordTextResponseBodyParagraphList>) };
    inline vector<QueryCloudRecordTextResponseBodyParagraphList> paragraphList() { DARABONBA_PTR_GET(paragraphList_, vector<QueryCloudRecordTextResponseBodyParagraphList>) };
    inline QueryCloudRecordTextResponseBody& setParagraphList(const vector<QueryCloudRecordTextResponseBodyParagraphList> & paragraphList) { DARABONBA_PTR_SET_VALUE(paragraphList_, paragraphList) };
    inline QueryCloudRecordTextResponseBody& setParagraphList(vector<QueryCloudRecordTextResponseBodyParagraphList> && paragraphList) { DARABONBA_PTR_SET_RVALUE(paragraphList_, paragraphList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCloudRecordTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<vector<QueryCloudRecordTextResponseBodyParagraphList>> paragraphList_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
