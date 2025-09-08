// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEURLMODERATIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEURLMODERATIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUrlModerationResultResponseBodyDataExtraInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUrlModerationResultResponseBodyDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeUrlModerationResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUrlModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUrlModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeUrlModerationResultResponseBodyData() = default ;
    DescribeUrlModerationResultResponseBodyData(const DescribeUrlModerationResultResponseBodyData &) = default ;
    DescribeUrlModerationResultResponseBodyData(DescribeUrlModerationResultResponseBodyData &&) = default ;
    DescribeUrlModerationResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUrlModerationResultResponseBodyData() = default ;
    DescribeUrlModerationResultResponseBodyData& operator=(const DescribeUrlModerationResultResponseBodyData &) = default ;
    DescribeUrlModerationResultResponseBodyData& operator=(DescribeUrlModerationResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataId_ != nullptr
        && this->extraInfo_ != nullptr && this->reqId_ != nullptr && this->result_ != nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline DescribeUrlModerationResultResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline const Models::DescribeUrlModerationResultResponseBodyDataExtraInfo & extraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, Models::DescribeUrlModerationResultResponseBodyDataExtraInfo) };
    inline Models::DescribeUrlModerationResultResponseBodyDataExtraInfo extraInfo() { DARABONBA_PTR_GET(extraInfo_, Models::DescribeUrlModerationResultResponseBodyDataExtraInfo) };
    inline DescribeUrlModerationResultResponseBodyData& setExtraInfo(const Models::DescribeUrlModerationResultResponseBodyDataExtraInfo & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
    inline DescribeUrlModerationResultResponseBodyData& setExtraInfo(Models::DescribeUrlModerationResultResponseBodyDataExtraInfo && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string reqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline DescribeUrlModerationResultResponseBodyData& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::DescribeUrlModerationResultResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::DescribeUrlModerationResultResponseBodyDataResult>) };
    inline vector<Models::DescribeUrlModerationResultResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::DescribeUrlModerationResultResponseBodyDataResult>) };
    inline DescribeUrlModerationResultResponseBodyData& setResult(const vector<Models::DescribeUrlModerationResultResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeUrlModerationResultResponseBodyData& setResult(vector<Models::DescribeUrlModerationResultResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The value of dataId that is specified in the API request. If this parameter is not specified in the API request, this field is not available in the response.
    std::shared_ptr<string> dataId_ = nullptr;
    // The supplementary information.
    std::shared_ptr<Models::DescribeUrlModerationResultResponseBodyDataExtraInfo> extraInfo_ = nullptr;
    // The ReqId field returned by an asynchronous URL moderation operation.
    std::shared_ptr<string> reqId_ = nullptr;
    // The returned results.
    std::shared_ptr<vector<Models::DescribeUrlModerationResultResponseBodyDataResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
