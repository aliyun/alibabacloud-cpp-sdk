// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPACONNDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPACONNDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainIpaConnDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainIpaConnDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionDataPerInterval, connectionDataPerInterval_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainIpaConnDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionDataPerInterval, connectionDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainIpaConnDataResponseBody() = default ;
    DescribeDcdnDomainIpaConnDataResponseBody(const DescribeDcdnDomainIpaConnDataResponseBody &) = default ;
    DescribeDcdnDomainIpaConnDataResponseBody(DescribeDcdnDomainIpaConnDataResponseBody &&) = default ;
    DescribeDcdnDomainIpaConnDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainIpaConnDataResponseBody() = default ;
    DescribeDcdnDomainIpaConnDataResponseBody& operator=(const DescribeDcdnDomainIpaConnDataResponseBody &) = default ;
    DescribeDcdnDomainIpaConnDataResponseBody& operator=(DescribeDcdnDomainIpaConnDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConnectionDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConnectionDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, ConnectionDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      ConnectionDataPerInterval() = default ;
      ConnectionDataPerInterval(const ConnectionDataPerInterval &) = default ;
      ConnectionDataPerInterval(ConnectionDataPerInterval &&) = default ;
      ConnectionDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConnectionDataPerInterval() = default ;
      ConnectionDataPerInterval& operator=(const ConnectionDataPerInterval &) = default ;
      ConnectionDataPerInterval& operator=(ConnectionDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(Connections, connections_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(Connections, connections_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        DataModule() = default ;
        DataModule(const DataModule &) = default ;
        DataModule(DataModule &&) = default ;
        DataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataModule() = default ;
        DataModule& operator=(const DataModule &) = default ;
        DataModule& operator=(DataModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->connections_ == nullptr
        && this->domain_ == nullptr && this->timeStamp_ == nullptr; };
        // connections Field Functions 
        bool hasConnections() const { return this->connections_ != nullptr;};
        void deleteConnections() { this->connections_ = nullptr;};
        inline int64_t getConnections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0L) };
        inline DataModule& setConnections(int64_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline DataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The number of IPA user connections.
        shared_ptr<int64_t> connections_ {};
        // The accelerated domain name.
        shared_ptr<string> domain_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<ConnectionDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<ConnectionDataPerInterval::DataModule>) };
      inline vector<ConnectionDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<ConnectionDataPerInterval::DataModule>) };
      inline ConnectionDataPerInterval& setDataModule(const vector<ConnectionDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline ConnectionDataPerInterval& setDataModule(vector<ConnectionDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<ConnectionDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->connectionDataPerInterval_ == nullptr
        && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // connectionDataPerInterval Field Functions 
    bool hasConnectionDataPerInterval() const { return this->connectionDataPerInterval_ != nullptr;};
    void deleteConnectionDataPerInterval() { this->connectionDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainIpaConnDataResponseBody::ConnectionDataPerInterval & getConnectionDataPerInterval() const { DARABONBA_PTR_GET_CONST(connectionDataPerInterval_, DescribeDcdnDomainIpaConnDataResponseBody::ConnectionDataPerInterval) };
    inline DescribeDcdnDomainIpaConnDataResponseBody::ConnectionDataPerInterval getConnectionDataPerInterval() { DARABONBA_PTR_GET(connectionDataPerInterval_, DescribeDcdnDomainIpaConnDataResponseBody::ConnectionDataPerInterval) };
    inline DescribeDcdnDomainIpaConnDataResponseBody& setConnectionDataPerInterval(const DescribeDcdnDomainIpaConnDataResponseBody::ConnectionDataPerInterval & connectionDataPerInterval) { DARABONBA_PTR_SET_VALUE(connectionDataPerInterval_, connectionDataPerInterval) };
    inline DescribeDcdnDomainIpaConnDataResponseBody& setConnectionDataPerInterval(DescribeDcdnDomainIpaConnDataResponseBody::ConnectionDataPerInterval && connectionDataPerInterval) { DARABONBA_PTR_SET_RVALUE(connectionDataPerInterval_, connectionDataPerInterval) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainIpaConnDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainIpaConnDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainIpaConnDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The number of user connections at each time interval.
    shared_ptr<DescribeDcdnDomainIpaConnDataResponseBody::ConnectionDataPerInterval> connectionDataPerInterval_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
