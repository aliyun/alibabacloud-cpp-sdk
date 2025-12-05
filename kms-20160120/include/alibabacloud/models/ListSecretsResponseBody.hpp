// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSECRETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSecretsResponseBodySecretList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListSecretsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSecretsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecretList, secretList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSecretsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecretList, secretList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSecretsResponseBody() = default ;
    ListSecretsResponseBody(const ListSecretsResponseBody &) = default ;
    ListSecretsResponseBody(ListSecretsResponseBody &&) = default ;
    ListSecretsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSecretsResponseBody() = default ;
    ListSecretsResponseBody& operator=(const ListSecretsResponseBody &) = default ;
    ListSecretsResponseBody& operator=(ListSecretsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->secretList_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSecretsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSecretsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSecretsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secretList Field Functions 
    bool hasSecretList() const { return this->secretList_ != nullptr;};
    void deleteSecretList() { this->secretList_ = nullptr;};
    inline const ListSecretsResponseBodySecretList & secretList() const { DARABONBA_PTR_GET_CONST(secretList_, ListSecretsResponseBodySecretList) };
    inline ListSecretsResponseBodySecretList secretList() { DARABONBA_PTR_GET(secretList_, ListSecretsResponseBodySecretList) };
    inline ListSecretsResponseBody& setSecretList(const ListSecretsResponseBodySecretList & secretList) { DARABONBA_PTR_SET_VALUE(secretList_, secretList) };
    inline ListSecretsResponseBody& setSecretList(ListSecretsResponseBodySecretList && secretList) { DARABONBA_PTR_SET_RVALUE(secretList_, secretList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSecretsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of returned secrets.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The list of secrets.
    std::shared_ptr<string> requestId_ = nullptr;
    // The time when the secret was updated.
    std::shared_ptr<ListSecretsResponseBodySecretList> secretList_ = nullptr;
    // The secret name.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
