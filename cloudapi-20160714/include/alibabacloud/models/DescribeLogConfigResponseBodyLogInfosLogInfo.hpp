// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGCONFIGRESPONSEBODYLOGINFOSLOGINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGCONFIGRESPONSEBODYLOGINFOSLOGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeLogConfigResponseBodyLogInfosLogInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogConfigResponseBodyLogInfosLogInfo& obj) { 
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlsLogStore, slsLogStore_);
      DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogConfigResponseBodyLogInfosLogInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlsLogStore, slsLogStore_);
      DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
    };
    DescribeLogConfigResponseBodyLogInfosLogInfo() = default ;
    DescribeLogConfigResponseBodyLogInfosLogInfo(const DescribeLogConfigResponseBodyLogInfosLogInfo &) = default ;
    DescribeLogConfigResponseBodyLogInfosLogInfo(DescribeLogConfigResponseBodyLogInfosLogInfo &&) = default ;
    DescribeLogConfigResponseBodyLogInfosLogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogConfigResponseBodyLogInfosLogInfo() = default ;
    DescribeLogConfigResponseBodyLogInfosLogInfo& operator=(const DescribeLogConfigResponseBodyLogInfosLogInfo &) = default ;
    DescribeLogConfigResponseBodyLogInfosLogInfo& operator=(DescribeLogConfigResponseBodyLogInfosLogInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logType_ == nullptr
        && return this->regionId_ == nullptr && return this->slsLogStore_ == nullptr && return this->slsProject_ == nullptr; };
    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline DescribeLogConfigResponseBodyLogInfosLogInfo& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLogConfigResponseBodyLogInfosLogInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slsLogStore Field Functions 
    bool hasSlsLogStore() const { return this->slsLogStore_ != nullptr;};
    void deleteSlsLogStore() { this->slsLogStore_ = nullptr;};
    inline string slsLogStore() const { DARABONBA_PTR_GET_DEFAULT(slsLogStore_, "") };
    inline DescribeLogConfigResponseBodyLogInfosLogInfo& setSlsLogStore(string slsLogStore) { DARABONBA_PTR_SET_VALUE(slsLogStore_, slsLogStore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string slsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline DescribeLogConfigResponseBodyLogInfosLogInfo& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


  protected:
    // The log type.
    std::shared_ptr<string> logType_ = nullptr;
    // The region ID of the Logstore.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the Logstore in Log Service.
    std::shared_ptr<string> slsLogStore_ = nullptr;
    // The name of the Log Service project.
    std::shared_ptr<string> slsProject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
