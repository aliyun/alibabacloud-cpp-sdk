// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTAGMININGANALYSISTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTAGMININGANALYSISTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTagMiningAnalysisTaskResponseBodyDataResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetTagMiningAnalysisTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTagMiningAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(results, results_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetTagMiningAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(results, results_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetTagMiningAnalysisTaskResponseBodyData() = default ;
    GetTagMiningAnalysisTaskResponseBodyData(const GetTagMiningAnalysisTaskResponseBodyData &) = default ;
    GetTagMiningAnalysisTaskResponseBodyData(GetTagMiningAnalysisTaskResponseBodyData &&) = default ;
    GetTagMiningAnalysisTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTagMiningAnalysisTaskResponseBodyData() = default ;
    GetTagMiningAnalysisTaskResponseBodyData& operator=(const GetTagMiningAnalysisTaskResponseBodyData &) = default ;
    GetTagMiningAnalysisTaskResponseBodyData& operator=(GetTagMiningAnalysisTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->results_ == nullptr && return this->status_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetTagMiningAnalysisTaskResponseBodyData& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetTagMiningAnalysisTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::GetTagMiningAnalysisTaskResponseBodyDataResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::GetTagMiningAnalysisTaskResponseBodyDataResults>) };
    inline vector<Models::GetTagMiningAnalysisTaskResponseBodyDataResults> results() { DARABONBA_PTR_GET(results_, vector<Models::GetTagMiningAnalysisTaskResponseBodyDataResults>) };
    inline GetTagMiningAnalysisTaskResponseBodyData& setResults(const vector<Models::GetTagMiningAnalysisTaskResponseBodyDataResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline GetTagMiningAnalysisTaskResponseBodyData& setResults(vector<Models::GetTagMiningAnalysisTaskResponseBodyDataResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTagMiningAnalysisTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<vector<Models::GetTagMiningAnalysisTaskResponseBodyDataResults>> results_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
