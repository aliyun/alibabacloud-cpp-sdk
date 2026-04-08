// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHIFTPERSONNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHIFTPERSONNELSRESPONSEBODY_HPP_
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
  class ListShiftPersonnelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListShiftPersonnelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Paging, paging_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListShiftPersonnelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Paging, paging_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListShiftPersonnelsResponseBody() = default ;
    ListShiftPersonnelsResponseBody(const ListShiftPersonnelsResponseBody &) = default ;
    ListShiftPersonnelsResponseBody(ListShiftPersonnelsResponseBody &&) = default ;
    ListShiftPersonnelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListShiftPersonnelsResponseBody() = default ;
    ListShiftPersonnelsResponseBody& operator=(const ListShiftPersonnelsResponseBody &) = default ;
    ListShiftPersonnelsResponseBody& operator=(ListShiftPersonnelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Paging : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Paging& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ShiftPersons, shiftPersons_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Paging& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ShiftPersons, shiftPersons_);
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
      class ShiftPersons : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShiftPersons& obj) { 
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ShiftPersonName, shiftPersonName_);
          DARABONBA_PTR_TO_JSON(ShiftPersonUID, shiftPersonUID_);
        };
        friend void from_json(const Darabonba::Json& j, ShiftPersons& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ShiftPersonName, shiftPersonName_);
          DARABONBA_PTR_FROM_JSON(ShiftPersonUID, shiftPersonUID_);
        };
        ShiftPersons() = default ;
        ShiftPersons(const ShiftPersons &) = default ;
        ShiftPersons(ShiftPersons &&) = default ;
        ShiftPersons(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShiftPersons() = default ;
        ShiftPersons& operator=(const ShiftPersons &) = default ;
        ShiftPersons& operator=(ShiftPersons &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->shiftPersonName_ == nullptr && this->shiftPersonUID_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
        inline ShiftPersons& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline ShiftPersons& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // shiftPersonName Field Functions 
        bool hasShiftPersonName() const { return this->shiftPersonName_ != nullptr;};
        void deleteShiftPersonName() { this->shiftPersonName_ = nullptr;};
        inline string getShiftPersonName() const { DARABONBA_PTR_GET_DEFAULT(shiftPersonName_, "") };
        inline ShiftPersons& setShiftPersonName(string shiftPersonName) { DARABONBA_PTR_SET_VALUE(shiftPersonName_, shiftPersonName) };


        // shiftPersonUID Field Functions 
        bool hasShiftPersonUID() const { return this->shiftPersonUID_ != nullptr;};
        void deleteShiftPersonUID() { this->shiftPersonUID_ = nullptr;};
        inline string getShiftPersonUID() const { DARABONBA_PTR_GET_DEFAULT(shiftPersonUID_, "") };
        inline ShiftPersons& setShiftPersonUID(string shiftPersonUID) { DARABONBA_PTR_SET_VALUE(shiftPersonUID_, shiftPersonUID) };


      protected:
        // The time when the on-duty engineer starts the shift.
        shared_ptr<int64_t> beginTime_ {};
        // The time when the on-duty engineer ends the shift.
        shared_ptr<int64_t> endTime_ {};
        // The name of the on-duty engineer.
        shared_ptr<string> shiftPersonName_ {};
        // The UID of the on-duty engineer.
        shared_ptr<string> shiftPersonUID_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->shiftPersons_ == nullptr && this->totalCount_ == nullptr; };
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


      // shiftPersons Field Functions 
      bool hasShiftPersons() const { return this->shiftPersons_ != nullptr;};
      void deleteShiftPersons() { this->shiftPersons_ = nullptr;};
      inline const vector<Paging::ShiftPersons> & getShiftPersons() const { DARABONBA_PTR_GET_CONST(shiftPersons_, vector<Paging::ShiftPersons>) };
      inline vector<Paging::ShiftPersons> getShiftPersons() { DARABONBA_PTR_GET(shiftPersons_, vector<Paging::ShiftPersons>) };
      inline Paging& setShiftPersons(const vector<Paging::ShiftPersons> & shiftPersons) { DARABONBA_PTR_SET_VALUE(shiftPersons_, shiftPersons) };
      inline Paging& setShiftPersons(vector<Paging::ShiftPersons> && shiftPersons) { DARABONBA_PTR_SET_RVALUE(shiftPersons_, shiftPersons) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Paging& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number. Valid values: 1 to 100. Default value: 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 10. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The on-duty engineers in the shift schedule.
      shared_ptr<vector<Paging::ShiftPersons>> shiftPersons_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->paging_ == nullptr
        && this->requestId_ == nullptr; };
    // paging Field Functions 
    bool hasPaging() const { return this->paging_ != nullptr;};
    void deletePaging() { this->paging_ = nullptr;};
    inline const ListShiftPersonnelsResponseBody::Paging & getPaging() const { DARABONBA_PTR_GET_CONST(paging_, ListShiftPersonnelsResponseBody::Paging) };
    inline ListShiftPersonnelsResponseBody::Paging getPaging() { DARABONBA_PTR_GET(paging_, ListShiftPersonnelsResponseBody::Paging) };
    inline ListShiftPersonnelsResponseBody& setPaging(const ListShiftPersonnelsResponseBody::Paging & paging) { DARABONBA_PTR_SET_VALUE(paging_, paging) };
    inline ListShiftPersonnelsResponseBody& setPaging(ListShiftPersonnelsResponseBody::Paging && paging) { DARABONBA_PTR_SET_RVALUE(paging_, paging) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListShiftPersonnelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListShiftPersonnelsResponseBody::Paging> paging_ {};
    // The request ID. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
