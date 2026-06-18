// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERECORDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERECORDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateRecordShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRecordShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConf, authConfShrink_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Data, dataShrink_);
      DARABONBA_PTR_TO_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_TO_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_TO_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_TO_JSON(Proxied, proxied_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRecordShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConf, authConfShrink_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Data, dataShrink_);
      DARABONBA_PTR_FROM_JSON(HostPolicy, hostPolicy_);
      DARABONBA_PTR_FROM_JSON(HttpPorts, httpPorts_);
      DARABONBA_PTR_FROM_JSON(HttpsPorts, httpsPorts_);
      DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateRecordShrinkRequest() = default ;
    UpdateRecordShrinkRequest(const UpdateRecordShrinkRequest &) = default ;
    UpdateRecordShrinkRequest(UpdateRecordShrinkRequest &&) = default ;
    UpdateRecordShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRecordShrinkRequest() = default ;
    UpdateRecordShrinkRequest& operator=(const UpdateRecordShrinkRequest &) = default ;
    UpdateRecordShrinkRequest& operator=(UpdateRecordShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfShrink_ == nullptr
        && this->bizName_ == nullptr && this->comment_ == nullptr && this->dataShrink_ == nullptr && this->hostPolicy_ == nullptr && this->httpPorts_ == nullptr
        && this->httpsPorts_ == nullptr && this->proxied_ == nullptr && this->recordId_ == nullptr && this->sourceType_ == nullptr && this->ttl_ == nullptr
        && this->type_ == nullptr; };
    // authConfShrink Field Functions 
    bool hasAuthConfShrink() const { return this->authConfShrink_ != nullptr;};
    void deleteAuthConfShrink() { this->authConfShrink_ = nullptr;};
    inline string getAuthConfShrink() const { DARABONBA_PTR_GET_DEFAULT(authConfShrink_, "") };
    inline UpdateRecordShrinkRequest& setAuthConfShrink(string authConfShrink) { DARABONBA_PTR_SET_VALUE(authConfShrink_, authConfShrink) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline UpdateRecordShrinkRequest& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateRecordShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dataShrink Field Functions 
    bool hasDataShrink() const { return this->dataShrink_ != nullptr;};
    void deleteDataShrink() { this->dataShrink_ = nullptr;};
    inline string getDataShrink() const { DARABONBA_PTR_GET_DEFAULT(dataShrink_, "") };
    inline UpdateRecordShrinkRequest& setDataShrink(string dataShrink) { DARABONBA_PTR_SET_VALUE(dataShrink_, dataShrink) };


    // hostPolicy Field Functions 
    bool hasHostPolicy() const { return this->hostPolicy_ != nullptr;};
    void deleteHostPolicy() { this->hostPolicy_ = nullptr;};
    inline string getHostPolicy() const { DARABONBA_PTR_GET_DEFAULT(hostPolicy_, "") };
    inline UpdateRecordShrinkRequest& setHostPolicy(string hostPolicy) { DARABONBA_PTR_SET_VALUE(hostPolicy_, hostPolicy) };


    // httpPorts Field Functions 
    bool hasHttpPorts() const { return this->httpPorts_ != nullptr;};
    void deleteHttpPorts() { this->httpPorts_ = nullptr;};
    inline string getHttpPorts() const { DARABONBA_PTR_GET_DEFAULT(httpPorts_, "") };
    inline UpdateRecordShrinkRequest& setHttpPorts(string httpPorts) { DARABONBA_PTR_SET_VALUE(httpPorts_, httpPorts) };


    // httpsPorts Field Functions 
    bool hasHttpsPorts() const { return this->httpsPorts_ != nullptr;};
    void deleteHttpsPorts() { this->httpsPorts_ = nullptr;};
    inline string getHttpsPorts() const { DARABONBA_PTR_GET_DEFAULT(httpsPorts_, "") };
    inline UpdateRecordShrinkRequest& setHttpsPorts(string httpsPorts) { DARABONBA_PTR_SET_VALUE(httpsPorts_, httpsPorts) };


    // proxied Field Functions 
    bool hasProxied() const { return this->proxied_ != nullptr;};
    void deleteProxied() { this->proxied_ = nullptr;};
    inline bool getProxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
    inline UpdateRecordShrinkRequest& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline UpdateRecordShrinkRequest& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline UpdateRecordShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline UpdateRecordShrinkRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateRecordShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The origin authentication settings for the CNAME record.
    shared_ptr<string> authConfShrink_ {};
    // The use case for proxy acceleration. Omit this parameter if proxy acceleration is disabled. Valid values:
    // 
    // - **video_image**: Video and images.
    // 
    // - **api**: APIs.
    // 
    // - **web**: Web pages.
    shared_ptr<string> bizName_ {};
    // A comment for the record.
    shared_ptr<string> comment_ {};
    // The DNS data for the record. The required content varies based on the record type. For more information, see <props="china">[Documentation](https://help.aliyun.com/document_detail/2708761.html)<props="intl">[Documentation](https://www.alibabacloud.com/help/doc-detail/2708761.html).
    // 
    // This parameter is required.
    shared_ptr<string> dataShrink_ {};
    // The origin HOST policy. This policy, which applies only to CNAME records, determines the value of the `HOST` header in requests sent to the origin. Valid values:
    // 
    // - **follow_hostname**: Follows the host record.
    // 
    // - **follow_origin_domain**: Follows the origin domain name.
    shared_ptr<string> hostPolicy_ {};
    shared_ptr<string> httpPorts_ {};
    shared_ptr<string> httpsPorts_ {};
    // Indicates whether to enable proxy acceleration for the record. Only CNAME and A/AAAA records support proxy acceleration. Valid values:
    // 
    // - **true**: Enables proxy acceleration.
    // 
    // - **false**: Disables proxy acceleration.
    shared_ptr<bool> proxied_ {};
    // The record ID. Call the [ListRecords](https://help.aliyun.com/document_detail/2850265.html) operation to get this ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordId_ {};
    // The origin type for the CNAME record. This parameter is required for CNAME records. Valid values:
    // 
    // - **OSS**: An OSS origin.
    // 
    // - **S3**: An S3 origin.
    // 
    // - **LB**: A load balancer origin.
    // 
    // - **OP**: An origin address pool origin.
    // 
    // - **Domain**: A standard domain name origin.
    // 
    // If this parameter is omitted or left empty, the default value is `Domain`.
    shared_ptr<string> sourceType_ {};
    // The record\\"s time to live (TTL) in seconds. The value must be an integer from **30 to 86400** or 1. A value of 1 sets the TTL to automatic.
    shared_ptr<int32_t> ttl_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
