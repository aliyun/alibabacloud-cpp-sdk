// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBALBUMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBALBUMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListSubAlbumResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAlbumResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAlbumResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListSubAlbumResponseBody() = default ;
    ListSubAlbumResponseBody(const ListSubAlbumResponseBody &) = default ;
    ListSubAlbumResponseBody(ListSubAlbumResponseBody &&) = default ;
    ListSubAlbumResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAlbumResponseBody() = default ;
    ListSubAlbumResponseBody& operator=(const ListSubAlbumResponseBody &) = default ;
    ListSubAlbumResponseBody& operator=(ListSubAlbumResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(DataList, dataList_);
        DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalPageCount, totalPageCount_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(DataList, dataList_);
        DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalPageCount, totalPageCount_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataList& obj) { 
          DARABONBA_PTR_TO_JSON(AlbumId, albumId_);
          DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(CoverUrl, coverUrl_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsAdded, isAdded_);
          DARABONBA_PTR_TO_JSON(ScheduleInfo, scheduleInfo_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
          DARABONBA_PTR_TO_JSON(Title, title_);
          DARABONBA_PTR_TO_JSON(TotalEpisode, totalEpisode_);
        };
        friend void from_json(const Darabonba::Json& j, DataList& obj) { 
          DARABONBA_PTR_FROM_JSON(AlbumId, albumId_);
          DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(CoverUrl, coverUrl_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsAdded, isAdded_);
          DARABONBA_PTR_FROM_JSON(ScheduleInfo, scheduleInfo_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
          DARABONBA_PTR_FROM_JSON(TotalEpisode, totalEpisode_);
        };
        DataList() = default ;
        DataList(const DataList &) = default ;
        DataList(DataList &&) = default ;
        DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataList() = default ;
        DataList& operator=(const DataList &) = default ;
        DataList& operator=(DataList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScheduleInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScheduleInfo& obj) { 
            DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
            DARABONBA_PTR_TO_JSON(Hour, hour_);
            DARABONBA_PTR_TO_JSON(Minute, minute_);
            DARABONBA_PTR_TO_JSON(ScheduleId, scheduleId_);
          };
          friend void from_json(const Darabonba::Json& j, ScheduleInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
            DARABONBA_PTR_FROM_JSON(Hour, hour_);
            DARABONBA_PTR_FROM_JSON(Minute, minute_);
            DARABONBA_PTR_FROM_JSON(ScheduleId, scheduleId_);
          };
          ScheduleInfo() = default ;
          ScheduleInfo(const ScheduleInfo &) = default ;
          ScheduleInfo(ScheduleInfo &&) = default ;
          ScheduleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScheduleInfo() = default ;
          ScheduleInfo& operator=(const ScheduleInfo &) = default ;
          ScheduleInfo& operator=(ScheduleInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->daysOfWeek_ == nullptr
        && this->hour_ == nullptr && this->minute_ == nullptr && this->scheduleId_ == nullptr; };
          // daysOfWeek Field Functions 
          bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
          void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
          inline const vector<int32_t> & getDaysOfWeek() const { DARABONBA_PTR_GET_CONST(daysOfWeek_, vector<int32_t>) };
          inline vector<int32_t> getDaysOfWeek() { DARABONBA_PTR_GET(daysOfWeek_, vector<int32_t>) };
          inline ScheduleInfo& setDaysOfWeek(const vector<int32_t> & daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };
          inline ScheduleInfo& setDaysOfWeek(vector<int32_t> && daysOfWeek) { DARABONBA_PTR_SET_RVALUE(daysOfWeek_, daysOfWeek) };


          // hour Field Functions 
          bool hasHour() const { return this->hour_ != nullptr;};
          void deleteHour() { this->hour_ = nullptr;};
          inline int32_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0) };
          inline ScheduleInfo& setHour(int32_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


          // minute Field Functions 
          bool hasMinute() const { return this->minute_ != nullptr;};
          void deleteMinute() { this->minute_ = nullptr;};
          inline int32_t getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, 0) };
          inline ScheduleInfo& setMinute(int32_t minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


          // scheduleId Field Functions 
          bool hasScheduleId() const { return this->scheduleId_ != nullptr;};
          void deleteScheduleId() { this->scheduleId_ = nullptr;};
          inline int64_t getScheduleId() const { DARABONBA_PTR_GET_DEFAULT(scheduleId_, 0L) };
          inline ScheduleInfo& setScheduleId(int64_t scheduleId) { DARABONBA_PTR_SET_VALUE(scheduleId_, scheduleId) };


        protected:
          // trigger epoch
          shared_ptr<vector<int32_t>> daysOfWeek_ {};
          // trigger hour
          shared_ptr<int32_t> hour_ {};
          // trigger minute
          shared_ptr<int32_t> minute_ {};
          // scheduled task ID
          shared_ptr<int64_t> scheduleId_ {};
        };

        virtual bool empty() const override { return this->albumId_ == nullptr
        && this->categoryId_ == nullptr && this->coverUrl_ == nullptr && this->id_ == nullptr && this->isAdded_ == nullptr && this->scheduleInfo_ == nullptr
        && this->sequence_ == nullptr && this->title_ == nullptr && this->totalEpisode_ == nullptr; };
        // albumId Field Functions 
        bool hasAlbumId() const { return this->albumId_ != nullptr;};
        void deleteAlbumId() { this->albumId_ = nullptr;};
        inline string getAlbumId() const { DARABONBA_PTR_GET_DEFAULT(albumId_, "") };
        inline DataList& setAlbumId(string albumId) { DARABONBA_PTR_SET_VALUE(albumId_, albumId) };


        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
        inline DataList& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // coverUrl Field Functions 
        bool hasCoverUrl() const { return this->coverUrl_ != nullptr;};
        void deleteCoverUrl() { this->coverUrl_ = nullptr;};
        inline string getCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(coverUrl_, "") };
        inline DataList& setCoverUrl(string coverUrl) { DARABONBA_PTR_SET_VALUE(coverUrl_, coverUrl) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isAdded Field Functions 
        bool hasIsAdded() const { return this->isAdded_ != nullptr;};
        void deleteIsAdded() { this->isAdded_ = nullptr;};
        inline bool getIsAdded() const { DARABONBA_PTR_GET_DEFAULT(isAdded_, false) };
        inline DataList& setIsAdded(bool isAdded) { DARABONBA_PTR_SET_VALUE(isAdded_, isAdded) };


        // scheduleInfo Field Functions 
        bool hasScheduleInfo() const { return this->scheduleInfo_ != nullptr;};
        void deleteScheduleInfo() { this->scheduleInfo_ = nullptr;};
        inline const DataList::ScheduleInfo & getScheduleInfo() const { DARABONBA_PTR_GET_CONST(scheduleInfo_, DataList::ScheduleInfo) };
        inline DataList::ScheduleInfo getScheduleInfo() { DARABONBA_PTR_GET(scheduleInfo_, DataList::ScheduleInfo) };
        inline DataList& setScheduleInfo(const DataList::ScheduleInfo & scheduleInfo) { DARABONBA_PTR_SET_VALUE(scheduleInfo_, scheduleInfo) };
        inline DataList& setScheduleInfo(DataList::ScheduleInfo && scheduleInfo) { DARABONBA_PTR_SET_RVALUE(scheduleInfo_, scheduleInfo) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline int64_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0L) };
        inline DataList& setSequence(int64_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline DataList& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        // totalEpisode Field Functions 
        bool hasTotalEpisode() const { return this->totalEpisode_ != nullptr;};
        void deleteTotalEpisode() { this->totalEpisode_ = nullptr;};
        inline int32_t getTotalEpisode() const { DARABONBA_PTR_GET_DEFAULT(totalEpisode_, 0) };
        inline DataList& setTotalEpisode(int32_t totalEpisode) { DARABONBA_PTR_SET_VALUE(totalEpisode_, totalEpisode) };


      protected:
        // Album ID
        shared_ptr<string> albumId_ {};
        // Album category ID
        shared_ptr<int32_t> categoryId_ {};
        // Album thumbnail
        shared_ptr<string> coverUrl_ {};
        // Record ID
        shared_ptr<int64_t> id_ {};
        // Is subscribed
        shared_ptr<bool> isAdded_ {};
        // Schedule information
        shared_ptr<DataList::ScheduleInfo> scheduleInfo_ {};
        // Sorting
        shared_ptr<int64_t> sequence_ {};
        // Album title
        shared_ptr<string> title_ {};
        // Total number of episodes
        shared_ptr<int32_t> totalEpisode_ {};
      };

      virtual bool empty() const override { return this->dataList_ == nullptr
        && this->hasNext_ == nullptr && this->totalCount_ == nullptr && this->totalPageCount_ == nullptr; };
      // dataList Field Functions 
      bool hasDataList() const { return this->dataList_ != nullptr;};
      void deleteDataList() { this->dataList_ = nullptr;};
      inline const vector<Result::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<Result::DataList>) };
      inline vector<Result::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<Result::DataList>) };
      inline Result& setDataList(const vector<Result::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
      inline Result& setDataList(vector<Result::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


      // hasNext Field Functions 
      bool hasHasNext() const { return this->hasNext_ != nullptr;};
      void deleteHasNext() { this->hasNext_ = nullptr;};
      inline bool getHasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
      inline Result& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Result& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalPageCount Field Functions 
      bool hasTotalPageCount() const { return this->totalPageCount_ != nullptr;};
      void deleteTotalPageCount() { this->totalPageCount_ = nullptr;};
      inline int32_t getTotalPageCount() const { DARABONBA_PTR_GET_DEFAULT(totalPageCount_, 0) };
      inline Result& setTotalPageCount(int32_t totalPageCount) { DARABONBA_PTR_SET_VALUE(totalPageCount_, totalPageCount) };


    protected:
      // Album List
      shared_ptr<vector<Result::DataList>> dataList_ {};
      // Indicates whether there is a next page.
      shared_ptr<bool> hasNext_ {};
      // total number of entries
      shared_ptr<int32_t> totalCount_ {};
      // Total number of pages
      shared_ptr<int32_t> totalPageCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListSubAlbumResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSubAlbumResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSubAlbumResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListSubAlbumResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListSubAlbumResponseBody::Result) };
    inline ListSubAlbumResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListSubAlbumResponseBody::Result) };
    inline ListSubAlbumResponseBody& setResult(const ListSubAlbumResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListSubAlbumResponseBody& setResult(ListSubAlbumResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Status code
    shared_ptr<int32_t> code_ {};
    // Additional information
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Result
    shared_ptr<ListSubAlbumResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
