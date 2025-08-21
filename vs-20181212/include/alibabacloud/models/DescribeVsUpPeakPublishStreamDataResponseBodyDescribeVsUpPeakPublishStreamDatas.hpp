// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSUPPEAKPUBLISHSTREAMDATARESPONSEBODYDESCRIBEVSUPPEAKPUBLISHSTREAMDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSUPPEAKPUBLISHSTREAMDATARESPONSEBODYDESCRIBEVSUPPEAKPUBLISHSTREAMDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeVsUpPeakPublishStreamData, describeVsUpPeakPublishStreamData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeVsUpPeakPublishStreamData, describeVsUpPeakPublishStreamData_);
    };
    DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas() = default ;
    DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas(const DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas &) = default ;
    DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas(DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas &&) = default ;
    DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas() = default ;
    DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas& operator=(const DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas &) = default ;
    DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas& operator=(DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->describeVsUpPeakPublishStreamData_ != nullptr; };
    // describeVsUpPeakPublishStreamData Field Functions 
    bool hasDescribeVsUpPeakPublishStreamData() const { return this->describeVsUpPeakPublishStreamData_ != nullptr;};
    void deleteDescribeVsUpPeakPublishStreamData() { this->describeVsUpPeakPublishStreamData_ = nullptr;};
    inline const vector<Models::DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData> & describeVsUpPeakPublishStreamData() const { DARABONBA_PTR_GET_CONST(describeVsUpPeakPublishStreamData_, vector<Models::DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData>) };
    inline vector<Models::DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData> describeVsUpPeakPublishStreamData() { DARABONBA_PTR_GET(describeVsUpPeakPublishStreamData_, vector<Models::DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData>) };
    inline DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas& setDescribeVsUpPeakPublishStreamData(const vector<Models::DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData> & describeVsUpPeakPublishStreamData) { DARABONBA_PTR_SET_VALUE(describeVsUpPeakPublishStreamData_, describeVsUpPeakPublishStreamData) };
    inline DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatas& setDescribeVsUpPeakPublishStreamData(vector<Models::DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData> && describeVsUpPeakPublishStreamData) { DARABONBA_PTR_SET_RVALUE(describeVsUpPeakPublishStreamData_, describeVsUpPeakPublishStreamData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsUpPeakPublishStreamDataResponseBodyDescribeVsUpPeakPublishStreamDatasDescribeVsUpPeakPublishStreamData>> describeVsUpPeakPublishStreamData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
