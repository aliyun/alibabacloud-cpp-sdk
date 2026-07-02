// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLLASTPAYLOADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLLASTPAYLOADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlLastPayloadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlLastPayloadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DstIp, dstIp_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SensitiveCategory, sensitiveCategory_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlLastPayloadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DstIp, dstIp_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SensitiveCategory, sensitiveCategory_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSdlLastPayloadRequest() = default ;
    DescribeSdlLastPayloadRequest(const DescribeSdlLastPayloadRequest &) = default ;
    DescribeSdlLastPayloadRequest(DescribeSdlLastPayloadRequest &&) = default ;
    DescribeSdlLastPayloadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlLastPayloadRequest() = default ;
    DescribeSdlLastPayloadRequest& operator=(const DescribeSdlLastPayloadRequest &) = default ;
    DescribeSdlLastPayloadRequest& operator=(DescribeSdlLastPayloadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstIp_ == nullptr
        && this->endTime_ == nullptr && this->lang_ == nullptr && this->sensitiveCategory_ == nullptr && this->srcIp_ == nullptr && this->startTime_ == nullptr; };
    // dstIp Field Functions 
    bool hasDstIp() const { return this->dstIp_ != nullptr;};
    void deleteDstIp() { this->dstIp_ = nullptr;};
    inline string getDstIp() const { DARABONBA_PTR_GET_DEFAULT(dstIp_, "") };
    inline DescribeSdlLastPayloadRequest& setDstIp(string dstIp) { DARABONBA_PTR_SET_VALUE(dstIp_, dstIp) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSdlLastPayloadRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSdlLastPayloadRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sensitiveCategory Field Functions 
    bool hasSensitiveCategory() const { return this->sensitiveCategory_ != nullptr;};
    void deleteSensitiveCategory() { this->sensitiveCategory_ = nullptr;};
    inline string getSensitiveCategory() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCategory_, "") };
    inline DescribeSdlLastPayloadRequest& setSensitiveCategory(string sensitiveCategory) { DARABONBA_PTR_SET_VALUE(sensitiveCategory_, sensitiveCategory) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline DescribeSdlLastPayloadRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSdlLastPayloadRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The destination IP address.
    shared_ptr<string> dstIp_ {};
    // The end of the time range to query. Specify the value as a UNIX timestamp in seconds.
    shared_ptr<int64_t> endTime_ {};
    // The language of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The type of sensitive credential.
    shared_ptr<string> sensitiveCategory_ {};
    // The source IP address.
    shared_ptr<string> srcIp_ {};
    // The beginning of the time range to query. Specify the value as a UNIX timestamp in seconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
