// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYDATARESPONSEBODYMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTFACEVERIFYDATARESPONSEBODYMONITORDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeListFaceVerifyDataResponseBodyMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListFaceVerifyDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(FaceVerifyData, faceVerifyData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListFaceVerifyDataResponseBodyMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceVerifyData, faceVerifyData_);
    };
    DescribeListFaceVerifyDataResponseBodyMonitorData() = default ;
    DescribeListFaceVerifyDataResponseBodyMonitorData(const DescribeListFaceVerifyDataResponseBodyMonitorData &) = default ;
    DescribeListFaceVerifyDataResponseBodyMonitorData(DescribeListFaceVerifyDataResponseBodyMonitorData &&) = default ;
    DescribeListFaceVerifyDataResponseBodyMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListFaceVerifyDataResponseBodyMonitorData() = default ;
    DescribeListFaceVerifyDataResponseBodyMonitorData& operator=(const DescribeListFaceVerifyDataResponseBodyMonitorData &) = default ;
    DescribeListFaceVerifyDataResponseBodyMonitorData& operator=(DescribeListFaceVerifyDataResponseBodyMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceVerifyData_ == nullptr; };
    // faceVerifyData Field Functions 
    bool hasFaceVerifyData() const { return this->faceVerifyData_ != nullptr;};
    void deleteFaceVerifyData() { this->faceVerifyData_ = nullptr;};
    inline const vector<Models::DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData> & faceVerifyData() const { DARABONBA_PTR_GET_CONST(faceVerifyData_, vector<Models::DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData>) };
    inline vector<Models::DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData> faceVerifyData() { DARABONBA_PTR_GET(faceVerifyData_, vector<Models::DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData>) };
    inline DescribeListFaceVerifyDataResponseBodyMonitorData& setFaceVerifyData(const vector<Models::DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData> & faceVerifyData) { DARABONBA_PTR_SET_VALUE(faceVerifyData_, faceVerifyData) };
    inline DescribeListFaceVerifyDataResponseBodyMonitorData& setFaceVerifyData(vector<Models::DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData> && faceVerifyData) { DARABONBA_PTR_SET_RVALUE(faceVerifyData_, faceVerifyData) };


  protected:
    // Face verification data.
    std::shared_ptr<vector<Models::DescribeListFaceVerifyDataResponseBodyMonitorDataFaceVerifyData>> faceVerifyData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
