// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODYMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODYMONITORDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceMonitorDataResponseBodyMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMonitorDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceMonitorData, instanceMonitorData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMonitorDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceMonitorData, instanceMonitorData_);
    };
    DescribeInstanceMonitorDataResponseBodyMonitorData() = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorData(const DescribeInstanceMonitorDataResponseBodyMonitorData &) = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorData(DescribeInstanceMonitorDataResponseBodyMonitorData &&) = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMonitorDataResponseBodyMonitorData() = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorData& operator=(const DescribeInstanceMonitorDataResponseBodyMonitorData &) = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorData& operator=(DescribeInstanceMonitorDataResponseBodyMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceMonitorData_ == nullptr; };
    // instanceMonitorData Field Functions 
    bool hasInstanceMonitorData() const { return this->instanceMonitorData_ != nullptr;};
    void deleteInstanceMonitorData() { this->instanceMonitorData_ = nullptr;};
    inline const vector<Models::DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData> & instanceMonitorData() const { DARABONBA_PTR_GET_CONST(instanceMonitorData_, vector<Models::DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData>) };
    inline vector<Models::DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData> instanceMonitorData() { DARABONBA_PTR_GET(instanceMonitorData_, vector<Models::DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData>) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorData& setInstanceMonitorData(const vector<Models::DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData> & instanceMonitorData) { DARABONBA_PTR_SET_VALUE(instanceMonitorData_, instanceMonitorData) };
    inline DescribeInstanceMonitorDataResponseBodyMonitorData& setInstanceMonitorData(vector<Models::DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData> && instanceMonitorData) { DARABONBA_PTR_SET_RVALUE(instanceMonitorData_, instanceMonitorData) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData>> instanceMonitorData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
