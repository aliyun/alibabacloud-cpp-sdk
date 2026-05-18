// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSQUOTALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSQUOTALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarFsQuotaListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarFsQuotaListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(QuotaItems, quotaItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarFsQuotaListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(QuotaItems, quotaItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribePolarFsQuotaListResponseBody() = default ;
    DescribePolarFsQuotaListResponseBody(const DescribePolarFsQuotaListResponseBody &) = default ;
    DescribePolarFsQuotaListResponseBody(DescribePolarFsQuotaListResponseBody &&) = default ;
    DescribePolarFsQuotaListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarFsQuotaListResponseBody() = default ;
    DescribePolarFsQuotaListResponseBody& operator=(const DescribePolarFsQuotaListResponseBody &) = default ;
    DescribePolarFsQuotaListResponseBody& operator=(DescribePolarFsQuotaListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QuotaItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QuotaItems& obj) { 
        DARABONBA_PTR_TO_JSON(Capacity, capacity_);
        DARABONBA_PTR_TO_JSON(Inodes, inodes_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
        DARABONBA_PTR_TO_JSON(UsedInodes, usedInodes_);
      };
      friend void from_json(const Darabonba::Json& j, QuotaItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
        DARABONBA_PTR_FROM_JSON(Inodes, inodes_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
        DARABONBA_PTR_FROM_JSON(UsedInodes, usedInodes_);
      };
      QuotaItems() = default ;
      QuotaItems(const QuotaItems &) = default ;
      QuotaItems(QuotaItems &&) = default ;
      QuotaItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QuotaItems() = default ;
      QuotaItems& operator=(const QuotaItems &) = default ;
      QuotaItems& operator=(QuotaItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->capacity_ == nullptr
        && this->inodes_ == nullptr && this->path_ == nullptr && this->usedCapacity_ == nullptr && this->usedInodes_ == nullptr; };
      // capacity Field Functions 
      bool hasCapacity() const { return this->capacity_ != nullptr;};
      void deleteCapacity() { this->capacity_ = nullptr;};
      inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
      inline QuotaItems& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


      // inodes Field Functions 
      bool hasInodes() const { return this->inodes_ != nullptr;};
      void deleteInodes() { this->inodes_ = nullptr;};
      inline int64_t getInodes() const { DARABONBA_PTR_GET_DEFAULT(inodes_, 0L) };
      inline QuotaItems& setInodes(int64_t inodes) { DARABONBA_PTR_SET_VALUE(inodes_, inodes) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline QuotaItems& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // usedCapacity Field Functions 
      bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
      void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
      inline int64_t getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0L) };
      inline QuotaItems& setUsedCapacity(int64_t usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


      // usedInodes Field Functions 
      bool hasUsedInodes() const { return this->usedInodes_ != nullptr;};
      void deleteUsedInodes() { this->usedInodes_ = nullptr;};
      inline int64_t getUsedInodes() const { DARABONBA_PTR_GET_DEFAULT(usedInodes_, 0L) };
      inline QuotaItems& setUsedInodes(int64_t usedInodes) { DARABONBA_PTR_SET_VALUE(usedInodes_, usedInodes) };


    protected:
      shared_ptr<int64_t> capacity_ {};
      // Inodes
      shared_ptr<int64_t> inodes_ {};
      shared_ptr<string> path_ {};
      shared_ptr<int64_t> usedCapacity_ {};
      shared_ptr<int64_t> usedInodes_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->polarFsInstanceId_ == nullptr && this->quotaItems_ == nullptr && this->requestId_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribePolarFsQuotaListResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline DescribePolarFsQuotaListResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribePolarFsQuotaListResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DescribePolarFsQuotaListResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // quotaItems Field Functions 
    bool hasQuotaItems() const { return this->quotaItems_ != nullptr;};
    void deleteQuotaItems() { this->quotaItems_ = nullptr;};
    inline const vector<DescribePolarFsQuotaListResponseBody::QuotaItems> & getQuotaItems() const { DARABONBA_PTR_GET_CONST(quotaItems_, vector<DescribePolarFsQuotaListResponseBody::QuotaItems>) };
    inline vector<DescribePolarFsQuotaListResponseBody::QuotaItems> getQuotaItems() { DARABONBA_PTR_GET(quotaItems_, vector<DescribePolarFsQuotaListResponseBody::QuotaItems>) };
    inline DescribePolarFsQuotaListResponseBody& setQuotaItems(const vector<DescribePolarFsQuotaListResponseBody::QuotaItems> & quotaItems) { DARABONBA_PTR_SET_VALUE(quotaItems_, quotaItems) };
    inline DescribePolarFsQuotaListResponseBody& setQuotaItems(vector<DescribePolarFsQuotaListResponseBody::QuotaItems> && quotaItems) { DARABONBA_PTR_SET_RVALUE(quotaItems_, quotaItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarFsQuotaListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribePolarFsQuotaListResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageRecordCount_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> polarFsInstanceId_ {};
    shared_ptr<vector<DescribePolarFsQuotaListResponseBody::QuotaItems>> quotaItems_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
