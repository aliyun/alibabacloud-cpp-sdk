// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPURLVISITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTopUrlVisitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopUrlVisitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllUrlList, allUrlList_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Url200List, url200List_);
      DARABONBA_PTR_TO_JSON(Url300List, url300List_);
      DARABONBA_PTR_TO_JSON(Url400List, url400List_);
      DARABONBA_PTR_TO_JSON(Url500List, url500List_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopUrlVisitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllUrlList, allUrlList_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Url200List, url200List_);
      DARABONBA_PTR_FROM_JSON(Url300List, url300List_);
      DARABONBA_PTR_FROM_JSON(Url400List, url400List_);
      DARABONBA_PTR_FROM_JSON(Url500List, url500List_);
    };
    DescribeDomainTopUrlVisitResponseBody() = default ;
    DescribeDomainTopUrlVisitResponseBody(const DescribeDomainTopUrlVisitResponseBody &) = default ;
    DescribeDomainTopUrlVisitResponseBody(DescribeDomainTopUrlVisitResponseBody &&) = default ;
    DescribeDomainTopUrlVisitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopUrlVisitResponseBody() = default ;
    DescribeDomainTopUrlVisitResponseBody& operator=(const DescribeDomainTopUrlVisitResponseBody &) = default ;
    DescribeDomainTopUrlVisitResponseBody& operator=(DescribeDomainTopUrlVisitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Url500List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Url500List& obj) { 
        DARABONBA_PTR_TO_JSON(UrlList, urlList_);
      };
      friend void from_json(const Darabonba::Json& j, Url500List& obj) { 
        DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
      };
      Url500List() = default ;
      Url500List(const Url500List &) = default ;
      Url500List(Url500List &&) = default ;
      Url500List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Url500List() = default ;
      Url500List& operator=(const Url500List &) = default ;
      Url500List& operator=(Url500List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UrlList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UrlList& obj) { 
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_TO_JSON(UrlDetail, urlDetail_);
          DARABONBA_PTR_TO_JSON(VisitData, visitData_);
          DARABONBA_PTR_TO_JSON(VisitProportion, visitProportion_);
        };
        friend void from_json(const Darabonba::Json& j, UrlList& obj) { 
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_FROM_JSON(UrlDetail, urlDetail_);
          DARABONBA_PTR_FROM_JSON(VisitData, visitData_);
          DARABONBA_PTR_FROM_JSON(VisitProportion, visitProportion_);
        };
        UrlList() = default ;
        UrlList(const UrlList &) = default ;
        UrlList(UrlList &&) = default ;
        UrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UrlList() = default ;
        UrlList& operator=(const UrlList &) = default ;
        UrlList& operator=(UrlList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flow_ == nullptr
        && this->flowProportion_ == nullptr && this->urlDetail_ == nullptr && this->visitData_ == nullptr && this->visitProportion_ == nullptr; };
        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline UrlList& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // flowProportion Field Functions 
        bool hasFlowProportion() const { return this->flowProportion_ != nullptr;};
        void deleteFlowProportion() { this->flowProportion_ = nullptr;};
        inline float getFlowProportion() const { DARABONBA_PTR_GET_DEFAULT(flowProportion_, 0.0) };
        inline UrlList& setFlowProportion(float flowProportion) { DARABONBA_PTR_SET_VALUE(flowProportion_, flowProportion) };


        // urlDetail Field Functions 
        bool hasUrlDetail() const { return this->urlDetail_ != nullptr;};
        void deleteUrlDetail() { this->urlDetail_ = nullptr;};
        inline string getUrlDetail() const { DARABONBA_PTR_GET_DEFAULT(urlDetail_, "") };
        inline UrlList& setUrlDetail(string urlDetail) { DARABONBA_PTR_SET_VALUE(urlDetail_, urlDetail) };


        // visitData Field Functions 
        bool hasVisitData() const { return this->visitData_ != nullptr;};
        void deleteVisitData() { this->visitData_ = nullptr;};
        inline string getVisitData() const { DARABONBA_PTR_GET_DEFAULT(visitData_, "") };
        inline UrlList& setVisitData(string visitData) { DARABONBA_PTR_SET_VALUE(visitData_, visitData) };


        // visitProportion Field Functions 
        bool hasVisitProportion() const { return this->visitProportion_ != nullptr;};
        void deleteVisitProportion() { this->visitProportion_ = nullptr;};
        inline float getVisitProportion() const { DARABONBA_PTR_GET_DEFAULT(visitProportion_, 0.0) };
        inline UrlList& setVisitProportion(float visitProportion) { DARABONBA_PTR_SET_VALUE(visitProportion_, visitProportion) };


      protected:
        shared_ptr<string> flow_ {};
        shared_ptr<float> flowProportion_ {};
        shared_ptr<string> urlDetail_ {};
        shared_ptr<string> visitData_ {};
        shared_ptr<float> visitProportion_ {};
      };

      virtual bool empty() const override { return this->urlList_ == nullptr; };
      // urlList Field Functions 
      bool hasUrlList() const { return this->urlList_ != nullptr;};
      void deleteUrlList() { this->urlList_ = nullptr;};
      inline const vector<Url500List::UrlList> & getUrlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Url500List::UrlList>) };
      inline vector<Url500List::UrlList> getUrlList() { DARABONBA_PTR_GET(urlList_, vector<Url500List::UrlList>) };
      inline Url500List& setUrlList(const vector<Url500List::UrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
      inline Url500List& setUrlList(vector<Url500List::UrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


    protected:
      shared_ptr<vector<Url500List::UrlList>> urlList_ {};
    };

    class Url400List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Url400List& obj) { 
        DARABONBA_PTR_TO_JSON(UrlList, urlList_);
      };
      friend void from_json(const Darabonba::Json& j, Url400List& obj) { 
        DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
      };
      Url400List() = default ;
      Url400List(const Url400List &) = default ;
      Url400List(Url400List &&) = default ;
      Url400List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Url400List() = default ;
      Url400List& operator=(const Url400List &) = default ;
      Url400List& operator=(Url400List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UrlList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UrlList& obj) { 
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_TO_JSON(UrlDetail, urlDetail_);
          DARABONBA_PTR_TO_JSON(VisitData, visitData_);
          DARABONBA_PTR_TO_JSON(VisitProportion, visitProportion_);
        };
        friend void from_json(const Darabonba::Json& j, UrlList& obj) { 
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_FROM_JSON(UrlDetail, urlDetail_);
          DARABONBA_PTR_FROM_JSON(VisitData, visitData_);
          DARABONBA_PTR_FROM_JSON(VisitProportion, visitProportion_);
        };
        UrlList() = default ;
        UrlList(const UrlList &) = default ;
        UrlList(UrlList &&) = default ;
        UrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UrlList() = default ;
        UrlList& operator=(const UrlList &) = default ;
        UrlList& operator=(UrlList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flow_ == nullptr
        && this->flowProportion_ == nullptr && this->urlDetail_ == nullptr && this->visitData_ == nullptr && this->visitProportion_ == nullptr; };
        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline UrlList& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // flowProportion Field Functions 
        bool hasFlowProportion() const { return this->flowProportion_ != nullptr;};
        void deleteFlowProportion() { this->flowProportion_ = nullptr;};
        inline float getFlowProportion() const { DARABONBA_PTR_GET_DEFAULT(flowProportion_, 0.0) };
        inline UrlList& setFlowProportion(float flowProportion) { DARABONBA_PTR_SET_VALUE(flowProportion_, flowProportion) };


        // urlDetail Field Functions 
        bool hasUrlDetail() const { return this->urlDetail_ != nullptr;};
        void deleteUrlDetail() { this->urlDetail_ = nullptr;};
        inline string getUrlDetail() const { DARABONBA_PTR_GET_DEFAULT(urlDetail_, "") };
        inline UrlList& setUrlDetail(string urlDetail) { DARABONBA_PTR_SET_VALUE(urlDetail_, urlDetail) };


        // visitData Field Functions 
        bool hasVisitData() const { return this->visitData_ != nullptr;};
        void deleteVisitData() { this->visitData_ = nullptr;};
        inline string getVisitData() const { DARABONBA_PTR_GET_DEFAULT(visitData_, "") };
        inline UrlList& setVisitData(string visitData) { DARABONBA_PTR_SET_VALUE(visitData_, visitData) };


        // visitProportion Field Functions 
        bool hasVisitProportion() const { return this->visitProportion_ != nullptr;};
        void deleteVisitProportion() { this->visitProportion_ = nullptr;};
        inline float getVisitProportion() const { DARABONBA_PTR_GET_DEFAULT(visitProportion_, 0.0) };
        inline UrlList& setVisitProportion(float visitProportion) { DARABONBA_PTR_SET_VALUE(visitProportion_, visitProportion) };


      protected:
        shared_ptr<string> flow_ {};
        shared_ptr<float> flowProportion_ {};
        shared_ptr<string> urlDetail_ {};
        shared_ptr<string> visitData_ {};
        shared_ptr<float> visitProportion_ {};
      };

      virtual bool empty() const override { return this->urlList_ == nullptr; };
      // urlList Field Functions 
      bool hasUrlList() const { return this->urlList_ != nullptr;};
      void deleteUrlList() { this->urlList_ = nullptr;};
      inline const vector<Url400List::UrlList> & getUrlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Url400List::UrlList>) };
      inline vector<Url400List::UrlList> getUrlList() { DARABONBA_PTR_GET(urlList_, vector<Url400List::UrlList>) };
      inline Url400List& setUrlList(const vector<Url400List::UrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
      inline Url400List& setUrlList(vector<Url400List::UrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


    protected:
      shared_ptr<vector<Url400List::UrlList>> urlList_ {};
    };

    class Url300List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Url300List& obj) { 
        DARABONBA_PTR_TO_JSON(UrlList, urlList_);
      };
      friend void from_json(const Darabonba::Json& j, Url300List& obj) { 
        DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
      };
      Url300List() = default ;
      Url300List(const Url300List &) = default ;
      Url300List(Url300List &&) = default ;
      Url300List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Url300List() = default ;
      Url300List& operator=(const Url300List &) = default ;
      Url300List& operator=(Url300List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UrlList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UrlList& obj) { 
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_TO_JSON(UrlDetail, urlDetail_);
          DARABONBA_PTR_TO_JSON(VisitData, visitData_);
          DARABONBA_PTR_TO_JSON(VisitProportion, visitProportion_);
        };
        friend void from_json(const Darabonba::Json& j, UrlList& obj) { 
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_FROM_JSON(UrlDetail, urlDetail_);
          DARABONBA_PTR_FROM_JSON(VisitData, visitData_);
          DARABONBA_PTR_FROM_JSON(VisitProportion, visitProportion_);
        };
        UrlList() = default ;
        UrlList(const UrlList &) = default ;
        UrlList(UrlList &&) = default ;
        UrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UrlList() = default ;
        UrlList& operator=(const UrlList &) = default ;
        UrlList& operator=(UrlList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flow_ == nullptr
        && this->flowProportion_ == nullptr && this->urlDetail_ == nullptr && this->visitData_ == nullptr && this->visitProportion_ == nullptr; };
        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline UrlList& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // flowProportion Field Functions 
        bool hasFlowProportion() const { return this->flowProportion_ != nullptr;};
        void deleteFlowProportion() { this->flowProportion_ = nullptr;};
        inline float getFlowProportion() const { DARABONBA_PTR_GET_DEFAULT(flowProportion_, 0.0) };
        inline UrlList& setFlowProportion(float flowProportion) { DARABONBA_PTR_SET_VALUE(flowProportion_, flowProportion) };


        // urlDetail Field Functions 
        bool hasUrlDetail() const { return this->urlDetail_ != nullptr;};
        void deleteUrlDetail() { this->urlDetail_ = nullptr;};
        inline string getUrlDetail() const { DARABONBA_PTR_GET_DEFAULT(urlDetail_, "") };
        inline UrlList& setUrlDetail(string urlDetail) { DARABONBA_PTR_SET_VALUE(urlDetail_, urlDetail) };


        // visitData Field Functions 
        bool hasVisitData() const { return this->visitData_ != nullptr;};
        void deleteVisitData() { this->visitData_ = nullptr;};
        inline string getVisitData() const { DARABONBA_PTR_GET_DEFAULT(visitData_, "") };
        inline UrlList& setVisitData(string visitData) { DARABONBA_PTR_SET_VALUE(visitData_, visitData) };


        // visitProportion Field Functions 
        bool hasVisitProportion() const { return this->visitProportion_ != nullptr;};
        void deleteVisitProportion() { this->visitProportion_ = nullptr;};
        inline float getVisitProportion() const { DARABONBA_PTR_GET_DEFAULT(visitProportion_, 0.0) };
        inline UrlList& setVisitProportion(float visitProportion) { DARABONBA_PTR_SET_VALUE(visitProportion_, visitProportion) };


      protected:
        shared_ptr<string> flow_ {};
        shared_ptr<float> flowProportion_ {};
        shared_ptr<string> urlDetail_ {};
        shared_ptr<string> visitData_ {};
        shared_ptr<float> visitProportion_ {};
      };

      virtual bool empty() const override { return this->urlList_ == nullptr; };
      // urlList Field Functions 
      bool hasUrlList() const { return this->urlList_ != nullptr;};
      void deleteUrlList() { this->urlList_ = nullptr;};
      inline const vector<Url300List::UrlList> & getUrlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Url300List::UrlList>) };
      inline vector<Url300List::UrlList> getUrlList() { DARABONBA_PTR_GET(urlList_, vector<Url300List::UrlList>) };
      inline Url300List& setUrlList(const vector<Url300List::UrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
      inline Url300List& setUrlList(vector<Url300List::UrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


    protected:
      shared_ptr<vector<Url300List::UrlList>> urlList_ {};
    };

    class Url200List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Url200List& obj) { 
        DARABONBA_PTR_TO_JSON(UrlList, urlList_);
      };
      friend void from_json(const Darabonba::Json& j, Url200List& obj) { 
        DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
      };
      Url200List() = default ;
      Url200List(const Url200List &) = default ;
      Url200List(Url200List &&) = default ;
      Url200List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Url200List() = default ;
      Url200List& operator=(const Url200List &) = default ;
      Url200List& operator=(Url200List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UrlList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UrlList& obj) { 
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_TO_JSON(UrlDetail, urlDetail_);
          DARABONBA_PTR_TO_JSON(VisitData, visitData_);
          DARABONBA_PTR_TO_JSON(VisitProportion, visitProportion_);
        };
        friend void from_json(const Darabonba::Json& j, UrlList& obj) { 
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_FROM_JSON(UrlDetail, urlDetail_);
          DARABONBA_PTR_FROM_JSON(VisitData, visitData_);
          DARABONBA_PTR_FROM_JSON(VisitProportion, visitProportion_);
        };
        UrlList() = default ;
        UrlList(const UrlList &) = default ;
        UrlList(UrlList &&) = default ;
        UrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UrlList() = default ;
        UrlList& operator=(const UrlList &) = default ;
        UrlList& operator=(UrlList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flow_ == nullptr
        && this->flowProportion_ == nullptr && this->urlDetail_ == nullptr && this->visitData_ == nullptr && this->visitProportion_ == nullptr; };
        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline UrlList& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // flowProportion Field Functions 
        bool hasFlowProportion() const { return this->flowProportion_ != nullptr;};
        void deleteFlowProportion() { this->flowProportion_ = nullptr;};
        inline float getFlowProportion() const { DARABONBA_PTR_GET_DEFAULT(flowProportion_, 0.0) };
        inline UrlList& setFlowProportion(float flowProportion) { DARABONBA_PTR_SET_VALUE(flowProportion_, flowProportion) };


        // urlDetail Field Functions 
        bool hasUrlDetail() const { return this->urlDetail_ != nullptr;};
        void deleteUrlDetail() { this->urlDetail_ = nullptr;};
        inline string getUrlDetail() const { DARABONBA_PTR_GET_DEFAULT(urlDetail_, "") };
        inline UrlList& setUrlDetail(string urlDetail) { DARABONBA_PTR_SET_VALUE(urlDetail_, urlDetail) };


        // visitData Field Functions 
        bool hasVisitData() const { return this->visitData_ != nullptr;};
        void deleteVisitData() { this->visitData_ = nullptr;};
        inline string getVisitData() const { DARABONBA_PTR_GET_DEFAULT(visitData_, "") };
        inline UrlList& setVisitData(string visitData) { DARABONBA_PTR_SET_VALUE(visitData_, visitData) };


        // visitProportion Field Functions 
        bool hasVisitProportion() const { return this->visitProportion_ != nullptr;};
        void deleteVisitProportion() { this->visitProportion_ = nullptr;};
        inline float getVisitProportion() const { DARABONBA_PTR_GET_DEFAULT(visitProportion_, 0.0) };
        inline UrlList& setVisitProportion(float visitProportion) { DARABONBA_PTR_SET_VALUE(visitProportion_, visitProportion) };


      protected:
        shared_ptr<string> flow_ {};
        shared_ptr<float> flowProportion_ {};
        shared_ptr<string> urlDetail_ {};
        shared_ptr<string> visitData_ {};
        shared_ptr<float> visitProportion_ {};
      };

      virtual bool empty() const override { return this->urlList_ == nullptr; };
      // urlList Field Functions 
      bool hasUrlList() const { return this->urlList_ != nullptr;};
      void deleteUrlList() { this->urlList_ = nullptr;};
      inline const vector<Url200List::UrlList> & getUrlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<Url200List::UrlList>) };
      inline vector<Url200List::UrlList> getUrlList() { DARABONBA_PTR_GET(urlList_, vector<Url200List::UrlList>) };
      inline Url200List& setUrlList(const vector<Url200List::UrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
      inline Url200List& setUrlList(vector<Url200List::UrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


    protected:
      shared_ptr<vector<Url200List::UrlList>> urlList_ {};
    };

    class AllUrlList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AllUrlList& obj) { 
        DARABONBA_PTR_TO_JSON(UrlList, urlList_);
      };
      friend void from_json(const Darabonba::Json& j, AllUrlList& obj) { 
        DARABONBA_PTR_FROM_JSON(UrlList, urlList_);
      };
      AllUrlList() = default ;
      AllUrlList(const AllUrlList &) = default ;
      AllUrlList(AllUrlList &&) = default ;
      AllUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AllUrlList() = default ;
      AllUrlList& operator=(const AllUrlList &) = default ;
      AllUrlList& operator=(AllUrlList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UrlList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UrlList& obj) { 
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_TO_JSON(UrlDetail, urlDetail_);
          DARABONBA_PTR_TO_JSON(VisitData, visitData_);
          DARABONBA_PTR_TO_JSON(VisitProportion, visitProportion_);
        };
        friend void from_json(const Darabonba::Json& j, UrlList& obj) { 
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_FROM_JSON(UrlDetail, urlDetail_);
          DARABONBA_PTR_FROM_JSON(VisitData, visitData_);
          DARABONBA_PTR_FROM_JSON(VisitProportion, visitProportion_);
        };
        UrlList() = default ;
        UrlList(const UrlList &) = default ;
        UrlList(UrlList &&) = default ;
        UrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UrlList() = default ;
        UrlList& operator=(const UrlList &) = default ;
        UrlList& operator=(UrlList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flow_ == nullptr
        && this->flowProportion_ == nullptr && this->urlDetail_ == nullptr && this->visitData_ == nullptr && this->visitProportion_ == nullptr; };
        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline UrlList& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // flowProportion Field Functions 
        bool hasFlowProportion() const { return this->flowProportion_ != nullptr;};
        void deleteFlowProportion() { this->flowProportion_ = nullptr;};
        inline float getFlowProportion() const { DARABONBA_PTR_GET_DEFAULT(flowProportion_, 0.0) };
        inline UrlList& setFlowProportion(float flowProportion) { DARABONBA_PTR_SET_VALUE(flowProportion_, flowProportion) };


        // urlDetail Field Functions 
        bool hasUrlDetail() const { return this->urlDetail_ != nullptr;};
        void deleteUrlDetail() { this->urlDetail_ = nullptr;};
        inline string getUrlDetail() const { DARABONBA_PTR_GET_DEFAULT(urlDetail_, "") };
        inline UrlList& setUrlDetail(string urlDetail) { DARABONBA_PTR_SET_VALUE(urlDetail_, urlDetail) };


        // visitData Field Functions 
        bool hasVisitData() const { return this->visitData_ != nullptr;};
        void deleteVisitData() { this->visitData_ = nullptr;};
        inline string getVisitData() const { DARABONBA_PTR_GET_DEFAULT(visitData_, "") };
        inline UrlList& setVisitData(string visitData) { DARABONBA_PTR_SET_VALUE(visitData_, visitData) };


        // visitProportion Field Functions 
        bool hasVisitProportion() const { return this->visitProportion_ != nullptr;};
        void deleteVisitProportion() { this->visitProportion_ = nullptr;};
        inline float getVisitProportion() const { DARABONBA_PTR_GET_DEFAULT(visitProportion_, 0.0) };
        inline UrlList& setVisitProportion(float visitProportion) { DARABONBA_PTR_SET_VALUE(visitProportion_, visitProportion) };


      protected:
        shared_ptr<string> flow_ {};
        shared_ptr<float> flowProportion_ {};
        shared_ptr<string> urlDetail_ {};
        shared_ptr<string> visitData_ {};
        shared_ptr<float> visitProportion_ {};
      };

      virtual bool empty() const override { return this->urlList_ == nullptr; };
      // urlList Field Functions 
      bool hasUrlList() const { return this->urlList_ != nullptr;};
      void deleteUrlList() { this->urlList_ = nullptr;};
      inline const vector<AllUrlList::UrlList> & getUrlList() const { DARABONBA_PTR_GET_CONST(urlList_, vector<AllUrlList::UrlList>) };
      inline vector<AllUrlList::UrlList> getUrlList() { DARABONBA_PTR_GET(urlList_, vector<AllUrlList::UrlList>) };
      inline AllUrlList& setUrlList(const vector<AllUrlList::UrlList> & urlList) { DARABONBA_PTR_SET_VALUE(urlList_, urlList) };
      inline AllUrlList& setUrlList(vector<AllUrlList::UrlList> && urlList) { DARABONBA_PTR_SET_RVALUE(urlList_, urlList) };


    protected:
      shared_ptr<vector<AllUrlList::UrlList>> urlList_ {};
    };

    virtual bool empty() const override { return this->allUrlList_ == nullptr
        && this->domainName_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr && this->url200List_ == nullptr && this->url300List_ == nullptr
        && this->url400List_ == nullptr && this->url500List_ == nullptr; };
    // allUrlList Field Functions 
    bool hasAllUrlList() const { return this->allUrlList_ != nullptr;};
    void deleteAllUrlList() { this->allUrlList_ = nullptr;};
    inline const DescribeDomainTopUrlVisitResponseBody::AllUrlList & getAllUrlList() const { DARABONBA_PTR_GET_CONST(allUrlList_, DescribeDomainTopUrlVisitResponseBody::AllUrlList) };
    inline DescribeDomainTopUrlVisitResponseBody::AllUrlList getAllUrlList() { DARABONBA_PTR_GET(allUrlList_, DescribeDomainTopUrlVisitResponseBody::AllUrlList) };
    inline DescribeDomainTopUrlVisitResponseBody& setAllUrlList(const DescribeDomainTopUrlVisitResponseBody::AllUrlList & allUrlList) { DARABONBA_PTR_SET_VALUE(allUrlList_, allUrlList) };
    inline DescribeDomainTopUrlVisitResponseBody& setAllUrlList(DescribeDomainTopUrlVisitResponseBody::AllUrlList && allUrlList) { DARABONBA_PTR_SET_RVALUE(allUrlList_, allUrlList) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainTopUrlVisitResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopUrlVisitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainTopUrlVisitResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // url200List Field Functions 
    bool hasUrl200List() const { return this->url200List_ != nullptr;};
    void deleteUrl200List() { this->url200List_ = nullptr;};
    inline const DescribeDomainTopUrlVisitResponseBody::Url200List & getUrl200List() const { DARABONBA_PTR_GET_CONST(url200List_, DescribeDomainTopUrlVisitResponseBody::Url200List) };
    inline DescribeDomainTopUrlVisitResponseBody::Url200List getUrl200List() { DARABONBA_PTR_GET(url200List_, DescribeDomainTopUrlVisitResponseBody::Url200List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl200List(const DescribeDomainTopUrlVisitResponseBody::Url200List & url200List) { DARABONBA_PTR_SET_VALUE(url200List_, url200List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl200List(DescribeDomainTopUrlVisitResponseBody::Url200List && url200List) { DARABONBA_PTR_SET_RVALUE(url200List_, url200List) };


    // url300List Field Functions 
    bool hasUrl300List() const { return this->url300List_ != nullptr;};
    void deleteUrl300List() { this->url300List_ = nullptr;};
    inline const DescribeDomainTopUrlVisitResponseBody::Url300List & getUrl300List() const { DARABONBA_PTR_GET_CONST(url300List_, DescribeDomainTopUrlVisitResponseBody::Url300List) };
    inline DescribeDomainTopUrlVisitResponseBody::Url300List getUrl300List() { DARABONBA_PTR_GET(url300List_, DescribeDomainTopUrlVisitResponseBody::Url300List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl300List(const DescribeDomainTopUrlVisitResponseBody::Url300List & url300List) { DARABONBA_PTR_SET_VALUE(url300List_, url300List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl300List(DescribeDomainTopUrlVisitResponseBody::Url300List && url300List) { DARABONBA_PTR_SET_RVALUE(url300List_, url300List) };


    // url400List Field Functions 
    bool hasUrl400List() const { return this->url400List_ != nullptr;};
    void deleteUrl400List() { this->url400List_ = nullptr;};
    inline const DescribeDomainTopUrlVisitResponseBody::Url400List & getUrl400List() const { DARABONBA_PTR_GET_CONST(url400List_, DescribeDomainTopUrlVisitResponseBody::Url400List) };
    inline DescribeDomainTopUrlVisitResponseBody::Url400List getUrl400List() { DARABONBA_PTR_GET(url400List_, DescribeDomainTopUrlVisitResponseBody::Url400List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl400List(const DescribeDomainTopUrlVisitResponseBody::Url400List & url400List) { DARABONBA_PTR_SET_VALUE(url400List_, url400List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl400List(DescribeDomainTopUrlVisitResponseBody::Url400List && url400List) { DARABONBA_PTR_SET_RVALUE(url400List_, url400List) };


    // url500List Field Functions 
    bool hasUrl500List() const { return this->url500List_ != nullptr;};
    void deleteUrl500List() { this->url500List_ = nullptr;};
    inline const DescribeDomainTopUrlVisitResponseBody::Url500List & getUrl500List() const { DARABONBA_PTR_GET_CONST(url500List_, DescribeDomainTopUrlVisitResponseBody::Url500List) };
    inline DescribeDomainTopUrlVisitResponseBody::Url500List getUrl500List() { DARABONBA_PTR_GET(url500List_, DescribeDomainTopUrlVisitResponseBody::Url500List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl500List(const DescribeDomainTopUrlVisitResponseBody::Url500List & url500List) { DARABONBA_PTR_SET_VALUE(url500List_, url500List) };
    inline DescribeDomainTopUrlVisitResponseBody& setUrl500List(DescribeDomainTopUrlVisitResponseBody::Url500List && url500List) { DARABONBA_PTR_SET_RVALUE(url500List_, url500List) };


  protected:
    shared_ptr<DescribeDomainTopUrlVisitResponseBody::AllUrlList> allUrlList_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
    shared_ptr<DescribeDomainTopUrlVisitResponseBody::Url200List> url200List_ {};
    shared_ptr<DescribeDomainTopUrlVisitResponseBody::Url300List> url300List_ {};
    shared_ptr<DescribeDomainTopUrlVisitResponseBody::Url400List> url400List_ {};
    shared_ptr<DescribeDomainTopUrlVisitResponseBody::Url500List> url500List_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
