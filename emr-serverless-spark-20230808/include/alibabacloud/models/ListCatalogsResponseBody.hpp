// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATALOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCATALOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCatalogsResponseBodyCatalogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListCatalogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCatalogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(catalogs, catalogs_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCatalogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(catalogs, catalogs_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListCatalogsResponseBody() = default ;
    ListCatalogsResponseBody(const ListCatalogsResponseBody &) = default ;
    ListCatalogsResponseBody(ListCatalogsResponseBody &&) = default ;
    ListCatalogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCatalogsResponseBody() = default ;
    ListCatalogsResponseBody& operator=(const ListCatalogsResponseBody &) = default ;
    ListCatalogsResponseBody& operator=(ListCatalogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogs_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // catalogs Field Functions 
    bool hasCatalogs() const { return this->catalogs_ != nullptr;};
    void deleteCatalogs() { this->catalogs_ = nullptr;};
    inline const vector<ListCatalogsResponseBodyCatalogs> & catalogs() const { DARABONBA_PTR_GET_CONST(catalogs_, vector<ListCatalogsResponseBodyCatalogs>) };
    inline vector<ListCatalogsResponseBodyCatalogs> catalogs() { DARABONBA_PTR_GET(catalogs_, vector<ListCatalogsResponseBodyCatalogs>) };
    inline ListCatalogsResponseBody& setCatalogs(const vector<ListCatalogsResponseBodyCatalogs> & catalogs) { DARABONBA_PTR_SET_VALUE(catalogs_, catalogs) };
    inline ListCatalogsResponseBody& setCatalogs(vector<ListCatalogsResponseBodyCatalogs> && catalogs) { DARABONBA_PTR_SET_RVALUE(catalogs_, catalogs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCatalogsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCatalogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCatalogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCatalogsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListCatalogsResponseBodyCatalogs>> catalogs_ = nullptr;
    // 一次获取的最大记录数。
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // 下一页TOKEN。
    std::shared_ptr<string> nextToken_ = nullptr;
    // 请求ID。
    std::shared_ptr<string> requestId_ = nullptr;
    // 记录总数。
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
