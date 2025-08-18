// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECORDSRESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_LISTRECORDSRESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRecordsResponseBodyRecordsAuthConf.hpp>
#include <alibabacloud/models/ListRecordsResponseBodyRecordsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListRecordsResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConf, authConf_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_TO_JSON(Proxied, proxied_);
      DARABONBA_PTR_TO_JSON(RecordCname, recordCname_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(RecordSourceType, recordSourceType_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecordsResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConf, authConf_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
      DARABONBA_PTR_FROM_JSON(RecordCname, recordCname_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(RecordSourceType, recordSourceType_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListRecordsResponseBodyRecords() = default ;
    ListRecordsResponseBodyRecords(const ListRecordsResponseBodyRecords &) = default ;
    ListRecordsResponseBodyRecords(ListRecordsResponseBodyRecords &&) = default ;
    ListRecordsResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecordsResponseBodyRecords() = default ;
    ListRecordsResponseBodyRecords& operator=(const ListRecordsResponseBodyRecords &) = default ;
    ListRecordsResponseBodyRecords& operator=(ListRecordsResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authConf_ != nullptr
        && this->bizName_ != nullptr && this->comment_ != nullptr && this->createTime_ != nullptr && this->data_ != nullptr && this->hostPolicy_ != nullptr
        && this->proxied_ != nullptr && this->recordCname_ != nullptr && this->recordId_ != nullptr && this->recordName_ != nullptr && this->recordSourceType_ != nullptr
        && this->recordType_ != nullptr && this->siteId_ != nullptr && this->siteName_ != nullptr && this->ttl_ != nullptr && this->updateTime_ != nullptr; };
    // authConf Field Functions 
    bool hasAuthConf() const { return this->authConf_ != nullptr;};
    void deleteAuthConf() { this->authConf_ = nullptr;};
    inline const Models::ListRecordsResponseBodyRecordsAuthConf & authConf() const { DARABONBA_PTR_GET_CONST(authConf_, Models::ListRecordsResponseBodyRecordsAuthConf) };
    inline Models::ListRecordsResponseBodyRecordsAuthConf authConf() { DARABONBA_PTR_GET(authConf_, Models::ListRecordsResponseBodyRecordsAuthConf) };
    inline ListRecordsResponseBodyRecords& setAuthConf(const Models::ListRecordsResponseBodyRecordsAuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
    inline ListRecordsResponseBodyRecords& setAuthConf(Models::ListRecordsResponseBodyRecordsAuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline ListRecordsResponseBodyRecords& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListRecordsResponseBodyRecords& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListRecordsResponseBodyRecords& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::ListRecordsResponseBodyRecordsData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::ListRecordsResponseBodyRecordsData) };
    inline Models::ListRecordsResponseBodyRecordsData data() { DARABONBA_PTR_GET(data_, Models::ListRecordsResponseBodyRecordsData) };
    inline ListRecordsResponseBodyRecords& setData(const Models::ListRecordsResponseBodyRecordsData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRecordsResponseBodyRecords& setData(Models::ListRecordsResponseBodyRecordsData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // hostPolicy Field Functions 
    bool hasHostPolicy() const { return this->hostPolicy_ != nullptr;};
    void deleteHostPolicy() { this->hostPolicy_ = nullptr;};
    inline string hostPolicy() const { DARABONBA_PTR_GET_DEFAULT(hostPolicy_, "") };
    inline ListRecordsResponseBodyRecords& setHostPolicy(string hostPolicy) { DARABONBA_PTR_SET_VALUE(hostPolicy_, hostPolicy) };


    // proxied Field Functions 
    bool hasProxied() const { return this->proxied_ != nullptr;};
    void deleteProxied() { this->proxied_ = nullptr;};
    inline bool proxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
    inline ListRecordsResponseBodyRecords& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


    // recordCname Field Functions 
    bool hasRecordCname() const { return this->recordCname_ != nullptr;};
    void deleteRecordCname() { this->recordCname_ = nullptr;};
    inline string recordCname() const { DARABONBA_PTR_GET_DEFAULT(recordCname_, "") };
    inline ListRecordsResponseBodyRecords& setRecordCname(string recordCname) { DARABONBA_PTR_SET_VALUE(recordCname_, recordCname) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline ListRecordsResponseBodyRecords& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline ListRecordsResponseBodyRecords& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // recordSourceType Field Functions 
    bool hasRecordSourceType() const { return this->recordSourceType_ != nullptr;};
    void deleteRecordSourceType() { this->recordSourceType_ = nullptr;};
    inline string recordSourceType() const { DARABONBA_PTR_GET_DEFAULT(recordSourceType_, "") };
    inline ListRecordsResponseBodyRecords& setRecordSourceType(string recordSourceType) { DARABONBA_PTR_SET_VALUE(recordSourceType_, recordSourceType) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string recordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline ListRecordsResponseBodyRecords& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListRecordsResponseBodyRecords& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline ListRecordsResponseBodyRecords& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline ListRecordsResponseBodyRecords& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListRecordsResponseBodyRecords& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The origin authentication information of the CNAME record.
    std::shared_ptr<Models::ListRecordsResponseBodyRecordsAuthConf> authConf_ = nullptr;
    // The business scenario of the record for acceleration. Valid values:
    // 
    // *   **image_video**: video and image.
    // *   **api**: API.
    // *   **web**: web page.
    std::shared_ptr<string> bizName_ = nullptr;
    // The comments of the record.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the record was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The DNS record information. Different types of records contain different information.
    std::shared_ptr<Models::ListRecordsResponseBodyRecordsData> data_ = nullptr;
    // The origin host policy. This policy takes effect when the record type is CNAME. Valid values:
    // 
    // *   follow_hostname: matches the requested domain name.
    // *   follow_origin_domain: matches the origin\\"s domain name.
    std::shared_ptr<string> hostPolicy_ = nullptr;
    // Indicates whether the record is proxied. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> proxied_ = nullptr;
    // The CNAME. If you use CNAME setup when you add your website to ESA, the value is the CNAME that you configured then.
    std::shared_ptr<string> recordCname_ = nullptr;
    // The record ID.
    std::shared_ptr<int64_t> recordId_ = nullptr;
    // The record name.
    std::shared_ptr<string> recordName_ = nullptr;
    // The origin type for the CNAME record. This parameter is returned when you add a CNAME record. Valid values:
    // 
    // *   **OSS**: OSS bucket.
    // *   **S3**: S3 bucket.
    // *   **LB**: load balancer.
    // *   **OP**: origin pool.
    // *   **Domain**: domain name.
    // 
    // If you do not pass this parameter or if you leave its value empty, Domain is returned by default.
    std::shared_ptr<string> recordSourceType_ = nullptr;
    // The DNS type of the record, such as **A/AAAA, CNAME, and TXT**.
    std::shared_ptr<string> recordType_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The website name.
    std::shared_ptr<string> siteName_ = nullptr;
    // The TTL of the record. Unit: seconds. If the value is 1, the TTL of the record is determined by the system.
    std::shared_ptr<int64_t> ttl_ = nullptr;
    // The time when the record was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
