// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERVISITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERVISITRESPONSEBODY_HPP_
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
  class DescribeDomainTopReferVisitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopReferVisitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TopReferList, topReferList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopReferVisitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TopReferList, topReferList_);
    };
    DescribeDomainTopReferVisitResponseBody() = default ;
    DescribeDomainTopReferVisitResponseBody(const DescribeDomainTopReferVisitResponseBody &) = default ;
    DescribeDomainTopReferVisitResponseBody(DescribeDomainTopReferVisitResponseBody &&) = default ;
    DescribeDomainTopReferVisitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopReferVisitResponseBody() = default ;
    DescribeDomainTopReferVisitResponseBody& operator=(const DescribeDomainTopReferVisitResponseBody &) = default ;
    DescribeDomainTopReferVisitResponseBody& operator=(DescribeDomainTopReferVisitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopReferList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopReferList& obj) { 
        DARABONBA_PTR_TO_JSON(ReferList, referList_);
      };
      friend void from_json(const Darabonba::Json& j, TopReferList& obj) { 
        DARABONBA_PTR_FROM_JSON(ReferList, referList_);
      };
      TopReferList() = default ;
      TopReferList(const TopReferList &) = default ;
      TopReferList(TopReferList &&) = default ;
      TopReferList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopReferList() = default ;
      TopReferList& operator=(const TopReferList &) = default ;
      TopReferList& operator=(TopReferList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReferList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReferList& obj) { 
          DARABONBA_PTR_TO_JSON(Flow, flow_);
          DARABONBA_PTR_TO_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_TO_JSON(ReferDetail, referDetail_);
          DARABONBA_PTR_TO_JSON(VisitData, visitData_);
          DARABONBA_PTR_TO_JSON(VisitProportion, visitProportion_);
        };
        friend void from_json(const Darabonba::Json& j, ReferList& obj) { 
          DARABONBA_PTR_FROM_JSON(Flow, flow_);
          DARABONBA_PTR_FROM_JSON(FlowProportion, flowProportion_);
          DARABONBA_PTR_FROM_JSON(ReferDetail, referDetail_);
          DARABONBA_PTR_FROM_JSON(VisitData, visitData_);
          DARABONBA_PTR_FROM_JSON(VisitProportion, visitProportion_);
        };
        ReferList() = default ;
        ReferList(const ReferList &) = default ;
        ReferList(ReferList &&) = default ;
        ReferList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReferList() = default ;
        ReferList& operator=(const ReferList &) = default ;
        ReferList& operator=(ReferList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->flow_ == nullptr
        && this->flowProportion_ == nullptr && this->referDetail_ == nullptr && this->visitData_ == nullptr && this->visitProportion_ == nullptr; };
        // flow Field Functions 
        bool hasFlow() const { return this->flow_ != nullptr;};
        void deleteFlow() { this->flow_ = nullptr;};
        inline string getFlow() const { DARABONBA_PTR_GET_DEFAULT(flow_, "") };
        inline ReferList& setFlow(string flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };


        // flowProportion Field Functions 
        bool hasFlowProportion() const { return this->flowProportion_ != nullptr;};
        void deleteFlowProportion() { this->flowProportion_ = nullptr;};
        inline float getFlowProportion() const { DARABONBA_PTR_GET_DEFAULT(flowProportion_, 0.0) };
        inline ReferList& setFlowProportion(float flowProportion) { DARABONBA_PTR_SET_VALUE(flowProportion_, flowProportion) };


        // referDetail Field Functions 
        bool hasReferDetail() const { return this->referDetail_ != nullptr;};
        void deleteReferDetail() { this->referDetail_ = nullptr;};
        inline string getReferDetail() const { DARABONBA_PTR_GET_DEFAULT(referDetail_, "") };
        inline ReferList& setReferDetail(string referDetail) { DARABONBA_PTR_SET_VALUE(referDetail_, referDetail) };


        // visitData Field Functions 
        bool hasVisitData() const { return this->visitData_ != nullptr;};
        void deleteVisitData() { this->visitData_ = nullptr;};
        inline string getVisitData() const { DARABONBA_PTR_GET_DEFAULT(visitData_, "") };
        inline ReferList& setVisitData(string visitData) { DARABONBA_PTR_SET_VALUE(visitData_, visitData) };


        // visitProportion Field Functions 
        bool hasVisitProportion() const { return this->visitProportion_ != nullptr;};
        void deleteVisitProportion() { this->visitProportion_ = nullptr;};
        inline float getVisitProportion() const { DARABONBA_PTR_GET_DEFAULT(visitProportion_, 0.0) };
        inline ReferList& setVisitProportion(float visitProportion) { DARABONBA_PTR_SET_VALUE(visitProportion_, visitProportion) };


      protected:
        shared_ptr<string> flow_ {};
        shared_ptr<float> flowProportion_ {};
        shared_ptr<string> referDetail_ {};
        shared_ptr<string> visitData_ {};
        shared_ptr<float> visitProportion_ {};
      };

      virtual bool empty() const override { return this->referList_ == nullptr; };
      // referList Field Functions 
      bool hasReferList() const { return this->referList_ != nullptr;};
      void deleteReferList() { this->referList_ = nullptr;};
      inline const vector<TopReferList::ReferList> & getReferList() const { DARABONBA_PTR_GET_CONST(referList_, vector<TopReferList::ReferList>) };
      inline vector<TopReferList::ReferList> getReferList() { DARABONBA_PTR_GET(referList_, vector<TopReferList::ReferList>) };
      inline TopReferList& setReferList(const vector<TopReferList::ReferList> & referList) { DARABONBA_PTR_SET_VALUE(referList_, referList) };
      inline TopReferList& setReferList(vector<TopReferList::ReferList> && referList) { DARABONBA_PTR_SET_RVALUE(referList_, referList) };


    protected:
      shared_ptr<vector<TopReferList::ReferList>> referList_ {};
    };

    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->topReferList_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainTopReferVisitResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopReferVisitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainTopReferVisitResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // topReferList Field Functions 
    bool hasTopReferList() const { return this->topReferList_ != nullptr;};
    void deleteTopReferList() { this->topReferList_ = nullptr;};
    inline const DescribeDomainTopReferVisitResponseBody::TopReferList & getTopReferList() const { DARABONBA_PTR_GET_CONST(topReferList_, DescribeDomainTopReferVisitResponseBody::TopReferList) };
    inline DescribeDomainTopReferVisitResponseBody::TopReferList getTopReferList() { DARABONBA_PTR_GET(topReferList_, DescribeDomainTopReferVisitResponseBody::TopReferList) };
    inline DescribeDomainTopReferVisitResponseBody& setTopReferList(const DescribeDomainTopReferVisitResponseBody::TopReferList & topReferList) { DARABONBA_PTR_SET_VALUE(topReferList_, topReferList) };
    inline DescribeDomainTopReferVisitResponseBody& setTopReferList(DescribeDomainTopReferVisitResponseBody::TopReferList && topReferList) { DARABONBA_PTR_SET_RVALUE(topReferList_, topReferList) };


  protected:
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range that was queried.
    shared_ptr<string> startTime_ {};
    shared_ptr<DescribeDomainTopReferVisitResponseBody::TopReferList> topReferList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
