// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSRESPONSEBODY_HPP_
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
  class DescribeHealthChecksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthChecksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HealthChecks, healthChecks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthChecksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthChecks, healthChecks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHealthChecksResponseBody() = default ;
    DescribeHealthChecksResponseBody(const DescribeHealthChecksResponseBody &) = default ;
    DescribeHealthChecksResponseBody(DescribeHealthChecksResponseBody &&) = default ;
    DescribeHealthChecksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthChecksResponseBody() = default ;
    DescribeHealthChecksResponseBody& operator=(const DescribeHealthChecksResponseBody &) = default ;
    DescribeHealthChecksResponseBody& operator=(DescribeHealthChecksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HealthChecks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HealthChecks& obj) { 
        DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      };
      friend void from_json(const Darabonba::Json& j, HealthChecks& obj) { 
        DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      };
      HealthChecks() = default ;
      HealthChecks(const HealthChecks &) = default ;
      HealthChecks(HealthChecks &&) = default ;
      HealthChecks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HealthChecks() = default ;
      HealthChecks& operator=(const HealthChecks &) = default ;
      HealthChecks& operator=(HealthChecks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HealthCheck : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HealthCheck& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DstIpAddr, dstIpAddr_);
          DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
          DARABONBA_PTR_TO_JSON(FailCountThreshold, failCountThreshold_);
          DARABONBA_PTR_TO_JSON(HcInstanceId, hcInstanceId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ProbeCount, probeCount_);
          DARABONBA_PTR_TO_JSON(ProbeInterval, probeInterval_);
          DARABONBA_PTR_TO_JSON(ProbeTimeout, probeTimeout_);
          DARABONBA_PTR_TO_JSON(RelationCount, relationCount_);
          DARABONBA_PTR_TO_JSON(RttFailThreshold, rttFailThreshold_);
          DARABONBA_PTR_TO_JSON(RttThreshold, rttThreshold_);
          DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
          DARABONBA_PTR_TO_JSON(SrcIpAddr, srcIpAddr_);
          DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, HealthCheck& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DstIpAddr, dstIpAddr_);
          DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
          DARABONBA_PTR_FROM_JSON(FailCountThreshold, failCountThreshold_);
          DARABONBA_PTR_FROM_JSON(HcInstanceId, hcInstanceId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ProbeCount, probeCount_);
          DARABONBA_PTR_FROM_JSON(ProbeInterval, probeInterval_);
          DARABONBA_PTR_FROM_JSON(ProbeTimeout, probeTimeout_);
          DARABONBA_PTR_FROM_JSON(RelationCount, relationCount_);
          DARABONBA_PTR_FROM_JSON(RttFailThreshold, rttFailThreshold_);
          DARABONBA_PTR_FROM_JSON(RttThreshold, rttThreshold_);
          DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
          DARABONBA_PTR_FROM_JSON(SrcIpAddr, srcIpAddr_);
          DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        HealthCheck() = default ;
        HealthCheck(const HealthCheck &) = default ;
        HealthCheck(HealthCheck &&) = default ;
        HealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HealthCheck() = default ;
        HealthCheck& operator=(const HealthCheck &) = default ;
        HealthCheck& operator=(HealthCheck &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->dstIpAddr_ == nullptr && this->dstPort_ == nullptr && this->failCountThreshold_ == nullptr && this->hcInstanceId_ == nullptr && this->name_ == nullptr
        && this->probeCount_ == nullptr && this->probeInterval_ == nullptr && this->probeTimeout_ == nullptr && this->relationCount_ == nullptr && this->rttFailThreshold_ == nullptr
        && this->rttThreshold_ == nullptr && this->smartAGId_ == nullptr && this->srcIpAddr_ == nullptr && this->srcPort_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline HealthCheck& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dstIpAddr Field Functions 
        bool hasDstIpAddr() const { return this->dstIpAddr_ != nullptr;};
        void deleteDstIpAddr() { this->dstIpAddr_ = nullptr;};
        inline string getDstIpAddr() const { DARABONBA_PTR_GET_DEFAULT(dstIpAddr_, "") };
        inline HealthCheck& setDstIpAddr(string dstIpAddr) { DARABONBA_PTR_SET_VALUE(dstIpAddr_, dstIpAddr) };


        // dstPort Field Functions 
        bool hasDstPort() const { return this->dstPort_ != nullptr;};
        void deleteDstPort() { this->dstPort_ = nullptr;};
        inline int32_t getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
        inline HealthCheck& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


        // failCountThreshold Field Functions 
        bool hasFailCountThreshold() const { return this->failCountThreshold_ != nullptr;};
        void deleteFailCountThreshold() { this->failCountThreshold_ = nullptr;};
        inline int32_t getFailCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(failCountThreshold_, 0) };
        inline HealthCheck& setFailCountThreshold(int32_t failCountThreshold) { DARABONBA_PTR_SET_VALUE(failCountThreshold_, failCountThreshold) };


        // hcInstanceId Field Functions 
        bool hasHcInstanceId() const { return this->hcInstanceId_ != nullptr;};
        void deleteHcInstanceId() { this->hcInstanceId_ = nullptr;};
        inline string getHcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(hcInstanceId_, "") };
        inline HealthCheck& setHcInstanceId(string hcInstanceId) { DARABONBA_PTR_SET_VALUE(hcInstanceId_, hcInstanceId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline HealthCheck& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // probeCount Field Functions 
        bool hasProbeCount() const { return this->probeCount_ != nullptr;};
        void deleteProbeCount() { this->probeCount_ = nullptr;};
        inline int32_t getProbeCount() const { DARABONBA_PTR_GET_DEFAULT(probeCount_, 0) };
        inline HealthCheck& setProbeCount(int32_t probeCount) { DARABONBA_PTR_SET_VALUE(probeCount_, probeCount) };


        // probeInterval Field Functions 
        bool hasProbeInterval() const { return this->probeInterval_ != nullptr;};
        void deleteProbeInterval() { this->probeInterval_ = nullptr;};
        inline int32_t getProbeInterval() const { DARABONBA_PTR_GET_DEFAULT(probeInterval_, 0) };
        inline HealthCheck& setProbeInterval(int32_t probeInterval) { DARABONBA_PTR_SET_VALUE(probeInterval_, probeInterval) };


        // probeTimeout Field Functions 
        bool hasProbeTimeout() const { return this->probeTimeout_ != nullptr;};
        void deleteProbeTimeout() { this->probeTimeout_ = nullptr;};
        inline int32_t getProbeTimeout() const { DARABONBA_PTR_GET_DEFAULT(probeTimeout_, 0) };
        inline HealthCheck& setProbeTimeout(int32_t probeTimeout) { DARABONBA_PTR_SET_VALUE(probeTimeout_, probeTimeout) };


        // relationCount Field Functions 
        bool hasRelationCount() const { return this->relationCount_ != nullptr;};
        void deleteRelationCount() { this->relationCount_ = nullptr;};
        inline int32_t getRelationCount() const { DARABONBA_PTR_GET_DEFAULT(relationCount_, 0) };
        inline HealthCheck& setRelationCount(int32_t relationCount) { DARABONBA_PTR_SET_VALUE(relationCount_, relationCount) };


        // rttFailThreshold Field Functions 
        bool hasRttFailThreshold() const { return this->rttFailThreshold_ != nullptr;};
        void deleteRttFailThreshold() { this->rttFailThreshold_ = nullptr;};
        inline int32_t getRttFailThreshold() const { DARABONBA_PTR_GET_DEFAULT(rttFailThreshold_, 0) };
        inline HealthCheck& setRttFailThreshold(int32_t rttFailThreshold) { DARABONBA_PTR_SET_VALUE(rttFailThreshold_, rttFailThreshold) };


        // rttThreshold Field Functions 
        bool hasRttThreshold() const { return this->rttThreshold_ != nullptr;};
        void deleteRttThreshold() { this->rttThreshold_ = nullptr;};
        inline int32_t getRttThreshold() const { DARABONBA_PTR_GET_DEFAULT(rttThreshold_, 0) };
        inline HealthCheck& setRttThreshold(int32_t rttThreshold) { DARABONBA_PTR_SET_VALUE(rttThreshold_, rttThreshold) };


        // smartAGId Field Functions 
        bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
        void deleteSmartAGId() { this->smartAGId_ = nullptr;};
        inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
        inline HealthCheck& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


        // srcIpAddr Field Functions 
        bool hasSrcIpAddr() const { return this->srcIpAddr_ != nullptr;};
        void deleteSrcIpAddr() { this->srcIpAddr_ = nullptr;};
        inline string getSrcIpAddr() const { DARABONBA_PTR_GET_DEFAULT(srcIpAddr_, "") };
        inline HealthCheck& setSrcIpAddr(string srcIpAddr) { DARABONBA_PTR_SET_VALUE(srcIpAddr_, srcIpAddr) };


        // srcPort Field Functions 
        bool hasSrcPort() const { return this->srcPort_ != nullptr;};
        void deleteSrcPort() { this->srcPort_ = nullptr;};
        inline int32_t getSrcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, 0) };
        inline HealthCheck& setSrcPort(int32_t srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline HealthCheck& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline HealthCheck& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> dstIpAddr_ {};
        shared_ptr<int32_t> dstPort_ {};
        shared_ptr<int32_t> failCountThreshold_ {};
        shared_ptr<string> hcInstanceId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> probeCount_ {};
        shared_ptr<int32_t> probeInterval_ {};
        shared_ptr<int32_t> probeTimeout_ {};
        shared_ptr<int32_t> relationCount_ {};
        shared_ptr<int32_t> rttFailThreshold_ {};
        shared_ptr<int32_t> rttThreshold_ {};
        shared_ptr<string> smartAGId_ {};
        shared_ptr<string> srcIpAddr_ {};
        shared_ptr<int32_t> srcPort_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->healthCheck_ == nullptr; };
      // healthCheck Field Functions 
      bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
      void deleteHealthCheck() { this->healthCheck_ = nullptr;};
      inline const vector<HealthChecks::HealthCheck> & getHealthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, vector<HealthChecks::HealthCheck>) };
      inline vector<HealthChecks::HealthCheck> getHealthCheck() { DARABONBA_PTR_GET(healthCheck_, vector<HealthChecks::HealthCheck>) };
      inline HealthChecks& setHealthCheck(const vector<HealthChecks::HealthCheck> & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
      inline HealthChecks& setHealthCheck(vector<HealthChecks::HealthCheck> && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


    protected:
      shared_ptr<vector<HealthChecks::HealthCheck>> healthCheck_ {};
    };

    virtual bool empty() const override { return this->healthChecks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // healthChecks Field Functions 
    bool hasHealthChecks() const { return this->healthChecks_ != nullptr;};
    void deleteHealthChecks() { this->healthChecks_ = nullptr;};
    inline const DescribeHealthChecksResponseBody::HealthChecks & getHealthChecks() const { DARABONBA_PTR_GET_CONST(healthChecks_, DescribeHealthChecksResponseBody::HealthChecks) };
    inline DescribeHealthChecksResponseBody::HealthChecks getHealthChecks() { DARABONBA_PTR_GET(healthChecks_, DescribeHealthChecksResponseBody::HealthChecks) };
    inline DescribeHealthChecksResponseBody& setHealthChecks(const DescribeHealthChecksResponseBody::HealthChecks & healthChecks) { DARABONBA_PTR_SET_VALUE(healthChecks_, healthChecks) };
    inline DescribeHealthChecksResponseBody& setHealthChecks(DescribeHealthChecksResponseBody::HealthChecks && healthChecks) { DARABONBA_PTR_SET_RVALUE(healthChecks_, healthChecks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHealthChecksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHealthChecksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthChecksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHealthChecksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeHealthChecksResponseBody::HealthChecks> healthChecks_ {};
    // The page number of the returned page. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Default value: **10**. Maximum value: **50**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
