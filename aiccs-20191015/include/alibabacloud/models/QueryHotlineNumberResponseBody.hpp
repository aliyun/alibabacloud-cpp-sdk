// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYHOTLINENUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryHotlineNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHotlineNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHotlineNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryHotlineNumberResponseBody() = default ;
    QueryHotlineNumberResponseBody(const QueryHotlineNumberResponseBody &) = default ;
    QueryHotlineNumberResponseBody(QueryHotlineNumberResponseBody &&) = default ;
    QueryHotlineNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHotlineNumberResponseBody() = default ;
    QueryHotlineNumberResponseBody& operator=(const QueryHotlineNumberResponseBody &) = default ;
    QueryHotlineNumberResponseBody& operator=(QueryHotlineNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(HotlineNumList, hotlineNumList_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(HotlineNumList, hotlineNumList_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class HotlineNumList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotlineNumList& obj) { 
          DARABONBA_PTR_TO_JSON(CalloutAllDepartment, calloutAllDepartment_);
          DARABONBA_PTR_TO_JSON(CalloutRangeList, calloutRangeList_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EvaluationStatus, evaluationStatus_);
          DARABONBA_PTR_TO_JSON(FlowId, flowId_);
          DARABONBA_PTR_TO_JSON(FlowName, flowName_);
          DARABONBA_PTR_TO_JSON(HotlineNumber, hotlineNumber_);
          DARABONBA_PTR_TO_JSON(InBoundEnabled, inBoundEnabled_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(OutboundEnabled, outboundEnabled_);
          DARABONBA_PTR_TO_JSON(Sp, sp_);
        };
        friend void from_json(const Darabonba::Json& j, HotlineNumList& obj) { 
          DARABONBA_PTR_FROM_JSON(CalloutAllDepartment, calloutAllDepartment_);
          DARABONBA_PTR_FROM_JSON(CalloutRangeList, calloutRangeList_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EvaluationStatus, evaluationStatus_);
          DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
          DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
          DARABONBA_PTR_FROM_JSON(HotlineNumber, hotlineNumber_);
          DARABONBA_PTR_FROM_JSON(InBoundEnabled, inBoundEnabled_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(OutboundEnabled, outboundEnabled_);
          DARABONBA_PTR_FROM_JSON(Sp, sp_);
        };
        HotlineNumList() = default ;
        HotlineNumList(const HotlineNumList &) = default ;
        HotlineNumList(HotlineNumList &&) = default ;
        HotlineNumList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotlineNumList() = default ;
        HotlineNumList& operator=(const HotlineNumList &) = default ;
        HotlineNumList& operator=(HotlineNumList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CalloutRangeList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CalloutRangeList& obj) { 
            DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
            DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
            DARABONBA_PTR_TO_JSON(GroupDOList, groupDOList_);
          };
          friend void from_json(const Darabonba::Json& j, CalloutRangeList& obj) { 
            DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
            DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
            DARABONBA_PTR_FROM_JSON(GroupDOList, groupDOList_);
          };
          CalloutRangeList() = default ;
          CalloutRangeList(const CalloutRangeList &) = default ;
          CalloutRangeList(CalloutRangeList &&) = default ;
          CalloutRangeList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CalloutRangeList() = default ;
          CalloutRangeList& operator=(const CalloutRangeList &) = default ;
          CalloutRangeList& operator=(CalloutRangeList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class GroupDOList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const GroupDOList& obj) { 
              DARABONBA_PTR_TO_JSON(GroupId, groupId_);
              DARABONBA_PTR_TO_JSON(GroupName, groupName_);
            };
            friend void from_json(const Darabonba::Json& j, GroupDOList& obj) { 
              DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
              DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
            };
            GroupDOList() = default ;
            GroupDOList(const GroupDOList &) = default ;
            GroupDOList(GroupDOList &&) = default ;
            GroupDOList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~GroupDOList() = default ;
            GroupDOList& operator=(const GroupDOList &) = default ;
            GroupDOList& operator=(GroupDOList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->groupId_ == nullptr
        && this->groupName_ == nullptr; };
            // groupId Field Functions 
            bool hasGroupId() const { return this->groupId_ != nullptr;};
            void deleteGroupId() { this->groupId_ = nullptr;};
            inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
            inline GroupDOList& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


            // groupName Field Functions 
            bool hasGroupName() const { return this->groupName_ != nullptr;};
            void deleteGroupName() { this->groupName_ = nullptr;};
            inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
            inline GroupDOList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          protected:
            shared_ptr<int64_t> groupId_ {};
            shared_ptr<string> groupName_ {};
          };

          virtual bool empty() const override { return this->departmentId_ == nullptr
        && this->departmentName_ == nullptr && this->groupDOList_ == nullptr; };
          // departmentId Field Functions 
          bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
          void deleteDepartmentId() { this->departmentId_ = nullptr;};
          inline int64_t getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, 0L) };
          inline CalloutRangeList& setDepartmentId(int64_t departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


          // departmentName Field Functions 
          bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
          void deleteDepartmentName() { this->departmentName_ = nullptr;};
          inline string getDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
          inline CalloutRangeList& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


          // groupDOList Field Functions 
          bool hasGroupDOList() const { return this->groupDOList_ != nullptr;};
          void deleteGroupDOList() { this->groupDOList_ = nullptr;};
          inline const vector<CalloutRangeList::GroupDOList> & getGroupDOList() const { DARABONBA_PTR_GET_CONST(groupDOList_, vector<CalloutRangeList::GroupDOList>) };
          inline vector<CalloutRangeList::GroupDOList> getGroupDOList() { DARABONBA_PTR_GET(groupDOList_, vector<CalloutRangeList::GroupDOList>) };
          inline CalloutRangeList& setGroupDOList(const vector<CalloutRangeList::GroupDOList> & groupDOList) { DARABONBA_PTR_SET_VALUE(groupDOList_, groupDOList) };
          inline CalloutRangeList& setGroupDOList(vector<CalloutRangeList::GroupDOList> && groupDOList) { DARABONBA_PTR_SET_RVALUE(groupDOList_, groupDOList) };


        protected:
          shared_ptr<int64_t> departmentId_ {};
          shared_ptr<string> departmentName_ {};
          shared_ptr<vector<CalloutRangeList::GroupDOList>> groupDOList_ {};
        };

        virtual bool empty() const override { return this->calloutAllDepartment_ == nullptr
        && this->calloutRangeList_ == nullptr && this->description_ == nullptr && this->evaluationStatus_ == nullptr && this->flowId_ == nullptr && this->flowName_ == nullptr
        && this->hotlineNumber_ == nullptr && this->inBoundEnabled_ == nullptr && this->location_ == nullptr && this->outboundEnabled_ == nullptr && this->sp_ == nullptr; };
        // calloutAllDepartment Field Functions 
        bool hasCalloutAllDepartment() const { return this->calloutAllDepartment_ != nullptr;};
        void deleteCalloutAllDepartment() { this->calloutAllDepartment_ = nullptr;};
        inline bool getCalloutAllDepartment() const { DARABONBA_PTR_GET_DEFAULT(calloutAllDepartment_, false) };
        inline HotlineNumList& setCalloutAllDepartment(bool calloutAllDepartment) { DARABONBA_PTR_SET_VALUE(calloutAllDepartment_, calloutAllDepartment) };


        // calloutRangeList Field Functions 
        bool hasCalloutRangeList() const { return this->calloutRangeList_ != nullptr;};
        void deleteCalloutRangeList() { this->calloutRangeList_ = nullptr;};
        inline const vector<HotlineNumList::CalloutRangeList> & getCalloutRangeList() const { DARABONBA_PTR_GET_CONST(calloutRangeList_, vector<HotlineNumList::CalloutRangeList>) };
        inline vector<HotlineNumList::CalloutRangeList> getCalloutRangeList() { DARABONBA_PTR_GET(calloutRangeList_, vector<HotlineNumList::CalloutRangeList>) };
        inline HotlineNumList& setCalloutRangeList(const vector<HotlineNumList::CalloutRangeList> & calloutRangeList) { DARABONBA_PTR_SET_VALUE(calloutRangeList_, calloutRangeList) };
        inline HotlineNumList& setCalloutRangeList(vector<HotlineNumList::CalloutRangeList> && calloutRangeList) { DARABONBA_PTR_SET_RVALUE(calloutRangeList_, calloutRangeList) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline HotlineNumList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // evaluationStatus Field Functions 
        bool hasEvaluationStatus() const { return this->evaluationStatus_ != nullptr;};
        void deleteEvaluationStatus() { this->evaluationStatus_ = nullptr;};
        inline int32_t getEvaluationStatus() const { DARABONBA_PTR_GET_DEFAULT(evaluationStatus_, 0) };
        inline HotlineNumList& setEvaluationStatus(int32_t evaluationStatus) { DARABONBA_PTR_SET_VALUE(evaluationStatus_, evaluationStatus) };


        // flowId Field Functions 
        bool hasFlowId() const { return this->flowId_ != nullptr;};
        void deleteFlowId() { this->flowId_ = nullptr;};
        inline int64_t getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, 0L) };
        inline HotlineNumList& setFlowId(int64_t flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


        // flowName Field Functions 
        bool hasFlowName() const { return this->flowName_ != nullptr;};
        void deleteFlowName() { this->flowName_ = nullptr;};
        inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
        inline HotlineNumList& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


        // hotlineNumber Field Functions 
        bool hasHotlineNumber() const { return this->hotlineNumber_ != nullptr;};
        void deleteHotlineNumber() { this->hotlineNumber_ = nullptr;};
        inline string getHotlineNumber() const { DARABONBA_PTR_GET_DEFAULT(hotlineNumber_, "") };
        inline HotlineNumList& setHotlineNumber(string hotlineNumber) { DARABONBA_PTR_SET_VALUE(hotlineNumber_, hotlineNumber) };


        // inBoundEnabled Field Functions 
        bool hasInBoundEnabled() const { return this->inBoundEnabled_ != nullptr;};
        void deleteInBoundEnabled() { this->inBoundEnabled_ = nullptr;};
        inline bool getInBoundEnabled() const { DARABONBA_PTR_GET_DEFAULT(inBoundEnabled_, false) };
        inline HotlineNumList& setInBoundEnabled(bool inBoundEnabled) { DARABONBA_PTR_SET_VALUE(inBoundEnabled_, inBoundEnabled) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline HotlineNumList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // outboundEnabled Field Functions 
        bool hasOutboundEnabled() const { return this->outboundEnabled_ != nullptr;};
        void deleteOutboundEnabled() { this->outboundEnabled_ = nullptr;};
        inline bool getOutboundEnabled() const { DARABONBA_PTR_GET_DEFAULT(outboundEnabled_, false) };
        inline HotlineNumList& setOutboundEnabled(bool outboundEnabled) { DARABONBA_PTR_SET_VALUE(outboundEnabled_, outboundEnabled) };


        // sp Field Functions 
        bool hasSp() const { return this->sp_ != nullptr;};
        void deleteSp() { this->sp_ = nullptr;};
        inline string getSp() const { DARABONBA_PTR_GET_DEFAULT(sp_, "") };
        inline HotlineNumList& setSp(string sp) { DARABONBA_PTR_SET_VALUE(sp_, sp) };


      protected:
        shared_ptr<bool> calloutAllDepartment_ {};
        shared_ptr<vector<HotlineNumList::CalloutRangeList>> calloutRangeList_ {};
        shared_ptr<string> description_ {};
        shared_ptr<int32_t> evaluationStatus_ {};
        shared_ptr<int64_t> flowId_ {};
        shared_ptr<string> flowName_ {};
        shared_ptr<string> hotlineNumber_ {};
        shared_ptr<bool> inBoundEnabled_ {};
        shared_ptr<string> location_ {};
        shared_ptr<bool> outboundEnabled_ {};
        shared_ptr<string> sp_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->hotlineNumList_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline Data& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // hotlineNumList Field Functions 
      bool hasHotlineNumList() const { return this->hotlineNumList_ != nullptr;};
      void deleteHotlineNumList() { this->hotlineNumList_ = nullptr;};
      inline const vector<Data::HotlineNumList> & getHotlineNumList() const { DARABONBA_PTR_GET_CONST(hotlineNumList_, vector<Data::HotlineNumList>) };
      inline vector<Data::HotlineNumList> getHotlineNumList() { DARABONBA_PTR_GET(hotlineNumList_, vector<Data::HotlineNumList>) };
      inline Data& setHotlineNumList(const vector<Data::HotlineNumList> & hotlineNumList) { DARABONBA_PTR_SET_VALUE(hotlineNumList_, hotlineNumList) };
      inline Data& setHotlineNumList(vector<Data::HotlineNumList> && hotlineNumList) { DARABONBA_PTR_SET_RVALUE(hotlineNumList_, hotlineNumList) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<int64_t> currentPage_ {};
      shared_ptr<vector<Data::HotlineNumList>> hotlineNumList_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryHotlineNumberResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryHotlineNumberResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryHotlineNumberResponseBody::Data) };
    inline QueryHotlineNumberResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryHotlineNumberResponseBody::Data) };
    inline QueryHotlineNumberResponseBody& setData(const QueryHotlineNumberResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryHotlineNumberResponseBody& setData(QueryHotlineNumberResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryHotlineNumberResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryHotlineNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryHotlineNumberResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryHotlineNumberResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
