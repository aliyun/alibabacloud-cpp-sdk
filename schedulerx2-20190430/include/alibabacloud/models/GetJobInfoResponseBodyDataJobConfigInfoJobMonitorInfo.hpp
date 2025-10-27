// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATAJOBCONFIGINFOJOBMONITORINFO_HPP_
#define ALIBABACLOUD_MODELS_GETJOBINFORESPONSEBODYDATAJOBCONFIGINFOJOBMONITORINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo.hpp>
#include <alibabacloud/models/GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ContactInfo, contactInfo_);
      DARABONBA_PTR_TO_JSON(MonitorConfig, monitorConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactInfo, contactInfo_);
      DARABONBA_PTR_FROM_JSON(MonitorConfig, monitorConfig_);
    };
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo() = default ;
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo(const GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo &) = default ;
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo(GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo &&) = default ;
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo() = default ;
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo& operator=(const GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo &) = default ;
    GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo& operator=(GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactInfo_ == nullptr
        && return this->monitorConfig_ == nullptr; };
    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const vector<Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo> & contactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, vector<Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo>) };
    inline vector<Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo> contactInfo() { DARABONBA_PTR_GET(contactInfo_, vector<Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo>) };
    inline GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo& setContactInfo(const vector<Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo> & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo& setContactInfo(vector<Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo> && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // monitorConfig Field Functions 
    bool hasMonitorConfig() const { return this->monitorConfig_ != nullptr;};
    void deleteMonitorConfig() { this->monitorConfig_ = nullptr;};
    inline const Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig & monitorConfig() const { DARABONBA_PTR_GET_CONST(monitorConfig_, Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig) };
    inline Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig monitorConfig() { DARABONBA_PTR_GET(monitorConfig_, Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig) };
    inline GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo& setMonitorConfig(const Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig & monitorConfig) { DARABONBA_PTR_SET_VALUE(monitorConfig_, monitorConfig) };
    inline GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfo& setMonitorConfig(Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig && monitorConfig) { DARABONBA_PTR_SET_RVALUE(monitorConfig_, monitorConfig) };


  protected:
    // The alert contact Information.
    std::shared_ptr<vector<Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoContactInfo>> contactInfo_ = nullptr;
    // The configurations of the alerting features and the alert thresholds.
    std::shared_ptr<Models::GetJobInfoResponseBodyDataJobConfigInfoJobMonitorInfoMonitorConfig> monitorConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
