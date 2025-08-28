// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPMONITORDATARESPONSEBODYEIPMONITORDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPMONITORDATARESPONSEBODYEIPMONITORDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipMonitorDataResponseBodyEipMonitorDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipMonitorDataResponseBodyEipMonitorDatas& obj) { 
      DARABONBA_PTR_TO_JSON(EipMonitorData, eipMonitorData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipMonitorDataResponseBodyEipMonitorDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(EipMonitorData, eipMonitorData_);
    };
    DescribeEipMonitorDataResponseBodyEipMonitorDatas() = default ;
    DescribeEipMonitorDataResponseBodyEipMonitorDatas(const DescribeEipMonitorDataResponseBodyEipMonitorDatas &) = default ;
    DescribeEipMonitorDataResponseBodyEipMonitorDatas(DescribeEipMonitorDataResponseBodyEipMonitorDatas &&) = default ;
    DescribeEipMonitorDataResponseBodyEipMonitorDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipMonitorDataResponseBodyEipMonitorDatas() = default ;
    DescribeEipMonitorDataResponseBodyEipMonitorDatas& operator=(const DescribeEipMonitorDataResponseBodyEipMonitorDatas &) = default ;
    DescribeEipMonitorDataResponseBodyEipMonitorDatas& operator=(DescribeEipMonitorDataResponseBodyEipMonitorDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipMonitorData_ != nullptr; };
    // eipMonitorData Field Functions 
    bool hasEipMonitorData() const { return this->eipMonitorData_ != nullptr;};
    void deleteEipMonitorData() { this->eipMonitorData_ = nullptr;};
    inline const vector<Models::DescribeEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData> & eipMonitorData() const { DARABONBA_PTR_GET_CONST(eipMonitorData_, vector<Models::DescribeEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData>) };
    inline vector<Models::DescribeEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData> eipMonitorData() { DARABONBA_PTR_GET(eipMonitorData_, vector<Models::DescribeEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData>) };
    inline DescribeEipMonitorDataResponseBodyEipMonitorDatas& setEipMonitorData(const vector<Models::DescribeEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData> & eipMonitorData) { DARABONBA_PTR_SET_VALUE(eipMonitorData_, eipMonitorData) };
    inline DescribeEipMonitorDataResponseBodyEipMonitorDatas& setEipMonitorData(vector<Models::DescribeEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData> && eipMonitorData) { DARABONBA_PTR_SET_RVALUE(eipMonitorData_, eipMonitorData) };


  protected:
    std::shared_ptr<vector<Models::DescribeEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData>> eipMonitorData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
