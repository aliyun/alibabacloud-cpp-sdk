// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPPACKBYIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPPACKBYIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeBgpPackByIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpPackByIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DdosbgpInfo, ddosbgpInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpPackByIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DdosbgpInfo, ddosbgpInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeBgpPackByIpResponseBody() = default ;
    DescribeBgpPackByIpResponseBody(const DescribeBgpPackByIpResponseBody &) = default ;
    DescribeBgpPackByIpResponseBody(DescribeBgpPackByIpResponseBody &&) = default ;
    DescribeBgpPackByIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpPackByIpResponseBody() = default ;
    DescribeBgpPackByIpResponseBody& operator=(const DescribeBgpPackByIpResponseBody &) = default ;
    DescribeBgpPackByIpResponseBody& operator=(DescribeBgpPackByIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DdosbgpInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DdosbgpInfo& obj) { 
        DARABONBA_PTR_TO_JSON(BaseThreshold, baseThreshold_);
        DARABONBA_PTR_TO_JSON(DdosbgpInstanceId, ddosbgpInstanceId_);
        DARABONBA_PTR_TO_JSON(ElasticThreshold, elasticThreshold_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
      };
      friend void from_json(const Darabonba::Json& j, DdosbgpInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseThreshold, baseThreshold_);
        DARABONBA_PTR_FROM_JSON(DdosbgpInstanceId, ddosbgpInstanceId_);
        DARABONBA_PTR_FROM_JSON(ElasticThreshold, elasticThreshold_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
      };
      DdosbgpInfo() = default ;
      DdosbgpInfo(const DdosbgpInfo &) = default ;
      DdosbgpInfo(DdosbgpInfo &&) = default ;
      DdosbgpInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DdosbgpInfo() = default ;
      DdosbgpInfo& operator=(const DdosbgpInfo &) = default ;
      DdosbgpInfo& operator=(DdosbgpInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->baseThreshold_ == nullptr
        && this->ddosbgpInstanceId_ == nullptr && this->elasticThreshold_ == nullptr && this->expireTime_ == nullptr && this->ip_ == nullptr; };
      // baseThreshold Field Functions 
      bool hasBaseThreshold() const { return this->baseThreshold_ != nullptr;};
      void deleteBaseThreshold() { this->baseThreshold_ = nullptr;};
      inline int32_t getBaseThreshold() const { DARABONBA_PTR_GET_DEFAULT(baseThreshold_, 0) };
      inline DdosbgpInfo& setBaseThreshold(int32_t baseThreshold) { DARABONBA_PTR_SET_VALUE(baseThreshold_, baseThreshold) };


      // ddosbgpInstanceId Field Functions 
      bool hasDdosbgpInstanceId() const { return this->ddosbgpInstanceId_ != nullptr;};
      void deleteDdosbgpInstanceId() { this->ddosbgpInstanceId_ = nullptr;};
      inline string getDdosbgpInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ddosbgpInstanceId_, "") };
      inline DdosbgpInfo& setDdosbgpInstanceId(string ddosbgpInstanceId) { DARABONBA_PTR_SET_VALUE(ddosbgpInstanceId_, ddosbgpInstanceId) };


      // elasticThreshold Field Functions 
      bool hasElasticThreshold() const { return this->elasticThreshold_ != nullptr;};
      void deleteElasticThreshold() { this->elasticThreshold_ = nullptr;};
      inline int32_t getElasticThreshold() const { DARABONBA_PTR_GET_DEFAULT(elasticThreshold_, 0) };
      inline DdosbgpInfo& setElasticThreshold(int32_t elasticThreshold) { DARABONBA_PTR_SET_VALUE(elasticThreshold_, elasticThreshold) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline DdosbgpInfo& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline DdosbgpInfo& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    protected:
      // The basic protection threshold of the instance. Unit: Gbit/s.
      shared_ptr<int32_t> baseThreshold_ {};
      // The ID of the instance.
      shared_ptr<string> ddosbgpInstanceId_ {};
      // The burstable protection threshold of the instance. Unit: Gbit/s.
      shared_ptr<int32_t> elasticThreshold_ {};
      // The expiration time of the instance. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> expireTime_ {};
      // The IP address of the asset.
      shared_ptr<string> ip_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ddosbgpInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeBgpPackByIpResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ddosbgpInfo Field Functions 
    bool hasDdosbgpInfo() const { return this->ddosbgpInfo_ != nullptr;};
    void deleteDdosbgpInfo() { this->ddosbgpInfo_ = nullptr;};
    inline const DescribeBgpPackByIpResponseBody::DdosbgpInfo & getDdosbgpInfo() const { DARABONBA_PTR_GET_CONST(ddosbgpInfo_, DescribeBgpPackByIpResponseBody::DdosbgpInfo) };
    inline DescribeBgpPackByIpResponseBody::DdosbgpInfo getDdosbgpInfo() { DARABONBA_PTR_GET(ddosbgpInfo_, DescribeBgpPackByIpResponseBody::DdosbgpInfo) };
    inline DescribeBgpPackByIpResponseBody& setDdosbgpInfo(const DescribeBgpPackByIpResponseBody::DdosbgpInfo & ddosbgpInfo) { DARABONBA_PTR_SET_VALUE(ddosbgpInfo_, ddosbgpInfo) };
    inline DescribeBgpPackByIpResponseBody& setDdosbgpInfo(DescribeBgpPackByIpResponseBody::DdosbgpInfo && ddosbgpInfo) { DARABONBA_PTR_SET_RVALUE(ddosbgpInfo_, ddosbgpInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBgpPackByIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBgpPackByIpResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code of the request.
    // 
    // For more information about status codes, see [Common parameters](https://help.aliyun.com/document_detail/118841.html).
    shared_ptr<int32_t> code_ {};
    // The configurations of the instance that is associated with the asset.
    shared_ptr<DescribeBgpPackByIpResponseBody::DdosbgpInfo> ddosbgpInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: yes
    // 
    // - **false**: no
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
