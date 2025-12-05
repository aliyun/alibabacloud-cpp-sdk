// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETVERSIONIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETVERSIONIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSecretVersionIdsResponseBodyVersionIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListSecretVersionIdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretVersionIdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VersionIds, versionIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretVersionIdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VersionIds, versionIds_);
    };
    ListSecretVersionIdsResponseBody() = default ;
    ListSecretVersionIdsResponseBody(const ListSecretVersionIdsResponseBody &) = default ;
    ListSecretVersionIdsResponseBody(ListSecretVersionIdsResponseBody &&) = default ;
    ListSecretVersionIdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretVersionIdsResponseBody() = default ;
    ListSecretVersionIdsResponseBody& operator=(const ListSecretVersionIdsResponseBody &) = default ;
    ListSecretVersionIdsResponseBody& operator=(ListSecretVersionIdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->secretName_ == nullptr && return this->totalCount_ == nullptr && return this->versionIds_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSecretVersionIdsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSecretVersionIdsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecretVersionIdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline ListSecretVersionIdsResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSecretVersionIdsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // versionIds Field Functions 
    bool hasVersionIds() const { return this->versionIds_ != nullptr;};
    void deleteVersionIds() { this->versionIds_ = nullptr;};
    inline const ListSecretVersionIdsResponseBodyVersionIds & versionIds() const { DARABONBA_PTR_GET_CONST(versionIds_, ListSecretVersionIdsResponseBodyVersionIds) };
    inline ListSecretVersionIdsResponseBodyVersionIds versionIds() { DARABONBA_PTR_GET(versionIds_, ListSecretVersionIdsResponseBodyVersionIds) };
    inline ListSecretVersionIdsResponseBody& setVersionIds(const ListSecretVersionIdsResponseBodyVersionIds & versionIds) { DARABONBA_PTR_SET_VALUE(versionIds_, versionIds) };
    inline ListSecretVersionIdsResponseBody& setVersionIds(ListSecretVersionIdsResponseBodyVersionIds && versionIds) { DARABONBA_PTR_SET_RVALUE(versionIds_, versionIds) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the secret.
    std::shared_ptr<string> secretName_ = nullptr;
    // The number of entries returned on the current page.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The list of secret versions.
    std::shared_ptr<ListSecretVersionIdsResponseBodyVersionIds> versionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
