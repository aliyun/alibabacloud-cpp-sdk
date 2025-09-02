// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISYNCINSTANCEINFORESPONSEBODYDATASOLUTIONINFOSTEPDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDISYNCINSTANCEINFORESPONSEBODYDATASOLUTIONINFOSTEPDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StepId, stepId_);
      DARABONBA_PTR_TO_JSON(StepName, stepName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StepId, stepId_);
      DARABONBA_PTR_FROM_JSON(StepName, stepName_);
    };
    GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail() = default ;
    GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail(const GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail &) = default ;
    GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail(GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail &&) = default ;
    GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail() = default ;
    GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail& operator=(const GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail &) = default ;
    GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail& operator=(GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->info_ != nullptr
        && this->status_ != nullptr && this->stepId_ != nullptr && this->stepName_ != nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string info() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stepId Field Functions 
    bool hasStepId() const { return this->stepId_ != nullptr;};
    void deleteStepId() { this->stepId_ = nullptr;};
    inline int64_t stepId() const { DARABONBA_PTR_GET_DEFAULT(stepId_, 0L) };
    inline GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail& setStepId(int64_t stepId) { DARABONBA_PTR_SET_VALUE(stepId_, stepId) };


    // stepName Field Functions 
    bool hasStepName() const { return this->stepName_ != nullptr;};
    void deleteStepName() { this->stepName_ = nullptr;};
    inline string stepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
    inline GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


  protected:
    // The information of the data synchronization solution.
    std::shared_ptr<string> info_ = nullptr;
    // The status of the step in the data synchronization solution.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the step in the data synchronization solution.
    std::shared_ptr<int64_t> stepId_ = nullptr;
    // The name of the step in the data synchronization solution.
    std::shared_ptr<string> stepName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
