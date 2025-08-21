// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODYSCHEDULERRULESPARAMPARAMDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCHEDULERRULESRESPONSEBODYSCHEDULERRULESPARAMPARAMDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData& obj) { 
      DARABONBA_PTR_TO_JSON(CloudInstanceId, cloudInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudInstanceId, cloudInstanceId_);
    };
    DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData() = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData(const DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData &) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData(DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData &&) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData() = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData& operator=(const DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData &) = default ;
    DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData& operator=(DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cloudInstanceId_ != nullptr; };
    // cloudInstanceId Field Functions 
    bool hasCloudInstanceId() const { return this->cloudInstanceId_ != nullptr;};
    void deleteCloudInstanceId() { this->cloudInstanceId_ = nullptr;};
    inline string cloudInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cloudInstanceId_, "") };
    inline DescribeSchedulerRulesResponseBodySchedulerRulesParamParamData& setCloudInstanceId(string cloudInstanceId) { DARABONBA_PTR_SET_VALUE(cloudInstanceId_, cloudInstanceId) };


  protected:
    std::shared_ptr<string> cloudInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
