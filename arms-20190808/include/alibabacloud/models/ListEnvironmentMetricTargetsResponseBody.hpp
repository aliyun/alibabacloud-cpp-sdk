// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTMETRICTARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTMETRICTARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentMetricTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentMetricTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentMetricTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEnvironmentMetricTargetsResponseBody() = default ;
    ListEnvironmentMetricTargetsResponseBody(const ListEnvironmentMetricTargetsResponseBody &) = default ;
    ListEnvironmentMetricTargetsResponseBody(ListEnvironmentMetricTargetsResponseBody &&) = default ;
    ListEnvironmentMetricTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentMetricTargetsResponseBody() = default ;
    ListEnvironmentMetricTargetsResponseBody& operator=(const ListEnvironmentMetricTargetsResponseBody &) = default ;
    ListEnvironmentMetricTargetsResponseBody& operator=(ListEnvironmentMetricTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActiveTargets, activeTargets_);
        DARABONBA_PTR_TO_JSON(DroppedTargets, droppedTargets_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActiveTargets, activeTargets_);
        DARABONBA_PTR_FROM_JSON(DroppedTargets, droppedTargets_);
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
      class DroppedTargets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DroppedTargets& obj) { 
          DARABONBA_PTR_TO_JSON(DiscoveredLabels, discoveredLabels_);
          DARABONBA_PTR_TO_JSON(GlobalUrl, globalUrl_);
          DARABONBA_PTR_TO_JSON(Health, health_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(LastError, lastError_);
          DARABONBA_PTR_TO_JSON(LastScrape, lastScrape_);
          DARABONBA_PTR_TO_JSON(LastScrapeDuration, lastScrapeDuration_);
          DARABONBA_PTR_TO_JSON(LastScrapeSeries, lastScrapeSeries_);
          DARABONBA_PTR_TO_JSON(ScrapePool, scrapePool_);
          DARABONBA_PTR_TO_JSON(ScrapeUrl, scrapeUrl_);
        };
        friend void from_json(const Darabonba::Json& j, DroppedTargets& obj) { 
          DARABONBA_PTR_FROM_JSON(DiscoveredLabels, discoveredLabels_);
          DARABONBA_PTR_FROM_JSON(GlobalUrl, globalUrl_);
          DARABONBA_PTR_FROM_JSON(Health, health_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(LastError, lastError_);
          DARABONBA_PTR_FROM_JSON(LastScrape, lastScrape_);
          DARABONBA_PTR_FROM_JSON(LastScrapeDuration, lastScrapeDuration_);
          DARABONBA_PTR_FROM_JSON(LastScrapeSeries, lastScrapeSeries_);
          DARABONBA_PTR_FROM_JSON(ScrapePool, scrapePool_);
          DARABONBA_PTR_FROM_JSON(ScrapeUrl, scrapeUrl_);
        };
        DroppedTargets() = default ;
        DroppedTargets(const DroppedTargets &) = default ;
        DroppedTargets(DroppedTargets &&) = default ;
        DroppedTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DroppedTargets() = default ;
        DroppedTargets& operator=(const DroppedTargets &) = default ;
        DroppedTargets& operator=(DroppedTargets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->discoveredLabels_ == nullptr
        && this->globalUrl_ == nullptr && this->health_ == nullptr && this->labels_ == nullptr && this->lastError_ == nullptr && this->lastScrape_ == nullptr
        && this->lastScrapeDuration_ == nullptr && this->lastScrapeSeries_ == nullptr && this->scrapePool_ == nullptr && this->scrapeUrl_ == nullptr; };
        // discoveredLabels Field Functions 
        bool hasDiscoveredLabels() const { return this->discoveredLabels_ != nullptr;};
        void deleteDiscoveredLabels() { this->discoveredLabels_ = nullptr;};
        inline const map<string, string> & getDiscoveredLabels() const { DARABONBA_PTR_GET_CONST(discoveredLabels_, map<string, string>) };
        inline map<string, string> getDiscoveredLabels() { DARABONBA_PTR_GET(discoveredLabels_, map<string, string>) };
        inline DroppedTargets& setDiscoveredLabels(const map<string, string> & discoveredLabels) { DARABONBA_PTR_SET_VALUE(discoveredLabels_, discoveredLabels) };
        inline DroppedTargets& setDiscoveredLabels(map<string, string> && discoveredLabels) { DARABONBA_PTR_SET_RVALUE(discoveredLabels_, discoveredLabels) };


        // globalUrl Field Functions 
        bool hasGlobalUrl() const { return this->globalUrl_ != nullptr;};
        void deleteGlobalUrl() { this->globalUrl_ = nullptr;};
        inline string getGlobalUrl() const { DARABONBA_PTR_GET_DEFAULT(globalUrl_, "") };
        inline DroppedTargets& setGlobalUrl(string globalUrl) { DARABONBA_PTR_SET_VALUE(globalUrl_, globalUrl) };


        // health Field Functions 
        bool hasHealth() const { return this->health_ != nullptr;};
        void deleteHealth() { this->health_ = nullptr;};
        inline string getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
        inline DroppedTargets& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
        inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
        inline DroppedTargets& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline DroppedTargets& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // lastError Field Functions 
        bool hasLastError() const { return this->lastError_ != nullptr;};
        void deleteLastError() { this->lastError_ = nullptr;};
        inline string getLastError() const { DARABONBA_PTR_GET_DEFAULT(lastError_, "") };
        inline DroppedTargets& setLastError(string lastError) { DARABONBA_PTR_SET_VALUE(lastError_, lastError) };


        // lastScrape Field Functions 
        bool hasLastScrape() const { return this->lastScrape_ != nullptr;};
        void deleteLastScrape() { this->lastScrape_ = nullptr;};
        inline string getLastScrape() const { DARABONBA_PTR_GET_DEFAULT(lastScrape_, "") };
        inline DroppedTargets& setLastScrape(string lastScrape) { DARABONBA_PTR_SET_VALUE(lastScrape_, lastScrape) };


        // lastScrapeDuration Field Functions 
        bool hasLastScrapeDuration() const { return this->lastScrapeDuration_ != nullptr;};
        void deleteLastScrapeDuration() { this->lastScrapeDuration_ = nullptr;};
        inline double getLastScrapeDuration() const { DARABONBA_PTR_GET_DEFAULT(lastScrapeDuration_, 0.0) };
        inline DroppedTargets& setLastScrapeDuration(double lastScrapeDuration) { DARABONBA_PTR_SET_VALUE(lastScrapeDuration_, lastScrapeDuration) };


        // lastScrapeSeries Field Functions 
        bool hasLastScrapeSeries() const { return this->lastScrapeSeries_ != nullptr;};
        void deleteLastScrapeSeries() { this->lastScrapeSeries_ = nullptr;};
        inline int64_t getLastScrapeSeries() const { DARABONBA_PTR_GET_DEFAULT(lastScrapeSeries_, 0L) };
        inline DroppedTargets& setLastScrapeSeries(int64_t lastScrapeSeries) { DARABONBA_PTR_SET_VALUE(lastScrapeSeries_, lastScrapeSeries) };


        // scrapePool Field Functions 
        bool hasScrapePool() const { return this->scrapePool_ != nullptr;};
        void deleteScrapePool() { this->scrapePool_ = nullptr;};
        inline string getScrapePool() const { DARABONBA_PTR_GET_DEFAULT(scrapePool_, "") };
        inline DroppedTargets& setScrapePool(string scrapePool) { DARABONBA_PTR_SET_VALUE(scrapePool_, scrapePool) };


        // scrapeUrl Field Functions 
        bool hasScrapeUrl() const { return this->scrapeUrl_ != nullptr;};
        void deleteScrapeUrl() { this->scrapeUrl_ = nullptr;};
        inline string getScrapeUrl() const { DARABONBA_PTR_GET_DEFAULT(scrapeUrl_, "") };
        inline DroppedTargets& setScrapeUrl(string scrapeUrl) { DARABONBA_PTR_SET_VALUE(scrapeUrl_, scrapeUrl) };


      protected:
        // The tags used for service discovery.
        shared_ptr<map<string, string>> discoveredLabels_ {};
        // The URL of the target.
        shared_ptr<string> globalUrl_ {};
        // The health status.
        shared_ptr<string> health_ {};
        // The tags.
        shared_ptr<map<string, string>> labels_ {};
        // The last error message.
        shared_ptr<string> lastError_ {};
        // The last collection time.
        shared_ptr<string> lastScrape_ {};
        // The duration of the last collection.
        shared_ptr<double> lastScrapeDuration_ {};
        // The amount of metrics in the last collection.
        shared_ptr<int64_t> lastScrapeSeries_ {};
        // The name of the collection.
        shared_ptr<string> scrapePool_ {};
        // The URL of the collection.
        shared_ptr<string> scrapeUrl_ {};
      };

      class ActiveTargets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ActiveTargets& obj) { 
          DARABONBA_PTR_TO_JSON(DiscoveredLabels, discoveredLabels_);
          DARABONBA_PTR_TO_JSON(GlobalUrl, globalUrl_);
          DARABONBA_PTR_TO_JSON(Health, health_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(LastError, lastError_);
          DARABONBA_PTR_TO_JSON(LastScrape, lastScrape_);
          DARABONBA_PTR_TO_JSON(LastScrapeDuration, lastScrapeDuration_);
          DARABONBA_PTR_TO_JSON(LastScrapeSeries, lastScrapeSeries_);
          DARABONBA_PTR_TO_JSON(ScrapePool, scrapePool_);
          DARABONBA_PTR_TO_JSON(ScrapeUrl, scrapeUrl_);
        };
        friend void from_json(const Darabonba::Json& j, ActiveTargets& obj) { 
          DARABONBA_PTR_FROM_JSON(DiscoveredLabels, discoveredLabels_);
          DARABONBA_PTR_FROM_JSON(GlobalUrl, globalUrl_);
          DARABONBA_PTR_FROM_JSON(Health, health_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(LastError, lastError_);
          DARABONBA_PTR_FROM_JSON(LastScrape, lastScrape_);
          DARABONBA_PTR_FROM_JSON(LastScrapeDuration, lastScrapeDuration_);
          DARABONBA_PTR_FROM_JSON(LastScrapeSeries, lastScrapeSeries_);
          DARABONBA_PTR_FROM_JSON(ScrapePool, scrapePool_);
          DARABONBA_PTR_FROM_JSON(ScrapeUrl, scrapeUrl_);
        };
        ActiveTargets() = default ;
        ActiveTargets(const ActiveTargets &) = default ;
        ActiveTargets(ActiveTargets &&) = default ;
        ActiveTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ActiveTargets() = default ;
        ActiveTargets& operator=(const ActiveTargets &) = default ;
        ActiveTargets& operator=(ActiveTargets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->discoveredLabels_ == nullptr
        && this->globalUrl_ == nullptr && this->health_ == nullptr && this->labels_ == nullptr && this->lastError_ == nullptr && this->lastScrape_ == nullptr
        && this->lastScrapeDuration_ == nullptr && this->lastScrapeSeries_ == nullptr && this->scrapePool_ == nullptr && this->scrapeUrl_ == nullptr; };
        // discoveredLabels Field Functions 
        bool hasDiscoveredLabels() const { return this->discoveredLabels_ != nullptr;};
        void deleteDiscoveredLabels() { this->discoveredLabels_ = nullptr;};
        inline const map<string, string> & getDiscoveredLabels() const { DARABONBA_PTR_GET_CONST(discoveredLabels_, map<string, string>) };
        inline map<string, string> getDiscoveredLabels() { DARABONBA_PTR_GET(discoveredLabels_, map<string, string>) };
        inline ActiveTargets& setDiscoveredLabels(const map<string, string> & discoveredLabels) { DARABONBA_PTR_SET_VALUE(discoveredLabels_, discoveredLabels) };
        inline ActiveTargets& setDiscoveredLabels(map<string, string> && discoveredLabels) { DARABONBA_PTR_SET_RVALUE(discoveredLabels_, discoveredLabels) };


        // globalUrl Field Functions 
        bool hasGlobalUrl() const { return this->globalUrl_ != nullptr;};
        void deleteGlobalUrl() { this->globalUrl_ = nullptr;};
        inline string getGlobalUrl() const { DARABONBA_PTR_GET_DEFAULT(globalUrl_, "") };
        inline ActiveTargets& setGlobalUrl(string globalUrl) { DARABONBA_PTR_SET_VALUE(globalUrl_, globalUrl) };


        // health Field Functions 
        bool hasHealth() const { return this->health_ != nullptr;};
        void deleteHealth() { this->health_ = nullptr;};
        inline string getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
        inline ActiveTargets& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const map<string, string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, map<string, string>) };
        inline map<string, string> getLabels() { DARABONBA_PTR_GET(labels_, map<string, string>) };
        inline ActiveTargets& setLabels(const map<string, string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline ActiveTargets& setLabels(map<string, string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // lastError Field Functions 
        bool hasLastError() const { return this->lastError_ != nullptr;};
        void deleteLastError() { this->lastError_ = nullptr;};
        inline string getLastError() const { DARABONBA_PTR_GET_DEFAULT(lastError_, "") };
        inline ActiveTargets& setLastError(string lastError) { DARABONBA_PTR_SET_VALUE(lastError_, lastError) };


        // lastScrape Field Functions 
        bool hasLastScrape() const { return this->lastScrape_ != nullptr;};
        void deleteLastScrape() { this->lastScrape_ = nullptr;};
        inline string getLastScrape() const { DARABONBA_PTR_GET_DEFAULT(lastScrape_, "") };
        inline ActiveTargets& setLastScrape(string lastScrape) { DARABONBA_PTR_SET_VALUE(lastScrape_, lastScrape) };


        // lastScrapeDuration Field Functions 
        bool hasLastScrapeDuration() const { return this->lastScrapeDuration_ != nullptr;};
        void deleteLastScrapeDuration() { this->lastScrapeDuration_ = nullptr;};
        inline double getLastScrapeDuration() const { DARABONBA_PTR_GET_DEFAULT(lastScrapeDuration_, 0.0) };
        inline ActiveTargets& setLastScrapeDuration(double lastScrapeDuration) { DARABONBA_PTR_SET_VALUE(lastScrapeDuration_, lastScrapeDuration) };


        // lastScrapeSeries Field Functions 
        bool hasLastScrapeSeries() const { return this->lastScrapeSeries_ != nullptr;};
        void deleteLastScrapeSeries() { this->lastScrapeSeries_ = nullptr;};
        inline int64_t getLastScrapeSeries() const { DARABONBA_PTR_GET_DEFAULT(lastScrapeSeries_, 0L) };
        inline ActiveTargets& setLastScrapeSeries(int64_t lastScrapeSeries) { DARABONBA_PTR_SET_VALUE(lastScrapeSeries_, lastScrapeSeries) };


        // scrapePool Field Functions 
        bool hasScrapePool() const { return this->scrapePool_ != nullptr;};
        void deleteScrapePool() { this->scrapePool_ = nullptr;};
        inline string getScrapePool() const { DARABONBA_PTR_GET_DEFAULT(scrapePool_, "") };
        inline ActiveTargets& setScrapePool(string scrapePool) { DARABONBA_PTR_SET_VALUE(scrapePool_, scrapePool) };


        // scrapeUrl Field Functions 
        bool hasScrapeUrl() const { return this->scrapeUrl_ != nullptr;};
        void deleteScrapeUrl() { this->scrapeUrl_ = nullptr;};
        inline string getScrapeUrl() const { DARABONBA_PTR_GET_DEFAULT(scrapeUrl_, "") };
        inline ActiveTargets& setScrapeUrl(string scrapeUrl) { DARABONBA_PTR_SET_VALUE(scrapeUrl_, scrapeUrl) };


      protected:
        // The tags used for service discovery.
        shared_ptr<map<string, string>> discoveredLabels_ {};
        // The URL of the target.
        shared_ptr<string> globalUrl_ {};
        // The health status.
        shared_ptr<string> health_ {};
        // The tags.
        shared_ptr<map<string, string>> labels_ {};
        // The last error message.
        shared_ptr<string> lastError_ {};
        // The last collection time.
        shared_ptr<string> lastScrape_ {};
        // The duration of the last collection.
        shared_ptr<double> lastScrapeDuration_ {};
        // The amount of metrics in the last collection.
        shared_ptr<int64_t> lastScrapeSeries_ {};
        // The name of the collection.
        shared_ptr<string> scrapePool_ {};
        // The URL of the collection.
        shared_ptr<string> scrapeUrl_ {};
      };

      virtual bool empty() const override { return this->activeTargets_ == nullptr
        && this->droppedTargets_ == nullptr; };
      // activeTargets Field Functions 
      bool hasActiveTargets() const { return this->activeTargets_ != nullptr;};
      void deleteActiveTargets() { this->activeTargets_ = nullptr;};
      inline const vector<Data::ActiveTargets> & getActiveTargets() const { DARABONBA_PTR_GET_CONST(activeTargets_, vector<Data::ActiveTargets>) };
      inline vector<Data::ActiveTargets> getActiveTargets() { DARABONBA_PTR_GET(activeTargets_, vector<Data::ActiveTargets>) };
      inline Data& setActiveTargets(const vector<Data::ActiveTargets> & activeTargets) { DARABONBA_PTR_SET_VALUE(activeTargets_, activeTargets) };
      inline Data& setActiveTargets(vector<Data::ActiveTargets> && activeTargets) { DARABONBA_PTR_SET_RVALUE(activeTargets_, activeTargets) };


      // droppedTargets Field Functions 
      bool hasDroppedTargets() const { return this->droppedTargets_ != nullptr;};
      void deleteDroppedTargets() { this->droppedTargets_ = nullptr;};
      inline const vector<Data::DroppedTargets> & getDroppedTargets() const { DARABONBA_PTR_GET_CONST(droppedTargets_, vector<Data::DroppedTargets>) };
      inline vector<Data::DroppedTargets> getDroppedTargets() { DARABONBA_PTR_GET(droppedTargets_, vector<Data::DroppedTargets>) };
      inline Data& setDroppedTargets(const vector<Data::DroppedTargets> & droppedTargets) { DARABONBA_PTR_SET_VALUE(droppedTargets_, droppedTargets) };
      inline Data& setDroppedTargets(vector<Data::DroppedTargets> && droppedTargets) { DARABONBA_PTR_SET_RVALUE(droppedTargets_, droppedTargets) };


    protected:
      // The active targets.
      shared_ptr<vector<Data::ActiveTargets>> activeTargets_ {};
      // The deleted targets.
      shared_ptr<vector<Data::DroppedTargets>> droppedTargets_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListEnvironmentMetricTargetsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListEnvironmentMetricTargetsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListEnvironmentMetricTargetsResponseBody::Data) };
    inline ListEnvironmentMetricTargetsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListEnvironmentMetricTargetsResponseBody::Data) };
    inline ListEnvironmentMetricTargetsResponseBody& setData(const ListEnvironmentMetricTargetsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListEnvironmentMetricTargetsResponseBody& setData(ListEnvironmentMetricTargetsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEnvironmentMetricTargetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnvironmentMetricTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEnvironmentMetricTargetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The struct returned.
    shared_ptr<ListEnvironmentMetricTargetsResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`
    // *   `false`
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
