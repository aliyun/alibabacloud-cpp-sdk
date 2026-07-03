// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGONLINECLIENTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGONLINECLIENTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSagOnlineClientStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagOnlineClientStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SagStatistics, sagStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagOnlineClientStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SagStatistics, sagStatistics_);
    };
    DescribeSagOnlineClientStatisticsResponseBody() = default ;
    DescribeSagOnlineClientStatisticsResponseBody(const DescribeSagOnlineClientStatisticsResponseBody &) = default ;
    DescribeSagOnlineClientStatisticsResponseBody(DescribeSagOnlineClientStatisticsResponseBody &&) = default ;
    DescribeSagOnlineClientStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagOnlineClientStatisticsResponseBody() = default ;
    DescribeSagOnlineClientStatisticsResponseBody& operator=(const DescribeSagOnlineClientStatisticsResponseBody &) = default ;
    DescribeSagOnlineClientStatisticsResponseBody& operator=(DescribeSagOnlineClientStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SagStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SagStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      };
      friend void from_json(const Darabonba::Json& j, SagStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      };
      SagStatistics() = default ;
      SagStatistics(const SagStatistics &) = default ;
      SagStatistics(SagStatistics &&) = default ;
      SagStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SagStatistics() = default ;
      SagStatistics& operator=(const SagStatistics &) = default ;
      SagStatistics& operator=(SagStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Statistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
          DARABONBA_PTR_TO_JSON(OnlineCount, onlineCount_);
          DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
        };
        friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
          DARABONBA_PTR_FROM_JSON(OnlineCount, onlineCount_);
          DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
        };
        Statistics() = default ;
        Statistics(const Statistics &) = default ;
        Statistics(Statistics &&) = default ;
        Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistics() = default ;
        Statistics& operator=(const Statistics &) = default ;
        Statistics& operator=(Statistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->onlineCount_ == nullptr
        && this->smartAGId_ == nullptr; };
        // onlineCount Field Functions 
        bool hasOnlineCount() const { return this->onlineCount_ != nullptr;};
        void deleteOnlineCount() { this->onlineCount_ = nullptr;};
        inline string getOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(onlineCount_, "") };
        inline Statistics& setOnlineCount(string onlineCount) { DARABONBA_PTR_SET_VALUE(onlineCount_, onlineCount) };


        // smartAGId Field Functions 
        bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
        void deleteSmartAGId() { this->smartAGId_ = nullptr;};
        inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
        inline Statistics& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


      protected:
        shared_ptr<string> onlineCount_ {};
        shared_ptr<string> smartAGId_ {};
      };

      virtual bool empty() const override { return this->statistics_ == nullptr; };
      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline const vector<SagStatistics::Statistics> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<SagStatistics::Statistics>) };
      inline vector<SagStatistics::Statistics> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<SagStatistics::Statistics>) };
      inline SagStatistics& setStatistics(const vector<SagStatistics::Statistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
      inline SagStatistics& setStatistics(vector<SagStatistics::Statistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    protected:
      shared_ptr<vector<SagStatistics::Statistics>> statistics_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sagStatistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagOnlineClientStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sagStatistics Field Functions 
    bool hasSagStatistics() const { return this->sagStatistics_ != nullptr;};
    void deleteSagStatistics() { this->sagStatistics_ = nullptr;};
    inline const DescribeSagOnlineClientStatisticsResponseBody::SagStatistics & getSagStatistics() const { DARABONBA_PTR_GET_CONST(sagStatistics_, DescribeSagOnlineClientStatisticsResponseBody::SagStatistics) };
    inline DescribeSagOnlineClientStatisticsResponseBody::SagStatistics getSagStatistics() { DARABONBA_PTR_GET(sagStatistics_, DescribeSagOnlineClientStatisticsResponseBody::SagStatistics) };
    inline DescribeSagOnlineClientStatisticsResponseBody& setSagStatistics(const DescribeSagOnlineClientStatisticsResponseBody::SagStatistics & sagStatistics) { DARABONBA_PTR_SET_VALUE(sagStatistics_, sagStatistics) };
    inline DescribeSagOnlineClientStatisticsResponseBody& setSagStatistics(DescribeSagOnlineClientStatisticsResponseBody::SagStatistics && sagStatistics) { DARABONBA_PTR_SET_RVALUE(sagStatistics_, sagStatistics) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeSagOnlineClientStatisticsResponseBody::SagStatistics> sagStatistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
