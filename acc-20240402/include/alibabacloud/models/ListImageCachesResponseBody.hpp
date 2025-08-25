// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGECACHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGECACHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListImageCachesResponseBodyImageCaches.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Acc20240402
{
namespace Models
{
  class ListImageCachesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageCachesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageCaches, imageCaches_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageCachesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageCaches, imageCaches_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListImageCachesResponseBody() = default ;
    ListImageCachesResponseBody(const ListImageCachesResponseBody &) = default ;
    ListImageCachesResponseBody(ListImageCachesResponseBody &&) = default ;
    ListImageCachesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageCachesResponseBody() = default ;
    ListImageCachesResponseBody& operator=(const ListImageCachesResponseBody &) = default ;
    ListImageCachesResponseBody& operator=(ListImageCachesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageCaches_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // imageCaches Field Functions 
    bool hasImageCaches() const { return this->imageCaches_ != nullptr;};
    void deleteImageCaches() { this->imageCaches_ = nullptr;};
    inline const vector<ListImageCachesResponseBodyImageCaches> & imageCaches() const { DARABONBA_PTR_GET_CONST(imageCaches_, vector<ListImageCachesResponseBodyImageCaches>) };
    inline vector<ListImageCachesResponseBodyImageCaches> imageCaches() { DARABONBA_PTR_GET(imageCaches_, vector<ListImageCachesResponseBodyImageCaches>) };
    inline ListImageCachesResponseBody& setImageCaches(const vector<ListImageCachesResponseBodyImageCaches> & imageCaches) { DARABONBA_PTR_SET_VALUE(imageCaches_, imageCaches) };
    inline ListImageCachesResponseBody& setImageCaches(vector<ListImageCachesResponseBodyImageCaches> && imageCaches) { DARABONBA_PTR_SET_RVALUE(imageCaches_, imageCaches) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListImageCachesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListImageCachesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageCachesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListImageCachesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<ListImageCachesResponseBodyImageCaches>> imageCaches_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Acc20240402
#endif
