// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDIALOGANALYSISRESPONSEBODYDATADIALOGANALYSISRESPLIST_HPP_
#define ALIBABACLOUD_MODELS_RUNDIALOGANALYSISRESPONSEBODYDATADIALOGANALYSISRESPLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunDialogAnalysisResponseBodyDataDialogAnalysisRespListAnalysisResp.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunDialogAnalysisResponseBodyDataDialogAnalysisRespList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& obj) { 
      DARABONBA_PTR_TO_JSON(analysisResp, analysisResp_);
      DARABONBA_PTR_TO_JSON(failNode, failNode_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisResp, analysisResp_);
      DARABONBA_PTR_FROM_JSON(failNode, failNode_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    RunDialogAnalysisResponseBodyDataDialogAnalysisRespList() = default ;
    RunDialogAnalysisResponseBodyDataDialogAnalysisRespList(const RunDialogAnalysisResponseBodyDataDialogAnalysisRespList &) = default ;
    RunDialogAnalysisResponseBodyDataDialogAnalysisRespList(RunDialogAnalysisResponseBodyDataDialogAnalysisRespList &&) = default ;
    RunDialogAnalysisResponseBodyDataDialogAnalysisRespList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDialogAnalysisResponseBodyDataDialogAnalysisRespList() = default ;
    RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& operator=(const RunDialogAnalysisResponseBodyDataDialogAnalysisRespList &) = default ;
    RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& operator=(RunDialogAnalysisResponseBodyDataDialogAnalysisRespList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisResp_ == nullptr
        && return this->failNode_ == nullptr && return this->gmtCreate_ == nullptr && return this->sessionId_ == nullptr && return this->status_ == nullptr; };
    // analysisResp Field Functions 
    bool hasAnalysisResp() const { return this->analysisResp_ != nullptr;};
    void deleteAnalysisResp() { this->analysisResp_ = nullptr;};
    inline const Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespListAnalysisResp & analysisResp() const { DARABONBA_PTR_GET_CONST(analysisResp_, Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespListAnalysisResp) };
    inline Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespListAnalysisResp analysisResp() { DARABONBA_PTR_GET(analysisResp_, Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespListAnalysisResp) };
    inline RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& setAnalysisResp(const Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespListAnalysisResp & analysisResp) { DARABONBA_PTR_SET_VALUE(analysisResp_, analysisResp) };
    inline RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& setAnalysisResp(Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespListAnalysisResp && analysisResp) { DARABONBA_PTR_SET_RVALUE(analysisResp_, analysisResp) };


    // failNode Field Functions 
    bool hasFailNode() const { return this->failNode_ != nullptr;};
    void deleteFailNode() { this->failNode_ = nullptr;};
    inline const vector<string> & failNode() const { DARABONBA_PTR_GET_CONST(failNode_, vector<string>) };
    inline vector<string> failNode() { DARABONBA_PTR_GET(failNode_, vector<string>) };
    inline RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& setFailNode(const vector<string> & failNode) { DARABONBA_PTR_SET_VALUE(failNode_, failNode) };
    inline RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& setFailNode(vector<string> && failNode) { DARABONBA_PTR_SET_RVALUE(failNode_, failNode) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline RunDialogAnalysisResponseBodyDataDialogAnalysisRespList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::RunDialogAnalysisResponseBodyDataDialogAnalysisRespListAnalysisResp> analysisResp_ = nullptr;
    std::shared_ptr<vector<string>> failNode_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
