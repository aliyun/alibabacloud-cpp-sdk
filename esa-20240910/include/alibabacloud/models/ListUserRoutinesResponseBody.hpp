// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERROUTINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERROUTINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListUserRoutinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRoutinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QuotaRoutineNumber, quotaRoutineNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Routines, routines_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UsedRoutineNumber, usedRoutineNumber_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRoutinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QuotaRoutineNumber, quotaRoutineNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Routines, routines_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UsedRoutineNumber, usedRoutineNumber_);
    };
    ListUserRoutinesResponseBody() = default ;
    ListUserRoutinesResponseBody(const ListUserRoutinesResponseBody &) = default ;
    ListUserRoutinesResponseBody(ListUserRoutinesResponseBody &&) = default ;
    ListUserRoutinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRoutinesResponseBody() = default ;
    ListUserRoutinesResponseBody& operator=(const ListUserRoutinesResponseBody &) = default ;
    ListUserRoutinesResponseBody& operator=(ListUserRoutinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Routines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Routines& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DefaultRelatedRecord, defaultRelatedRecord_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HasAssets, hasAssets_);
        DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
      };
      friend void from_json(const Darabonba::Json& j, Routines& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DefaultRelatedRecord, defaultRelatedRecord_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HasAssets, hasAssets_);
        DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
      };
      Routines() = default ;
      Routines(const Routines &) = default ;
      Routines(Routines &&) = default ;
      Routines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Routines() = default ;
      Routines& operator=(const Routines &) = default ;
      Routines& operator=(Routines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultRelatedRecord_ == nullptr && this->description_ == nullptr && this->hasAssets_ == nullptr && this->routineName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Routines& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultRelatedRecord Field Functions 
      bool hasDefaultRelatedRecord() const { return this->defaultRelatedRecord_ != nullptr;};
      void deleteDefaultRelatedRecord() { this->defaultRelatedRecord_ = nullptr;};
      inline string getDefaultRelatedRecord() const { DARABONBA_PTR_GET_DEFAULT(defaultRelatedRecord_, "") };
      inline Routines& setDefaultRelatedRecord(string defaultRelatedRecord) { DARABONBA_PTR_SET_VALUE(defaultRelatedRecord_, defaultRelatedRecord) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Routines& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hasAssets Field Functions 
      bool hasHasAssets() const { return this->hasAssets_ != nullptr;};
      void deleteHasAssets() { this->hasAssets_ = nullptr;};
      inline bool getHasAssets() const { DARABONBA_PTR_GET_DEFAULT(hasAssets_, false) };
      inline Routines& setHasAssets(bool hasAssets) { DARABONBA_PTR_SET_VALUE(hasAssets_, hasAssets) };


      // routineName Field Functions 
      bool hasRoutineName() const { return this->routineName_ != nullptr;};
      void deleteRoutineName() { this->routineName_ = nullptr;};
      inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
      inline Routines& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


    protected:
      // The time when the function was created.
      shared_ptr<string> createTime_ {};
      // The default record name to access.
      shared_ptr<string> defaultRelatedRecord_ {};
      // The function description.
      shared_ptr<string> description_ {};
      // Specifies whether to include the Assets file tag.
      shared_ptr<bool> hasAssets_ {};
      // The function name.
      shared_ptr<string> routineName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->quotaRoutineNumber_ == nullptr && this->requestId_ == nullptr && this->routines_ == nullptr && this->totalCount_ == nullptr
        && this->usedRoutineNumber_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListUserRoutinesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListUserRoutinesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // quotaRoutineNumber Field Functions 
    bool hasQuotaRoutineNumber() const { return this->quotaRoutineNumber_ != nullptr;};
    void deleteQuotaRoutineNumber() { this->quotaRoutineNumber_ = nullptr;};
    inline int64_t getQuotaRoutineNumber() const { DARABONBA_PTR_GET_DEFAULT(quotaRoutineNumber_, 0L) };
    inline ListUserRoutinesResponseBody& setQuotaRoutineNumber(int64_t quotaRoutineNumber) { DARABONBA_PTR_SET_VALUE(quotaRoutineNumber_, quotaRoutineNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserRoutinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routines Field Functions 
    bool hasRoutines() const { return this->routines_ != nullptr;};
    void deleteRoutines() { this->routines_ = nullptr;};
    inline const vector<ListUserRoutinesResponseBody::Routines> & getRoutines() const { DARABONBA_PTR_GET_CONST(routines_, vector<ListUserRoutinesResponseBody::Routines>) };
    inline vector<ListUserRoutinesResponseBody::Routines> getRoutines() { DARABONBA_PTR_GET(routines_, vector<ListUserRoutinesResponseBody::Routines>) };
    inline ListUserRoutinesResponseBody& setRoutines(const vector<ListUserRoutinesResponseBody::Routines> & routines) { DARABONBA_PTR_SET_VALUE(routines_, routines) };
    inline ListUserRoutinesResponseBody& setRoutines(vector<ListUserRoutinesResponseBody::Routines> && routines) { DARABONBA_PTR_SET_RVALUE(routines_, routines) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUserRoutinesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // usedRoutineNumber Field Functions 
    bool hasUsedRoutineNumber() const { return this->usedRoutineNumber_ != nullptr;};
    void deleteUsedRoutineNumber() { this->usedRoutineNumber_ = nullptr;};
    inline int64_t getUsedRoutineNumber() const { DARABONBA_PTR_GET_DEFAULT(usedRoutineNumber_, 0L) };
    inline ListUserRoutinesResponseBody& setUsedRoutineNumber(int64_t usedRoutineNumber) { DARABONBA_PTR_SET_VALUE(usedRoutineNumber_, usedRoutineNumber) };


  protected:
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The maximum number of functions supported by the billing plan.
    shared_ptr<int64_t> quotaRoutineNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The functions.
    shared_ptr<vector<ListUserRoutinesResponseBody::Routines>> routines_ {};
    // The total count.
    shared_ptr<int64_t> totalCount_ {};
    // The number of functions that were already created.
    shared_ptr<int64_t> usedRoutineNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
