// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAlarmEventDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmEventDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmEventDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeAlarmEventDetailRequest() = default ;
    DescribeAlarmEventDetailRequest(const DescribeAlarmEventDetailRequest &) = default ;
    DescribeAlarmEventDetailRequest(DescribeAlarmEventDetailRequest &&) = default ;
    DescribeAlarmEventDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmEventDetailRequest() = default ;
    DescribeAlarmEventDetailRequest& operator=(const DescribeAlarmEventDetailRequest &) = default ;
    DescribeAlarmEventDetailRequest& operator=(DescribeAlarmEventDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmUniqueInfo_ == nullptr
        && this->from_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr; };
    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline DescribeAlarmEventDetailRequest& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeAlarmEventDetailRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAlarmEventDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeAlarmEventDetailRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The unique identifier of the alert event.
    // 
    // > To query the details of an alert event, you must provide the unique identifier of the alert event. You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to obtain the identifier.
    // 
    // This parameter is required.
    shared_ptr<string> alarmUniqueInfo_ {};
    // The ID of the request source. Set the value to **sas**.
    // 
    // This parameter is required.
    shared_ptr<string> from_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
