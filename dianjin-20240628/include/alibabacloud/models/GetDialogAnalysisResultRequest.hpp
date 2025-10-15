// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALOGANALYSISRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDIALOGANALYSISRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDialogAnalysisResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDialogAnalysisResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(asc, asc_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(sessionIds, sessionIds_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(useUrl, useUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetDialogAnalysisResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(asc, asc_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(sessionIds, sessionIds_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(useUrl, useUrl_);
    };
    GetDialogAnalysisResultRequest() = default ;
    GetDialogAnalysisResultRequest(const GetDialogAnalysisResultRequest &) = default ;
    GetDialogAnalysisResultRequest(GetDialogAnalysisResultRequest &&) = default ;
    GetDialogAnalysisResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDialogAnalysisResultRequest() = default ;
    GetDialogAnalysisResultRequest& operator=(const GetDialogAnalysisResultRequest &) = default ;
    GetDialogAnalysisResultRequest& operator=(GetDialogAnalysisResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asc_ == nullptr
        && return this->endTime_ == nullptr && return this->sessionIds_ == nullptr && return this->startTime_ == nullptr && return this->useUrl_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline bool asc() const { DARABONBA_PTR_GET_DEFAULT(asc_, false) };
    inline GetDialogAnalysisResultRequest& setAsc(bool asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetDialogAnalysisResultRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // sessionIds Field Functions 
    bool hasSessionIds() const { return this->sessionIds_ != nullptr;};
    void deleteSessionIds() { this->sessionIds_ = nullptr;};
    inline const vector<string> & sessionIds() const { DARABONBA_PTR_GET_CONST(sessionIds_, vector<string>) };
    inline vector<string> sessionIds() { DARABONBA_PTR_GET(sessionIds_, vector<string>) };
    inline GetDialogAnalysisResultRequest& setSessionIds(const vector<string> & sessionIds) { DARABONBA_PTR_SET_VALUE(sessionIds_, sessionIds) };
    inline GetDialogAnalysisResultRequest& setSessionIds(vector<string> && sessionIds) { DARABONBA_PTR_SET_RVALUE(sessionIds_, sessionIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetDialogAnalysisResultRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // useUrl Field Functions 
    bool hasUseUrl() const { return this->useUrl_ != nullptr;};
    void deleteUseUrl() { this->useUrl_ = nullptr;};
    inline bool useUrl() const { DARABONBA_PTR_GET_DEFAULT(useUrl_, false) };
    inline GetDialogAnalysisResultRequest& setUseUrl(bool useUrl) { DARABONBA_PTR_SET_VALUE(useUrl_, useUrl) };


  protected:
    std::shared_ptr<bool> asc_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<vector<string>> sessionIds_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<bool> useUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
