// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEQOSPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEQOSPOLICYRESPONSEBODY_HPP_
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
  class CreateQosPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateQosPolicyResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateQosPolicyResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    CreateQosPolicyResponseBody() = default ;
    CreateQosPolicyResponseBody(const CreateQosPolicyResponseBody &) = default ;
    CreateQosPolicyResponseBody(CreateQosPolicyResponseBody &&) = default ;
    CreateQosPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateQosPolicyResponseBody() = default ;
    CreateQosPolicyResponseBody& operator=(const CreateQosPolicyResponseBody &) = default ;
    CreateQosPolicyResponseBody& operator=(CreateQosPolicyResponseBody &&) = default ;
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
        && this->requestId_ == nullptr && this->sourceCidr_ == nullptr && this->sourcePortRange_ == nullptr && this->startTime_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateQosPolicyResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destCidr Field Functions 
    bool hasDestCidr() const { return this->destCidr_ != nullptr;};
    void deleteDestCidr() { this->destCidr_ = nullptr;};
    inline string getDestCidr() const { DARABONBA_PTR_GET_DEFAULT(destCidr_, "") };
    inline CreateQosPolicyResponseBody& setDestCidr(string destCidr) { DARABONBA_PTR_SET_VALUE(destCidr_, destCidr) };


    // destPortRange Field Functions 
    bool hasDestPortRange() const { return this->destPortRange_ != nullptr;};
    void deleteDestPortRange() { this->destPortRange_ = nullptr;};
    inline string getDestPortRange() const { DARABONBA_PTR_GET_DEFAULT(destPortRange_, "") };
    inline CreateQosPolicyResponseBody& setDestPortRange(string destPortRange) { DARABONBA_PTR_SET_VALUE(destPortRange_, destPortRange) };


    // dpiGroupIds Field Functions 
    bool hasDpiGroupIds() const { return this->dpiGroupIds_ != nullptr;};
    void deleteDpiGroupIds() { this->dpiGroupIds_ = nullptr;};
    inline const CreateQosPolicyResponseBody::DpiGroupIds & getDpiGroupIds() const { DARABONBA_PTR_GET_CONST(dpiGroupIds_, CreateQosPolicyResponseBody::DpiGroupIds) };
    inline CreateQosPolicyResponseBody::DpiGroupIds getDpiGroupIds() { DARABONBA_PTR_GET(dpiGroupIds_, CreateQosPolicyResponseBody::DpiGroupIds) };
    inline CreateQosPolicyResponseBody& setDpiGroupIds(const CreateQosPolicyResponseBody::DpiGroupIds & dpiGroupIds) { DARABONBA_PTR_SET_VALUE(dpiGroupIds_, dpiGroupIds) };
    inline CreateQosPolicyResponseBody& setDpiGroupIds(CreateQosPolicyResponseBody::DpiGroupIds && dpiGroupIds) { DARABONBA_PTR_SET_RVALUE(dpiGroupIds_, dpiGroupIds) };


    // dpiSignatureIds Field Functions 
    bool hasDpiSignatureIds() const { return this->dpiSignatureIds_ != nullptr;};
    void deleteDpiSignatureIds() { this->dpiSignatureIds_ = nullptr;};
    inline const CreateQosPolicyResponseBody::DpiSignatureIds & getDpiSignatureIds() const { DARABONBA_PTR_GET_CONST(dpiSignatureIds_, CreateQosPolicyResponseBody::DpiSignatureIds) };
    inline CreateQosPolicyResponseBody::DpiSignatureIds getDpiSignatureIds() { DARABONBA_PTR_GET(dpiSignatureIds_, CreateQosPolicyResponseBody::DpiSignatureIds) };
    inline CreateQosPolicyResponseBody& setDpiSignatureIds(const CreateQosPolicyResponseBody::DpiSignatureIds & dpiSignatureIds) { DARABONBA_PTR_SET_VALUE(dpiSignatureIds_, dpiSignatureIds) };
    inline CreateQosPolicyResponseBody& setDpiSignatureIds(CreateQosPolicyResponseBody::DpiSignatureIds && dpiSignatureIds) { DARABONBA_PTR_SET_RVALUE(dpiSignatureIds_, dpiSignatureIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateQosPolicyResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline CreateQosPolicyResponseBody& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateQosPolicyResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateQosPolicyResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // qosId Field Functions 
    bool hasQosId() const { return this->qosId_ != nullptr;};
    void deleteQosId() { this->qosId_ = nullptr;};
    inline string getQosId() const { DARABONBA_PTR_GET_DEFAULT(qosId_, "") };
    inline CreateQosPolicyResponseBody& setQosId(string qosId) { DARABONBA_PTR_SET_VALUE(qosId_, qosId) };


    // qosPolicyId Field Functions 
    bool hasQosPolicyId() const { return this->qosPolicyId_ != nullptr;};
    void deleteQosPolicyId() { this->qosPolicyId_ = nullptr;};
    inline string getQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(qosPolicyId_, "") };
    inline CreateQosPolicyResponseBody& setQosPolicyId(string qosPolicyId) { DARABONBA_PTR_SET_VALUE(qosPolicyId_, qosPolicyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateQosPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline CreateQosPolicyResponseBody& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline CreateQosPolicyResponseBody& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateQosPolicyResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The description of the traffic classification rule.
    shared_ptr<string> description_ {};
    // The destination CIDR block.
    shared_ptr<string> destCidr_ {};
    // The destination port range.
    shared_ptr<string> destPortRange_ {};
    shared_ptr<CreateQosPolicyResponseBody::DpiGroupIds> dpiGroupIds_ {};
    shared_ptr<CreateQosPolicyResponseBody::DpiSignatureIds> dpiSignatureIds_ {};
    // The time when the traffic classification rule expires.
    shared_ptr<string> endTime_ {};
    // The protocol that applies to the traffic classification rule.
    shared_ptr<string> ipProtocol_ {};
    // The name of the traffic classification rule.
    shared_ptr<string> name_ {};
    // The priority of the traffic throttling policy to which the traffic classification rule belongs.
    shared_ptr<int32_t> priority_ {};
    // The ID of the QoS policy.
    shared_ptr<string> qosId_ {};
    // The ID of the traffic classification rule.
    shared_ptr<string> qosPolicyId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The source CIDR block.
    shared_ptr<string> sourceCidr_ {};
    // The source port range.
    shared_ptr<string> sourcePortRange_ {};
    // The time when the traffic classification rule takes effect.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
