// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEDELAYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEDELAYCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveDelayConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveDelayConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DelayConfigList, delayConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveDelayConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DelayConfigList, delayConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListLiveDelayConfigResponseBody() = default ;
    ListLiveDelayConfigResponseBody(const ListLiveDelayConfigResponseBody &) = default ;
    ListLiveDelayConfigResponseBody(ListLiveDelayConfigResponseBody &&) = default ;
    ListLiveDelayConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveDelayConfigResponseBody() = default ;
    ListLiveDelayConfigResponseBody& operator=(const ListLiveDelayConfigResponseBody &) = default ;
    ListLiveDelayConfigResponseBody& operator=(ListLiveDelayConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DelayConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DelayConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(DelayConfig, delayConfig_);
      };
      friend void from_json(const Darabonba::Json& j, DelayConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(DelayConfig, delayConfig_);
      };
      DelayConfigList() = default ;
      DelayConfigList(const DelayConfigList &) = default ;
      DelayConfigList(DelayConfigList &&) = default ;
      DelayConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DelayConfigList() = default ;
      DelayConfigList& operator=(const DelayConfigList &) = default ;
      DelayConfigList& operator=(DelayConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DelayConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DelayConfig& obj) { 
          DARABONBA_PTR_TO_JSON(App, app_);
          DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Stream, stream_);
          DARABONBA_PTR_TO_JSON(TaskTriggerMode, taskTriggerMode_);
        };
        friend void from_json(const Darabonba::Json& j, DelayConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(App, app_);
          DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Stream, stream_);
          DARABONBA_PTR_FROM_JSON(TaskTriggerMode, taskTriggerMode_);
        };
        DelayConfig() = default ;
        DelayConfig(const DelayConfig &) = default ;
        DelayConfig(DelayConfig &&) = default ;
        DelayConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DelayConfig() = default ;
        DelayConfig& operator=(const DelayConfig &) = default ;
        DelayConfig& operator=(DelayConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->app_ == nullptr
        && this->delayTime_ == nullptr && this->domain_ == nullptr && this->stream_ == nullptr && this->taskTriggerMode_ == nullptr; };
        // app Field Functions 
        bool hasApp() const { return this->app_ != nullptr;};
        void deleteApp() { this->app_ = nullptr;};
        inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
        inline DelayConfig& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


        // delayTime Field Functions 
        bool hasDelayTime() const { return this->delayTime_ != nullptr;};
        void deleteDelayTime() { this->delayTime_ = nullptr;};
        inline string getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, "") };
        inline DelayConfig& setDelayTime(string delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DelayConfig& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // stream Field Functions 
        bool hasStream() const { return this->stream_ != nullptr;};
        void deleteStream() { this->stream_ = nullptr;};
        inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
        inline DelayConfig& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


        // taskTriggerMode Field Functions 
        bool hasTaskTriggerMode() const { return this->taskTriggerMode_ != nullptr;};
        void deleteTaskTriggerMode() { this->taskTriggerMode_ = nullptr;};
        inline string getTaskTriggerMode() const { DARABONBA_PTR_GET_DEFAULT(taskTriggerMode_, "") };
        inline DelayConfig& setTaskTriggerMode(string taskTriggerMode) { DARABONBA_PTR_SET_VALUE(taskTriggerMode_, taskTriggerMode) };


      protected:
        shared_ptr<string> app_ {};
        shared_ptr<string> delayTime_ {};
        shared_ptr<string> domain_ {};
        shared_ptr<string> stream_ {};
        shared_ptr<string> taskTriggerMode_ {};
      };

      virtual bool empty() const override { return this->delayConfig_ == nullptr; };
      // delayConfig Field Functions 
      bool hasDelayConfig() const { return this->delayConfig_ != nullptr;};
      void deleteDelayConfig() { this->delayConfig_ = nullptr;};
      inline const vector<DelayConfigList::DelayConfig> & getDelayConfig() const { DARABONBA_PTR_GET_CONST(delayConfig_, vector<DelayConfigList::DelayConfig>) };
      inline vector<DelayConfigList::DelayConfig> getDelayConfig() { DARABONBA_PTR_GET(delayConfig_, vector<DelayConfigList::DelayConfig>) };
      inline DelayConfigList& setDelayConfig(const vector<DelayConfigList::DelayConfig> & delayConfig) { DARABONBA_PTR_SET_VALUE(delayConfig_, delayConfig) };
      inline DelayConfigList& setDelayConfig(vector<DelayConfigList::DelayConfig> && delayConfig) { DARABONBA_PTR_SET_RVALUE(delayConfig_, delayConfig) };


    protected:
      shared_ptr<vector<DelayConfigList::DelayConfig>> delayConfig_ {};
    };

    virtual bool empty() const override { return this->delayConfigList_ == nullptr
        && this->requestId_ == nullptr && this->total_ == nullptr; };
    // delayConfigList Field Functions 
    bool hasDelayConfigList() const { return this->delayConfigList_ != nullptr;};
    void deleteDelayConfigList() { this->delayConfigList_ = nullptr;};
    inline const ListLiveDelayConfigResponseBody::DelayConfigList & getDelayConfigList() const { DARABONBA_PTR_GET_CONST(delayConfigList_, ListLiveDelayConfigResponseBody::DelayConfigList) };
    inline ListLiveDelayConfigResponseBody::DelayConfigList getDelayConfigList() { DARABONBA_PTR_GET(delayConfigList_, ListLiveDelayConfigResponseBody::DelayConfigList) };
    inline ListLiveDelayConfigResponseBody& setDelayConfigList(const ListLiveDelayConfigResponseBody::DelayConfigList & delayConfigList) { DARABONBA_PTR_SET_VALUE(delayConfigList_, delayConfigList) };
    inline ListLiveDelayConfigResponseBody& setDelayConfigList(ListLiveDelayConfigResponseBody::DelayConfigList && delayConfigList) { DARABONBA_PTR_SET_RVALUE(delayConfigList_, delayConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveDelayConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListLiveDelayConfigResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<ListLiveDelayConfigResponseBody::DelayConfigList> delayConfigList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of stream delay configurations.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
