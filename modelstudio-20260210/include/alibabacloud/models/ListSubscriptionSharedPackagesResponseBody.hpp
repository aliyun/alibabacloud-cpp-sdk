// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONSHAREDPACKAGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONSHAREDPACKAGESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListSubscriptionSharedPackagesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubscriptionSharedPackagesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubscriptionSharedPackagesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListSubscriptionSharedPackagesResponseBody() = default ;
    ListSubscriptionSharedPackagesResponseBody(const ListSubscriptionSharedPackagesResponseBody &) = default ;
    ListSubscriptionSharedPackagesResponseBody(ListSubscriptionSharedPackagesResponseBody &&) = default ;
    ListSubscriptionSharedPackagesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubscriptionSharedPackagesResponseBody() = default ;
    ListSubscriptionSharedPackagesResponseBody& operator=(const ListSubscriptionSharedPackagesResponseBody &) = default ;
    ListSubscriptionSharedPackagesResponseBody& operator=(ListSubscriptionSharedPackagesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(EquityList, equityList_);
          DARABONBA_PTR_TO_JSON(InstanceCode, instanceCode_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(EquityList, equityList_);
          DARABONBA_PTR_FROM_JSON(InstanceCode, instanceCode_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EquityList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EquityList& obj) { 
            DARABONBA_PTR_TO_JSON(CycleEndTime, cycleEndTime_);
            DARABONBA_PTR_TO_JSON(CycleInstanceId, cycleInstanceId_);
            DARABONBA_PTR_TO_JSON(CycleStartTime, cycleStartTime_);
            DARABONBA_PTR_TO_JSON(CycleSurplusValue, cycleSurplusValue_);
            DARABONBA_PTR_TO_JSON(CycleTotalValue, cycleTotalValue_);
            DARABONBA_PTR_TO_JSON(CycleVersion, cycleVersion_);
            DARABONBA_PTR_TO_JSON(EquityType, equityType_);
          };
          friend void from_json(const Darabonba::Json& j, EquityList& obj) { 
            DARABONBA_PTR_FROM_JSON(CycleEndTime, cycleEndTime_);
            DARABONBA_PTR_FROM_JSON(CycleInstanceId, cycleInstanceId_);
            DARABONBA_PTR_FROM_JSON(CycleStartTime, cycleStartTime_);
            DARABONBA_PTR_FROM_JSON(CycleSurplusValue, cycleSurplusValue_);
            DARABONBA_PTR_FROM_JSON(CycleTotalValue, cycleTotalValue_);
            DARABONBA_PTR_FROM_JSON(CycleVersion, cycleVersion_);
            DARABONBA_PTR_FROM_JSON(EquityType, equityType_);
          };
          EquityList() = default ;
          EquityList(const EquityList &) = default ;
          EquityList(EquityList &&) = default ;
          EquityList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EquityList() = default ;
          EquityList& operator=(const EquityList &) = default ;
          EquityList& operator=(EquityList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cycleEndTime_ == nullptr
        && this->cycleInstanceId_ == nullptr && this->cycleStartTime_ == nullptr && this->cycleSurplusValue_ == nullptr && this->cycleTotalValue_ == nullptr && this->cycleVersion_ == nullptr
        && this->equityType_ == nullptr; };
          // cycleEndTime Field Functions 
          bool hasCycleEndTime() const { return this->cycleEndTime_ != nullptr;};
          void deleteCycleEndTime() { this->cycleEndTime_ = nullptr;};
          inline int64_t getCycleEndTime() const { DARABONBA_PTR_GET_DEFAULT(cycleEndTime_, 0L) };
          inline EquityList& setCycleEndTime(int64_t cycleEndTime) { DARABONBA_PTR_SET_VALUE(cycleEndTime_, cycleEndTime) };


          // cycleInstanceId Field Functions 
          bool hasCycleInstanceId() const { return this->cycleInstanceId_ != nullptr;};
          void deleteCycleInstanceId() { this->cycleInstanceId_ = nullptr;};
          inline string getCycleInstanceId() const { DARABONBA_PTR_GET_DEFAULT(cycleInstanceId_, "") };
          inline EquityList& setCycleInstanceId(string cycleInstanceId) { DARABONBA_PTR_SET_VALUE(cycleInstanceId_, cycleInstanceId) };


          // cycleStartTime Field Functions 
          bool hasCycleStartTime() const { return this->cycleStartTime_ != nullptr;};
          void deleteCycleStartTime() { this->cycleStartTime_ = nullptr;};
          inline int64_t getCycleStartTime() const { DARABONBA_PTR_GET_DEFAULT(cycleStartTime_, 0L) };
          inline EquityList& setCycleStartTime(int64_t cycleStartTime) { DARABONBA_PTR_SET_VALUE(cycleStartTime_, cycleStartTime) };


          // cycleSurplusValue Field Functions 
          bool hasCycleSurplusValue() const { return this->cycleSurplusValue_ != nullptr;};
          void deleteCycleSurplusValue() { this->cycleSurplusValue_ = nullptr;};
          inline double getCycleSurplusValue() const { DARABONBA_PTR_GET_DEFAULT(cycleSurplusValue_, 0.0) };
          inline EquityList& setCycleSurplusValue(double cycleSurplusValue) { DARABONBA_PTR_SET_VALUE(cycleSurplusValue_, cycleSurplusValue) };


          // cycleTotalValue Field Functions 
          bool hasCycleTotalValue() const { return this->cycleTotalValue_ != nullptr;};
          void deleteCycleTotalValue() { this->cycleTotalValue_ = nullptr;};
          inline double getCycleTotalValue() const { DARABONBA_PTR_GET_DEFAULT(cycleTotalValue_, 0.0) };
          inline EquityList& setCycleTotalValue(double cycleTotalValue) { DARABONBA_PTR_SET_VALUE(cycleTotalValue_, cycleTotalValue) };


          // cycleVersion Field Functions 
          bool hasCycleVersion() const { return this->cycleVersion_ != nullptr;};
          void deleteCycleVersion() { this->cycleVersion_ = nullptr;};
          inline int64_t getCycleVersion() const { DARABONBA_PTR_GET_DEFAULT(cycleVersion_, 0L) };
          inline EquityList& setCycleVersion(int64_t cycleVersion) { DARABONBA_PTR_SET_VALUE(cycleVersion_, cycleVersion) };


          // equityType Field Functions 
          bool hasEquityType() const { return this->equityType_ != nullptr;};
          void deleteEquityType() { this->equityType_ = nullptr;};
          inline string getEquityType() const { DARABONBA_PTR_GET_DEFAULT(equityType_, "") };
          inline EquityList& setEquityType(string equityType) { DARABONBA_PTR_SET_VALUE(equityType_, equityType) };


        protected:
          // The end time of the current cycle, in milliseconds.
          shared_ptr<int64_t> cycleEndTime_ {};
          // The equity code (subscription code). This is not required for consumption in the credits scenario.
          shared_ptr<string> cycleInstanceId_ {};
          // The start time of the current cycle, in milliseconds.
          shared_ptr<int64_t> cycleStartTime_ {};
          // The remaining quota of the current cycle.
          shared_ptr<double> cycleSurplusValue_ {};
          // The total quota of the current cycle.
          shared_ptr<double> cycleTotalValue_ {};
          // The sequential version of the current cycle.
          shared_ptr<int64_t> cycleVersion_ {};
          // The equity type, such as CREDITS, SPN, or resource plan.
          shared_ptr<string> equityType_ {};
        };

        virtual bool empty() const override { return this->equityList_ == nullptr
        && this->instanceCode_ == nullptr && this->status_ == nullptr; };
        // equityList Field Functions 
        bool hasEquityList() const { return this->equityList_ != nullptr;};
        void deleteEquityList() { this->equityList_ = nullptr;};
        inline const vector<Items::EquityList> & getEquityList() const { DARABONBA_PTR_GET_CONST(equityList_, vector<Items::EquityList>) };
        inline vector<Items::EquityList> getEquityList() { DARABONBA_PTR_GET(equityList_, vector<Items::EquityList>) };
        inline Items& setEquityList(const vector<Items::EquityList> & equityList) { DARABONBA_PTR_SET_VALUE(equityList_, equityList) };
        inline Items& setEquityList(vector<Items::EquityList> && equityList) { DARABONBA_PTR_SET_RVALUE(equityList_, equityList) };


        // instanceCode Field Functions 
        bool hasInstanceCode() const { return this->instanceCode_ != nullptr;};
        void deleteInstanceCode() { this->instanceCode_ = nullptr;};
        inline string getInstanceCode() const { DARABONBA_PTR_GET_DEFAULT(instanceCode_, "") };
        inline Items& setInstanceCode(string instanceCode) { DARABONBA_PTR_SET_VALUE(instanceCode_, instanceCode) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The currently active equity instances.
        shared_ptr<vector<Items::EquityList>> equityList_ {};
        // The instance code of the seat.
        shared_ptr<string> instanceCode_ {};
        // The seat status. Valid values:
        // 
        // - CREATING: being created.
        // - NORMAL: active.
        // - LIMIT: restricted due to overdue payment.
        // - RELEASE: released upon expiration.
        // - STOP: stopped upon expiration.
        // - REFUNDED: refunded.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The data entries.
      shared_ptr<vector<Data::Items>> items_ {};
      // The page number. The value must be greater than 0 and cannot exceed the maximum value of the Integer data type. Default value: 1.
      shared_ptr<int32_t> pageNo_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of seats.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSubscriptionSharedPackagesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListSubscriptionSharedPackagesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListSubscriptionSharedPackagesResponseBody::Data) };
    inline ListSubscriptionSharedPackagesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListSubscriptionSharedPackagesResponseBody::Data) };
    inline ListSubscriptionSharedPackagesResponseBody& setData(const ListSubscriptionSharedPackagesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSubscriptionSharedPackagesResponseBody& setData(ListSubscriptionSharedPackagesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSubscriptionSharedPackagesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSubscriptionSharedPackagesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The business data.
    shared_ptr<ListSubscriptionSharedPackagesResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the API call is successful. Valid values:
    // 
    // - true: The call is successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
