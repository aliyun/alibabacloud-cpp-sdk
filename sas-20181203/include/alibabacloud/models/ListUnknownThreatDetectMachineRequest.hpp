// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTMACHINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTMACHINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUnknownThreatDetectMachineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnknownThreatDetectMachineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StudyMode, studyMode_);
      DARABONBA_PTR_TO_JSON(StudyTimeEnd, studyTimeEnd_);
      DARABONBA_PTR_TO_JSON(StudyTimeStart, studyTimeStart_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnknownThreatDetectMachineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StudyMode, studyMode_);
      DARABONBA_PTR_FROM_JSON(StudyTimeEnd, studyTimeEnd_);
      DARABONBA_PTR_FROM_JSON(StudyTimeStart, studyTimeStart_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListUnknownThreatDetectMachineRequest() = default ;
    ListUnknownThreatDetectMachineRequest(const ListUnknownThreatDetectMachineRequest &) = default ;
    ListUnknownThreatDetectMachineRequest(ListUnknownThreatDetectMachineRequest &&) = default ;
    ListUnknownThreatDetectMachineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnknownThreatDetectMachineRequest() = default ;
    ListUnknownThreatDetectMachineRequest& operator=(const ListUnknownThreatDetectMachineRequest &) = default ;
    ListUnknownThreatDetectMachineRequest& operator=(ListUnknownThreatDetectMachineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->remark_ == nullptr && this->status_ == nullptr && this->studyMode_ == nullptr && this->studyTimeEnd_ == nullptr
        && this->studyTimeStart_ == nullptr && this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListUnknownThreatDetectMachineRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUnknownThreatDetectMachineRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline ListUnknownThreatDetectMachineRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListUnknownThreatDetectMachineRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // studyMode Field Functions 
    bool hasStudyMode() const { return this->studyMode_ != nullptr;};
    void deleteStudyMode() { this->studyMode_ = nullptr;};
    inline string getStudyMode() const { DARABONBA_PTR_GET_DEFAULT(studyMode_, "") };
    inline ListUnknownThreatDetectMachineRequest& setStudyMode(string studyMode) { DARABONBA_PTR_SET_VALUE(studyMode_, studyMode) };


    // studyTimeEnd Field Functions 
    bool hasStudyTimeEnd() const { return this->studyTimeEnd_ != nullptr;};
    void deleteStudyTimeEnd() { this->studyTimeEnd_ = nullptr;};
    inline int64_t getStudyTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(studyTimeEnd_, 0L) };
    inline ListUnknownThreatDetectMachineRequest& setStudyTimeEnd(int64_t studyTimeEnd) { DARABONBA_PTR_SET_VALUE(studyTimeEnd_, studyTimeEnd) };


    // studyTimeStart Field Functions 
    bool hasStudyTimeStart() const { return this->studyTimeStart_ != nullptr;};
    void deleteStudyTimeStart() { this->studyTimeStart_ = nullptr;};
    inline int64_t getStudyTimeStart() const { DARABONBA_PTR_GET_DEFAULT(studyTimeStart_, 0L) };
    inline ListUnknownThreatDetectMachineRequest& setStudyTimeStart(int64_t studyTimeStart) { DARABONBA_PTR_SET_VALUE(studyTimeStart_, studyTimeStart) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListUnknownThreatDetectMachineRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> studyMode_ {};
    shared_ptr<int64_t> studyTimeEnd_ {};
    shared_ptr<int64_t> studyTimeStart_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
