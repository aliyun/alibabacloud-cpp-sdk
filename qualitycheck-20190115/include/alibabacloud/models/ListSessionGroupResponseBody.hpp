// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSESSIONGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSessionGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSessionGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(LastDataId, lastDataId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSessionGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(LastDataId, lastDataId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSessionGroupResponseBody() = default ;
    ListSessionGroupResponseBody(const ListSessionGroupResponseBody &) = default ;
    ListSessionGroupResponseBody(ListSessionGroupResponseBody &&) = default ;
    ListSessionGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSessionGroupResponseBody() = default ;
    ListSessionGroupResponseBody& operator=(const ListSessionGroupResponseBody &) = default ;
    ListSessionGroupResponseBody& operator=(ListSessionGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline const vector<string> & getMessage() const { DARABONBA_PTR_GET_CONST(message_, vector<string>) };
      inline vector<string> getMessage() { DARABONBA_PTR_GET(message_, vector<string>) };
      inline Messages& setMessage(const vector<string> & message) { DARABONBA_PTR_SET_VALUE(message_, message) };
      inline Messages& setMessage(vector<string> && message) { DARABONBA_PTR_SET_RVALUE(message_, message) };


    protected:
      shared_ptr<vector<string>> message_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
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
      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(AssignStatus, assignStatus_);
          DARABONBA_PTR_TO_JSON(CallStartTime, callStartTime_);
          DARABONBA_PTR_TO_JSON(CallerList, callerList_);
          DARABONBA_PTR_TO_JSON(CustomerIdList, customerIdList_);
          DARABONBA_PTR_TO_JSON(CustomerNameList, customerNameList_);
          DARABONBA_PTR_TO_JSON(CustomerServiceIdList, customerServiceIdList_);
          DARABONBA_PTR_TO_JSON(CustomerServiceNameList, customerServiceNameList_);
          DARABONBA_PTR_TO_JSON(HitSessionCount, hitSessionCount_);
          DARABONBA_PTR_TO_JSON(LastDataId, lastDataId_);
          DARABONBA_PTR_TO_JSON(ReviewStatus, reviewStatus_);
          DARABONBA_PTR_TO_JSON(ReviewerList, reviewerList_);
          DARABONBA_PTR_TO_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
          DARABONBA_PTR_TO_JSON(SchemeTaskConfigName, schemeTaskConfigName_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
          DARABONBA_PTR_TO_JSON(SessionGroupId, sessionGroupId_);
          DARABONBA_PTR_TO_JSON(SessionGroupReviewedOrComplained, sessionGroupReviewedOrComplained_);
          DARABONBA_PTR_TO_JSON(SkillGroupNameList, skillGroupNameList_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AssignStatus, assignStatus_);
          DARABONBA_PTR_FROM_JSON(CallStartTime, callStartTime_);
          DARABONBA_PTR_FROM_JSON(CallerList, callerList_);
          DARABONBA_PTR_FROM_JSON(CustomerIdList, customerIdList_);
          DARABONBA_PTR_FROM_JSON(CustomerNameList, customerNameList_);
          DARABONBA_PTR_FROM_JSON(CustomerServiceIdList, customerServiceIdList_);
          DARABONBA_PTR_FROM_JSON(CustomerServiceNameList, customerServiceNameList_);
          DARABONBA_PTR_FROM_JSON(HitSessionCount, hitSessionCount_);
          DARABONBA_PTR_FROM_JSON(LastDataId, lastDataId_);
          DARABONBA_PTR_FROM_JSON(ReviewStatus, reviewStatus_);
          DARABONBA_PTR_FROM_JSON(ReviewerList, reviewerList_);
          DARABONBA_PTR_FROM_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
          DARABONBA_PTR_FROM_JSON(SchemeTaskConfigName, schemeTaskConfigName_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
          DARABONBA_PTR_FROM_JSON(SessionGroupId, sessionGroupId_);
          DARABONBA_PTR_FROM_JSON(SessionGroupReviewedOrComplained, sessionGroupReviewedOrComplained_);
          DARABONBA_PTR_FROM_JSON(SkillGroupNameList, skillGroupNameList_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SkillGroupNameList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SkillGroupNameList& obj) { 
            DARABONBA_PTR_TO_JSON(SkillGroupNameList, skillGroupNameList_);
          };
          friend void from_json(const Darabonba::Json& j, SkillGroupNameList& obj) { 
            DARABONBA_PTR_FROM_JSON(SkillGroupNameList, skillGroupNameList_);
          };
          SkillGroupNameList() = default ;
          SkillGroupNameList(const SkillGroupNameList &) = default ;
          SkillGroupNameList(SkillGroupNameList &&) = default ;
          SkillGroupNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SkillGroupNameList() = default ;
          SkillGroupNameList& operator=(const SkillGroupNameList &) = default ;
          SkillGroupNameList& operator=(SkillGroupNameList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->skillGroupNameList_ == nullptr; };
          // skillGroupNameList Field Functions 
          bool hasSkillGroupNameList() const { return this->skillGroupNameList_ != nullptr;};
          void deleteSkillGroupNameList() { this->skillGroupNameList_ = nullptr;};
          inline const vector<string> & getSkillGroupNameList() const { DARABONBA_PTR_GET_CONST(skillGroupNameList_, vector<string>) };
          inline vector<string> getSkillGroupNameList() { DARABONBA_PTR_GET(skillGroupNameList_, vector<string>) };
          inline SkillGroupNameList& setSkillGroupNameList(const vector<string> & skillGroupNameList) { DARABONBA_PTR_SET_VALUE(skillGroupNameList_, skillGroupNameList) };
          inline SkillGroupNameList& setSkillGroupNameList(vector<string> && skillGroupNameList) { DARABONBA_PTR_SET_RVALUE(skillGroupNameList_, skillGroupNameList) };


        protected:
          shared_ptr<vector<string>> skillGroupNameList_ {};
        };

        class ReviewerList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReviewerList& obj) { 
            DARABONBA_PTR_TO_JSON(ReviewerList, reviewerList_);
          };
          friend void from_json(const Darabonba::Json& j, ReviewerList& obj) { 
            DARABONBA_PTR_FROM_JSON(ReviewerList, reviewerList_);
          };
          ReviewerList() = default ;
          ReviewerList(const ReviewerList &) = default ;
          ReviewerList(ReviewerList &&) = default ;
          ReviewerList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReviewerList() = default ;
          ReviewerList& operator=(const ReviewerList &) = default ;
          ReviewerList& operator=(ReviewerList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->reviewerList_ == nullptr; };
          // reviewerList Field Functions 
          bool hasReviewerList() const { return this->reviewerList_ != nullptr;};
          void deleteReviewerList() { this->reviewerList_ = nullptr;};
          inline const vector<string> & getReviewerList() const { DARABONBA_PTR_GET_CONST(reviewerList_, vector<string>) };
          inline vector<string> getReviewerList() { DARABONBA_PTR_GET(reviewerList_, vector<string>) };
          inline ReviewerList& setReviewerList(const vector<string> & reviewerList) { DARABONBA_PTR_SET_VALUE(reviewerList_, reviewerList) };
          inline ReviewerList& setReviewerList(vector<string> && reviewerList) { DARABONBA_PTR_SET_RVALUE(reviewerList_, reviewerList) };


        protected:
          shared_ptr<vector<string>> reviewerList_ {};
        };

        class CustomerServiceNameList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomerServiceNameList& obj) { 
            DARABONBA_PTR_TO_JSON(CustomerServiceNameList, customerServiceNameList_);
          };
          friend void from_json(const Darabonba::Json& j, CustomerServiceNameList& obj) { 
            DARABONBA_PTR_FROM_JSON(CustomerServiceNameList, customerServiceNameList_);
          };
          CustomerServiceNameList() = default ;
          CustomerServiceNameList(const CustomerServiceNameList &) = default ;
          CustomerServiceNameList(CustomerServiceNameList &&) = default ;
          CustomerServiceNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomerServiceNameList() = default ;
          CustomerServiceNameList& operator=(const CustomerServiceNameList &) = default ;
          CustomerServiceNameList& operator=(CustomerServiceNameList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->customerServiceNameList_ == nullptr; };
          // customerServiceNameList Field Functions 
          bool hasCustomerServiceNameList() const { return this->customerServiceNameList_ != nullptr;};
          void deleteCustomerServiceNameList() { this->customerServiceNameList_ = nullptr;};
          inline const vector<string> & getCustomerServiceNameList() const { DARABONBA_PTR_GET_CONST(customerServiceNameList_, vector<string>) };
          inline vector<string> getCustomerServiceNameList() { DARABONBA_PTR_GET(customerServiceNameList_, vector<string>) };
          inline CustomerServiceNameList& setCustomerServiceNameList(const vector<string> & customerServiceNameList) { DARABONBA_PTR_SET_VALUE(customerServiceNameList_, customerServiceNameList) };
          inline CustomerServiceNameList& setCustomerServiceNameList(vector<string> && customerServiceNameList) { DARABONBA_PTR_SET_RVALUE(customerServiceNameList_, customerServiceNameList) };


        protected:
          shared_ptr<vector<string>> customerServiceNameList_ {};
        };

        class CustomerServiceIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomerServiceIdList& obj) { 
            DARABONBA_PTR_TO_JSON(CustomerServiceIdList, customerServiceIdList_);
          };
          friend void from_json(const Darabonba::Json& j, CustomerServiceIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(CustomerServiceIdList, customerServiceIdList_);
          };
          CustomerServiceIdList() = default ;
          CustomerServiceIdList(const CustomerServiceIdList &) = default ;
          CustomerServiceIdList(CustomerServiceIdList &&) = default ;
          CustomerServiceIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomerServiceIdList() = default ;
          CustomerServiceIdList& operator=(const CustomerServiceIdList &) = default ;
          CustomerServiceIdList& operator=(CustomerServiceIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->customerServiceIdList_ == nullptr; };
          // customerServiceIdList Field Functions 
          bool hasCustomerServiceIdList() const { return this->customerServiceIdList_ != nullptr;};
          void deleteCustomerServiceIdList() { this->customerServiceIdList_ = nullptr;};
          inline const vector<string> & getCustomerServiceIdList() const { DARABONBA_PTR_GET_CONST(customerServiceIdList_, vector<string>) };
          inline vector<string> getCustomerServiceIdList() { DARABONBA_PTR_GET(customerServiceIdList_, vector<string>) };
          inline CustomerServiceIdList& setCustomerServiceIdList(const vector<string> & customerServiceIdList) { DARABONBA_PTR_SET_VALUE(customerServiceIdList_, customerServiceIdList) };
          inline CustomerServiceIdList& setCustomerServiceIdList(vector<string> && customerServiceIdList) { DARABONBA_PTR_SET_RVALUE(customerServiceIdList_, customerServiceIdList) };


        protected:
          shared_ptr<vector<string>> customerServiceIdList_ {};
        };

        class CustomerNameList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomerNameList& obj) { 
            DARABONBA_PTR_TO_JSON(CustomerNameList, customerNameList_);
          };
          friend void from_json(const Darabonba::Json& j, CustomerNameList& obj) { 
            DARABONBA_PTR_FROM_JSON(CustomerNameList, customerNameList_);
          };
          CustomerNameList() = default ;
          CustomerNameList(const CustomerNameList &) = default ;
          CustomerNameList(CustomerNameList &&) = default ;
          CustomerNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomerNameList() = default ;
          CustomerNameList& operator=(const CustomerNameList &) = default ;
          CustomerNameList& operator=(CustomerNameList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->customerNameList_ == nullptr; };
          // customerNameList Field Functions 
          bool hasCustomerNameList() const { return this->customerNameList_ != nullptr;};
          void deleteCustomerNameList() { this->customerNameList_ = nullptr;};
          inline const vector<string> & getCustomerNameList() const { DARABONBA_PTR_GET_CONST(customerNameList_, vector<string>) };
          inline vector<string> getCustomerNameList() { DARABONBA_PTR_GET(customerNameList_, vector<string>) };
          inline CustomerNameList& setCustomerNameList(const vector<string> & customerNameList) { DARABONBA_PTR_SET_VALUE(customerNameList_, customerNameList) };
          inline CustomerNameList& setCustomerNameList(vector<string> && customerNameList) { DARABONBA_PTR_SET_RVALUE(customerNameList_, customerNameList) };


        protected:
          shared_ptr<vector<string>> customerNameList_ {};
        };

        class CustomerIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomerIdList& obj) { 
            DARABONBA_PTR_TO_JSON(CustomerIdList, customerIdList_);
          };
          friend void from_json(const Darabonba::Json& j, CustomerIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(CustomerIdList, customerIdList_);
          };
          CustomerIdList() = default ;
          CustomerIdList(const CustomerIdList &) = default ;
          CustomerIdList(CustomerIdList &&) = default ;
          CustomerIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomerIdList() = default ;
          CustomerIdList& operator=(const CustomerIdList &) = default ;
          CustomerIdList& operator=(CustomerIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->customerIdList_ == nullptr; };
          // customerIdList Field Functions 
          bool hasCustomerIdList() const { return this->customerIdList_ != nullptr;};
          void deleteCustomerIdList() { this->customerIdList_ = nullptr;};
          inline const vector<string> & getCustomerIdList() const { DARABONBA_PTR_GET_CONST(customerIdList_, vector<string>) };
          inline vector<string> getCustomerIdList() { DARABONBA_PTR_GET(customerIdList_, vector<string>) };
          inline CustomerIdList& setCustomerIdList(const vector<string> & customerIdList) { DARABONBA_PTR_SET_VALUE(customerIdList_, customerIdList) };
          inline CustomerIdList& setCustomerIdList(vector<string> && customerIdList) { DARABONBA_PTR_SET_RVALUE(customerIdList_, customerIdList) };


        protected:
          shared_ptr<vector<string>> customerIdList_ {};
        };

        class CallerList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CallerList& obj) { 
            DARABONBA_PTR_TO_JSON(CallerList, callerList_);
          };
          friend void from_json(const Darabonba::Json& j, CallerList& obj) { 
            DARABONBA_PTR_FROM_JSON(CallerList, callerList_);
          };
          CallerList() = default ;
          CallerList(const CallerList &) = default ;
          CallerList(CallerList &&) = default ;
          CallerList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CallerList() = default ;
          CallerList& operator=(const CallerList &) = default ;
          CallerList& operator=(CallerList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->callerList_ == nullptr; };
          // callerList Field Functions 
          bool hasCallerList() const { return this->callerList_ != nullptr;};
          void deleteCallerList() { this->callerList_ = nullptr;};
          inline const vector<string> & getCallerList() const { DARABONBA_PTR_GET_CONST(callerList_, vector<string>) };
          inline vector<string> getCallerList() { DARABONBA_PTR_GET(callerList_, vector<string>) };
          inline CallerList& setCallerList(const vector<string> & callerList) { DARABONBA_PTR_SET_VALUE(callerList_, callerList) };
          inline CallerList& setCallerList(vector<string> && callerList) { DARABONBA_PTR_SET_RVALUE(callerList_, callerList) };


        protected:
          shared_ptr<vector<string>> callerList_ {};
        };

        virtual bool empty() const override { return this->assignStatus_ == nullptr
        && this->callStartTime_ == nullptr && this->callerList_ == nullptr && this->customerIdList_ == nullptr && this->customerNameList_ == nullptr && this->customerServiceIdList_ == nullptr
        && this->customerServiceNameList_ == nullptr && this->hitSessionCount_ == nullptr && this->lastDataId_ == nullptr && this->reviewStatus_ == nullptr && this->reviewerList_ == nullptr
        && this->schemeTaskConfigId_ == nullptr && this->schemeTaskConfigName_ == nullptr && this->score_ == nullptr && this->sessionCount_ == nullptr && this->sessionGroupId_ == nullptr
        && this->sessionGroupReviewedOrComplained_ == nullptr && this->skillGroupNameList_ == nullptr; };
        // assignStatus Field Functions 
        bool hasAssignStatus() const { return this->assignStatus_ != nullptr;};
        void deleteAssignStatus() { this->assignStatus_ = nullptr;};
        inline int32_t getAssignStatus() const { DARABONBA_PTR_GET_DEFAULT(assignStatus_, 0) };
        inline DataItem& setAssignStatus(int32_t assignStatus) { DARABONBA_PTR_SET_VALUE(assignStatus_, assignStatus) };


        // callStartTime Field Functions 
        bool hasCallStartTime() const { return this->callStartTime_ != nullptr;};
        void deleteCallStartTime() { this->callStartTime_ = nullptr;};
        inline string getCallStartTime() const { DARABONBA_PTR_GET_DEFAULT(callStartTime_, "") };
        inline DataItem& setCallStartTime(string callStartTime) { DARABONBA_PTR_SET_VALUE(callStartTime_, callStartTime) };


        // callerList Field Functions 
        bool hasCallerList() const { return this->callerList_ != nullptr;};
        void deleteCallerList() { this->callerList_ = nullptr;};
        inline const DataItem::CallerList & getCallerList() const { DARABONBA_PTR_GET_CONST(callerList_, DataItem::CallerList) };
        inline DataItem::CallerList getCallerList() { DARABONBA_PTR_GET(callerList_, DataItem::CallerList) };
        inline DataItem& setCallerList(const DataItem::CallerList & callerList) { DARABONBA_PTR_SET_VALUE(callerList_, callerList) };
        inline DataItem& setCallerList(DataItem::CallerList && callerList) { DARABONBA_PTR_SET_RVALUE(callerList_, callerList) };


        // customerIdList Field Functions 
        bool hasCustomerIdList() const { return this->customerIdList_ != nullptr;};
        void deleteCustomerIdList() { this->customerIdList_ = nullptr;};
        inline const DataItem::CustomerIdList & getCustomerIdList() const { DARABONBA_PTR_GET_CONST(customerIdList_, DataItem::CustomerIdList) };
        inline DataItem::CustomerIdList getCustomerIdList() { DARABONBA_PTR_GET(customerIdList_, DataItem::CustomerIdList) };
        inline DataItem& setCustomerIdList(const DataItem::CustomerIdList & customerIdList) { DARABONBA_PTR_SET_VALUE(customerIdList_, customerIdList) };
        inline DataItem& setCustomerIdList(DataItem::CustomerIdList && customerIdList) { DARABONBA_PTR_SET_RVALUE(customerIdList_, customerIdList) };


        // customerNameList Field Functions 
        bool hasCustomerNameList() const { return this->customerNameList_ != nullptr;};
        void deleteCustomerNameList() { this->customerNameList_ = nullptr;};
        inline const DataItem::CustomerNameList & getCustomerNameList() const { DARABONBA_PTR_GET_CONST(customerNameList_, DataItem::CustomerNameList) };
        inline DataItem::CustomerNameList getCustomerNameList() { DARABONBA_PTR_GET(customerNameList_, DataItem::CustomerNameList) };
        inline DataItem& setCustomerNameList(const DataItem::CustomerNameList & customerNameList) { DARABONBA_PTR_SET_VALUE(customerNameList_, customerNameList) };
        inline DataItem& setCustomerNameList(DataItem::CustomerNameList && customerNameList) { DARABONBA_PTR_SET_RVALUE(customerNameList_, customerNameList) };


        // customerServiceIdList Field Functions 
        bool hasCustomerServiceIdList() const { return this->customerServiceIdList_ != nullptr;};
        void deleteCustomerServiceIdList() { this->customerServiceIdList_ = nullptr;};
        inline const DataItem::CustomerServiceIdList & getCustomerServiceIdList() const { DARABONBA_PTR_GET_CONST(customerServiceIdList_, DataItem::CustomerServiceIdList) };
        inline DataItem::CustomerServiceIdList getCustomerServiceIdList() { DARABONBA_PTR_GET(customerServiceIdList_, DataItem::CustomerServiceIdList) };
        inline DataItem& setCustomerServiceIdList(const DataItem::CustomerServiceIdList & customerServiceIdList) { DARABONBA_PTR_SET_VALUE(customerServiceIdList_, customerServiceIdList) };
        inline DataItem& setCustomerServiceIdList(DataItem::CustomerServiceIdList && customerServiceIdList) { DARABONBA_PTR_SET_RVALUE(customerServiceIdList_, customerServiceIdList) };


        // customerServiceNameList Field Functions 
        bool hasCustomerServiceNameList() const { return this->customerServiceNameList_ != nullptr;};
        void deleteCustomerServiceNameList() { this->customerServiceNameList_ = nullptr;};
        inline const DataItem::CustomerServiceNameList & getCustomerServiceNameList() const { DARABONBA_PTR_GET_CONST(customerServiceNameList_, DataItem::CustomerServiceNameList) };
        inline DataItem::CustomerServiceNameList getCustomerServiceNameList() { DARABONBA_PTR_GET(customerServiceNameList_, DataItem::CustomerServiceNameList) };
        inline DataItem& setCustomerServiceNameList(const DataItem::CustomerServiceNameList & customerServiceNameList) { DARABONBA_PTR_SET_VALUE(customerServiceNameList_, customerServiceNameList) };
        inline DataItem& setCustomerServiceNameList(DataItem::CustomerServiceNameList && customerServiceNameList) { DARABONBA_PTR_SET_RVALUE(customerServiceNameList_, customerServiceNameList) };


        // hitSessionCount Field Functions 
        bool hasHitSessionCount() const { return this->hitSessionCount_ != nullptr;};
        void deleteHitSessionCount() { this->hitSessionCount_ = nullptr;};
        inline int32_t getHitSessionCount() const { DARABONBA_PTR_GET_DEFAULT(hitSessionCount_, 0) };
        inline DataItem& setHitSessionCount(int32_t hitSessionCount) { DARABONBA_PTR_SET_VALUE(hitSessionCount_, hitSessionCount) };


        // lastDataId Field Functions 
        bool hasLastDataId() const { return this->lastDataId_ != nullptr;};
        void deleteLastDataId() { this->lastDataId_ = nullptr;};
        inline string getLastDataId() const { DARABONBA_PTR_GET_DEFAULT(lastDataId_, "") };
        inline DataItem& setLastDataId(string lastDataId) { DARABONBA_PTR_SET_VALUE(lastDataId_, lastDataId) };


        // reviewStatus Field Functions 
        bool hasReviewStatus() const { return this->reviewStatus_ != nullptr;};
        void deleteReviewStatus() { this->reviewStatus_ = nullptr;};
        inline int32_t getReviewStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewStatus_, 0) };
        inline DataItem& setReviewStatus(int32_t reviewStatus) { DARABONBA_PTR_SET_VALUE(reviewStatus_, reviewStatus) };


        // reviewerList Field Functions 
        bool hasReviewerList() const { return this->reviewerList_ != nullptr;};
        void deleteReviewerList() { this->reviewerList_ = nullptr;};
        inline const DataItem::ReviewerList & getReviewerList() const { DARABONBA_PTR_GET_CONST(reviewerList_, DataItem::ReviewerList) };
        inline DataItem::ReviewerList getReviewerList() { DARABONBA_PTR_GET(reviewerList_, DataItem::ReviewerList) };
        inline DataItem& setReviewerList(const DataItem::ReviewerList & reviewerList) { DARABONBA_PTR_SET_VALUE(reviewerList_, reviewerList) };
        inline DataItem& setReviewerList(DataItem::ReviewerList && reviewerList) { DARABONBA_PTR_SET_RVALUE(reviewerList_, reviewerList) };


        // schemeTaskConfigId Field Functions 
        bool hasSchemeTaskConfigId() const { return this->schemeTaskConfigId_ != nullptr;};
        void deleteSchemeTaskConfigId() { this->schemeTaskConfigId_ = nullptr;};
        inline int64_t getSchemeTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(schemeTaskConfigId_, 0L) };
        inline DataItem& setSchemeTaskConfigId(int64_t schemeTaskConfigId) { DARABONBA_PTR_SET_VALUE(schemeTaskConfigId_, schemeTaskConfigId) };


        // schemeTaskConfigName Field Functions 
        bool hasSchemeTaskConfigName() const { return this->schemeTaskConfigName_ != nullptr;};
        void deleteSchemeTaskConfigName() { this->schemeTaskConfigName_ = nullptr;};
        inline string getSchemeTaskConfigName() const { DARABONBA_PTR_GET_DEFAULT(schemeTaskConfigName_, "") };
        inline DataItem& setSchemeTaskConfigName(string schemeTaskConfigName) { DARABONBA_PTR_SET_VALUE(schemeTaskConfigName_, schemeTaskConfigName) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int64_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0L) };
        inline DataItem& setScore(int64_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // sessionCount Field Functions 
        bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
        void deleteSessionCount() { this->sessionCount_ = nullptr;};
        inline int32_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0) };
        inline DataItem& setSessionCount(int32_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


        // sessionGroupId Field Functions 
        bool hasSessionGroupId() const { return this->sessionGroupId_ != nullptr;};
        void deleteSessionGroupId() { this->sessionGroupId_ = nullptr;};
        inline string getSessionGroupId() const { DARABONBA_PTR_GET_DEFAULT(sessionGroupId_, "") };
        inline DataItem& setSessionGroupId(string sessionGroupId) { DARABONBA_PTR_SET_VALUE(sessionGroupId_, sessionGroupId) };


        // sessionGroupReviewedOrComplained Field Functions 
        bool hasSessionGroupReviewedOrComplained() const { return this->sessionGroupReviewedOrComplained_ != nullptr;};
        void deleteSessionGroupReviewedOrComplained() { this->sessionGroupReviewedOrComplained_ = nullptr;};
        inline bool getSessionGroupReviewedOrComplained() const { DARABONBA_PTR_GET_DEFAULT(sessionGroupReviewedOrComplained_, false) };
        inline DataItem& setSessionGroupReviewedOrComplained(bool sessionGroupReviewedOrComplained) { DARABONBA_PTR_SET_VALUE(sessionGroupReviewedOrComplained_, sessionGroupReviewedOrComplained) };


        // skillGroupNameList Field Functions 
        bool hasSkillGroupNameList() const { return this->skillGroupNameList_ != nullptr;};
        void deleteSkillGroupNameList() { this->skillGroupNameList_ = nullptr;};
        inline const DataItem::SkillGroupNameList & getSkillGroupNameList() const { DARABONBA_PTR_GET_CONST(skillGroupNameList_, DataItem::SkillGroupNameList) };
        inline DataItem::SkillGroupNameList getSkillGroupNameList() { DARABONBA_PTR_GET(skillGroupNameList_, DataItem::SkillGroupNameList) };
        inline DataItem& setSkillGroupNameList(const DataItem::SkillGroupNameList & skillGroupNameList) { DARABONBA_PTR_SET_VALUE(skillGroupNameList_, skillGroupNameList) };
        inline DataItem& setSkillGroupNameList(DataItem::SkillGroupNameList && skillGroupNameList) { DARABONBA_PTR_SET_RVALUE(skillGroupNameList_, skillGroupNameList) };


      protected:
        shared_ptr<int32_t> assignStatus_ {};
        shared_ptr<string> callStartTime_ {};
        shared_ptr<DataItem::CallerList> callerList_ {};
        shared_ptr<DataItem::CustomerIdList> customerIdList_ {};
        shared_ptr<DataItem::CustomerNameList> customerNameList_ {};
        shared_ptr<DataItem::CustomerServiceIdList> customerServiceIdList_ {};
        shared_ptr<DataItem::CustomerServiceNameList> customerServiceNameList_ {};
        shared_ptr<int32_t> hitSessionCount_ {};
        shared_ptr<string> lastDataId_ {};
        shared_ptr<int32_t> reviewStatus_ {};
        shared_ptr<DataItem::ReviewerList> reviewerList_ {};
        shared_ptr<int64_t> schemeTaskConfigId_ {};
        shared_ptr<string> schemeTaskConfigName_ {};
        shared_ptr<int64_t> score_ {};
        shared_ptr<int32_t> sessionCount_ {};
        shared_ptr<string> sessionGroupId_ {};
        shared_ptr<bool> sessionGroupReviewedOrComplained_ {};
        shared_ptr<DataItem::SkillGroupNameList> skillGroupNameList_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Data::DataItem> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Data::DataItem>) };
      inline vector<Data::DataItem> getData() { DARABONBA_PTR_GET(data_, vector<Data::DataItem>) };
      inline Data& setData(const vector<Data::DataItem> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(vector<Data::DataItem> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    protected:
      shared_ptr<vector<Data::DataItem>> data_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->currentPage_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->lastDataId_ == nullptr
        && this->message_ == nullptr && this->messages_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->resultCountId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSessionGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListSessionGroupResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListSessionGroupResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSessionGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSessionGroupResponseBody::Data) };
    inline ListSessionGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSessionGroupResponseBody::Data) };
    inline ListSessionGroupResponseBody& setData(const ListSessionGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSessionGroupResponseBody& setData(ListSessionGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListSessionGroupResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // lastDataId Field Functions 
    bool hasLastDataId() const { return this->lastDataId_ != nullptr;};
    void deleteLastDataId() { this->lastDataId_ = nullptr;};
    inline string getLastDataId() const { DARABONBA_PTR_GET_DEFAULT(lastDataId_, "") };
    inline ListSessionGroupResponseBody& setLastDataId(string lastDataId) { DARABONBA_PTR_SET_VALUE(lastDataId_, lastDataId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSessionGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const ListSessionGroupResponseBody::Messages & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, ListSessionGroupResponseBody::Messages) };
    inline ListSessionGroupResponseBody::Messages getMessages() { DARABONBA_PTR_GET(messages_, ListSessionGroupResponseBody::Messages) };
    inline ListSessionGroupResponseBody& setMessages(const ListSessionGroupResponseBody::Messages & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ListSessionGroupResponseBody& setMessages(ListSessionGroupResponseBody::Messages && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSessionGroupResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSessionGroupResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSessionGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCountId Field Functions 
    bool hasResultCountId() const { return this->resultCountId_ != nullptr;};
    void deleteResultCountId() { this->resultCountId_ = nullptr;};
    inline string getResultCountId() const { DARABONBA_PTR_GET_DEFAULT(resultCountId_, "") };
    inline ListSessionGroupResponseBody& setResultCountId(string resultCountId) { DARABONBA_PTR_SET_VALUE(resultCountId_, resultCountId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSessionGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<ListSessionGroupResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> lastDataId_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListSessionGroupResponseBody::Messages> messages_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCountId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
