// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERECORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERECORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRecordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRecordShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConf, authConfShrink_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Data, dataShrink_);
      DARABONBA_PTR_TO_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_TO_JSON(Proxied, proxied_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRecordShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConf, authConfShrink_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Data, dataShrink_);
      DARABONBA_PTR_FROM_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateRecordShrinkRequest() = default ;
    CreateRecordShrinkRequest(const CreateRecordShrinkRequest &) = default ;
    CreateRecordShrinkRequest(CreateRecordShrinkRequest &&) = default ;
    CreateRecordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRecordShrinkRequest() = default ;
    CreateRecordShrinkRequest& operator=(const CreateRecordShrinkRequest &) = default ;
    CreateRecordShrinkRequest& operator=(CreateRecordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfShrink_ == nullptr
        && this->bizName_ == nullptr && this->comment_ == nullptr && this->dataShrink_ == nullptr && this->hostPolicy_ == nullptr && this->httpPorts_ == nullptr
        && this->httpsPorts_ == nullptr && this->proxied_ == nullptr && this->recordName_ == nullptr && this->siteId_ == nullptr && this->sourceType_ == nullptr
        && this->ttl_ == nullptr && this->type_ == nullptr; };
    // authConfShrink Field Functions 
    bool hasAuthConfShrink() const { return this->authConfShrink_ != nullptr;};
    void deleteAuthConfShrink() { this->authConfShrink_ = nullptr;};
    inline string getAuthConfShrink() const { DARABONBA_PTR_GET_DEFAULT(authConfShrink_, "") };
    inline CreateRecordShrinkRequest& setAuthConfShrink(string authConfShrink) { DARABONBA_PTR_SET_VALUE(authConfShrink_, authConfShrink) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline CreateRecordShrinkRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateRecordShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dataShrink Field Functions 
    bool hasDataShrink() const { return this->dataShrink_ != nullptr;};
    void deleteDataShrink() { this->dataShrink_ = nullptr;};
    inline string getDataShrink() const { DARABONBA_PTR_GET_DEFAULT(dataShrink_, "") };
    inline CreateRecordShrinkRequest& setDataShrink(string dataShrink) { DARABONBA_PTR_SET_VALUE(dataShrink_, dataShrink) };


    // hostPolicy Field Functions 
    bool hasHostPolicy() const { return this->hostPolicy_ != nullptr;};
    void deleteHostPolicy() { this->hostPolicy_ = nullptr;};
    inline string getHostPolicy() const { DARABONBA_PTR_GET_DEFAULT(hostPolicy_, "") };
    inline CreateRecordShrinkRequest& setHostPolicy(string hostPolicy) { DARABONBA_PTR_SET_VALUE(hostPolicy_, hostPolicy) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline string getHttpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
    inline CreateRecordShrinkRequest& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline string getHttpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
    inline CreateRecordShrinkRequest& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


    // proxied Field Functions 
    bool hasProxied() const { return this->proxied_ != nullptr;};
    void deleteProxied() { this->proxied_ = nullptr;};
    inline bool getProxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
    inline CreateRecordShrinkRequest& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline CreateRecordShrinkRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateRecordShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateRecordShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline CreateRecordShrinkRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateRecordShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The origin server authentication information for a CNAME record.
    shared_ptr<string> authConfShrink_ {};
    // The business scenario used to tag the DNS record. This parameter is required when proxy acceleration is enabled for the DNS record. That is, the Proxied parameter is set to true. This parameter is not required when proxy acceleration is disabled. That is, the Proxied parameter is set to false. Valid values:
    // - **image_video**: Images and videos.
    // - **api**: API operations.
    // - **web**: Web pages.
    shared_ptr<string> bizName_ {};
    // The description of the record. The description can be up to 100 characters in length.
    shared_ptr<string> comment_ {};
    // The DNS information of the record. The required content for this field varies based on the record type. For more information, see
    // <props="china">[Documentation](https://help.aliyun.com/document_detail/2708761.html)<props="intl">[Documentation](https://www.alibabacloud.com/help/doc-detail/2708761.html)
    // .
    // 
    // This parameter is required.
    shared_ptr<string> dataShrink_ {};
    // The back-to-origin host policy. This parameter takes effect when the record type is CNAME. Settings for the host policy in back-to-origin requests. Two patterns are available:
    // 
    // - **follow_hostname**: Follows the request host.
    // - **follow_origin_domain**: Follows the Origin Domain Name.
    shared_ptr<string> hostPolicy_ {};
    // The HTTP port. By default, port 80 is supported.
    shared_ptr<string> httpPorts_ {};
    // The HTTPS port. By default, port 443 is supported.
    shared_ptr<string> httpsPorts_ {};
    // Specifies whether to enable proxy acceleration for the record. Proxy acceleration can be enabled only for CNAME, A, or AAAA records. That is, the Type parameter is set to CNAME, A, or AAAA. Valid values:
    // - **true**: Enables proxy acceleration.
    // - **false**: Disables proxy acceleration.
    shared_ptr<bool> proxied_ {};
    // The record name.
    // 
    // This parameter is required.
    shared_ptr<string> recordName_ {};
    // The site ID. You can obtain the site ID by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The origin server type for a CNAME record. This parameter is required when you add a CNAME record. That is, the Type parameter is set to CNAME. Valid values:
    // 
    // - **OSS**: OSS origin server.
    // - **S3**: S3 origin server.
    // - **LB**: Load balancing origin server.
    // - **OP**: IPAM pool origin server.
    // - **Domain**: Common domain name origin server.
    // 
    // If this parameter is not specified or is left empty, the default value is Domain, which indicates a common domain name origin server.
    shared_ptr<string> sourceType_ {};
    // The time-to-live (TTL) of the record, in seconds. A value of 1 indicates that the TTL is automatically determined.
    // 
    // This parameter is required.
    shared_ptr<int32_t> ttl_ {};
    // The DNS record type, such as **A/AAAA**, **CNAME**, or **TXT**.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
