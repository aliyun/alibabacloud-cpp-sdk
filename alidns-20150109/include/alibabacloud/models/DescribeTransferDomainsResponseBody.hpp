// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFERDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFERDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeTransferDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransferDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTransfers, domainTransfers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransferDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTransfers, domainTransfers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTransferDomainsResponseBody() = default ;
    DescribeTransferDomainsResponseBody(const DescribeTransferDomainsResponseBody &) = default ;
    DescribeTransferDomainsResponseBody(DescribeTransferDomainsResponseBody &&) = default ;
    DescribeTransferDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransferDomainsResponseBody() = default ;
    DescribeTransferDomainsResponseBody& operator=(const DescribeTransferDomainsResponseBody &) = default ;
    DescribeTransferDomainsResponseBody& operator=(DescribeTransferDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainTransfers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainTransfers& obj) { 
        DARABONBA_PTR_TO_JSON(DomainTransfer, domainTransfer_);
      };
      friend void from_json(const Darabonba::Json& j, DomainTransfers& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainTransfer, domainTransfer_);
      };
      DomainTransfers() = default ;
      DomainTransfers(const DomainTransfers &) = default ;
      DomainTransfers(DomainTransfers &&) = default ;
      DomainTransfers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainTransfers() = default ;
      DomainTransfers& operator=(const DomainTransfers &) = default ;
      DomainTransfers& operator=(DomainTransfers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainTransfer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainTransfer& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(FromUserId, fromUserId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainTransfer& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(FromUserId, fromUserId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
        };
        DomainTransfer() = default ;
        DomainTransfer(const DomainTransfer &) = default ;
        DomainTransfer(DomainTransfer &&) = default ;
        DomainTransfer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainTransfer() = default ;
        DomainTransfer& operator=(const DomainTransfer &) = default ;
        DomainTransfer& operator=(DomainTransfer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->domainName_ == nullptr && this->fromUserId_ == nullptr && this->id_ == nullptr && this->targetUserId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline DomainTransfer& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline DomainTransfer& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainTransfer& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // fromUserId Field Functions 
        bool hasFromUserId() const { return this->fromUserId_ != nullptr;};
        void deleteFromUserId() { this->fromUserId_ = nullptr;};
        inline int64_t getFromUserId() const { DARABONBA_PTR_GET_DEFAULT(fromUserId_, 0L) };
        inline DomainTransfer& setFromUserId(int64_t fromUserId) { DARABONBA_PTR_SET_VALUE(fromUserId_, fromUserId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DomainTransfer& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // targetUserId Field Functions 
        bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
        void deleteTargetUserId() { this->targetUserId_ = nullptr;};
        inline int64_t getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, 0L) };
        inline DomainTransfer& setTargetUserId(int64_t targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


      protected:
        // The time when the domain name was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The time when the domain name was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> createTimestamp_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The user ID from which the domain name was transferred.
        shared_ptr<int64_t> fromUserId_ {};
        // The ID of the domain name that was transferred.
        shared_ptr<int64_t> id_ {};
        // The user ID to which the domain name was transferred.
        shared_ptr<int64_t> targetUserId_ {};
      };

      virtual bool empty() const override { return this->domainTransfer_ == nullptr; };
      // domainTransfer Field Functions 
      bool hasDomainTransfer() const { return this->domainTransfer_ != nullptr;};
      void deleteDomainTransfer() { this->domainTransfer_ = nullptr;};
      inline const vector<DomainTransfers::DomainTransfer> & getDomainTransfer() const { DARABONBA_PTR_GET_CONST(domainTransfer_, vector<DomainTransfers::DomainTransfer>) };
      inline vector<DomainTransfers::DomainTransfer> getDomainTransfer() { DARABONBA_PTR_GET(domainTransfer_, vector<DomainTransfers::DomainTransfer>) };
      inline DomainTransfers& setDomainTransfer(const vector<DomainTransfers::DomainTransfer> & domainTransfer) { DARABONBA_PTR_SET_VALUE(domainTransfer_, domainTransfer) };
      inline DomainTransfers& setDomainTransfer(vector<DomainTransfers::DomainTransfer> && domainTransfer) { DARABONBA_PTR_SET_RVALUE(domainTransfer_, domainTransfer) };


    protected:
      shared_ptr<vector<DomainTransfers::DomainTransfer>> domainTransfer_ {};
    };

    virtual bool empty() const override { return this->domainTransfers_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domainTransfers Field Functions 
    bool hasDomainTransfers() const { return this->domainTransfers_ != nullptr;};
    void deleteDomainTransfers() { this->domainTransfers_ = nullptr;};
    inline const DescribeTransferDomainsResponseBody::DomainTransfers & getDomainTransfers() const { DARABONBA_PTR_GET_CONST(domainTransfers_, DescribeTransferDomainsResponseBody::DomainTransfers) };
    inline DescribeTransferDomainsResponseBody::DomainTransfers getDomainTransfers() { DARABONBA_PTR_GET(domainTransfers_, DescribeTransferDomainsResponseBody::DomainTransfers) };
    inline DescribeTransferDomainsResponseBody& setDomainTransfers(const DescribeTransferDomainsResponseBody::DomainTransfers & domainTransfers) { DARABONBA_PTR_SET_VALUE(domainTransfers_, domainTransfers) };
    inline DescribeTransferDomainsResponseBody& setDomainTransfers(DescribeTransferDomainsResponseBody::DomainTransfers && domainTransfers) { DARABONBA_PTR_SET_RVALUE(domainTransfers_, domainTransfers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeTransferDomainsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeTransferDomainsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransferDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeTransferDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain names that were transferred between accounts.
    shared_ptr<DescribeTransferDomainsResponseBody::DomainTransfers> domainTransfers_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
