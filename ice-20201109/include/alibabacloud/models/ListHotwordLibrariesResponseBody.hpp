// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTWORDLIBRARIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTWORDLIBRARIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHotwordLibrariesResponseBodyHotwordLibraryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListHotwordLibrariesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotwordLibrariesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HotwordLibraryList, hotwordLibraryList_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotwordLibrariesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HotwordLibraryList, hotwordLibraryList_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHotwordLibrariesResponseBody() = default ;
    ListHotwordLibrariesResponseBody(const ListHotwordLibrariesResponseBody &) = default ;
    ListHotwordLibrariesResponseBody(ListHotwordLibrariesResponseBody &&) = default ;
    ListHotwordLibrariesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotwordLibrariesResponseBody() = default ;
    ListHotwordLibrariesResponseBody& operator=(const ListHotwordLibrariesResponseBody &) = default ;
    ListHotwordLibrariesResponseBody& operator=(ListHotwordLibrariesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hotwordLibraryList_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // hotwordLibraryList Field Functions 
    bool hasHotwordLibraryList() const { return this->hotwordLibraryList_ != nullptr;};
    void deleteHotwordLibraryList() { this->hotwordLibraryList_ = nullptr;};
    inline const vector<ListHotwordLibrariesResponseBodyHotwordLibraryList> & hotwordLibraryList() const { DARABONBA_PTR_GET_CONST(hotwordLibraryList_, vector<ListHotwordLibrariesResponseBodyHotwordLibraryList>) };
    inline vector<ListHotwordLibrariesResponseBodyHotwordLibraryList> hotwordLibraryList() { DARABONBA_PTR_GET(hotwordLibraryList_, vector<ListHotwordLibrariesResponseBodyHotwordLibraryList>) };
    inline ListHotwordLibrariesResponseBody& setHotwordLibraryList(const vector<ListHotwordLibrariesResponseBodyHotwordLibraryList> & hotwordLibraryList) { DARABONBA_PTR_SET_VALUE(hotwordLibraryList_, hotwordLibraryList) };
    inline ListHotwordLibrariesResponseBody& setHotwordLibraryList(vector<ListHotwordLibrariesResponseBodyHotwordLibraryList> && hotwordLibraryList) { DARABONBA_PTR_SET_RVALUE(hotwordLibraryList_, hotwordLibraryList) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHotwordLibrariesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHotwordLibrariesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotwordLibrariesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHotwordLibrariesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListHotwordLibrariesResponseBodyHotwordLibraryList>> hotwordLibraryList_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
