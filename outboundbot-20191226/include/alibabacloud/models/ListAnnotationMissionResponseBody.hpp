// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTANNOTATIONMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListAnnotationMissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAnnotationMissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAnnotationMissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAnnotationMissionResponseBody() = default ;
    ListAnnotationMissionResponseBody(const ListAnnotationMissionResponseBody &) = default ;
    ListAnnotationMissionResponseBody(ListAnnotationMissionResponseBody &&) = default ;
    ListAnnotationMissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAnnotationMissionResponseBody() = default ;
    ListAnnotationMissionResponseBody& operator=(const ListAnnotationMissionResponseBody &) = default ;
    ListAnnotationMissionResponseBody& operator=(ListAnnotationMissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AnnotationMissionList, annotationMissionList_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(TotalPageCount, totalPageCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AnnotationMissionList, annotationMissionList_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(TotalPageCount, totalPageCount_);
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
      class AnnotationMissionList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AnnotationMissionList& obj) { 
          DARABONBA_PTR_TO_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
          DARABONBA_PTR_TO_JSON(AnnotationMissionDebugDataSourceList, annotationMissionDebugDataSourceList_);
          DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
          DARABONBA_PTR_TO_JSON(AnnotationMissionName, annotationMissionName_);
          DARABONBA_PTR_TO_JSON(AnnotationStatus, annotationStatus_);
          DARABONBA_PTR_TO_JSON(ConversationTimeEndFilter, conversationTimeEndFilter_);
          DARABONBA_PTR_TO_JSON(ConversationTimeStartFilter, conversationTimeStartFilter_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(ExcludeOtherMissionSession, excludeOtherMissionSession_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(SamplingCount, samplingCount_);
          DARABONBA_PTR_TO_JSON(SamplingDescription, samplingDescription_);
          DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
          DARABONBA_PTR_TO_JSON(SamplingType, samplingType_);
          DARABONBA_PTR_TO_JSON(SessionEndReasonFilterList, sessionEndReasonFilterList_);
          DARABONBA_PTR_TO_JSON(SessionFinishCount, sessionFinishCount_);
          DARABONBA_PTR_TO_JSON(SessionTotalCount, sessionTotalCount_);
        };
        friend void from_json(const Darabonba::Json& j, AnnotationMissionList& obj) { 
          DARABONBA_PTR_FROM_JSON(AnnotationMissionDataSourceType, annotationMissionDataSourceType_);
          DARABONBA_PTR_FROM_JSON(AnnotationMissionDebugDataSourceList, annotationMissionDebugDataSourceList_);
          DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
          DARABONBA_PTR_FROM_JSON(AnnotationMissionName, annotationMissionName_);
          DARABONBA_PTR_FROM_JSON(AnnotationStatus, annotationStatus_);
          DARABONBA_PTR_FROM_JSON(ConversationTimeEndFilter, conversationTimeEndFilter_);
          DARABONBA_PTR_FROM_JSON(ConversationTimeStartFilter, conversationTimeStartFilter_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(ExcludeOtherMissionSession, excludeOtherMissionSession_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(SamplingCount, samplingCount_);
          DARABONBA_PTR_FROM_JSON(SamplingDescription, samplingDescription_);
          DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
          DARABONBA_PTR_FROM_JSON(SamplingType, samplingType_);
          DARABONBA_PTR_FROM_JSON(SessionEndReasonFilterList, sessionEndReasonFilterList_);
          DARABONBA_PTR_FROM_JSON(SessionFinishCount, sessionFinishCount_);
          DARABONBA_PTR_FROM_JSON(SessionTotalCount, sessionTotalCount_);
        };
        AnnotationMissionList() = default ;
        AnnotationMissionList(const AnnotationMissionList &) = default ;
        AnnotationMissionList(AnnotationMissionList &&) = default ;
        AnnotationMissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AnnotationMissionList() = default ;
        AnnotationMissionList& operator=(const AnnotationMissionList &) = default ;
        AnnotationMissionList& operator=(AnnotationMissionList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->annotationMissionDataSourceType_ == nullptr
        && this->annotationMissionDebugDataSourceList_ == nullptr && this->annotationMissionId_ == nullptr && this->annotationMissionName_ == nullptr && this->annotationStatus_ == nullptr && this->conversationTimeEndFilter_ == nullptr
        && this->conversationTimeStartFilter_ == nullptr && this->createTime_ == nullptr && this->excludeOtherMissionSession_ == nullptr && this->finishTime_ == nullptr && this->instanceId_ == nullptr
        && this->samplingCount_ == nullptr && this->samplingDescription_ == nullptr && this->samplingRate_ == nullptr && this->samplingType_ == nullptr && this->sessionEndReasonFilterList_ == nullptr
        && this->sessionFinishCount_ == nullptr && this->sessionTotalCount_ == nullptr; };
        // annotationMissionDataSourceType Field Functions 
        bool hasAnnotationMissionDataSourceType() const { return this->annotationMissionDataSourceType_ != nullptr;};
        void deleteAnnotationMissionDataSourceType() { this->annotationMissionDataSourceType_ = nullptr;};
        inline int32_t getAnnotationMissionDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionDataSourceType_, 0) };
        inline AnnotationMissionList& setAnnotationMissionDataSourceType(int32_t annotationMissionDataSourceType) { DARABONBA_PTR_SET_VALUE(annotationMissionDataSourceType_, annotationMissionDataSourceType) };


        // annotationMissionDebugDataSourceList Field Functions 
        bool hasAnnotationMissionDebugDataSourceList() const { return this->annotationMissionDebugDataSourceList_ != nullptr;};
        void deleteAnnotationMissionDebugDataSourceList() { this->annotationMissionDebugDataSourceList_ = nullptr;};
        inline const vector<int32_t> & getAnnotationMissionDebugDataSourceList() const { DARABONBA_PTR_GET_CONST(annotationMissionDebugDataSourceList_, vector<int32_t>) };
        inline vector<int32_t> getAnnotationMissionDebugDataSourceList() { DARABONBA_PTR_GET(annotationMissionDebugDataSourceList_, vector<int32_t>) };
        inline AnnotationMissionList& setAnnotationMissionDebugDataSourceList(const vector<int32_t> & annotationMissionDebugDataSourceList) { DARABONBA_PTR_SET_VALUE(annotationMissionDebugDataSourceList_, annotationMissionDebugDataSourceList) };
        inline AnnotationMissionList& setAnnotationMissionDebugDataSourceList(vector<int32_t> && annotationMissionDebugDataSourceList) { DARABONBA_PTR_SET_RVALUE(annotationMissionDebugDataSourceList_, annotationMissionDebugDataSourceList) };


        // annotationMissionId Field Functions 
        bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
        void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
        inline string getAnnotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
        inline AnnotationMissionList& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


        // annotationMissionName Field Functions 
        bool hasAnnotationMissionName() const { return this->annotationMissionName_ != nullptr;};
        void deleteAnnotationMissionName() { this->annotationMissionName_ = nullptr;};
        inline string getAnnotationMissionName() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionName_, "") };
        inline AnnotationMissionList& setAnnotationMissionName(string annotationMissionName) { DARABONBA_PTR_SET_VALUE(annotationMissionName_, annotationMissionName) };


        // annotationStatus Field Functions 
        bool hasAnnotationStatus() const { return this->annotationStatus_ != nullptr;};
        void deleteAnnotationStatus() { this->annotationStatus_ = nullptr;};
        inline int32_t getAnnotationStatus() const { DARABONBA_PTR_GET_DEFAULT(annotationStatus_, 0) };
        inline AnnotationMissionList& setAnnotationStatus(int32_t annotationStatus) { DARABONBA_PTR_SET_VALUE(annotationStatus_, annotationStatus) };


        // conversationTimeEndFilter Field Functions 
        bool hasConversationTimeEndFilter() const { return this->conversationTimeEndFilter_ != nullptr;};
        void deleteConversationTimeEndFilter() { this->conversationTimeEndFilter_ = nullptr;};
        inline int64_t getConversationTimeEndFilter() const { DARABONBA_PTR_GET_DEFAULT(conversationTimeEndFilter_, 0L) };
        inline AnnotationMissionList& setConversationTimeEndFilter(int64_t conversationTimeEndFilter) { DARABONBA_PTR_SET_VALUE(conversationTimeEndFilter_, conversationTimeEndFilter) };


        // conversationTimeStartFilter Field Functions 
        bool hasConversationTimeStartFilter() const { return this->conversationTimeStartFilter_ != nullptr;};
        void deleteConversationTimeStartFilter() { this->conversationTimeStartFilter_ = nullptr;};
        inline int64_t getConversationTimeStartFilter() const { DARABONBA_PTR_GET_DEFAULT(conversationTimeStartFilter_, 0L) };
        inline AnnotationMissionList& setConversationTimeStartFilter(int64_t conversationTimeStartFilter) { DARABONBA_PTR_SET_VALUE(conversationTimeStartFilter_, conversationTimeStartFilter) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline AnnotationMissionList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // excludeOtherMissionSession Field Functions 
        bool hasExcludeOtherMissionSession() const { return this->excludeOtherMissionSession_ != nullptr;};
        void deleteExcludeOtherMissionSession() { this->excludeOtherMissionSession_ = nullptr;};
        inline bool getExcludeOtherMissionSession() const { DARABONBA_PTR_GET_DEFAULT(excludeOtherMissionSession_, false) };
        inline AnnotationMissionList& setExcludeOtherMissionSession(bool excludeOtherMissionSession) { DARABONBA_PTR_SET_VALUE(excludeOtherMissionSession_, excludeOtherMissionSession) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline AnnotationMissionList& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline AnnotationMissionList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // samplingCount Field Functions 
        bool hasSamplingCount() const { return this->samplingCount_ != nullptr;};
        void deleteSamplingCount() { this->samplingCount_ = nullptr;};
        inline int32_t getSamplingCount() const { DARABONBA_PTR_GET_DEFAULT(samplingCount_, 0) };
        inline AnnotationMissionList& setSamplingCount(int32_t samplingCount) { DARABONBA_PTR_SET_VALUE(samplingCount_, samplingCount) };


        // samplingDescription Field Functions 
        bool hasSamplingDescription() const { return this->samplingDescription_ != nullptr;};
        void deleteSamplingDescription() { this->samplingDescription_ = nullptr;};
        inline string getSamplingDescription() const { DARABONBA_PTR_GET_DEFAULT(samplingDescription_, "") };
        inline AnnotationMissionList& setSamplingDescription(string samplingDescription) { DARABONBA_PTR_SET_VALUE(samplingDescription_, samplingDescription) };


        // samplingRate Field Functions 
        bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
        void deleteSamplingRate() { this->samplingRate_ = nullptr;};
        inline int32_t getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0) };
        inline AnnotationMissionList& setSamplingRate(int32_t samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


        // samplingType Field Functions 
        bool hasSamplingType() const { return this->samplingType_ != nullptr;};
        void deleteSamplingType() { this->samplingType_ = nullptr;};
        inline int32_t getSamplingType() const { DARABONBA_PTR_GET_DEFAULT(samplingType_, 0) };
        inline AnnotationMissionList& setSamplingType(int32_t samplingType) { DARABONBA_PTR_SET_VALUE(samplingType_, samplingType) };


        // sessionEndReasonFilterList Field Functions 
        bool hasSessionEndReasonFilterList() const { return this->sessionEndReasonFilterList_ != nullptr;};
        void deleteSessionEndReasonFilterList() { this->sessionEndReasonFilterList_ = nullptr;};
        inline const vector<int32_t> & getSessionEndReasonFilterList() const { DARABONBA_PTR_GET_CONST(sessionEndReasonFilterList_, vector<int32_t>) };
        inline vector<int32_t> getSessionEndReasonFilterList() { DARABONBA_PTR_GET(sessionEndReasonFilterList_, vector<int32_t>) };
        inline AnnotationMissionList& setSessionEndReasonFilterList(const vector<int32_t> & sessionEndReasonFilterList) { DARABONBA_PTR_SET_VALUE(sessionEndReasonFilterList_, sessionEndReasonFilterList) };
        inline AnnotationMissionList& setSessionEndReasonFilterList(vector<int32_t> && sessionEndReasonFilterList) { DARABONBA_PTR_SET_RVALUE(sessionEndReasonFilterList_, sessionEndReasonFilterList) };


        // sessionFinishCount Field Functions 
        bool hasSessionFinishCount() const { return this->sessionFinishCount_ != nullptr;};
        void deleteSessionFinishCount() { this->sessionFinishCount_ = nullptr;};
        inline int32_t getSessionFinishCount() const { DARABONBA_PTR_GET_DEFAULT(sessionFinishCount_, 0) };
        inline AnnotationMissionList& setSessionFinishCount(int32_t sessionFinishCount) { DARABONBA_PTR_SET_VALUE(sessionFinishCount_, sessionFinishCount) };


        // sessionTotalCount Field Functions 
        bool hasSessionTotalCount() const { return this->sessionTotalCount_ != nullptr;};
        void deleteSessionTotalCount() { this->sessionTotalCount_ = nullptr;};
        inline int32_t getSessionTotalCount() const { DARABONBA_PTR_GET_DEFAULT(sessionTotalCount_, 0) };
        inline AnnotationMissionList& setSessionTotalCount(int32_t sessionTotalCount) { DARABONBA_PTR_SET_VALUE(sessionTotalCount_, sessionTotalCount) };


      protected:
        shared_ptr<int32_t> annotationMissionDataSourceType_ {};
        shared_ptr<vector<int32_t>> annotationMissionDebugDataSourceList_ {};
        shared_ptr<string> annotationMissionId_ {};
        shared_ptr<string> annotationMissionName_ {};
        shared_ptr<int32_t> annotationStatus_ {};
        shared_ptr<int64_t> conversationTimeEndFilter_ {};
        shared_ptr<int64_t> conversationTimeStartFilter_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<bool> excludeOtherMissionSession_ {};
        shared_ptr<int64_t> finishTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int32_t> samplingCount_ {};
        shared_ptr<string> samplingDescription_ {};
        shared_ptr<int32_t> samplingRate_ {};
        shared_ptr<int32_t> samplingType_ {};
        shared_ptr<vector<int32_t>> sessionEndReasonFilterList_ {};
        shared_ptr<int32_t> sessionFinishCount_ {};
        shared_ptr<int32_t> sessionTotalCount_ {};
      };

      virtual bool empty() const override { return this->annotationMissionList_ == nullptr
        && this->message_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr
        && this->totalPageCount_ == nullptr; };
      // annotationMissionList Field Functions 
      bool hasAnnotationMissionList() const { return this->annotationMissionList_ != nullptr;};
      void deleteAnnotationMissionList() { this->annotationMissionList_ = nullptr;};
      inline const vector<Data::AnnotationMissionList> & getAnnotationMissionList() const { DARABONBA_PTR_GET_CONST(annotationMissionList_, vector<Data::AnnotationMissionList>) };
      inline vector<Data::AnnotationMissionList> getAnnotationMissionList() { DARABONBA_PTR_GET(annotationMissionList_, vector<Data::AnnotationMissionList>) };
      inline Data& setAnnotationMissionList(const vector<Data::AnnotationMissionList> & annotationMissionList) { DARABONBA_PTR_SET_VALUE(annotationMissionList_, annotationMissionList) };
      inline Data& setAnnotationMissionList(vector<Data::AnnotationMissionList> && annotationMissionList) { DARABONBA_PTR_SET_RVALUE(annotationMissionList_, annotationMissionList) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // pageIndex Field Functions 
      bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
      void deletePageIndex() { this->pageIndex_ = nullptr;};
      inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
      inline Data& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // totalPageCount Field Functions 
      bool hasTotalPageCount() const { return this->totalPageCount_ != nullptr;};
      void deleteTotalPageCount() { this->totalPageCount_ = nullptr;};
      inline int64_t getTotalPageCount() const { DARABONBA_PTR_GET_DEFAULT(totalPageCount_, 0L) };
      inline Data& setTotalPageCount(int64_t totalPageCount) { DARABONBA_PTR_SET_VALUE(totalPageCount_, totalPageCount) };


    protected:
      shared_ptr<vector<Data::AnnotationMissionList>> annotationMissionList_ {};
      shared_ptr<string> message_ {};
      shared_ptr<int64_t> pageIndex_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<int64_t> totalPageCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAnnotationMissionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAnnotationMissionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAnnotationMissionResponseBody::Data) };
    inline ListAnnotationMissionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAnnotationMissionResponseBody::Data) };
    inline ListAnnotationMissionResponseBody& setData(const ListAnnotationMissionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAnnotationMissionResponseBody& setData(ListAnnotationMissionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListAnnotationMissionResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAnnotationMissionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAnnotationMissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAnnotationMissionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListAnnotationMissionResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
