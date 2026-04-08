// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHIFTSCHEDULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHIFTSCHEDULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListShiftSchedulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShiftSchedulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Paging, paging_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListShiftSchedulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Paging, paging_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListShiftSchedulesResponseBody() = default ;
    ListShiftSchedulesResponseBody(const ListShiftSchedulesResponseBody &) = default ;
    ListShiftSchedulesResponseBody(ListShiftSchedulesResponseBody &&) = default ;
    ListShiftSchedulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShiftSchedulesResponseBody() = default ;
    ListShiftSchedulesResponseBody& operator=(const ListShiftSchedulesResponseBody &) = default ;
    ListShiftSchedulesResponseBody& operator=(ListShiftSchedulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Paging : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Paging& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ShiftSchedules, shiftSchedules_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Paging& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ShiftSchedules, shiftSchedules_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Paging() = default ;
      Paging(const Paging &) = default ;
      Paging(Paging &&) = default ;
      Paging(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Paging() = default ;
      Paging& operator=(const Paging &) = default ;
      Paging& operator=(Paging &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ShiftSchedules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShiftSchedules& obj) { 
          DARABONBA_PTR_TO_JSON(ShiftScheduleIdentifier, shiftScheduleIdentifier_);
          DARABONBA_PTR_TO_JSON(ShiftScheduleName, shiftScheduleName_);
        };
        friend void from_json(const Darabonba::Json& j, ShiftSchedules& obj) { 
          DARABONBA_PTR_FROM_JSON(ShiftScheduleIdentifier, shiftScheduleIdentifier_);
          DARABONBA_PTR_FROM_JSON(ShiftScheduleName, shiftScheduleName_);
        };
        ShiftSchedules() = default ;
        ShiftSchedules(const ShiftSchedules &) = default ;
        ShiftSchedules(ShiftSchedules &&) = default ;
        ShiftSchedules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShiftSchedules() = default ;
        ShiftSchedules& operator=(const ShiftSchedules &) = default ;
        ShiftSchedules& operator=(ShiftSchedules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->shiftScheduleIdentifier_ == nullptr
        && this->shiftScheduleName_ == nullptr; };
        // shiftScheduleIdentifier Field Functions 
        bool hasShiftScheduleIdentifier() const { return this->shiftScheduleIdentifier_ != nullptr;};
        void deleteShiftScheduleIdentifier() { this->shiftScheduleIdentifier_ = nullptr;};
        inline string getShiftScheduleIdentifier() const { DARABONBA_PTR_GET_DEFAULT(shiftScheduleIdentifier_, "") };
        inline ShiftSchedules& setShiftScheduleIdentifier(string shiftScheduleIdentifier) { DARABONBA_PTR_SET_VALUE(shiftScheduleIdentifier_, shiftScheduleIdentifier) };


        // shiftScheduleName Field Functions 
        bool hasShiftScheduleName() const { return this->shiftScheduleName_ != nullptr;};
        void deleteShiftScheduleName() { this->shiftScheduleName_ = nullptr;};
        inline string getShiftScheduleName() const { DARABONBA_PTR_GET_DEFAULT(shiftScheduleName_, "") };
        inline ShiftSchedules& setShiftScheduleName(string shiftScheduleName) { DARABONBA_PTR_SET_VALUE(shiftScheduleName_, shiftScheduleName) };


      protected:
        // The unique identifier of the shift schedule. You can use the identifier to query the on-duty engineers in the shift schedule.
        shared_ptr<string> shiftScheduleIdentifier_ {};
        // The name of the shift schedule.
        shared_ptr<string> shiftScheduleName_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->shiftSchedules_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Paging& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Paging& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // shiftSchedules Field Functions 
      bool hasShiftSchedules() const { return this->shiftSchedules_ != nullptr;};
      void deleteShiftSchedules() { this->shiftSchedules_ = nullptr;};
      inline const vector<Paging::ShiftSchedules> & getShiftSchedules() const { DARABONBA_PTR_GET_CONST(shiftSchedules_, vector<Paging::ShiftSchedules>) };
      inline vector<Paging::ShiftSchedules> getShiftSchedules() { DARABONBA_PTR_GET(shiftSchedules_, vector<Paging::ShiftSchedules>) };
      inline Paging& setShiftSchedules(const vector<Paging::ShiftSchedules> & shiftSchedules) { DARABONBA_PTR_SET_VALUE(shiftSchedules_, shiftSchedules) };
      inline Paging& setShiftSchedules(vector<Paging::ShiftSchedules> && shiftSchedules) { DARABONBA_PTR_SET_RVALUE(shiftSchedules_, shiftSchedules) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Paging& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number. Minimum value: 1. Maximum value: 100.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The shift schedules.
      shared_ptr<vector<Paging::ShiftSchedules>> shiftSchedules_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->paging_ == nullptr
        && this->requestId_ == nullptr; };
    // paging Field Functions 
    bool hasPaging() const { return this->paging_ != nullptr;};
    void deletePaging() { this->paging_ = nullptr;};
    inline const ListShiftSchedulesResponseBody::Paging & getPaging() const { DARABONBA_PTR_GET_CONST(paging_, ListShiftSchedulesResponseBody::Paging) };
    inline ListShiftSchedulesResponseBody::Paging getPaging() { DARABONBA_PTR_GET(paging_, ListShiftSchedulesResponseBody::Paging) };
    inline ListShiftSchedulesResponseBody& setPaging(const ListShiftSchedulesResponseBody::Paging & paging) { DARABONBA_PTR_SET_VALUE(paging_, paging) };
    inline ListShiftSchedulesResponseBody& setPaging(ListShiftSchedulesResponseBody::Paging && paging) { DARABONBA_PTR_SET_RVALUE(paging_, paging) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListShiftSchedulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListShiftSchedulesResponseBody::Paging> paging_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
