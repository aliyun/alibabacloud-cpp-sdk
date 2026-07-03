// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQOSPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQOSPOLICIESRESPONSEBODY_HPP_
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
  class DescribeQosPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQosPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QosPolicies, qosPolicies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQosPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QosPolicies, qosPolicies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeQosPoliciesResponseBody() = default ;
    DescribeQosPoliciesResponseBody(const DescribeQosPoliciesResponseBody &) = default ;
    DescribeQosPoliciesResponseBody(DescribeQosPoliciesResponseBody &&) = default ;
    DescribeQosPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQosPoliciesResponseBody() = default ;
    DescribeQosPoliciesResponseBody& operator=(const DescribeQosPoliciesResponseBody &) = default ;
    DescribeQosPoliciesResponseBody& operator=(DescribeQosPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QosPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QosPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(QosPolicy, qosPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, QosPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(QosPolicy, qosPolicy_);
      };
      QosPolicies() = default ;
      QosPolicies(const QosPolicies &) = default ;
      QosPolicies(QosPolicies &&) = default ;
      QosPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QosPolicies() = default ;
      QosPolicies& operator=(const QosPolicies &) = default ;
      QosPolicies& operator=(QosPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class QosPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const QosPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DestCidr, destCidr_);
          DARABONBA_PTR_TO_JSON(DestPortRange, destPortRange_);
          DARABONBA_PTR_TO_JSON(DpiGroupIds, dpiGroupIds_);
          DARABONBA_PTR_TO_JSON(DpiSignatureIds, dpiSignatureIds_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Priority, priority_);
          DARABONBA_PTR_TO_JSON(QosId, qosId_);
          DARABONBA_PTR_TO_JSON(QosPolicyId, qosPolicyId_);
          DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
          DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, QosPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DestCidr, destCidr_);
          DARABONBA_PTR_FROM_JSON(DestPortRange, destPortRange_);
          DARABONBA_PTR_FROM_JSON(DpiGroupIds, dpiGroupIds_);
          DARABONBA_PTR_FROM_JSON(DpiSignatureIds, dpiSignatureIds_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Priority, priority_);
          DARABONBA_PTR_FROM_JSON(QosId, qosId_);
          DARABONBA_PTR_FROM_JSON(QosPolicyId, qosPolicyId_);
          DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
          DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        QosPolicy() = default ;
        QosPolicy(const QosPolicy &) = default ;
        QosPolicy(QosPolicy &&) = default ;
        QosPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~QosPolicy() = default ;
        QosPolicy& operator=(const QosPolicy &) = default ;
        QosPolicy& operator=(QosPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DpiSignatureIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DpiSignatureIds& obj) { 
            DARABONBA_PTR_TO_JSON(DpiSignatureId, dpiSignatureId_);
          };
          friend void from_json(const Darabonba::Json& j, DpiSignatureIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DpiSignatureId, dpiSignatureId_);
          };
          DpiSignatureIds() = default ;
          DpiSignatureIds(const DpiSignatureIds &) = default ;
          DpiSignatureIds(DpiSignatureIds &&) = default ;
          DpiSignatureIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DpiSignatureIds() = default ;
          DpiSignatureIds& operator=(const DpiSignatureIds &) = default ;
          DpiSignatureIds& operator=(DpiSignatureIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dpiSignatureId_ == nullptr; };
          // dpiSignatureId Field Functions 
          bool hasDpiSignatureId() const { return this->dpiSignatureId_ != nullptr;};
          void deleteDpiSignatureId() { this->dpiSignatureId_ = nullptr;};
          inline const vector<string> & getDpiSignatureId() const { DARABONBA_PTR_GET_CONST(dpiSignatureId_, vector<string>) };
          inline vector<string> getDpiSignatureId() { DARABONBA_PTR_GET(dpiSignatureId_, vector<string>) };
          inline DpiSignatureIds& setDpiSignatureId(const vector<string> & dpiSignatureId) { DARABONBA_PTR_SET_VALUE(dpiSignatureId_, dpiSignatureId) };
          inline DpiSignatureIds& setDpiSignatureId(vector<string> && dpiSignatureId) { DARABONBA_PTR_SET_RVALUE(dpiSignatureId_, dpiSignatureId) };


        protected:
          shared_ptr<vector<string>> dpiSignatureId_ {};
        };

        class DpiGroupIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DpiGroupIds& obj) { 
            DARABONBA_PTR_TO_JSON(DpiGroupId, dpiGroupId_);
          };
          friend void from_json(const Darabonba::Json& j, DpiGroupIds& obj) { 
            DARABONBA_PTR_FROM_JSON(DpiGroupId, dpiGroupId_);
          };
          DpiGroupIds() = default ;
          DpiGroupIds(const DpiGroupIds &) = default ;
          DpiGroupIds(DpiGroupIds &&) = default ;
          DpiGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DpiGroupIds() = default ;
          DpiGroupIds& operator=(const DpiGroupIds &) = default ;
          DpiGroupIds& operator=(DpiGroupIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dpiGroupId_ == nullptr; };
          // dpiGroupId Field Functions 
          bool hasDpiGroupId() const { return this->dpiGroupId_ != nullptr;};
          void deleteDpiGroupId() { this->dpiGroupId_ = nullptr;};
          inline const vector<string> & getDpiGroupId() const { DARABONBA_PTR_GET_CONST(dpiGroupId_, vector<string>) };
          inline vector<string> getDpiGroupId() { DARABONBA_PTR_GET(dpiGroupId_, vector<string>) };
          inline DpiGroupIds& setDpiGroupId(const vector<string> & dpiGroupId) { DARABONBA_PTR_SET_VALUE(dpiGroupId_, dpiGroupId) };
          inline DpiGroupIds& setDpiGroupId(vector<string> && dpiGroupId) { DARABONBA_PTR_SET_RVALUE(dpiGroupId_, dpiGroupId) };


        protected:
          shared_ptr<vector<string>> dpiGroupId_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->destCidr_ == nullptr && this->destPortRange_ == nullptr && this->dpiGroupIds_ == nullptr && this->dpiSignatureIds_ == nullptr && this->endTime_ == nullptr
        && this->ipProtocol_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr && this->qosId_ == nullptr && this->qosPolicyId_ == nullptr
        && this->sourceCidr_ == nullptr && this->sourcePortRange_ == nullptr && this->startTime_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline QosPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // destCidr Field Functions 
        bool hasDestCidr() const { return this->destCidr_ != nullptr;};
        void deleteDestCidr() { this->destCidr_ = nullptr;};
        inline string getDestCidr() const { DARABONBA_PTR_GET_DEFAULT(destCidr_, "") };
        inline QosPolicy& setDestCidr(string destCidr) { DARABONBA_PTR_SET_VALUE(destCidr_, destCidr) };


        // destPortRange Field Functions 
        bool hasDestPortRange() const { return this->destPortRange_ != nullptr;};
        void deleteDestPortRange() { this->destPortRange_ = nullptr;};
        inline string getDestPortRange() const { DARABONBA_PTR_GET_DEFAULT(destPortRange_, "") };
        inline QosPolicy& setDestPortRange(string destPortRange) { DARABONBA_PTR_SET_VALUE(destPortRange_, destPortRange) };


        // dpiGroupIds Field Functions 
        bool hasDpiGroupIds() const { return this->dpiGroupIds_ != nullptr;};
        void deleteDpiGroupIds() { this->dpiGroupIds_ = nullptr;};
        inline const QosPolicy::DpiGroupIds & getDpiGroupIds() const { DARABONBA_PTR_GET_CONST(dpiGroupIds_, QosPolicy::DpiGroupIds) };
        inline QosPolicy::DpiGroupIds getDpiGroupIds() { DARABONBA_PTR_GET(dpiGroupIds_, QosPolicy::DpiGroupIds) };
        inline QosPolicy& setDpiGroupIds(const QosPolicy::DpiGroupIds & dpiGroupIds) { DARABONBA_PTR_SET_VALUE(dpiGroupIds_, dpiGroupIds) };
        inline QosPolicy& setDpiGroupIds(QosPolicy::DpiGroupIds && dpiGroupIds) { DARABONBA_PTR_SET_RVALUE(dpiGroupIds_, dpiGroupIds) };


        // dpiSignatureIds Field Functions 
        bool hasDpiSignatureIds() const { return this->dpiSignatureIds_ != nullptr;};
        void deleteDpiSignatureIds() { this->dpiSignatureIds_ = nullptr;};
        inline const QosPolicy::DpiSignatureIds & getDpiSignatureIds() const { DARABONBA_PTR_GET_CONST(dpiSignatureIds_, QosPolicy::DpiSignatureIds) };
        inline QosPolicy::DpiSignatureIds getDpiSignatureIds() { DARABONBA_PTR_GET(dpiSignatureIds_, QosPolicy::DpiSignatureIds) };
        inline QosPolicy& setDpiSignatureIds(const QosPolicy::DpiSignatureIds & dpiSignatureIds) { DARABONBA_PTR_SET_VALUE(dpiSignatureIds_, dpiSignatureIds) };
        inline QosPolicy& setDpiSignatureIds(QosPolicy::DpiSignatureIds && dpiSignatureIds) { DARABONBA_PTR_SET_RVALUE(dpiSignatureIds_, dpiSignatureIds) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline QosPolicy& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // ipProtocol Field Functions 
        bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
        void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
        inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
        inline QosPolicy& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline QosPolicy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline QosPolicy& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // qosId Field Functions 
        bool hasQosId() const { return this->qosId_ != nullptr;};
        void deleteQosId() { this->qosId_ = nullptr;};
        inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
        inline QosPolicy& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


        // qosPolicyId Field Functions 
        bool hasQosPolicyId() const { return this->qosPolicyId_ != nullptr;};
        void deleteQosPolicyId() { this->qosPolicyId_ = nullptr;};
        inline string getQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(qosPolicyId_, "") };
        inline QosPolicy& setQosPolicyId(string qosPolicyId) { DARABONBA_PTR_SET_VALUE(qosPolicyId_, qosPolicyId) };


        // sourceCidr Field Functions 
        bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
        void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
        inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
        inline QosPolicy& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


        // sourcePortRange Field Functions 
        bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
        void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
        inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
        inline QosPolicy& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline QosPolicy& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> destCidr_ {};
        shared_ptr<string> destPortRange_ {};
        shared_ptr<QosPolicy::DpiGroupIds> dpiGroupIds_ {};
        shared_ptr<QosPolicy::DpiSignatureIds> dpiSignatureIds_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> ipProtocol_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<string> qosId_ {};
        shared_ptr<string> qosPolicyId_ {};
        shared_ptr<string> sourceCidr_ {};
        shared_ptr<string> sourcePortRange_ {};
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->qosPolicy_ == nullptr; };
      // qosPolicy Field Functions 
      bool hasQosPolicy() const { return this->qosPolicy_ != nullptr;};
      void deleteQosPolicy() { this->qosPolicy_ = nullptr;};
      inline const vector<QosPolicies::QosPolicy> & getQosPolicy() const { DARABONBA_PTR_GET_CONST(qosPolicy_, vector<QosPolicies::QosPolicy>) };
      inline vector<QosPolicies::QosPolicy> getQosPolicy() { DARABONBA_PTR_GET(qosPolicy_, vector<QosPolicies::QosPolicy>) };
      inline QosPolicies& setQosPolicy(const vector<QosPolicies::QosPolicy> & qosPolicy) { DARABONBA_PTR_SET_VALUE(qosPolicy_, qosPolicy) };
      inline QosPolicies& setQosPolicy(vector<QosPolicies::QosPolicy> && qosPolicy) { DARABONBA_PTR_SET_RVALUE(qosPolicy_, qosPolicy) };


    protected:
      shared_ptr<vector<QosPolicies::QosPolicy>> qosPolicy_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->qosPolicies_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeQosPoliciesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeQosPoliciesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // qosPolicies Field Functions 
    bool hasQosPolicies() const { return this->qosPolicies_ != nullptr;};
    void deleteQosPolicies() { this->qosPolicies_ = nullptr;};
    inline const DescribeQosPoliciesResponseBody::QosPolicies & getQosPolicies() const { DARABONBA_PTR_GET_CONST(qosPolicies_, DescribeQosPoliciesResponseBody::QosPolicies) };
    inline DescribeQosPoliciesResponseBody::QosPolicies getQosPolicies() { DARABONBA_PTR_GET(qosPolicies_, DescribeQosPoliciesResponseBody::QosPolicies) };
    inline DescribeQosPoliciesResponseBody& setQosPolicies(const DescribeQosPoliciesResponseBody::QosPolicies & qosPolicies) { DARABONBA_PTR_SET_VALUE(qosPolicies_, qosPolicies) };
    inline DescribeQosPoliciesResponseBody& setQosPolicies(DescribeQosPoliciesResponseBody::QosPolicies && qosPolicies) { DARABONBA_PTR_SET_RVALUE(qosPolicies_, qosPolicies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeQosPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeQosPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of quintuple rules returned on each page.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<DescribeQosPoliciesResponseBody::QosPolicies> qosPolicies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of quintuple rules that meet the query conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
