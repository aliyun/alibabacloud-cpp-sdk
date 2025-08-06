// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENIMONITORDATARESPONSEBODYMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENIMONITORDATARESPONSEBODYMONITORDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeEniMonitorDataResponseBodyMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEniMonitorDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(EniMonitorData, eniMonitorData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEniMonitorDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(EniMonitorData, eniMonitorData_);
    };
    DescribeEniMonitorDataResponseBodyMonitorData() = default ;
    DescribeEniMonitorDataResponseBodyMonitorData(const DescribeEniMonitorDataResponseBodyMonitorData &) = default ;
    DescribeEniMonitorDataResponseBodyMonitorData(DescribeEniMonitorDataResponseBodyMonitorData &&) = default ;
    DescribeEniMonitorDataResponseBodyMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEniMonitorDataResponseBodyMonitorData() = default ;
    DescribeEniMonitorDataResponseBodyMonitorData& operator=(const DescribeEniMonitorDataResponseBodyMonitorData &) = default ;
    DescribeEniMonitorDataResponseBodyMonitorData& operator=(DescribeEniMonitorDataResponseBodyMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eniMonitorData_ != nullptr; };
    // eniMonitorData Field Functions 
    bool hasEniMonitorData() const { return this->eniMonitorData_ != nullptr;};
    void deleteEniMonitorData() { this->eniMonitorData_ = nullptr;};
    inline const vector<Models::DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData> & eniMonitorData() const { DARABONBA_PTR_GET_CONST(eniMonitorData_, vector<Models::DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData>) };
    inline vector<Models::DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData> eniMonitorData() { DARABONBA_PTR_GET(eniMonitorData_, vector<Models::DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData>) };
    inline DescribeEniMonitorDataResponseBodyMonitorData& setEniMonitorData(const vector<Models::DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData> & eniMonitorData) { DARABONBA_PTR_SET_VALUE(eniMonitorData_, eniMonitorData) };
    inline DescribeEniMonitorDataResponseBodyMonitorData& setEniMonitorData(vector<Models::DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData> && eniMonitorData) { DARABONBA_PTR_SET_RVALUE(eniMonitorData_, eniMonitorData) };


  protected:
    std::shared_ptr<vector<Models::DescribeEniMonitorDataResponseBodyMonitorDataEniMonitorData>> eniMonitorData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
