// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAEVENTSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAEVENTSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class ListDataEventServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataEventServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataEventServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataEventServicesResponseBody() = default ;
    ListDataEventServicesResponseBody(const ListDataEventServicesResponseBody &) = default ;
    ListDataEventServicesResponseBody(ListDataEventServicesResponseBody &&) = default ;
    ListDataEventServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataEventServicesResponseBody() = default ;
    ListDataEventServicesResponseBody& operator=(const ListDataEventServicesResponseBody &) = default ;
    ListDataEventServicesResponseBody& operator=(ListDataEventServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(ServiceInfos, serviceInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(ServiceInfos, serviceInfos_);
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
      class ServiceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(EventNames, eventNames_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(EventNames, eventNames_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        };
        ServiceInfos() = default ;
        ServiceInfos(const ServiceInfos &) = default ;
        ServiceInfos(ServiceInfos &&) = default ;
        ServiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceInfos() = default ;
        ServiceInfos& operator=(const ServiceInfos &) = default ;
        ServiceInfos& operator=(ServiceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventNames_ == nullptr
        && this->serviceName_ == nullptr; };
        // eventNames Field Functions 
        bool hasEventNames() const { return this->eventNames_ != nullptr;};
        void deleteEventNames() { this->eventNames_ = nullptr;};
        inline const vector<string> & getEventNames() const { DARABONBA_PTR_GET_CONST(eventNames_, vector<string>) };
        inline vector<string> getEventNames() { DARABONBA_PTR_GET(eventNames_, vector<string>) };
        inline ServiceInfos& setEventNames(const vector<string> & eventNames) { DARABONBA_PTR_SET_VALUE(eventNames_, eventNames) };
        inline ServiceInfos& setEventNames(vector<string> && eventNames) { DARABONBA_PTR_SET_RVALUE(eventNames_, eventNames) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline ServiceInfos& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      protected:
        shared_ptr<vector<string>> eventNames_ {};
        shared_ptr<string> serviceName_ {};
      };

      virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->serviceInfos_ == nullptr; };
      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // serviceInfos Field Functions 
      bool hasServiceInfos() const { return this->serviceInfos_ != nullptr;};
      void deleteServiceInfos() { this->serviceInfos_ = nullptr;};
      inline const vector<Data::ServiceInfos> & getServiceInfos() const { DARABONBA_PTR_GET_CONST(serviceInfos_, vector<Data::ServiceInfos>) };
      inline vector<Data::ServiceInfos> getServiceInfos() { DARABONBA_PTR_GET(serviceInfos_, vector<Data::ServiceInfos>) };
      inline Data& setServiceInfos(const vector<Data::ServiceInfos> & serviceInfos) { DARABONBA_PTR_SET_VALUE(serviceInfos_, serviceInfos) };
      inline Data& setServiceInfos(vector<Data::ServiceInfos> && serviceInfos) { DARABONBA_PTR_SET_RVALUE(serviceInfos_, serviceInfos) };


    protected:
      shared_ptr<int32_t> maxResults_ {};
      shared_ptr<string> nextToken_ {};
      shared_ptr<vector<Data::ServiceInfos>> serviceInfos_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListDataEventServicesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListDataEventServicesResponseBody::Data) };
    inline ListDataEventServicesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListDataEventServicesResponseBody::Data) };
    inline ListDataEventServicesResponseBody& setData(const ListDataEventServicesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDataEventServicesResponseBody& setData(ListDataEventServicesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataEventServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListDataEventServicesResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
