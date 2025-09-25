// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGANALYSISRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGANALYSISRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogAnalysisResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogAnalysisResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(dialogAnalysisRespList, dialogAnalysisRespList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogAnalysisResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(dialogAnalysisRespList, dialogAnalysisRespList_);
    };
    GetDialogAnalysisResultResponseBodyData() = default ;
    GetDialogAnalysisResultResponseBodyData(const GetDialogAnalysisResultResponseBodyData &) = default ;
    GetDialogAnalysisResultResponseBodyData(GetDialogAnalysisResultResponseBodyData &&) = default ;
    GetDialogAnalysisResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogAnalysisResultResponseBodyData() = default ;
    GetDialogAnalysisResultResponseBodyData& operator=(const GetDialogAnalysisResultResponseBodyData &) = default ;
    GetDialogAnalysisResultResponseBodyData& operator=(GetDialogAnalysisResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dialogAnalysisRespList_ != nullptr; };
    // dialogAnalysisRespList Field Functions 
    bool hasDialogAnalysisRespList() const { return this->dialogAnalysisRespList_ != nullptr;};
    void deleteDialogAnalysisRespList() { this->dialogAnalysisRespList_ = nullptr;};
    inline const vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList> & dialogAnalysisRespList() const { DARABONBA_PTR_GET_CONST(dialogAnalysisRespList_, vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList>) };
    inline vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList> dialogAnalysisRespList() { DARABONBA_PTR_GET(dialogAnalysisRespList_, vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList>) };
    inline GetDialogAnalysisResultResponseBodyData& setDialogAnalysisRespList(const vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList> & dialogAnalysisRespList) { DARABONBA_PTR_SET_VALUE(dialogAnalysisRespList_, dialogAnalysisRespList) };
    inline GetDialogAnalysisResultResponseBodyData& setDialogAnalysisRespList(vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList> && dialogAnalysisRespList) { DARABONBA_PTR_SET_RVALUE(dialogAnalysisRespList_, dialogAnalysisRespList) };


  protected:
    std::shared_ptr<vector<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList>> dialogAnalysisRespList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
