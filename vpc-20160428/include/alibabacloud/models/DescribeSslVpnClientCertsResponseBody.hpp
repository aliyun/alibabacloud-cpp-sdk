// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTCERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESSLVPNCLIENTCERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeSslVpnClientCertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSslVpnClientCertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SslVpnClientCertKeys, sslVpnClientCertKeys_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSslVpnClientCertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SslVpnClientCertKeys, sslVpnClientCertKeys_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSslVpnClientCertsResponseBody() = default ;
    DescribeSslVpnClientCertsResponseBody(const DescribeSslVpnClientCertsResponseBody &) = default ;
    DescribeSslVpnClientCertsResponseBody(DescribeSslVpnClientCertsResponseBody &&) = default ;
    DescribeSslVpnClientCertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSslVpnClientCertsResponseBody() = default ;
    DescribeSslVpnClientCertsResponseBody& operator=(const DescribeSslVpnClientCertsResponseBody &) = default ;
    DescribeSslVpnClientCertsResponseBody& operator=(DescribeSslVpnClientCertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SslVpnClientCertKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SslVpnClientCertKeys& obj) { 
        DARABONBA_PTR_TO_JSON(SslVpnClientCertKey, sslVpnClientCertKey_);
      };
      friend void from_json(const Darabonba::Json& j, SslVpnClientCertKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(SslVpnClientCertKey, sslVpnClientCertKey_);
      };
      SslVpnClientCertKeys() = default ;
      SslVpnClientCertKeys(const SslVpnClientCertKeys &) = default ;
      SslVpnClientCertKeys(SslVpnClientCertKeys &&) = default ;
      SslVpnClientCertKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SslVpnClientCertKeys() = default ;
      SslVpnClientCertKeys& operator=(const SslVpnClientCertKeys &) = default ;
      SslVpnClientCertKeys& operator=(SslVpnClientCertKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SslVpnClientCertKey : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SslVpnClientCertKey& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SslVpnClientCertId, sslVpnClientCertId_);
          DARABONBA_PTR_TO_JSON(SslVpnServerId, sslVpnServerId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, SslVpnClientCertKey& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SslVpnClientCertId, sslVpnClientCertId_);
          DARABONBA_PTR_FROM_JSON(SslVpnServerId, sslVpnServerId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        SslVpnClientCertKey() = default ;
        SslVpnClientCertKey(const SslVpnClientCertKey &) = default ;
        SslVpnClientCertKey(SslVpnClientCertKey &&) = default ;
        SslVpnClientCertKey(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SslVpnClientCertKey() = default ;
        SslVpnClientCertKey& operator=(const SslVpnClientCertKey &) = default ;
        SslVpnClientCertKey& operator=(SslVpnClientCertKey &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->endTime_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->sslVpnClientCertId_ == nullptr
        && this->sslVpnServerId_ == nullptr && this->status_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline SslVpnClientCertKey& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline SslVpnClientCertKey& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SslVpnClientCertKey& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SslVpnClientCertKey& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline SslVpnClientCertKey& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // sslVpnClientCertId Field Functions 
        bool hasSslVpnClientCertId() const { return this->sslVpnClientCertId_ != nullptr;};
        void deleteSslVpnClientCertId() { this->sslVpnClientCertId_ = nullptr;};
        inline string getSslVpnClientCertId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnClientCertId_, "") };
        inline SslVpnClientCertKey& setSslVpnClientCertId(string sslVpnClientCertId) { DARABONBA_PTR_SET_VALUE(sslVpnClientCertId_, sslVpnClientCertId) };


        // sslVpnServerId Field Functions 
        bool hasSslVpnServerId() const { return this->sslVpnServerId_ != nullptr;};
        void deleteSslVpnServerId() { this->sslVpnServerId_ = nullptr;};
        inline string getSslVpnServerId() const { DARABONBA_PTR_GET_DEFAULT(sslVpnServerId_, "") };
        inline SslVpnClientCertKey& setSslVpnServerId(string sslVpnServerId) { DARABONBA_PTR_SET_VALUE(sslVpnServerId_, sslVpnServerId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SslVpnClientCertKey& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The timestamp generated when the SSL client certificate was created. Unit: milliseconds.
        // 
        // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> createTime_ {};
        // The timestamp generated when the SSL client certificate expires. Unit: milliseconds.
        // 
        // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> endTime_ {};
        // The name of the SSL client certificate.
        shared_ptr<string> name_ {};
        // The region ID of the SSL client certificate.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group to which the SSL client certificate belongs.
        // 
        // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
        shared_ptr<string> resourceGroupId_ {};
        // The ID of the SSL client certificate.
        shared_ptr<string> sslVpnClientCertId_ {};
        // The ID of the SSL server.
        shared_ptr<string> sslVpnServerId_ {};
        // The status of the SSL client certificate. Valid values:
        // 
        // *   **expiring-soon**: The certificate expires in one week.
        // *   **normal**
        // *   **expired**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->sslVpnClientCertKey_ == nullptr; };
      // sslVpnClientCertKey Field Functions 
      bool hasSslVpnClientCertKey() const { return this->sslVpnClientCertKey_ != nullptr;};
      void deleteSslVpnClientCertKey() { this->sslVpnClientCertKey_ = nullptr;};
      inline const vector<SslVpnClientCertKeys::SslVpnClientCertKey> & getSslVpnClientCertKey() const { DARABONBA_PTR_GET_CONST(sslVpnClientCertKey_, vector<SslVpnClientCertKeys::SslVpnClientCertKey>) };
      inline vector<SslVpnClientCertKeys::SslVpnClientCertKey> getSslVpnClientCertKey() { DARABONBA_PTR_GET(sslVpnClientCertKey_, vector<SslVpnClientCertKeys::SslVpnClientCertKey>) };
      inline SslVpnClientCertKeys& setSslVpnClientCertKey(const vector<SslVpnClientCertKeys::SslVpnClientCertKey> & sslVpnClientCertKey) { DARABONBA_PTR_SET_VALUE(sslVpnClientCertKey_, sslVpnClientCertKey) };
      inline SslVpnClientCertKeys& setSslVpnClientCertKey(vector<SslVpnClientCertKeys::SslVpnClientCertKey> && sslVpnClientCertKey) { DARABONBA_PTR_SET_RVALUE(sslVpnClientCertKey_, sslVpnClientCertKey) };


    protected:
      shared_ptr<vector<SslVpnClientCertKeys::SslVpnClientCertKey>> sslVpnClientCertKey_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sslVpnClientCertKeys_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSslVpnClientCertsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSslVpnClientCertsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSslVpnClientCertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sslVpnClientCertKeys Field Functions 
    bool hasSslVpnClientCertKeys() const { return this->sslVpnClientCertKeys_ != nullptr;};
    void deleteSslVpnClientCertKeys() { this->sslVpnClientCertKeys_ = nullptr;};
    inline const DescribeSslVpnClientCertsResponseBody::SslVpnClientCertKeys & getSslVpnClientCertKeys() const { DARABONBA_PTR_GET_CONST(sslVpnClientCertKeys_, DescribeSslVpnClientCertsResponseBody::SslVpnClientCertKeys) };
    inline DescribeSslVpnClientCertsResponseBody::SslVpnClientCertKeys getSslVpnClientCertKeys() { DARABONBA_PTR_GET(sslVpnClientCertKeys_, DescribeSslVpnClientCertsResponseBody::SslVpnClientCertKeys) };
    inline DescribeSslVpnClientCertsResponseBody& setSslVpnClientCertKeys(const DescribeSslVpnClientCertsResponseBody::SslVpnClientCertKeys & sslVpnClientCertKeys) { DARABONBA_PTR_SET_VALUE(sslVpnClientCertKeys_, sslVpnClientCertKeys) };
    inline DescribeSslVpnClientCertsResponseBody& setSslVpnClientCertKeys(DescribeSslVpnClientCertsResponseBody::SslVpnClientCertKeys && sslVpnClientCertKeys) { DARABONBA_PTR_SET_RVALUE(sslVpnClientCertKeys_, sslVpnClientCertKeys) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSslVpnClientCertsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the SSL client certificates.
    shared_ptr<DescribeSslVpnClientCertsResponseBody::SslVpnClientCertKeys> sslVpnClientCertKeys_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
