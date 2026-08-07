// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOUTBOUNDCALLRESTRICTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOUTBOUNDCALLRESTRICTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class CreateOutboundCallRestrictionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOutboundCallRestrictionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OutboundCallRestriction, outboundCallRestriction_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOutboundCallRestrictionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OutboundCallRestriction, outboundCallRestriction_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
    };
    CreateOutboundCallRestrictionRequest() = default ;
    CreateOutboundCallRestrictionRequest(const CreateOutboundCallRestrictionRequest &) = default ;
    CreateOutboundCallRestrictionRequest(CreateOutboundCallRestrictionRequest &&) = default ;
    CreateOutboundCallRestrictionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOutboundCallRestrictionRequest() = default ;
    CreateOutboundCallRestrictionRequest& operator=(const CreateOutboundCallRestrictionRequest &) = default ;
    CreateOutboundCallRestrictionRequest& operator=(CreateOutboundCallRestrictionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OutboundCallRestriction : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OutboundCallRestriction& obj) { 
        DARABONBA_PTR_TO_JSON(Number, number_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
      };
      friend void from_json(const Darabonba::Json& j, OutboundCallRestriction& obj) { 
        DARABONBA_PTR_FROM_JSON(Number, number_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
      };
      OutboundCallRestriction() = default ;
      OutboundCallRestriction(const OutboundCallRestriction &) = default ;
      OutboundCallRestriction(OutboundCallRestriction &&) = default ;
      OutboundCallRestriction(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OutboundCallRestriction() = default ;
      OutboundCallRestriction& operator=(const OutboundCallRestriction &) = default ;
      OutboundCallRestriction& operator=(OutboundCallRestriction &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->number_ == nullptr
        && this->remark_ == nullptr; };
      // number Field Functions 
      bool hasNumber() const { return this->number_ != nullptr;};
      void deleteNumber() { this->number_ = nullptr;};
      inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
      inline OutboundCallRestriction& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline OutboundCallRestriction& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    protected:
      // The phone number.
      shared_ptr<string> number_ {};
      // The remarks.
      shared_ptr<string> remark_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->outboundCallRestriction_ == nullptr && this->policy_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateOutboundCallRestrictionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outboundCallRestriction Field Functions 
    bool hasOutboundCallRestriction() const { return this->outboundCallRestriction_ != nullptr;};
    void deleteOutboundCallRestriction() { this->outboundCallRestriction_ = nullptr;};
    inline const vector<CreateOutboundCallRestrictionRequest::OutboundCallRestriction> & getOutboundCallRestriction() const { DARABONBA_PTR_GET_CONST(outboundCallRestriction_, vector<CreateOutboundCallRestrictionRequest::OutboundCallRestriction>) };
    inline vector<CreateOutboundCallRestrictionRequest::OutboundCallRestriction> getOutboundCallRestriction() { DARABONBA_PTR_GET(outboundCallRestriction_, vector<CreateOutboundCallRestrictionRequest::OutboundCallRestriction>) };
    inline CreateOutboundCallRestrictionRequest& setOutboundCallRestriction(const vector<CreateOutboundCallRestrictionRequest::OutboundCallRestriction> & outboundCallRestriction) { DARABONBA_PTR_SET_VALUE(outboundCallRestriction_, outboundCallRestriction) };
    inline CreateOutboundCallRestrictionRequest& setOutboundCallRestriction(vector<CreateOutboundCallRestrictionRequest::OutboundCallRestriction> && outboundCallRestriction) { DARABONBA_PTR_SET_RVALUE(outboundCallRestriction_, outboundCallRestriction) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline int32_t getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, 0) };
    inline CreateOutboundCallRestrictionRequest& setPolicy(int32_t policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The outbound call restriction.
    shared_ptr<vector<CreateOutboundCallRestrictionRequest::OutboundCallRestriction>> outboundCallRestriction_ {};
    // The policy. Valid values:
    // 0: blacklist.
    // 1: whitelist.
    shared_ptr<int32_t> policy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
