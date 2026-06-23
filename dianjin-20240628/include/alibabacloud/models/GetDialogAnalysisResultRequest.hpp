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
        && this->endTime_ == nullptr && this->sessionIds_ == nullptr && this->startTime_ == nullptr && this->useUrl_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline bool getAsc() const { DARABONBA_PTR_GET_DEFAULT(asc_, false) };
    inline GetDialogAnalysisResultRequest& setAsc(bool asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetDialogAnalysisResultRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // sessionIds Field Functions 
    bool hasSessionIds() const { return this->sessionIds_ != nullptr;};
    void deleteSessionIds() { this->sessionIds_ = nullptr;};
    inline const vector<string> & getSessionIds() const { DARABONBA_PTR_GET_CONST(sessionIds_, vector<string>) };
    inline vector<string> getSessionIds() { DARABONBA_PTR_GET(sessionIds_, vector<string>) };
    inline GetDialogAnalysisResultRequest& setSessionIds(const vector<string> & sessionIds) { DARABONBA_PTR_SET_VALUE(sessionIds_, sessionIds) };
    inline GetDialogAnalysisResultRequest& setSessionIds(vector<string> && sessionIds) { DARABONBA_PTR_SET_RVALUE(sessionIds_, sessionIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetDialogAnalysisResultRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // useUrl Field Functions 
    bool hasUseUrl() const { return this->useUrl_ != nullptr;};
    void deleteUseUrl() { this->useUrl_ = nullptr;};
    inline bool getUseUrl() const { DARABONBA_PTR_GET_DEFAULT(useUrl_, false) };
    inline GetDialogAnalysisResultRequest& setUseUrl(bool useUrl) { DARABONBA_PTR_SET_VALUE(useUrl_, useUrl) };


  protected:
    // Whether to sort in ascending order. Default is true, which sorts by session creation time in ascending order. If false, sorts in descending order.
    shared_ptr<bool> asc_ {};
    // The end time, which must be in yyyy-MM-dd HH:mm:ss format. If sessionIds are provided, the system queries session analysis results based on these IDs.
    shared_ptr<string> endTime_ {};
    // Session ID list. When useUrl is true, the response includes OSS URLs. You can specify up to 1000 sessions. If you specify more than 1000, only the first 1000 are processed. When useUrl is false, the response includes full analysis results. You can specify up to 10 sessions. If you specify more than 10, only the first 10 are processed. This parameter is optional. If sessionIds is empty, the API retrieves results for sessions created between startTime and endTime. If sessionIds is not empty, the API retrieves results for the specified sessions. You cannot leave both sessionIds and the time range empty.
    shared_ptr<vector<string>> sessionIds_ {};
    // Start time in yyyy-MM-dd HH:mm:ss format. If sessionIds is not empty, you can query the session analysis results using the specified session IDs.
    shared_ptr<string> startTime_ {};
    // Whether to return an OSS URL instead of full analysis results. If true, the response includes an OSS URL that expires in one hour. Default is true. Supports up to 1000 sessions. If you specify more than 1000, only the first 1000 are processed. If false, the response includes full analysis results. Supports up to 10 sessions. If you specify more than 10, only the first 10 are processed.
    shared_ptr<bool> useUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
