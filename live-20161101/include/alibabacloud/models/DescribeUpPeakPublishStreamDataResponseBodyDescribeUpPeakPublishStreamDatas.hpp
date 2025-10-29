// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPPEAKPUBLISHSTREAMDATARESPONSEBODYDESCRIBEUPPEAKPUBLISHSTREAMDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPPEAKPUBLISHSTREAMDATARESPONSEBODYDESCRIBEUPPEAKPUBLISHSTREAMDATAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas& obj) { 
      DARABONBA_PTR_TO_JSON(DescribeUpPeakPublishStreamData, describeUpPeakPublishStreamData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(DescribeUpPeakPublishStreamData, describeUpPeakPublishStreamData_);
    };
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas() = default ;
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas(const DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas &) = default ;
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas(DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas &&) = default ;
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas() = default ;
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas& operator=(const DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas &) = default ;
    DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas& operator=(DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->describeUpPeakPublishStreamData_ == nullptr; };
    // describeUpPeakPublishStreamData Field Functions 
    bool hasDescribeUpPeakPublishStreamData() const { return this->describeUpPeakPublishStreamData_ != nullptr;};
    void deleteDescribeUpPeakPublishStreamData() { this->describeUpPeakPublishStreamData_ = nullptr;};
    inline const vector<Models::DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData> & describeUpPeakPublishStreamData() const { DARABONBA_PTR_GET_CONST(describeUpPeakPublishStreamData_, vector<Models::DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData>) };
    inline vector<Models::DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData> describeUpPeakPublishStreamData() { DARABONBA_PTR_GET(describeUpPeakPublishStreamData_, vector<Models::DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData>) };
    inline DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas& setDescribeUpPeakPublishStreamData(const vector<Models::DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData> & describeUpPeakPublishStreamData) { DARABONBA_PTR_SET_VALUE(describeUpPeakPublishStreamData_, describeUpPeakPublishStreamData) };
    inline DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatas& setDescribeUpPeakPublishStreamData(vector<Models::DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData> && describeUpPeakPublishStreamData) { DARABONBA_PTR_SET_RVALUE(describeUpPeakPublishStreamData_, describeUpPeakPublishStreamData) };


  protected:
    std::shared_ptr<vector<Models::DescribeUpPeakPublishStreamDataResponseBodyDescribeUpPeakPublishStreamDatasDescribeUpPeakPublishStreamData>> describeUpPeakPublishStreamData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
