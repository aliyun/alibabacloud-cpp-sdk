// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIMODALMODERATIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMultimodalModerationResultResponseBodyDataCommentDatas.hpp>
#include <alibabacloud/models/DescribeMultimodalModerationResultResponseBodyDataMainData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class DescribeMultimodalModerationResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultimodalModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CommentDatas, commentDatas_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(MainData, mainData_);
      DARABONBA_PTR_TO_JSON(ReqId, reqId_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultimodalModerationResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CommentDatas, commentDatas_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(MainData, mainData_);
      DARABONBA_PTR_FROM_JSON(ReqId, reqId_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    DescribeMultimodalModerationResultResponseBodyData() = default ;
    DescribeMultimodalModerationResultResponseBodyData(const DescribeMultimodalModerationResultResponseBodyData &) = default ;
    DescribeMultimodalModerationResultResponseBodyData(DescribeMultimodalModerationResultResponseBodyData &&) = default ;
    DescribeMultimodalModerationResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultimodalModerationResultResponseBodyData() = default ;
    DescribeMultimodalModerationResultResponseBodyData& operator=(const DescribeMultimodalModerationResultResponseBodyData &) = default ;
    DescribeMultimodalModerationResultResponseBodyData& operator=(DescribeMultimodalModerationResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commentDatas_ != nullptr
        && this->dataId_ != nullptr && this->mainData_ != nullptr && this->reqId_ != nullptr && this->riskLevel_ != nullptr; };
    // commentDatas Field Functions 
    bool hasCommentDatas() const { return this->commentDatas_ != nullptr;};
    void deleteCommentDatas() { this->commentDatas_ = nullptr;};
    inline const vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatas> & commentDatas() const { DARABONBA_PTR_GET_CONST(commentDatas_, vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatas>) };
    inline vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatas> commentDatas() { DARABONBA_PTR_GET(commentDatas_, vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatas>) };
    inline DescribeMultimodalModerationResultResponseBodyData& setCommentDatas(const vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatas> & commentDatas) { DARABONBA_PTR_SET_VALUE(commentDatas_, commentDatas) };
    inline DescribeMultimodalModerationResultResponseBodyData& setCommentDatas(vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatas> && commentDatas) { DARABONBA_PTR_SET_RVALUE(commentDatas_, commentDatas) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline DescribeMultimodalModerationResultResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // mainData Field Functions 
    bool hasMainData() const { return this->mainData_ != nullptr;};
    void deleteMainData() { this->mainData_ = nullptr;};
    inline const Models::DescribeMultimodalModerationResultResponseBodyDataMainData & mainData() const { DARABONBA_PTR_GET_CONST(mainData_, Models::DescribeMultimodalModerationResultResponseBodyDataMainData) };
    inline Models::DescribeMultimodalModerationResultResponseBodyDataMainData mainData() { DARABONBA_PTR_GET(mainData_, Models::DescribeMultimodalModerationResultResponseBodyDataMainData) };
    inline DescribeMultimodalModerationResultResponseBodyData& setMainData(const Models::DescribeMultimodalModerationResultResponseBodyDataMainData & mainData) { DARABONBA_PTR_SET_VALUE(mainData_, mainData) };
    inline DescribeMultimodalModerationResultResponseBodyData& setMainData(Models::DescribeMultimodalModerationResultResponseBodyDataMainData && mainData) { DARABONBA_PTR_SET_RVALUE(mainData_, mainData) };


    // reqId Field Functions 
    bool hasReqId() const { return this->reqId_ != nullptr;};
    void deleteReqId() { this->reqId_ = nullptr;};
    inline string reqId() const { DARABONBA_PTR_GET_DEFAULT(reqId_, "") };
    inline DescribeMultimodalModerationResultResponseBodyData& setReqId(string reqId) { DARABONBA_PTR_SET_VALUE(reqId_, reqId) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeMultimodalModerationResultResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    std::shared_ptr<vector<Models::DescribeMultimodalModerationResultResponseBodyDataCommentDatas>> commentDatas_ = nullptr;
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<Models::DescribeMultimodalModerationResultResponseBodyDataMainData> mainData_ = nullptr;
    std::shared_ptr<string> reqId_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
