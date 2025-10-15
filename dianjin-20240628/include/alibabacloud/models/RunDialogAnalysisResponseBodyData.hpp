// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDIALOGANALYSISRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_RUNDIALOGANALYSISRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunDialogAnalysisResponseBodyDataDialogAnalysisRespList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunDialogAnalysisResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDialogAnalysisResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(dialogAnalysisRespList, dialogAnalysisRespList_);
    };
    friend void from_json(const Darabonba::Json& j, RunDialogAnalysisResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(dialogAnalysisRespList, dialogAnalysisRespList_);
    };
    RunDialogAnalysisResponseBodyData() = default ;
    RunDialogAnalysisResponseBodyData(const RunDialogAnalysisResponseBodyData &) = default ;
    RunDialogAnalysisResponseBodyData(RunDialogAnalysisResponseBodyData &&) = default ;
    RunDialogAnalysisResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDialogAnalysisResponseBodyData() = default ;
    RunDialogAnalysisResponseBodyData& operator=(const RunDialogAnalysisResponseBodyData &) = default ;
    RunDialogAnalysisResponseBodyData& operator=(RunDialogAnalysisResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogAnalysisRespList_ == nullptr; };
    // dialogAnalysisRespList Field Functions 
    bool hasDialogAnalysisRespList() const { return this->dialogAnalysisRespList_ != nullptr;};
    void deleteDialogAnalysisRespList() { this->dialogAnalysisRespList_ = nullptr;};
    inline const vector<Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespList> & dialogAnalysisRespList() const { DARABONBA_PTR_GET_CONST(dialogAnalysisRespList_, vector<Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespList>) };
    inline vector<Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespList> dialogAnalysisRespList() { DARABONBA_PTR_GET(dialogAnalysisRespList_, vector<Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespList>) };
    inline RunDialogAnalysisResponseBodyData& setDialogAnalysisRespList(const vector<Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespList> & dialogAnalysisRespList) { DARABONBA_PTR_SET_VALUE(dialogAnalysisRespList_, dialogAnalysisRespList) };
    inline RunDialogAnalysisResponseBodyData& setDialogAnalysisRespList(vector<Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespList> && dialogAnalysisRespList) { DARABONBA_PTR_SET_RVALUE(dialogAnalysisRespList_, dialogAnalysisRespList) };


  protected:
    std::shared_ptr<vector<Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespList>> dialogAnalysisRespList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
