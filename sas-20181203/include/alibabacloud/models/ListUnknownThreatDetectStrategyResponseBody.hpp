// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNKNOWNTHREATDETECTSTRATEGYRESPONSEBODY_HPP_
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
  class ListUnknownThreatDetectStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUnknownThreatDetectStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListUnknownThreatDetectStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListUnknownThreatDetectStrategyResponseBody() = default ;
    ListUnknownThreatDetectStrategyResponseBody(const ListUnknownThreatDetectStrategyResponseBody &) = default ;
    ListUnknownThreatDetectStrategyResponseBody(ListUnknownThreatDetectStrategyResponseBody &&) = default ;
    ListUnknownThreatDetectStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUnknownThreatDetectStrategyResponseBody() = default ;
    ListUnknownThreatDetectStrategyResponseBody& operator=(const ListUnknownThreatDetectStrategyResponseBody &) = default ;
    ListUnknownThreatDetectStrategyResponseBody& operator=(ListUnknownThreatDetectStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<int32_t> currentPage_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AssetSelectionType, assetSelectionType_);
        DARABONBA_PTR_TO_JSON(DurationDaysAfterInit, durationDaysAfterInit_);
        DARABONBA_PTR_TO_JSON(DurationDaysAfterStop, durationDaysAfterStop_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MachineCount, machineCount_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(StudyMode, studyMode_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetSelectionType, assetSelectionType_);
        DARABONBA_PTR_FROM_JSON(DurationDaysAfterInit, durationDaysAfterInit_);
        DARABONBA_PTR_FROM_JSON(DurationDaysAfterStop, durationDaysAfterStop_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MachineCount, machineCount_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(StudyMode, studyMode_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assetSelectionType_ == nullptr
        && this->durationDaysAfterInit_ == nullptr && this->durationDaysAfterStop_ == nullptr && this->id_ == nullptr && this->machineCount_ == nullptr && this->name_ == nullptr
        && this->studyMode_ == nullptr; };
      // assetSelectionType Field Functions 
      bool hasAssetSelectionType() const { return this->assetSelectionType_ != nullptr;};
      void deleteAssetSelectionType() { this->assetSelectionType_ = nullptr;};
      inline string getAssetSelectionType() const { DARABONBA_PTR_GET_DEFAULT(assetSelectionType_, "") };
      inline Data& setAssetSelectionType(string assetSelectionType) { DARABONBA_PTR_SET_VALUE(assetSelectionType_, assetSelectionType) };


      // durationDaysAfterInit Field Functions 
      bool hasDurationDaysAfterInit() const { return this->durationDaysAfterInit_ != nullptr;};
      void deleteDurationDaysAfterInit() { this->durationDaysAfterInit_ = nullptr;};
      inline int32_t getDurationDaysAfterInit() const { DARABONBA_PTR_GET_DEFAULT(durationDaysAfterInit_, 0) };
      inline Data& setDurationDaysAfterInit(int32_t durationDaysAfterInit) { DARABONBA_PTR_SET_VALUE(durationDaysAfterInit_, durationDaysAfterInit) };


      // durationDaysAfterStop Field Functions 
      bool hasDurationDaysAfterStop() const { return this->durationDaysAfterStop_ != nullptr;};
      void deleteDurationDaysAfterStop() { this->durationDaysAfterStop_ = nullptr;};
      inline int32_t getDurationDaysAfterStop() const { DARABONBA_PTR_GET_DEFAULT(durationDaysAfterStop_, 0) };
      inline Data& setDurationDaysAfterStop(int32_t durationDaysAfterStop) { DARABONBA_PTR_SET_VALUE(durationDaysAfterStop_, durationDaysAfterStop) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // machineCount Field Functions 
      bool hasMachineCount() const { return this->machineCount_ != nullptr;};
      void deleteMachineCount() { this->machineCount_ = nullptr;};
      inline int32_t getMachineCount() const { DARABONBA_PTR_GET_DEFAULT(machineCount_, 0) };
      inline Data& setMachineCount(int32_t machineCount) { DARABONBA_PTR_SET_VALUE(machineCount_, machineCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // studyMode Field Functions 
      bool hasStudyMode() const { return this->studyMode_ != nullptr;};
      void deleteStudyMode() { this->studyMode_ = nullptr;};
      inline string getStudyMode() const { DARABONBA_PTR_GET_DEFAULT(studyMode_, "") };
      inline Data& setStudyMode(string studyMode) { DARABONBA_PTR_SET_VALUE(studyMode_, studyMode) };


    protected:
      shared_ptr<string> assetSelectionType_ {};
      shared_ptr<int32_t> durationDaysAfterInit_ {};
      shared_ptr<int32_t> durationDaysAfterStop_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int32_t> machineCount_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> studyMode_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListUnknownThreatDetectStrategyResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListUnknownThreatDetectStrategyResponseBody::Data>) };
    inline vector<ListUnknownThreatDetectStrategyResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListUnknownThreatDetectStrategyResponseBody::Data>) };
    inline ListUnknownThreatDetectStrategyResponseBody& setData(const vector<ListUnknownThreatDetectStrategyResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListUnknownThreatDetectStrategyResponseBody& setData(vector<ListUnknownThreatDetectStrategyResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListUnknownThreatDetectStrategyResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListUnknownThreatDetectStrategyResponseBody::PageInfo) };
    inline ListUnknownThreatDetectStrategyResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListUnknownThreatDetectStrategyResponseBody::PageInfo) };
    inline ListUnknownThreatDetectStrategyResponseBody& setPageInfo(const ListUnknownThreatDetectStrategyResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListUnknownThreatDetectStrategyResponseBody& setPageInfo(ListUnknownThreatDetectStrategyResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUnknownThreatDetectStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListUnknownThreatDetectStrategyResponseBody::Data>> data_ {};
    shared_ptr<ListUnknownThreatDetectStrategyResponseBody::PageInfo> pageInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
