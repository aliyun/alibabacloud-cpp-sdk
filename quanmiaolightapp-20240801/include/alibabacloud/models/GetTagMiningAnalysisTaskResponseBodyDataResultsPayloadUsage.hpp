// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTAGMININGANALYSISTASKRESPONSEBODYDATARESULTSPAYLOADUSAGE_HPP_
#define ALIBABACLOUD_MODELS_GETTAGMININGANALYSISTASKRESPONSEBODYDATARESULTSPAYLOADUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage& obj) { 
      DARABONBA_PTR_TO_JSON(inputToken, inputToken_);
      DARABONBA_PTR_TO_JSON(outputToken, outputToken_);
      DARABONBA_PTR_TO_JSON(totalToken, totalToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(inputToken, inputToken_);
      DARABONBA_PTR_FROM_JSON(outputToken, outputToken_);
      DARABONBA_PTR_FROM_JSON(totalToken, totalToken_);
    };
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage() = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage(const GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage &) = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage(GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage &&) = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage() = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage& operator=(const GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage &) = default ;
    GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage& operator=(GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->inputToken_ != nullptr
        && this->outputToken_ != nullptr && this->totalToken_ != nullptr; };
    // inputToken Field Functions 
    bool hasInputToken() const { return this->inputToken_ != nullptr;};
    void deleteInputToken() { this->inputToken_ = nullptr;};
    inline int64_t inputToken() const { DARABONBA_PTR_GET_DEFAULT(inputToken_, 0L) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage& setInputToken(int64_t inputToken) { DARABONBA_PTR_SET_VALUE(inputToken_, inputToken) };


    // outputToken Field Functions 
    bool hasOutputToken() const { return this->outputToken_ != nullptr;};
    void deleteOutputToken() { this->outputToken_ = nullptr;};
    inline int64_t outputToken() const { DARABONBA_PTR_GET_DEFAULT(outputToken_, 0L) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage& setOutputToken(int64_t outputToken) { DARABONBA_PTR_SET_VALUE(outputToken_, outputToken) };


    // totalToken Field Functions 
    bool hasTotalToken() const { return this->totalToken_ != nullptr;};
    void deleteTotalToken() { this->totalToken_ = nullptr;};
    inline int64_t totalToken() const { DARABONBA_PTR_GET_DEFAULT(totalToken_, 0L) };
    inline GetTagMiningAnalysisTaskResponseBodyDataResultsPayloadUsage& setTotalToken(int64_t totalToken) { DARABONBA_PTR_SET_VALUE(totalToken_, totalToken) };


  protected:
    std::shared_ptr<int64_t> inputToken_ = nullptr;
    std::shared_ptr<int64_t> outputToken_ = nullptr;
    std::shared_ptr<int64_t> totalToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
