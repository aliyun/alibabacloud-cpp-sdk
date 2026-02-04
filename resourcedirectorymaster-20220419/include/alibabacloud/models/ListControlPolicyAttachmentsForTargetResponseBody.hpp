// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTROLPOLICYATTACHMENTSFORTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTROLPOLICYATTACHMENTSFORTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListControlPolicyAttachmentsForTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListControlPolicyAttachmentsForTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ControlPolicyAttachments, controlPolicyAttachments_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListControlPolicyAttachmentsForTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlPolicyAttachments, controlPolicyAttachments_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListControlPolicyAttachmentsForTargetResponseBody() = default ;
    ListControlPolicyAttachmentsForTargetResponseBody(const ListControlPolicyAttachmentsForTargetResponseBody &) = default ;
    ListControlPolicyAttachmentsForTargetResponseBody(ListControlPolicyAttachmentsForTargetResponseBody &&) = default ;
    ListControlPolicyAttachmentsForTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListControlPolicyAttachmentsForTargetResponseBody() = default ;
    ListControlPolicyAttachmentsForTargetResponseBody& operator=(const ListControlPolicyAttachmentsForTargetResponseBody &) = default ;
    ListControlPolicyAttachmentsForTargetResponseBody& operator=(ListControlPolicyAttachmentsForTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ControlPolicyAttachments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ControlPolicyAttachments& obj) { 
        DARABONBA_PTR_TO_JSON(ControlPolicyAttachment, controlPolicyAttachment_);
      };
      friend void from_json(const Darabonba::Json& j, ControlPolicyAttachments& obj) { 
        DARABONBA_PTR_FROM_JSON(ControlPolicyAttachment, controlPolicyAttachment_);
      };
      ControlPolicyAttachments() = default ;
      ControlPolicyAttachments(const ControlPolicyAttachments &) = default ;
      ControlPolicyAttachments(ControlPolicyAttachments &&) = default ;
      ControlPolicyAttachments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ControlPolicyAttachments() = default ;
      ControlPolicyAttachments& operator=(const ControlPolicyAttachments &) = default ;
      ControlPolicyAttachments& operator=(ControlPolicyAttachments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ControlPolicyAttachment : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ControlPolicyAttachment& obj) { 
          DARABONBA_PTR_TO_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EffectScope, effectScope_);
          DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        };
        friend void from_json(const Darabonba::Json& j, ControlPolicyAttachment& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachDate, attachDate_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EffectScope, effectScope_);
          DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        };
        ControlPolicyAttachment() = default ;
        ControlPolicyAttachment(const ControlPolicyAttachment &) = default ;
        ControlPolicyAttachment(ControlPolicyAttachment &&) = default ;
        ControlPolicyAttachment(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ControlPolicyAttachment() = default ;
        ControlPolicyAttachment& operator=(const ControlPolicyAttachment &) = default ;
        ControlPolicyAttachment& operator=(ControlPolicyAttachment &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachDate_ == nullptr
        && this->description_ == nullptr && this->effectScope_ == nullptr && this->policyId_ == nullptr && this->policyName_ == nullptr && this->policyType_ == nullptr; };
        // attachDate Field Functions 
        bool hasAttachDate() const { return this->attachDate_ != nullptr;};
        void deleteAttachDate() { this->attachDate_ = nullptr;};
        inline string getAttachDate() const { DARABONBA_PTR_GET_DEFAULT(attachDate_, "") };
        inline ControlPolicyAttachment& setAttachDate(string attachDate) { DARABONBA_PTR_SET_VALUE(attachDate_, attachDate) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ControlPolicyAttachment& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // effectScope Field Functions 
        bool hasEffectScope() const { return this->effectScope_ != nullptr;};
        void deleteEffectScope() { this->effectScope_ = nullptr;};
        inline string getEffectScope() const { DARABONBA_PTR_GET_DEFAULT(effectScope_, "") };
        inline ControlPolicyAttachment& setEffectScope(string effectScope) { DARABONBA_PTR_SET_VALUE(effectScope_, effectScope) };


        // policyId Field Functions 
        bool hasPolicyId() const { return this->policyId_ != nullptr;};
        void deletePolicyId() { this->policyId_ = nullptr;};
        inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
        inline ControlPolicyAttachment& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


        // policyName Field Functions 
        bool hasPolicyName() const { return this->policyName_ != nullptr;};
        void deletePolicyName() { this->policyName_ = nullptr;};
        inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
        inline ControlPolicyAttachment& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline ControlPolicyAttachment& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      protected:
        // The time when the access control policy was attached.
        shared_ptr<string> attachDate_ {};
        // The description of the access control policy.
        shared_ptr<string> description_ {};
        // The effective scope of the access control policy. Valid values:
        // 
        // *   All: The access control policy is in effect for Alibaba Cloud accounts, RAM users, and RAM roles.
        // *   RAM: The access control policy is in effect only for RAM users and RAM roles.
        shared_ptr<string> effectScope_ {};
        // The ID of the access control policy.
        shared_ptr<string> policyId_ {};
        // The name of the access control policy.
        shared_ptr<string> policyName_ {};
        // The type of the access control policy. Valid values:
        // 
        // *   System: system access control policy
        // *   Custom: custom access control policy
        shared_ptr<string> policyType_ {};
      };

      virtual bool empty() const override { return this->controlPolicyAttachment_ == nullptr; };
      // controlPolicyAttachment Field Functions 
      bool hasControlPolicyAttachment() const { return this->controlPolicyAttachment_ != nullptr;};
      void deleteControlPolicyAttachment() { this->controlPolicyAttachment_ = nullptr;};
      inline const vector<ControlPolicyAttachments::ControlPolicyAttachment> & getControlPolicyAttachment() const { DARABONBA_PTR_GET_CONST(controlPolicyAttachment_, vector<ControlPolicyAttachments::ControlPolicyAttachment>) };
      inline vector<ControlPolicyAttachments::ControlPolicyAttachment> getControlPolicyAttachment() { DARABONBA_PTR_GET(controlPolicyAttachment_, vector<ControlPolicyAttachments::ControlPolicyAttachment>) };
      inline ControlPolicyAttachments& setControlPolicyAttachment(const vector<ControlPolicyAttachments::ControlPolicyAttachment> & controlPolicyAttachment) { DARABONBA_PTR_SET_VALUE(controlPolicyAttachment_, controlPolicyAttachment) };
      inline ControlPolicyAttachments& setControlPolicyAttachment(vector<ControlPolicyAttachments::ControlPolicyAttachment> && controlPolicyAttachment) { DARABONBA_PTR_SET_RVALUE(controlPolicyAttachment_, controlPolicyAttachment) };


    protected:
      shared_ptr<vector<ControlPolicyAttachments::ControlPolicyAttachment>> controlPolicyAttachment_ {};
    };

    virtual bool empty() const override { return this->controlPolicyAttachments_ == nullptr
        && this->requestId_ == nullptr; };
    // controlPolicyAttachments Field Functions 
    bool hasControlPolicyAttachments() const { return this->controlPolicyAttachments_ != nullptr;};
    void deleteControlPolicyAttachments() { this->controlPolicyAttachments_ = nullptr;};
    inline const ListControlPolicyAttachmentsForTargetResponseBody::ControlPolicyAttachments & getControlPolicyAttachments() const { DARABONBA_PTR_GET_CONST(controlPolicyAttachments_, ListControlPolicyAttachmentsForTargetResponseBody::ControlPolicyAttachments) };
    inline ListControlPolicyAttachmentsForTargetResponseBody::ControlPolicyAttachments getControlPolicyAttachments() { DARABONBA_PTR_GET(controlPolicyAttachments_, ListControlPolicyAttachmentsForTargetResponseBody::ControlPolicyAttachments) };
    inline ListControlPolicyAttachmentsForTargetResponseBody& setControlPolicyAttachments(const ListControlPolicyAttachmentsForTargetResponseBody::ControlPolicyAttachments & controlPolicyAttachments) { DARABONBA_PTR_SET_VALUE(controlPolicyAttachments_, controlPolicyAttachments) };
    inline ListControlPolicyAttachmentsForTargetResponseBody& setControlPolicyAttachments(ListControlPolicyAttachmentsForTargetResponseBody::ControlPolicyAttachments && controlPolicyAttachments) { DARABONBA_PTR_SET_RVALUE(controlPolicyAttachments_, controlPolicyAttachments) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListControlPolicyAttachmentsForTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the attached access control policies.
    shared_ptr<ListControlPolicyAttachmentsForTargetResponseBody::ControlPolicyAttachments> controlPolicyAttachments_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
