// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPORTERRULELISTRESPONSEBODYDATAPOINTSDATAPOINTDSTNAME_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPORTERRULELISTRESPONSEBODYDATAPOINTSDATAPOINTDSTNAME_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeExporterRuleListResponseBodyDatapointsDatapointDstName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExporterRuleListResponseBodyDatapointsDatapointDstName& obj) { 
      DARABONBA_PTR_TO_JSON(DstName, dstName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExporterRuleListResponseBodyDatapointsDatapointDstName& obj) { 
      DARABONBA_PTR_FROM_JSON(DstName, dstName_);
    };
    DescribeExporterRuleListResponseBodyDatapointsDatapointDstName() = default ;
    DescribeExporterRuleListResponseBodyDatapointsDatapointDstName(const DescribeExporterRuleListResponseBodyDatapointsDatapointDstName &) = default ;
    DescribeExporterRuleListResponseBodyDatapointsDatapointDstName(DescribeExporterRuleListResponseBodyDatapointsDatapointDstName &&) = default ;
    DescribeExporterRuleListResponseBodyDatapointsDatapointDstName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExporterRuleListResponseBodyDatapointsDatapointDstName() = default ;
    DescribeExporterRuleListResponseBodyDatapointsDatapointDstName& operator=(const DescribeExporterRuleListResponseBodyDatapointsDatapointDstName &) = default ;
    DescribeExporterRuleListResponseBodyDatapointsDatapointDstName& operator=(DescribeExporterRuleListResponseBodyDatapointsDatapointDstName &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstName_ == nullptr; };
    // dstName Field Functions 
    bool hasDstName() const { return this->dstName_ != nullptr;};
    void deleteDstName() { this->dstName_ = nullptr;};
    inline const vector<string> & dstName() const { DARABONBA_PTR_GET_CONST(dstName_, vector<string>) };
    inline vector<string> dstName() { DARABONBA_PTR_GET(dstName_, vector<string>) };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapointDstName& setDstName(const vector<string> & dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };
    inline DescribeExporterRuleListResponseBodyDatapointsDatapointDstName& setDstName(vector<string> && dstName) { DARABONBA_PTR_SET_RVALUE(dstName_, dstName) };


  protected:
    std::shared_ptr<vector<string>> dstName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
