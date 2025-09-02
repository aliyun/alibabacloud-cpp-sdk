// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISYNCINSTANCEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDISYNCINSTANCEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDISyncInstanceInfoResponseBodyDataSolutionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDISyncInstanceInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDISyncInstanceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SolutionInfo, solutionInfo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDISyncInstanceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SolutionInfo, solutionInfo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDISyncInstanceInfoResponseBodyData() = default ;
    GetDISyncInstanceInfoResponseBodyData(const GetDISyncInstanceInfoResponseBodyData &) = default ;
    GetDISyncInstanceInfoResponseBodyData(GetDISyncInstanceInfoResponseBodyData &&) = default ;
    GetDISyncInstanceInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDISyncInstanceInfoResponseBodyData() = default ;
    GetDISyncInstanceInfoResponseBodyData& operator=(const GetDISyncInstanceInfoResponseBodyData &) = default ;
    GetDISyncInstanceInfoResponseBodyData& operator=(GetDISyncInstanceInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->name_ != nullptr && this->solutionInfo_ != nullptr && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDISyncInstanceInfoResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDISyncInstanceInfoResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // solutionInfo Field Functions 
    bool hasSolutionInfo() const { return this->solutionInfo_ != nullptr;};
    void deleteSolutionInfo() { this->solutionInfo_ = nullptr;};
    inline const Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfo & solutionInfo() const { DARABONBA_PTR_GET_CONST(solutionInfo_, Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfo) };
    inline Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfo solutionInfo() { DARABONBA_PTR_GET(solutionInfo_, Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfo) };
    inline GetDISyncInstanceInfoResponseBodyData& setSolutionInfo(const Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfo & solutionInfo) { DARABONBA_PTR_SET_VALUE(solutionInfo_, solutionInfo) };
    inline GetDISyncInstanceInfoResponseBodyData& setSolutionInfo(Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfo && solutionInfo) { DARABONBA_PTR_SET_RVALUE(solutionInfo_, solutionInfo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDISyncInstanceInfoResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The cause of the failure to obtain the status of the real-time synchronization task or data synchronization solution. If the status of the real-time synchronization task or data synchronization solution is obtained, the value null is returned.
    std::shared_ptr<string> message_ = nullptr;
    // *   If the TaskType parameter is set to DI_REALTIME, the Name parameter indicates the name of the real-time synchronization task.
    // *   If the TaskType parameter is set to DI_SOLUTION, the value null is returned.
    std::shared_ptr<string> name_ = nullptr;
    // *   If the TaskType parameter is set to DI_REALTIME, the value null is returned.
    // *   If the TaskType parameter is set to DI_SOLUTION, the SolutionInfo parameter indicates the details of the data synchronization solution.
    std::shared_ptr<Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfo> solutionInfo_ = nullptr;
    // *   If the TaskType parameter is set to DI_REALTIME, the Status parameter indicates the status of the real-time synchronization task. Valid values: PAUSE, NORUN, RUN, KILLING, and WAIT.
    // *   If the TaskType parameter is set to DI_SOLUTION, the Status parameter indicates the status of the data synchronization solution. Valid values: success and fail.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
