// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKEYVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKEYVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListKeyVersionsResponseBodyKeyVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKeyVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKeyVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyVersions, keyVersions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKeyVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyVersions, keyVersions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKeyVersionsResponseBody() = default ;
    ListKeyVersionsResponseBody(const ListKeyVersionsResponseBody &) = default ;
    ListKeyVersionsResponseBody(ListKeyVersionsResponseBody &&) = default ;
    ListKeyVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKeyVersionsResponseBody() = default ;
    ListKeyVersionsResponseBody& operator=(const ListKeyVersionsResponseBody &) = default ;
    ListKeyVersionsResponseBody& operator=(ListKeyVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyVersions_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // keyVersions Field Functions 
    bool hasKeyVersions() const { return this->keyVersions_ != nullptr;};
    void deleteKeyVersions() { this->keyVersions_ = nullptr;};
    inline const ListKeyVersionsResponseBodyKeyVersions & keyVersions() const { DARABONBA_PTR_GET_CONST(keyVersions_, ListKeyVersionsResponseBodyKeyVersions) };
    inline ListKeyVersionsResponseBodyKeyVersions keyVersions() { DARABONBA_PTR_GET(keyVersions_, ListKeyVersionsResponseBodyKeyVersions) };
    inline ListKeyVersionsResponseBody& setKeyVersions(const ListKeyVersionsResponseBodyKeyVersions & keyVersions) { DARABONBA_PTR_SET_VALUE(keyVersions_, keyVersions) };
    inline ListKeyVersionsResponseBody& setKeyVersions(ListKeyVersionsResponseBodyKeyVersions && keyVersions) { DARABONBA_PTR_SET_RVALUE(keyVersions_, keyVersions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListKeyVersionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListKeyVersionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKeyVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListKeyVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of key versions.
    std::shared_ptr<ListKeyVersionsResponseBodyKeyVersions> keyVersions_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned key versions.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
