// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDISYNCTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDISyncTaskResponseBodyDataAlarmList.hpp>
#include <alibabacloud/models/GetDISyncTaskResponseBodyDataSolutionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDISyncTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDISyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmList, alarmList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(SolutionDetail, solutionDetail_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDISyncTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmList, alarmList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(SolutionDetail, solutionDetail_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDISyncTaskResponseBodyData() = default ;
    GetDISyncTaskResponseBodyData(const GetDISyncTaskResponseBodyData &) = default ;
    GetDISyncTaskResponseBodyData(GetDISyncTaskResponseBodyData &&) = default ;
    GetDISyncTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDISyncTaskResponseBodyData() = default ;
    GetDISyncTaskResponseBodyData& operator=(const GetDISyncTaskResponseBodyData &) = default ;
    GetDISyncTaskResponseBodyData& operator=(GetDISyncTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmList_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr && this->solutionDetail_ != nullptr && this->status_ != nullptr; };
    // alarmList Field Functions 
    bool hasAlarmList() const { return this->alarmList_ != nullptr;};
    void deleteAlarmList() { this->alarmList_ = nullptr;};
    inline const vector<Models::GetDISyncTaskResponseBodyDataAlarmList> & alarmList() const { DARABONBA_PTR_GET_CONST(alarmList_, vector<Models::GetDISyncTaskResponseBodyDataAlarmList>) };
    inline vector<Models::GetDISyncTaskResponseBodyDataAlarmList> alarmList() { DARABONBA_PTR_GET(alarmList_, vector<Models::GetDISyncTaskResponseBodyDataAlarmList>) };
    inline GetDISyncTaskResponseBodyData& setAlarmList(const vector<Models::GetDISyncTaskResponseBodyDataAlarmList> & alarmList) { DARABONBA_PTR_SET_VALUE(alarmList_, alarmList) };
    inline GetDISyncTaskResponseBodyData& setAlarmList(vector<Models::GetDISyncTaskResponseBodyDataAlarmList> && alarmList) { DARABONBA_PTR_SET_RVALUE(alarmList_, alarmList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDISyncTaskResponseBodyData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDISyncTaskResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // solutionDetail Field Functions 
    bool hasSolutionDetail() const { return this->solutionDetail_ != nullptr;};
    void deleteSolutionDetail() { this->solutionDetail_ = nullptr;};
    inline const Models::GetDISyncTaskResponseBodyDataSolutionDetail & solutionDetail() const { DARABONBA_PTR_GET_CONST(solutionDetail_, Models::GetDISyncTaskResponseBodyDataSolutionDetail) };
    inline Models::GetDISyncTaskResponseBodyDataSolutionDetail solutionDetail() { DARABONBA_PTR_GET(solutionDetail_, Models::GetDISyncTaskResponseBodyDataSolutionDetail) };
    inline GetDISyncTaskResponseBodyData& setSolutionDetail(const Models::GetDISyncTaskResponseBodyDataSolutionDetail & solutionDetail) { DARABONBA_PTR_SET_VALUE(solutionDetail_, solutionDetail) };
    inline GetDISyncTaskResponseBodyData& setSolutionDetail(Models::GetDISyncTaskResponseBodyDataSolutionDetail && solutionDetail) { DARABONBA_PTR_SET_RVALUE(solutionDetail_, solutionDetail) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDISyncTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The alert rules that are associated with the real-time synchronization task. The value of this parameter is an array.
    std::shared_ptr<vector<Models::GetDISyncTaskResponseBodyDataAlarmList>> alarmList_ = nullptr;
    // *   If the TaskType parameter is set to DI_REALTIME, the details of the real-time synchronization task are returned.
    // *   If the TaskType parameter is set to DI_SOLUTION, the value null is returned.
    std::shared_ptr<string> code_ = nullptr;
    // The cause of the failure to obtain the details of the real-time synchronization task or data synchronization solution.
    // 
    // If the details of the real-time synchronization task or data synchronization solution are obtained, the value null is returned.
    std::shared_ptr<string> message_ = nullptr;
    // *   If the TaskType parameter is set to DI_REALTIME, the value null is returned.
    // *   If the TaskType parameter is set to DI_SOLUTION, the details of the data synchronization solution are returned.
    std::shared_ptr<Models::GetDISyncTaskResponseBodyDataSolutionDetail> solutionDetail_ = nullptr;
    // Indicates whether the details of the real-time synchronization task or data synchronization solution are obtained. Valid values:
    // 
    // success: The details are obtained. fail: The details fail to be obtained.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
