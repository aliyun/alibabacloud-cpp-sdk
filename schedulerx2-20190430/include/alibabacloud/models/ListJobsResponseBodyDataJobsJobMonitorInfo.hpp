// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATAJOBSJOBMONITORINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSRESPONSEBODYDATAJOBSJOBMONITORINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo.hpp>
#include <alibabacloud/models/ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ListJobsResponseBodyDataJobsJobMonitorInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsResponseBodyDataJobsJobMonitorInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ContactInfo, contactInfo_);
      DARABONBA_PTR_TO_JSON(MonitorConfig, monitorConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsResponseBodyDataJobsJobMonitorInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactInfo, contactInfo_);
      DARABONBA_PTR_FROM_JSON(MonitorConfig, monitorConfig_);
    };
    ListJobsResponseBodyDataJobsJobMonitorInfo() = default ;
    ListJobsResponseBodyDataJobsJobMonitorInfo(const ListJobsResponseBodyDataJobsJobMonitorInfo &) = default ;
    ListJobsResponseBodyDataJobsJobMonitorInfo(ListJobsResponseBodyDataJobsJobMonitorInfo &&) = default ;
    ListJobsResponseBodyDataJobsJobMonitorInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsResponseBodyDataJobsJobMonitorInfo() = default ;
    ListJobsResponseBodyDataJobsJobMonitorInfo& operator=(const ListJobsResponseBodyDataJobsJobMonitorInfo &) = default ;
    ListJobsResponseBodyDataJobsJobMonitorInfo& operator=(ListJobsResponseBodyDataJobsJobMonitorInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactInfo_ == nullptr
        && return this->monitorConfig_ == nullptr; };
    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const vector<Models::ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo> & contactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, vector<Models::ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo>) };
    inline vector<Models::ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo> contactInfo() { DARABONBA_PTR_GET(contactInfo_, vector<Models::ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo>) };
    inline ListJobsResponseBodyDataJobsJobMonitorInfo& setContactInfo(const vector<Models::ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo> & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline ListJobsResponseBodyDataJobsJobMonitorInfo& setContactInfo(vector<Models::ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo> && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // monitorConfig Field Functions 
    bool hasMonitorConfig() const { return this->monitorConfig_ != nullptr;};
    void deleteMonitorConfig() { this->monitorConfig_ = nullptr;};
    inline const Models::ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig & monitorConfig() const { DARABONBA_PTR_GET_CONST(monitorConfig_, Models::ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig) };
    inline Models::ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig monitorConfig() { DARABONBA_PTR_GET(monitorConfig_, Models::ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig) };
    inline ListJobsResponseBodyDataJobsJobMonitorInfo& setMonitorConfig(const Models::ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig & monitorConfig) { DARABONBA_PTR_SET_VALUE(monitorConfig_, monitorConfig) };
    inline ListJobsResponseBodyDataJobsJobMonitorInfo& setMonitorConfig(Models::ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig && monitorConfig) { DARABONBA_PTR_SET_RVALUE(monitorConfig_, monitorConfig) };


  protected:
    // The contact information.
    std::shared_ptr<vector<Models::ListJobsResponseBodyDataJobsJobMonitorInfoContactInfo>> contactInfo_ = nullptr;
    // The configurations of the alerting feature and the alert threshold.
    std::shared_ptr<Models::ListJobsResponseBodyDataJobsJobMonitorInfoMonitorConfig> monitorConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
