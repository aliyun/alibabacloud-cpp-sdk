// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLDROPTRENDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLDROPTRENDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeFirewallDropTrendRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallDropTrendRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallDropTrendRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeFirewallDropTrendRequest() = default ;
    DescribeFirewallDropTrendRequest(const DescribeFirewallDropTrendRequest &) = default ;
    DescribeFirewallDropTrendRequest(DescribeFirewallDropTrendRequest &&) = default ;
    DescribeFirewallDropTrendRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallDropTrendRequest() = default ;
    DescribeFirewallDropTrendRequest& operator=(const DescribeFirewallDropTrendRequest &) = default ;
    DescribeFirewallDropTrendRequest& operator=(DescribeFirewallDropTrendRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->lang_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeFirewallDropTrendRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeFirewallDropTrendRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeFirewallDropTrendRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Specifies the end time of the query. The value is a UNIX timestamp in seconds. This parameter is required and must be provided together with StartTime. The value must be a UNIX timestamp in seconds and must be later than StartTime. If this parameter is not provided, the API returns ErrorTimeError(400).
    shared_ptr<int64_t> endTime_ {};
    // The language type of the response message. Valid values:
    // 
    // - **zh** (default): Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Specifies the start time of the query. The value is a UNIX timestamp in seconds. This parameter is required and must be provided together with EndTime. The value must be a UNIX timestamp in seconds and must be earlier than EndTime. If this parameter is not provided, the API returns ErrorTimeError(400).
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
