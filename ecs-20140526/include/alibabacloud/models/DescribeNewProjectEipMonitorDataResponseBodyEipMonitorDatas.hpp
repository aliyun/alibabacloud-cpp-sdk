// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENEWPROJECTEIPMONITORDATARESPONSEBODYEIPMONITORDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENEWPROJECTEIPMONITORDATARESPONSEBODYEIPMONITORDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas& obj) { 
      DARABONBA_PTR_TO_JSON(EipMonitorData, eipMonitorData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(EipMonitorData, eipMonitorData_);
    };
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas() = default ;
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas(const DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas &) = default ;
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas(DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas &&) = default ;
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas() = default ;
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas& operator=(const DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas &) = default ;
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas& operator=(DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipMonitorData_ != nullptr; };
    // eipMonitorData Field Functions 
    bool hasEipMonitorData() const { return this->eipMonitorData_ != nullptr;};
    void deleteEipMonitorData() { this->eipMonitorData_ = nullptr;};
    inline const vector<Models::DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData> & eipMonitorData() const { DARABONBA_PTR_GET_CONST(eipMonitorData_, vector<Models::DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData>) };
    inline vector<Models::DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData> eipMonitorData() { DARABONBA_PTR_GET(eipMonitorData_, vector<Models::DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData>) };
    inline DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas& setEipMonitorData(const vector<Models::DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData> & eipMonitorData) { DARABONBA_PTR_SET_VALUE(eipMonitorData_, eipMonitorData) };
    inline DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatas& setEipMonitorData(vector<Models::DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData> && eipMonitorData) { DARABONBA_PTR_SET_RVALUE(eipMonitorData_, eipMonitorData) };


  protected:
    std::shared_ptr<vector<Models::DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData>> eipMonitorData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
