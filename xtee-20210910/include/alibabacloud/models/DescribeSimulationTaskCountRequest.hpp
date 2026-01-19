// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMULATIONTASKCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMULATIONTASKCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSimulationTaskCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimulationTaskCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(dataSourceConfig, dataSourceConfig_);
      DARABONBA_PTR_TO_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(eventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(filtersStr, filtersStr_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimulationTaskCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(dataSourceConfig, dataSourceConfig_);
      DARABONBA_PTR_FROM_JSON(dataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(eventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(filtersStr, filtersStr_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    DescribeSimulationTaskCountRequest() = default ;
    DescribeSimulationTaskCountRequest(const DescribeSimulationTaskCountRequest &) = default ;
    DescribeSimulationTaskCountRequest(DescribeSimulationTaskCountRequest &&) = default ;
    DescribeSimulationTaskCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimulationTaskCountRequest() = default ;
    DescribeSimulationTaskCountRequest& operator=(const DescribeSimulationTaskCountRequest &) = default ;
    DescribeSimulationTaskCountRequest& operator=(DescribeSimulationTaskCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->dataSourceConfig_ == nullptr && this->dataSourceType_ == nullptr && this->endTime_ == nullptr && this->eventCode_ == nullptr && this->filtersStr_ == nullptr
        && this->regId_ == nullptr && this->startTime_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSimulationTaskCountRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // dataSourceConfig Field Functions 
    bool hasDataSourceConfig() const { return this->dataSourceConfig_ != nullptr;};
    void deleteDataSourceConfig() { this->dataSourceConfig_ = nullptr;};
    inline string getDataSourceConfig() const { DARABONBA_PTR_GET_DEFAULT(dataSourceConfig_, "") };
    inline DescribeSimulationTaskCountRequest& setDataSourceConfig(string dataSourceConfig) { DARABONBA_PTR_SET_VALUE(dataSourceConfig_, dataSourceConfig) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline DescribeSimulationTaskCountRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSimulationTaskCountRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline DescribeSimulationTaskCountRequest& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // filtersStr Field Functions 
    bool hasFiltersStr() const { return this->filtersStr_ != nullptr;};
    void deleteFiltersStr() { this->filtersStr_ = nullptr;};
    inline string getFiltersStr() const { DARABONBA_PTR_GET_DEFAULT(filtersStr_, "") };
    inline DescribeSimulationTaskCountRequest& setFiltersStr(string filtersStr) { DARABONBA_PTR_SET_VALUE(filtersStr_, filtersStr) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeSimulationTaskCountRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSimulationTaskCountRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Data source configuration
    shared_ptr<string> dataSourceConfig_ {};
    // Data source type
    shared_ptr<string> dataSourceType_ {};
    // Task end time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // Event code
    // 
    // This parameter is required.
    shared_ptr<string> eventCode_ {};
    // Filter
    shared_ptr<string> filtersStr_ {};
    // Region code
    shared_ptr<string> regId_ {};
    // Task start time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
