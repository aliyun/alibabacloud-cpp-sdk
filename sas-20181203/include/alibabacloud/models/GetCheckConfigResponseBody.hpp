// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Standards : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Standards& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Standards& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Standards() = default ;
      Standards(const Standards &) = default ;
      Standards(Standards &&) = default ;
      Standards(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Standards() = default ;
      Standards& operator=(const Standards &) = default ;
      Standards& operator=(Standards &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->showName_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Standards& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline Standards& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Standards& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Standards& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the check item.
      shared_ptr<int64_t> id_ {};
      // The name of the check item.
      shared_ptr<string> showName_ {};
      // The status of the check item. Valid values:
      // 
      // *   **ON**: The check item is enabled.
      // *   **OFF**: The check item is disabled.
      shared_ptr<string> status_ {};
      // The type of the check item. Valid values:
      // 
      // *   **RISK**: cloud service configuration management
      // *   **IDENTITY_PERMISSION**: identity and permission management
      // *   **COMPLIANCE**: compliance
      shared_ptr<string> type_ {};
    };

    class SelectedChecks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SelectedChecks& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(SectionId, sectionId_);
      };
      friend void from_json(const Darabonba::Json& j, SelectedChecks& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(SectionId, sectionId_);
      };
      SelectedChecks() = default ;
      SelectedChecks(const SelectedChecks &) = default ;
      SelectedChecks(SelectedChecks &&) = default ;
      SelectedChecks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SelectedChecks() = default ;
      SelectedChecks& operator=(const SelectedChecks &) = default ;
      SelectedChecks& operator=(SelectedChecks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->sectionId_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline SelectedChecks& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // sectionId Field Functions 
      bool hasSectionId() const { return this->sectionId_ != nullptr;};
      void deleteSectionId() { this->sectionId_ = nullptr;};
      inline int64_t getSectionId() const { DARABONBA_PTR_GET_DEFAULT(sectionId_, 0L) };
      inline SelectedChecks& setSectionId(int64_t sectionId) { DARABONBA_PTR_SET_VALUE(sectionId_, sectionId) };


    protected:
      // The ID of the check item.
      shared_ptr<int64_t> checkId_ {};
      // The section ID of the check item.
      shared_ptr<int64_t> sectionId_ {};
    };

    virtual bool empty() const override { return this->cycleDays_ == nullptr
        && this->enableAddCheck_ == nullptr && this->enableAutoCheck_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->selectedChecks_ == nullptr
        && this->standards_ == nullptr && this->startTime_ == nullptr; };
    // cycleDays Field Functions 
    bool hasCycleDays() const { return this->cycleDays_ != nullptr;};
    void deleteCycleDays() { this->cycleDays_ = nullptr;};
    inline const vector<int32_t> & getCycleDays() const { DARABONBA_PTR_GET_CONST(cycleDays_, vector<int32_t>) };
    inline vector<int32_t> getCycleDays() { DARABONBA_PTR_GET(cycleDays_, vector<int32_t>) };
    inline GetCheckConfigResponseBody& setCycleDays(const vector<int32_t> & cycleDays) { DARABONBA_PTR_SET_VALUE(cycleDays_, cycleDays) };
    inline GetCheckConfigResponseBody& setCycleDays(vector<int32_t> && cycleDays) { DARABONBA_PTR_SET_RVALUE(cycleDays_, cycleDays) };


    // enableAddCheck Field Functions 
    bool hasEnableAddCheck() const { return this->enableAddCheck_ != nullptr;};
    void deleteEnableAddCheck() { this->enableAddCheck_ = nullptr;};
    inline bool getEnableAddCheck() const { DARABONBA_PTR_GET_DEFAULT(enableAddCheck_, false) };
    inline GetCheckConfigResponseBody& setEnableAddCheck(bool enableAddCheck) { DARABONBA_PTR_SET_VALUE(enableAddCheck_, enableAddCheck) };


    // enableAutoCheck Field Functions 
    bool hasEnableAutoCheck() const { return this->enableAutoCheck_ != nullptr;};
    void deleteEnableAutoCheck() { this->enableAutoCheck_ = nullptr;};
    inline bool getEnableAutoCheck() const { DARABONBA_PTR_GET_DEFAULT(enableAutoCheck_, false) };
    inline GetCheckConfigResponseBody& setEnableAutoCheck(bool enableAutoCheck) { DARABONBA_PTR_SET_VALUE(enableAutoCheck_, enableAutoCheck) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline GetCheckConfigResponseBody& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selectedChecks Field Functions 
    bool hasSelectedChecks() const { return this->selectedChecks_ != nullptr;};
    void deleteSelectedChecks() { this->selectedChecks_ = nullptr;};
    inline const vector<GetCheckConfigResponseBody::SelectedChecks> & getSelectedChecks() const { DARABONBA_PTR_GET_CONST(selectedChecks_, vector<GetCheckConfigResponseBody::SelectedChecks>) };
    inline vector<GetCheckConfigResponseBody::SelectedChecks> getSelectedChecks() { DARABONBA_PTR_GET(selectedChecks_, vector<GetCheckConfigResponseBody::SelectedChecks>) };
    inline GetCheckConfigResponseBody& setSelectedChecks(const vector<GetCheckConfigResponseBody::SelectedChecks> & selectedChecks) { DARABONBA_PTR_SET_VALUE(selectedChecks_, selectedChecks) };
    inline GetCheckConfigResponseBody& setSelectedChecks(vector<GetCheckConfigResponseBody::SelectedChecks> && selectedChecks) { DARABONBA_PTR_SET_RVALUE(selectedChecks_, selectedChecks) };


    // standards Field Functions 
    bool hasStandards() const { return this->standards_ != nullptr;};
    void deleteStandards() { this->standards_ = nullptr;};
    inline const vector<GetCheckConfigResponseBody::Standards> & getStandards() const { DARABONBA_PTR_GET_CONST(standards_, vector<GetCheckConfigResponseBody::Standards>) };
    inline vector<GetCheckConfigResponseBody::Standards> getStandards() { DARABONBA_PTR_GET(standards_, vector<GetCheckConfigResponseBody::Standards>) };
    inline GetCheckConfigResponseBody& setStandards(const vector<GetCheckConfigResponseBody::Standards> & standards) { DARABONBA_PTR_SET_VALUE(standards_, standards) };
    inline GetCheckConfigResponseBody& setStandards(vector<GetCheckConfigResponseBody::Standards> && standards) { DARABONBA_PTR_SET_RVALUE(standards_, standards) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline GetCheckConfigResponseBody& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The days in a week on which an automatic check is performed.
    shared_ptr<vector<int32_t>> cycleDays_ {};
    // Indicates whether the check for new check items in the selected requirement item is enabled by default. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableAddCheck_ {};
    // Indicates whether the automatic check is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableAutoCheck_ {};
    // The end time of the check. The value indicates a point in time. The time period that is specified by the start time and end time must be one of the following time periods:
    // 
    // *   **00:00 to 06:00**: If StartTime is set to 00:00, EndTime must be set to 06:00.
    // *   **06:00 to 12:00**: If StartTime is set to 06:00, EndTime must be set to 12:00.
    // *   **12:00 to 18:00**: If StartTime is set to 12:00, EndTime must be set to 18:00.
    // *   **18:00 to 24:00**: If StartTime is set to 18:00, EndTime must be set to 24:00.
    shared_ptr<int32_t> endTime_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The check items selected in the policy.
    shared_ptr<vector<GetCheckConfigResponseBody::SelectedChecks>> selectedChecks_ {};
    // The information about the check items.
    shared_ptr<vector<GetCheckConfigResponseBody::Standards>> standards_ {};
    // The start time of the check. The value indicates a point in time.
    shared_ptr<int32_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
