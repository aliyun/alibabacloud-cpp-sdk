// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICPUBLICKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAICPUBLICKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAICPublicKeysResponseBodyPublicKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListAICPublicKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublicKeys, publicKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICPublicKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublicKeys, publicKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAICPublicKeysResponseBody() = default ;
    ListAICPublicKeysResponseBody(const ListAICPublicKeysResponseBody &) = default ;
    ListAICPublicKeysResponseBody(ListAICPublicKeysResponseBody &&) = default ;
    ListAICPublicKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICPublicKeysResponseBody() = default ;
    ListAICPublicKeysResponseBody& operator=(const ListAICPublicKeysResponseBody &) = default ;
    ListAICPublicKeysResponseBody& operator=(ListAICPublicKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->publicKeys_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAICPublicKeysResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAICPublicKeysResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publicKeys Field Functions 
    bool hasPublicKeys() const { return this->publicKeys_ != nullptr;};
    void deletePublicKeys() { this->publicKeys_ = nullptr;};
    inline const vector<ListAICPublicKeysResponseBodyPublicKeys> & publicKeys() const { DARABONBA_PTR_GET_CONST(publicKeys_, vector<ListAICPublicKeysResponseBodyPublicKeys>) };
    inline vector<ListAICPublicKeysResponseBodyPublicKeys> publicKeys() { DARABONBA_PTR_GET(publicKeys_, vector<ListAICPublicKeysResponseBodyPublicKeys>) };
    inline ListAICPublicKeysResponseBody& setPublicKeys(const vector<ListAICPublicKeysResponseBodyPublicKeys> & publicKeys) { DARABONBA_PTR_SET_VALUE(publicKeys_, publicKeys) };
    inline ListAICPublicKeysResponseBody& setPublicKeys(vector<ListAICPublicKeysResponseBodyPublicKeys> && publicKeys) { DARABONBA_PTR_SET_RVALUE(publicKeys_, publicKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAICPublicKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAICPublicKeysResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Current page number when paging
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Public key list
    std::shared_ptr<vector<ListAICPublicKeysResponseBodyPublicKeys>> publicKeys_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
