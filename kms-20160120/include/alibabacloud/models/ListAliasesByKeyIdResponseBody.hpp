// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALIASESBYKEYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALIASESBYKEYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAliasesByKeyIdResponseBodyAliases.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListAliasesByKeyIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAliasesByKeyIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Aliases, aliases_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAliasesByKeyIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Aliases, aliases_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAliasesByKeyIdResponseBody() = default ;
    ListAliasesByKeyIdResponseBody(const ListAliasesByKeyIdResponseBody &) = default ;
    ListAliasesByKeyIdResponseBody(ListAliasesByKeyIdResponseBody &&) = default ;
    ListAliasesByKeyIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAliasesByKeyIdResponseBody() = default ;
    ListAliasesByKeyIdResponseBody& operator=(const ListAliasesByKeyIdResponseBody &) = default ;
    ListAliasesByKeyIdResponseBody& operator=(ListAliasesByKeyIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliases_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // aliases Field Functions 
    bool hasAliases() const { return this->aliases_ != nullptr;};
    void deleteAliases() { this->aliases_ = nullptr;};
    inline const ListAliasesByKeyIdResponseBodyAliases & aliases() const { DARABONBA_PTR_GET_CONST(aliases_, ListAliasesByKeyIdResponseBodyAliases) };
    inline ListAliasesByKeyIdResponseBodyAliases aliases() { DARABONBA_PTR_GET(aliases_, ListAliasesByKeyIdResponseBodyAliases) };
    inline ListAliasesByKeyIdResponseBody& setAliases(const ListAliasesByKeyIdResponseBodyAliases & aliases) { DARABONBA_PTR_SET_VALUE(aliases_, aliases) };
    inline ListAliasesByKeyIdResponseBody& setAliases(ListAliasesByKeyIdResponseBodyAliases && aliases) { DARABONBA_PTR_SET_RVALUE(aliases_, aliases) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAliasesByKeyIdResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAliasesByKeyIdResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAliasesByKeyIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAliasesByKeyIdResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of aliases.
    std::shared_ptr<ListAliasesByKeyIdResponseBodyAliases> aliases_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned CMKs.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
