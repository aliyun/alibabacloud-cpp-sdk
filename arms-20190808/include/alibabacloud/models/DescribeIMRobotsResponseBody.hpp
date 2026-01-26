// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMROBOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMROBOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeIMRobotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIMRobotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIMRobotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIMRobotsResponseBody() = default ;
    DescribeIMRobotsResponseBody(const DescribeIMRobotsResponseBody &) = default ;
    DescribeIMRobotsResponseBody(DescribeIMRobotsResponseBody &&) = default ;
    DescribeIMRobotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIMRobotsResponseBody() = default ;
    DescribeIMRobotsResponseBody& operator=(const DescribeIMRobotsResponseBody &) = default ;
    DescribeIMRobotsResponseBody& operator=(DescribeIMRobotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(AlertIMRobots, alertIMRobots_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertIMRobots, alertIMRobots_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertIMRobots : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertIMRobots& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DailyNoc, dailyNoc_);
          DARABONBA_PTR_TO_JSON(DailyNocTime, dailyNocTime_);
          DARABONBA_PTR_TO_JSON(DingSignKey, dingSignKey_);
          DARABONBA_PTR_TO_JSON(DispatchRules, dispatchRules_);
          DARABONBA_PTR_TO_JSON(RobotAddr, robotAddr_);
          DARABONBA_PTR_TO_JSON(RobotId, robotId_);
          DARABONBA_PTR_TO_JSON(RobotName, robotName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AlertIMRobots& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DailyNoc, dailyNoc_);
          DARABONBA_PTR_FROM_JSON(DailyNocTime, dailyNocTime_);
          DARABONBA_PTR_FROM_JSON(DingSignKey, dingSignKey_);
          DARABONBA_PTR_FROM_JSON(DispatchRules, dispatchRules_);
          DARABONBA_PTR_FROM_JSON(RobotAddr, robotAddr_);
          DARABONBA_PTR_FROM_JSON(RobotId, robotId_);
          DARABONBA_PTR_FROM_JSON(RobotName, robotName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AlertIMRobots() = default ;
        AlertIMRobots(const AlertIMRobots &) = default ;
        AlertIMRobots(AlertIMRobots &&) = default ;
        AlertIMRobots(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertIMRobots() = default ;
        AlertIMRobots& operator=(const AlertIMRobots &) = default ;
        AlertIMRobots& operator=(AlertIMRobots &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DispatchRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DispatchRules& obj) { 
            DARABONBA_PTR_TO_JSON(id, id_);
            DARABONBA_PTR_TO_JSON(name, name_);
          };
          friend void from_json(const Darabonba::Json& j, DispatchRules& obj) { 
            DARABONBA_PTR_FROM_JSON(id, id_);
            DARABONBA_PTR_FROM_JSON(name, name_);
          };
          DispatchRules() = default ;
          DispatchRules(const DispatchRules &) = default ;
          DispatchRules(DispatchRules &&) = default ;
          DispatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DispatchRules() = default ;
          DispatchRules& operator=(const DispatchRules &) = default ;
          DispatchRules& operator=(DispatchRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline DispatchRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DispatchRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The ID of the notification policy.
          shared_ptr<int64_t> id_ {};
          // The name of the notification policy.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->dailyNoc_ == nullptr && this->dailyNocTime_ == nullptr && this->dingSignKey_ == nullptr && this->dispatchRules_ == nullptr && this->robotAddr_ == nullptr
        && this->robotId_ == nullptr && this->robotName_ == nullptr && this->type_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AlertIMRobots& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dailyNoc Field Functions 
        bool hasDailyNoc() const { return this->dailyNoc_ != nullptr;};
        void deleteDailyNoc() { this->dailyNoc_ = nullptr;};
        inline bool getDailyNoc() const { DARABONBA_PTR_GET_DEFAULT(dailyNoc_, false) };
        inline AlertIMRobots& setDailyNoc(bool dailyNoc) { DARABONBA_PTR_SET_VALUE(dailyNoc_, dailyNoc) };


        // dailyNocTime Field Functions 
        bool hasDailyNocTime() const { return this->dailyNocTime_ != nullptr;};
        void deleteDailyNocTime() { this->dailyNocTime_ = nullptr;};
        inline string getDailyNocTime() const { DARABONBA_PTR_GET_DEFAULT(dailyNocTime_, "") };
        inline AlertIMRobots& setDailyNocTime(string dailyNocTime) { DARABONBA_PTR_SET_VALUE(dailyNocTime_, dailyNocTime) };


        // dingSignKey Field Functions 
        bool hasDingSignKey() const { return this->dingSignKey_ != nullptr;};
        void deleteDingSignKey() { this->dingSignKey_ = nullptr;};
        inline string getDingSignKey() const { DARABONBA_PTR_GET_DEFAULT(dingSignKey_, "") };
        inline AlertIMRobots& setDingSignKey(string dingSignKey) { DARABONBA_PTR_SET_VALUE(dingSignKey_, dingSignKey) };


        // dispatchRules Field Functions 
        bool hasDispatchRules() const { return this->dispatchRules_ != nullptr;};
        void deleteDispatchRules() { this->dispatchRules_ = nullptr;};
        inline const vector<AlertIMRobots::DispatchRules> & getDispatchRules() const { DARABONBA_PTR_GET_CONST(dispatchRules_, vector<AlertIMRobots::DispatchRules>) };
        inline vector<AlertIMRobots::DispatchRules> getDispatchRules() { DARABONBA_PTR_GET(dispatchRules_, vector<AlertIMRobots::DispatchRules>) };
        inline AlertIMRobots& setDispatchRules(const vector<AlertIMRobots::DispatchRules> & dispatchRules) { DARABONBA_PTR_SET_VALUE(dispatchRules_, dispatchRules) };
        inline AlertIMRobots& setDispatchRules(vector<AlertIMRobots::DispatchRules> && dispatchRules) { DARABONBA_PTR_SET_RVALUE(dispatchRules_, dispatchRules) };


        // robotAddr Field Functions 
        bool hasRobotAddr() const { return this->robotAddr_ != nullptr;};
        void deleteRobotAddr() { this->robotAddr_ = nullptr;};
        inline string getRobotAddr() const { DARABONBA_PTR_GET_DEFAULT(robotAddr_, "") };
        inline AlertIMRobots& setRobotAddr(string robotAddr) { DARABONBA_PTR_SET_VALUE(robotAddr_, robotAddr) };


        // robotId Field Functions 
        bool hasRobotId() const { return this->robotId_ != nullptr;};
        void deleteRobotId() { this->robotId_ = nullptr;};
        inline float getRobotId() const { DARABONBA_PTR_GET_DEFAULT(robotId_, 0.0) };
        inline AlertIMRobots& setRobotId(float robotId) { DARABONBA_PTR_SET_VALUE(robotId_, robotId) };


        // robotName Field Functions 
        bool hasRobotName() const { return this->robotName_ != nullptr;};
        void deleteRobotName() { this->robotName_ = nullptr;};
        inline string getRobotName() const { DARABONBA_PTR_GET_DEFAULT(robotName_, "") };
        inline AlertIMRobots& setRobotName(string robotName) { DARABONBA_PTR_SET_VALUE(robotName_, robotName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AlertIMRobots& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The time when the IM chatbot was created.
        shared_ptr<string> createTime_ {};
        // Indicates whether daily statistics are sent. Valid values:
        // 
        // *   `false` (default): Daily statistics are not sent.
        // *   `true`: Daily statistics are sent.
        shared_ptr<bool> dailyNoc_ {};
        // The point in time at which the daily statistics are sent. The information that ARMS sends at the specified points in time includes the total number of alerts generated on the current day, the number of cleared alerts, and the number of alerts to be cleared.
        shared_ptr<string> dailyNocTime_ {};
        // The signature key of DingTalk. If you specify a signature key, DingTalk authentication is performed by using the signature key. If you do not specify a signature key, a whitelist is used for authentication by default. The keyword of the whitelist is **Alert**.
        shared_ptr<string> dingSignKey_ {};
        // The notification policies.
        shared_ptr<vector<AlertIMRobots::DispatchRules>> dispatchRules_ {};
        // The webhook URL of the IM chatbot.
        shared_ptr<string> robotAddr_ {};
        // The ID of the IM chatbot.
        shared_ptr<float> robotId_ {};
        // The name of the IM chatbot.
        shared_ptr<string> robotName_ {};
        // The type of the IM chatbot. Valid values:
        // 
        // *   `dingding`: DingTalk chatbot
        // *   `wechat`: WeCom chatbot
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->alertIMRobots_ == nullptr
        && this->page_ == nullptr && this->size_ == nullptr && this->total_ == nullptr; };
      // alertIMRobots Field Functions 
      bool hasAlertIMRobots() const { return this->alertIMRobots_ != nullptr;};
      void deleteAlertIMRobots() { this->alertIMRobots_ = nullptr;};
      inline const vector<PageBean::AlertIMRobots> & getAlertIMRobots() const { DARABONBA_PTR_GET_CONST(alertIMRobots_, vector<PageBean::AlertIMRobots>) };
      inline vector<PageBean::AlertIMRobots> getAlertIMRobots() { DARABONBA_PTR_GET(alertIMRobots_, vector<PageBean::AlertIMRobots>) };
      inline PageBean& setAlertIMRobots(const vector<PageBean::AlertIMRobots> & alertIMRobots) { DARABONBA_PTR_SET_VALUE(alertIMRobots_, alertIMRobots) };
      inline PageBean& setAlertIMRobots(vector<PageBean::AlertIMRobots> && alertIMRobots) { DARABONBA_PTR_SET_RVALUE(alertIMRobots_, alertIMRobots) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
      inline PageBean& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline PageBean& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline PageBean& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The queried IM chatbots.
      shared_ptr<vector<PageBean::AlertIMRobots>> alertIMRobots_ {};
      // The page number of the returned page.
      shared_ptr<int64_t> page_ {};
      // The number of IM chatbots returned per page.
      shared_ptr<int64_t> size_ {};
      // The total number of queried IM chatbots.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const DescribeIMRobotsResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, DescribeIMRobotsResponseBody::PageBean) };
    inline DescribeIMRobotsResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, DescribeIMRobotsResponseBody::PageBean) };
    inline DescribeIMRobotsResponseBody& setPageBean(const DescribeIMRobotsResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline DescribeIMRobotsResponseBody& setPageBean(DescribeIMRobotsResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIMRobotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned objects.
    shared_ptr<DescribeIMRobotsResponseBody::PageBean> pageBean_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
