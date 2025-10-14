// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECORDRESPONSEBODYRECORDMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETRECORDRESPONSEBODYRECORDMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRecordResponseBodyRecordModelAuthConf.hpp>
#include <alibabacloud/models/GetRecordResponseBodyRecordModelData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRecordResponseBodyRecordModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecordResponseBodyRecordModel& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetRecordResponseBodyRecordModel& obj) { 
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
    GetRecordResponseBodyRecordModel() = default ;
    GetRecordResponseBodyRecordModel(const GetRecordResponseBodyRecordModel &) = default ;
    GetRecordResponseBodyRecordModel(GetRecordResponseBodyRecordModel &&) = default ;
    GetRecordResponseBodyRecordModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecordResponseBodyRecordModel() = default ;
    GetRecordResponseBodyRecordModel& operator=(const GetRecordResponseBodyRecordModel &) = default ;
    GetRecordResponseBodyRecordModel& operator=(GetRecordResponseBodyRecordModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConf_ == nullptr
        && return this->bizName_ == nullptr && return this->comment_ == nullptr && return this->createTime_ == nullptr && return this->data_ == nullptr && return this->hostPolicy_ == nullptr
        && return this->proxied_ == nullptr && return this->recordCname_ == nullptr && return this->recordId_ == nullptr && return this->recordName_ == nullptr && return this->recordSourceType_ == nullptr
        && return this->recordType_ == nullptr && return this->siteId_ == nullptr && return this->siteName_ == nullptr && return this->ttl_ == nullptr && return this->updateTime_ == nullptr; };
    // authConf Field Functions 
    bool hasAuthConf() const { return this->authConf_ != nullptr;};
    void deleteAuthConf() { this->authConf_ = nullptr;};
    inline const Models::GetRecordResponseBodyRecordModelAuthConf & authConf() const { DARABONBA_PTR_GET_CONST(authConf_, Models::GetRecordResponseBodyRecordModelAuthConf) };
    inline Models::GetRecordResponseBodyRecordModelAuthConf authConf() { DARABONBA_PTR_GET(authConf_, Models::GetRecordResponseBodyRecordModelAuthConf) };
    inline GetRecordResponseBodyRecordModel& setAuthConf(const Models::GetRecordResponseBodyRecordModelAuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
    inline GetRecordResponseBodyRecordModel& setAuthConf(Models::GetRecordResponseBodyRecordModelAuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline GetRecordResponseBodyRecordModel& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetRecordResponseBodyRecordModel& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetRecordResponseBodyRecordModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::GetRecordResponseBodyRecordModelData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::GetRecordResponseBodyRecordModelData) };
    inline Models::GetRecordResponseBodyRecordModelData data() { DARABONBA_PTR_GET(data_, Models::GetRecordResponseBodyRecordModelData) };
    inline GetRecordResponseBodyRecordModel& setData(const Models::GetRecordResponseBodyRecordModelData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRecordResponseBodyRecordModel& setData(Models::GetRecordResponseBodyRecordModelData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // hostPolicy Field Functions 
    bool hasHostPolicy() const { return this->hostPolicy_ != nullptr;};
    void deleteHostPolicy() { this->hostPolicy_ = nullptr;};
    inline string hostPolicy() const { DARABONBA_PTR_GET_DEFAULT(hostPolicy_, "") };
    inline GetRecordResponseBodyRecordModel& setHostPolicy(string hostPolicy) { DARABONBA_PTR_SET_VALUE(hostPolicy_, hostPolicy) };


    // proxied Field Functions 
    bool hasProxied() const { return this->proxied_ != nullptr;};
    void deleteProxied() { this->proxied_ = nullptr;};
    inline bool proxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
    inline GetRecordResponseBodyRecordModel& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


    // recordCname Field Functions 
    bool hasRecordCname() const { return this->recordCname_ != nullptr;};
    void deleteRecordCname() { this->recordCname_ = nullptr;};
    inline string recordCname() const { DARABONBA_PTR_GET_DEFAULT(recordCname_, "") };
    inline GetRecordResponseBodyRecordModel& setRecordCname(string recordCname) { DARABONBA_PTR_SET_VALUE(recordCname_, recordCname) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline GetRecordResponseBodyRecordModel& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline GetRecordResponseBodyRecordModel& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // recordSourceType Field Functions 
    bool hasRecordSourceType() const { return this->recordSourceType_ != nullptr;};
    void deleteRecordSourceType() { this->recordSourceType_ = nullptr;};
    inline string recordSourceType() const { DARABONBA_PTR_GET_DEFAULT(recordSourceType_, "") };
    inline GetRecordResponseBodyRecordModel& setRecordSourceType(string recordSourceType) { DARABONBA_PTR_SET_VALUE(recordSourceType_, recordSourceType) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string recordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline GetRecordResponseBodyRecordModel& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetRecordResponseBodyRecordModel& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline GetRecordResponseBodyRecordModel& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline GetRecordResponseBodyRecordModel& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetRecordResponseBodyRecordModel& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The origin authentication information of the CNAME record.
    std::shared_ptr<Models::GetRecordResponseBodyRecordModelAuthConf> authConf_ = nullptr;
    // The business scenario of the record for acceleration. Leave this parameter empty if your record is not proxied. Valid values:
    // 
    // *   **image_video**
    // *   **api**
    // *   **web**
    std::shared_ptr<string> bizName_ = nullptr;
    // The comments of the record.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the record was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The DNS record information. The content returned by this parameter varies based on the record type.
    std::shared_ptr<Models::GetRecordResponseBodyRecordModelData> data_ = nullptr;
    // The origin host policy. This policy takes effect when the record type is CNAME. Valid values:
    // 
    // *   follow_hostname: matches the requested domain name.
    // *   follow_origin_domain: matches the origin\\"s domain name.
    std::shared_ptr<string> hostPolicy_ = nullptr;
    // Indicates whether the record is proxied. Only CNAME and A/AAAA records can be proxied. Valid values:
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
    // The origin type for the CNAME record. This parameter is required when you add a CNAME record. Valid values:
    // 
    // *   **OSS**: OSS bucket.
    // *   **S3**: S3 bucket.
    // *   **LB**: load balancer.
    // *   **OP**: origin pool.
    // *   **Domain**: domain name.
    // 
    // If you do not pass this parameter or if you leave its value empty, Domain is returned by default.
    std::shared_ptr<string> recordSourceType_ = nullptr;
    // The type of the DNS record, such as **A/AAAA, CNAME, and TXT**.
    std::shared_ptr<string> recordType_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The website name.
    std::shared_ptr<string> siteName_ = nullptr;
    // The TTL of the record. Unit: seconds. If the value is 1, the TTL of the record is determined by the system.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The time when the record was updated. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
