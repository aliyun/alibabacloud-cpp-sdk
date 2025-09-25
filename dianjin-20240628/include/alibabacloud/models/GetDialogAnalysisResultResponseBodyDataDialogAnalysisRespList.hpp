// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGANALYSISRESULTRESPONSEBODYDATADIALOGANALYSISRESPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGANALYSISRESULTRESPONSEBODYDATADIALOGANALYSISRESPLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList& obj) { 
      DARABONBA_PTR_TO_JSON(analysisResp, analysisResp_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(ossUrl, ossUrl_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList& obj) { 
      DARABONBA_PTR_FROM_JSON(analysisResp, analysisResp_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(ossUrl, ossUrl_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList() = default ;
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList(const GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList &) = default ;
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList(GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList &&) = default ;
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList() = default ;
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList& operator=(const GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList &) = default ;
    GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList& operator=(GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisResp_ != nullptr
        && this->gmtCreate_ != nullptr && this->ossUrl_ != nullptr && this->sessionId_ != nullptr && this->status_ != nullptr; };
    // analysisResp Field Functions 
    bool hasAnalysisResp() const { return this->analysisResp_ != nullptr;};
    void deleteAnalysisResp() { this->analysisResp_ = nullptr;};
    inline const Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp & analysisResp() const { DARABONBA_PTR_GET_CONST(analysisResp_, Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp) };
    inline Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp analysisResp() { DARABONBA_PTR_GET(analysisResp_, Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp) };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList& setAnalysisResp(const Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp & analysisResp) { DARABONBA_PTR_SET_VALUE(analysisResp_, analysisResp) };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList& setAnalysisResp(Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp && analysisResp) { DARABONBA_PTR_SET_RVALUE(analysisResp_, analysisResp) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::GetDialogAnalysisResultResponseBodyDataDialogAnalysisRespListAnalysisResp> analysisResp_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> ossUrl_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
