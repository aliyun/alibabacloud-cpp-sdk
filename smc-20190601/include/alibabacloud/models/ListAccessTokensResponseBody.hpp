// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSTOKENSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSTOKENSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAccessTokensResponseBodyAccessTokens.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class ListAccessTokensResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessTokensResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokens, accessTokens_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessTokensResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokens, accessTokens_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAccessTokensResponseBody() = default ;
    ListAccessTokensResponseBody(const ListAccessTokensResponseBody &) = default ;
    ListAccessTokensResponseBody(ListAccessTokensResponseBody &&) = default ;
    ListAccessTokensResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessTokensResponseBody() = default ;
    ListAccessTokensResponseBody& operator=(const ListAccessTokensResponseBody &) = default ;
    ListAccessTokensResponseBody& operator=(ListAccessTokensResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTokens_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // accessTokens Field Functions 
    bool hasAccessTokens() const { return this->accessTokens_ != nullptr;};
    void deleteAccessTokens() { this->accessTokens_ = nullptr;};
    inline const ListAccessTokensResponseBodyAccessTokens & accessTokens() const { DARABONBA_PTR_GET_CONST(accessTokens_, ListAccessTokensResponseBodyAccessTokens) };
    inline ListAccessTokensResponseBodyAccessTokens accessTokens() { DARABONBA_PTR_GET(accessTokens_, ListAccessTokensResponseBodyAccessTokens) };
    inline ListAccessTokensResponseBody& setAccessTokens(const ListAccessTokensResponseBodyAccessTokens & accessTokens) { DARABONBA_PTR_SET_VALUE(accessTokens_, accessTokens) };
    inline ListAccessTokensResponseBody& setAccessTokens(ListAccessTokensResponseBodyAccessTokens && accessTokens) { DARABONBA_PTR_SET_RVALUE(accessTokens_, accessTokens) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAccessTokensResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAccessTokensResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccessTokensResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAccessTokensResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The activation codes returned.
    std::shared_ptr<ListAccessTokensResponseBodyAccessTokens> accessTokens_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   10
    // *   20
    // *   50
    // 
    // Default value: 20.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of migration sources returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
