// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGANALYSISRESULTRESPONSEBODYDATADIALOGANALYSISRESPLISTANALYSISRESP_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGANALYSISRESULTRESPONSEBODYDATADIALOGANALYSISRESPLISTANALYSISRESP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& obj) { 
      DARABONBA_PTR_TO_JSON(dialogExecPlan, dialogExecPlan_);
      DARABONBA_PTR_TO_JSON(dialogLabels, dialogLabels_);
      DARABONBA_ANY_TO_JSON(dialogOpenAnalysis, dialogOpenAnalysis_);
      DARABONBA_ANY_TO_JSON(dialogProcessAnalysis, dialogProcessAnalysis_);
      DARABONBA_PTR_TO_JSON(dialogSop, dialogSop_);
      DARABONBA_PTR_TO_JSON(dialogSummary, dialogSummary_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& obj) { 
      DARABONBA_PTR_FROM_JSON(dialogExecPlan, dialogExecPlan_);
      DARABONBA_PTR_FROM_JSON(dialogLabels, dialogLabels_);
      DARABONBA_ANY_FROM_JSON(dialogOpenAnalysis, dialogOpenAnalysis_);
      DARABONBA_ANY_FROM_JSON(dialogProcessAnalysis, dialogProcessAnalysis_);
      DARABONBA_PTR_FROM_JSON(dialogSop, dialogSop_);
      DARABONBA_PTR_FROM_JSON(dialogSummary, dialogSummary_);
    };
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp() = default ;
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp(const GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp &) = default ;
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp(GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp &&) = default ;
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp() = default ;
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& operator=(const GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp &) = default ;
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& operator=(GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogExecPlan_ == nullptr
        && return this->dialogLabels_ == nullptr && return this->dialogOpenAnalysis_ == nullptr && return this->dialogProcessAnalysis_ == nullptr && return this->dialogSop_ == nullptr && return this->dialogSummary_ == nullptr; };
    // dialogExecPlan Field Functions 
    bool hasDialogExecPlan() const { return this->dialogExecPlan_ != nullptr;};
    void deleteDialogExecPlan() { this->dialogExecPlan_ = nullptr;};
    inline string dialogExecPlan() const { DARABONBA_PTR_GET_DEFAULT(dialogExecPlan_, "") };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& setDialogExecPlan(string dialogExecPlan) { DARABONBA_PTR_SET_VALUE(dialogExecPlan_, dialogExecPlan) };


    // dialogLabels Field Functions 
    bool hasDialogLabels() const { return this->dialogLabels_ != nullptr;};
    void deleteDialogLabels() { this->dialogLabels_ = nullptr;};
    inline const vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels> & dialogLabels() const { DARABONBA_PTR_GET_CONST(dialogLabels_, vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels>) };
    inline vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels> dialogLabels() { DARABONBA_PTR_GET(dialogLabels_, vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels>) };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& setDialogLabels(const vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels> & dialogLabels) { DARABONBA_PTR_SET_VALUE(dialogLabels_, dialogLabels) };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& setDialogLabels(vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels> && dialogLabels) { DARABONBA_PTR_SET_RVALUE(dialogLabels_, dialogLabels) };


    // dialogOpenAnalysis Field Functions 
    bool hasDialogOpenAnalysis() const { return this->dialogOpenAnalysis_ != nullptr;};
    void deleteDialogOpenAnalysis() { this->dialogOpenAnalysis_ = nullptr;};
    inline     const Darabonba::Json & dialogOpenAnalysis() const { DARABONBA_GET(dialogOpenAnalysis_) };
    Darabonba::Json & dialogOpenAnalysis() { DARABONBA_GET(dialogOpenAnalysis_) };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& setDialogOpenAnalysis(const Darabonba::Json & dialogOpenAnalysis) { DARABONBA_SET_VALUE(dialogOpenAnalysis_, dialogOpenAnalysis) };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& setDialogOpenAnalysis(Darabonba::Json & dialogOpenAnalysis) { DARABONBA_SET_RVALUE(dialogOpenAnalysis_, dialogOpenAnalysis) };


    // dialogProcessAnalysis Field Functions 
    bool hasDialogProcessAnalysis() const { return this->dialogProcessAnalysis_ != nullptr;};
    void deleteDialogProcessAnalysis() { this->dialogProcessAnalysis_ = nullptr;};
    inline     const Darabonba::Json & dialogProcessAnalysis() const { DARABONBA_GET(dialogProcessAnalysis_) };
    Darabonba::Json & dialogProcessAnalysis() { DARABONBA_GET(dialogProcessAnalysis_) };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& setDialogProcessAnalysis(const Darabonba::Json & dialogProcessAnalysis) { DARABONBA_SET_VALUE(dialogProcessAnalysis_, dialogProcessAnalysis) };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& setDialogProcessAnalysis(Darabonba::Json & dialogProcessAnalysis) { DARABONBA_SET_RVALUE(dialogProcessAnalysis_, dialogProcessAnalysis) };


    // dialogSop Field Functions 
    bool hasDialogSop() const { return this->dialogSop_ != nullptr;};
    void deleteDialogSop() { this->dialogSop_ = nullptr;};
    inline string dialogSop() const { DARABONBA_PTR_GET_DEFAULT(dialogSop_, "") };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& setDialogSop(string dialogSop) { DARABONBA_PTR_SET_VALUE(dialogSop_, dialogSop) };


    // dialogSummary Field Functions 
    bool hasDialogSummary() const { return this->dialogSummary_ != nullptr;};
    void deleteDialogSummary() { this->dialogSummary_ = nullptr;};
    inline string dialogSummary() const { DARABONBA_PTR_GET_DEFAULT(dialogSummary_, "") };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp& setDialogSummary(string dialogSummary) { DARABONBA_PTR_SET_VALUE(dialogSummary_, dialogSummary) };


  protected:
    std::shared_ptr<string> dialogExecPlan_ = nullptr;
    std::shared_ptr<vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisRespDialogLabels>> dialogLabels_ = nullptr;
    Darabonba::Json dialogOpenAnalysis_ = nullptr;
    Darabonba::Json dialogProcessAnalysis_ = nullptr;
    std::shared_ptr<string> dialogSop_ = nullptr;
    std::shared_ptr<string> dialogSummary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
