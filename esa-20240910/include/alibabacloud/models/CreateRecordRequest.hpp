// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRecordRequestAuthConf.hpp>
#include <alibabacloud/models/CreateRecordRequestData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConf, authConf_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_TO_JSON(Proxied, proxied_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConf, authConf_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateRecordRequest() = default ;
    CreateRecordRequest(const CreateRecordRequest &) = default ;
    CreateRecordRequest(CreateRecordRequest &&) = default ;
    CreateRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecordRequest() = default ;
    CreateRecordRequest& operator=(const CreateRecordRequest &) = default ;
    CreateRecordRequest& operator=(CreateRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authConf_ != nullptr
        && this->bizName_ != nullptr && this->comment_ != nullptr && this->data_ != nullptr && this->hostPolicy_ != nullptr && this->proxied_ != nullptr
        && this->recordName_ != nullptr && this->siteId_ != nullptr && this->sourceType_ != nullptr && this->ttl_ != nullptr && this->type_ != nullptr; };
    // authConf Field Functions 
    bool hasAuthConf() const { return this->authConf_ != nullptr;};
    void deleteAuthConf() { this->authConf_ = nullptr;};
    inline const CreateRecordRequestAuthConf & authConf() const { DARABONBA_PTR_GET_CONST(authConf_, CreateRecordRequestAuthConf) };
    inline CreateRecordRequestAuthConf authConf() { DARABONBA_PTR_GET(authConf_, CreateRecordRequestAuthConf) };
    inline CreateRecordRequest& setAuthConf(const CreateRecordRequestAuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
    inline CreateRecordRequest& setAuthConf(CreateRecordRequestAuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline CreateRecordRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateRecordRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateRecordRequestData & data() const { DARABONBA_PTR_GET_CONST(data_, CreateRecordRequestData) };
    inline CreateRecordRequestData data() { DARABONBA_PTR_GET(data_, CreateRecordRequestData) };
    inline CreateRecordRequest& setData(const CreateRecordRequestData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateRecordRequest& setData(CreateRecordRequestData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // hostPolicy Field Functions 
    bool hasHostPolicy() const { return this->hostPolicy_ != nullptr;};
    void deleteHostPolicy() { this->hostPolicy_ = nullptr;};
    inline string hostPolicy() const { DARABONBA_PTR_GET_DEFAULT(hostPolicy_, "") };
    inline CreateRecordRequest& setHostPolicy(string hostPolicy) { DARABONBA_PTR_SET_VALUE(hostPolicy_, hostPolicy) };


    // proxied Field Functions 
    bool hasProxied() const { return this->proxied_ != nullptr;};
    void deleteProxied() { this->proxied_ = nullptr;};
    inline bool proxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
    inline CreateRecordRequest& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline CreateRecordRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateRecordRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateRecordRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline CreateRecordRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRecordRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The origin authentication information of the CNAME record.
    std::shared_ptr<CreateRecordRequestAuthConf> authConf_ = nullptr;
    // The business scenario of the record for acceleration. Leave the parameter empty if your record is not proxied. Valid values:
    // 
    // *   **image_video**: video and image.
    // *   **api**: API.
    // *   **web**: web page.
    std::shared_ptr<string> bizName_ = nullptr;
    // The comment of the record. The maximum length is 100 characters.
    std::shared_ptr<string> comment_ = nullptr;
    // The DNS record information. The format of this field varies based on the record type. For more information, see [References](https://www.alibabacloud.com/help/doc-detail/2708761.html) .
    // 
    // This parameter is required.
    std::shared_ptr<CreateRecordRequestData> data_ = nullptr;
    // The origin host policy. This policy takes effect when the record type is CNAME. You can set the policy in two modes:
    // 
    // *   follow_hostname: Follow the host record.
    // *   follow_origin_domain: match the origin\\"s domain name.
    std::shared_ptr<string> hostPolicy_ = nullptr;
    // Specifies whether to proxy the record. Only CNAME and A/AAAA records can be proxied. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> proxied_ = nullptr;
    // The record name.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordName_ = nullptr;
    // The website ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The origin type for the CNAME record. This parameter is required when you add a CNAME record. Valid values:
    // 
    // *   **OSS**: OSS bucket.
    // *   **S3**: S3 bucket.
    // *   **LB**: load balancer.
    // *   **OP**: origin pool.
    // *   **Domain**: domain name.
    // 
    // If you do not pass this parameter or if you leave its value empty, Domain is used by default.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The TTL of the record. Unit: seconds. If the value is 1, the TTL of the record is determined by the system.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The type of the DNS record. For example, A/AAAA, TXT, MX, or CNAME.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
