// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKMSINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKMSINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListKmsInstancesResponseBodyKmsInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListKmsInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKmsInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KmsInstances, kmsInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListKmsInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KmsInstances, kmsInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListKmsInstancesResponseBody() = default ;
    ListKmsInstancesResponseBody(const ListKmsInstancesResponseBody &) = default ;
    ListKmsInstancesResponseBody(ListKmsInstancesResponseBody &&) = default ;
    ListKmsInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKmsInstancesResponseBody() = default ;
    ListKmsInstancesResponseBody& operator=(const ListKmsInstancesResponseBody &) = default ;
    ListKmsInstancesResponseBody& operator=(ListKmsInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kmsInstances_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // kmsInstances Field Functions 
    bool hasKmsInstances() const { return this->kmsInstances_ != nullptr;};
    void deleteKmsInstances() { this->kmsInstances_ = nullptr;};
    inline const ListKmsInstancesResponseBodyKmsInstances & kmsInstances() const { DARABONBA_PTR_GET_CONST(kmsInstances_, ListKmsInstancesResponseBodyKmsInstances) };
    inline ListKmsInstancesResponseBodyKmsInstances kmsInstances() { DARABONBA_PTR_GET(kmsInstances_, ListKmsInstancesResponseBodyKmsInstances) };
    inline ListKmsInstancesResponseBody& setKmsInstances(const ListKmsInstancesResponseBodyKmsInstances & kmsInstances) { DARABONBA_PTR_SET_VALUE(kmsInstances_, kmsInstances) };
    inline ListKmsInstancesResponseBody& setKmsInstances(ListKmsInstancesResponseBodyKmsInstances && kmsInstances) { DARABONBA_PTR_SET_RVALUE(kmsInstances_, kmsInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListKmsInstancesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListKmsInstancesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKmsInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListKmsInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of KMS instances.
    std::shared_ptr<ListKmsInstancesResponseBodyKmsInstances> kmsInstances_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of KMS instances.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
