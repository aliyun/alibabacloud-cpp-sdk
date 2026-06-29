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
    // The origin authentication information of the CNAME record.
    shared_ptr<string> authConfShrink_ {};
    // The business scenario for record acceleration. This parameter is not required for records without acceleration enabled. Valid values:
    // - **video_image**: video and image.
    // - **api**: API.
    // - **web**: web page.
    shared_ptr<string> bizName_ {};
    // The comment for the record.
    shared_ptr<string> comment_ {};
    // The DNS information of the record. The content varies depending on the record type. For more information, see <props="china">[documentation](https://help.aliyun.com/document_detail/2708761.html)<props="intl">[documentation](https://www.alibabacloud.com/help/doc-detail/2708761.html).
    // 
    // This parameter is required.
    shared_ptr<string> dataShrink_ {};
    // The back-to-origin HOST policy. This parameter takes effect when the record type is CNAME. Settings the HOST policy for back-to-origin requests. Valid values:
    // 
    // - **follow_hostname**: follows the host record.
    // - **follow_origin_domain**: follows the Origin Domain Name.
    shared_ptr<string> hostPolicy_ {};
    shared_ptr<string> httpPorts_ {};
    shared_ptr<string> httpsPorts_ {};
    // Specifies whether to enable proxy acceleration for the record. Only CNAME records and A/AAAA records support proxy acceleration. Valid values:
    // - **true**: Enable proxy acceleration.
    // - **false**: Disable proxy acceleration.
    shared_ptr<bool> proxied_ {};
    // The ID of the record. You can call [ListRecords](https://help.aliyun.com/document_detail/2850265.html) to obtain the record ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> recordId_ {};
    // The origin server type of the CNAME record. This parameter is required when you add a CNAME record. Valid values:
    // 
    // - **OSS**: OSS origin server.
    // - **S3**: S3 origin server.
    // - **LB**: load balancing origin server.
    // - **OP**: IPAM pool origin server.
    // - **Domain**: standard domain name origin server.
    // 
    // If this parameter is not specified or is left empty, the default value is Domain, which indicates a standard domain name origin server type.
    shared_ptr<string> sourceType_ {};
    // The time-to-live (TTL) of the record, in seconds. Valid values: **30 to 86400**, or 1. A value of 1 indicates that the TTL of the record is automatically determined.
    shared_ptr<int32_t> ttl_ {};
    // The DNS type of the record, such as A/AAAA, CNAME, or TXT.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
