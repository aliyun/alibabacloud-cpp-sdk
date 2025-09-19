// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckConfigResponseBodySelectedChecks.hpp>
#include <alibabacloud/models/GetCheckConfigResponseBodyStandards.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_TO_JSON(EnableAddCheck, enableAddCheck_);
      DARABONBA_PTR_TO_JSON(EnableAutoCheck, enableAutoCheck_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SelectedChecks, selectedChecks_);
      DARABONBA_PTR_TO_JSON(Standards, standards_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_FROM_JSON(EnableAddCheck, enableAddCheck_);
      DARABONBA_PTR_FROM_JSON(EnableAutoCheck, enableAutoCheck_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SelectedChecks, selectedChecks_);
      DARABONBA_PTR_FROM_JSON(Standards, standards_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetCheckConfigResponseBody() = default ;
    GetCheckConfigResponseBody(const GetCheckConfigResponseBody &) = default ;
    GetCheckConfigResponseBody(GetCheckConfigResponseBody &&) = default ;
    GetCheckConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckConfigResponseBody() = default ;
    GetCheckConfigResponseBody& operator=(const GetCheckConfigResponseBody &) = default ;
    GetCheckConfigResponseBody& operator=(GetCheckConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycleDays_ != nullptr
        && this->enableAddCheck_ != nullptr && this->enableAutoCheck_ != nullptr && this->endTime_ != nullptr && this->requestId_ != nullptr && this->selectedChecks_ != nullptr
        && this->standards_ != nullptr && this->startTime_ != nullptr; };
    // cycleDays Field Functions 
    bool hasCycleDays() const { return this->cycleDays_ != nullptr;};
    void deleteCycleDays() { this->cycleDays_ = nullptr;};
    inline const vector<int32_t> & cycleDays() const { DARABONBA_PTR_GET_CONST(cycleDays_, vector<int32_t>) };
    inline vector<int32_t> cycleDays() { DARABONBA_PTR_GET(cycleDays_, vector<int32_t>) };
    inline GetCheckConfigResponseBody& setCycleDays(const vector<int32_t> & cycleDays) { DARABONBA_PTR_SET_VALUE(cycleDays_, cycleDays) };
    inline GetCheckConfigResponseBody& setCycleDays(vector<int32_t> && cycleDays) { DARABONBA_PTR_SET_RVALUE(cycleDays_, cycleDays) };


    // enableAddCheck Field Functions 
    bool hasEnableAddCheck() const { return this->enableAddCheck_ != nullptr;};
    void deleteEnableAddCheck() { this->enableAddCheck_ = nullptr;};
    inline bool enableAddCheck() const { DARABONBA_PTR_GET_DEFAULT(enableAddCheck_, false) };
    inline GetCheckConfigResponseBody& setEnableAddCheck(bool enableAddCheck) { DARABONBA_PTR_SET_VALUE(enableAddCheck_, enableAddCheck) };


    // enableAutoCheck Field Functions 
    bool hasEnableAutoCheck() const { return this->enableAutoCheck_ != nullptr;};
    void deleteEnableAutoCheck() { this->enableAutoCheck_ = nullptr;};
    inline bool enableAutoCheck() const { DARABONBA_PTR_GET_DEFAULT(enableAutoCheck_, false) };
    inline GetCheckConfigResponseBody& setEnableAutoCheck(bool enableAutoCheck) { DARABONBA_PTR_SET_VALUE(enableAutoCheck_, enableAutoCheck) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline GetCheckConfigResponseBody& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selectedChecks Field Functions 
    bool hasSelectedChecks() const { return this->selectedChecks_ != nullptr;};
    void deleteSelectedChecks() { this->selectedChecks_ = nullptr;};
    inline const vector<GetCheckConfigResponseBodySelectedChecks> & selectedChecks() const { DARABONBA_PTR_GET_CONST(selectedChecks_, vector<GetCheckConfigResponseBodySelectedChecks>) };
    inline vector<GetCheckConfigResponseBodySelectedChecks> selectedChecks() { DARABONBA_PTR_GET(selectedChecks_, vector<GetCheckConfigResponseBodySelectedChecks>) };
    inline GetCheckConfigResponseBody& setSelectedChecks(const vector<GetCheckConfigResponseBodySelectedChecks> & selectedChecks) { DARABONBA_PTR_SET_VALUE(selectedChecks_, selectedChecks) };
    inline GetCheckConfigResponseBody& setSelectedChecks(vector<GetCheckConfigResponseBodySelectedChecks> && selectedChecks) { DARABONBA_PTR_SET_RVALUE(selectedChecks_, selectedChecks) };


    // standards Field Functions 
    bool hasStandards() const { return this->standards_ != nullptr;};
    void deleteStandards() { this->standards_ = nullptr;};
    inline const vector<GetCheckConfigResponseBodyStandards> & standards() const { DARABONBA_PTR_GET_CONST(standards_, vector<GetCheckConfigResponseBodyStandards>) };
    inline vector<GetCheckConfigResponseBodyStandards> standards() { DARABONBA_PTR_GET(standards_, vector<GetCheckConfigResponseBodyStandards>) };
    inline GetCheckConfigResponseBody& setStandards(const vector<GetCheckConfigResponseBodyStandards> & standards) { DARABONBA_PTR_SET_VALUE(standards_, standards) };
    inline GetCheckConfigResponseBody& setStandards(vector<GetCheckConfigResponseBodyStandards> && standards) { DARABONBA_PTR_SET_RVALUE(standards_, standards) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline GetCheckConfigResponseBody& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The days in a week on which an automatic check is performed.
    std::shared_ptr<vector<int32_t>> cycleDays_ = nullptr;
    // Indicates whether the check for new check items in the selected requirement item is enabled by default. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableAddCheck_ = nullptr;
    // Indicates whether the automatic check is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableAutoCheck_ = nullptr;
    // The end time of the check. The value indicates a point in time. The time period that is specified by the start time and end time must be one of the following time periods:
    // 
    // *   **00:00 to 06:00**: If StartTime is set to 00:00, EndTime must be set to 06:00.
    // *   **06:00 to 12:00**: If StartTime is set to 06:00, EndTime must be set to 12:00.
    // *   **12:00 to 18:00**: If StartTime is set to 12:00, EndTime must be set to 18:00.
    // *   **18:00 to 24:00**: If StartTime is set to 18:00, EndTime must be set to 24:00.
    std::shared_ptr<int32_t> endTime_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The check items selected in the policy.
    std::shared_ptr<vector<GetCheckConfigResponseBodySelectedChecks>> selectedChecks_ = nullptr;
    // The information about the check items.
    std::shared_ptr<vector<GetCheckConfigResponseBodyStandards>> standards_ = nullptr;
    // The start time of the check. The value indicates a point in time.
    std::shared_ptr<int32_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
