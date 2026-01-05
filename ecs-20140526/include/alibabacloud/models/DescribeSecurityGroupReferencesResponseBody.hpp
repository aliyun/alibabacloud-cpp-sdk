// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPREFERENCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPREFERENCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSecurityGroupReferencesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupReferencesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupReferences, securityGroupReferences_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupReferencesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupReferences, securityGroupReferences_);
    };
    DescribeSecurityGroupReferencesResponseBody() = default ;
    DescribeSecurityGroupReferencesResponseBody(const DescribeSecurityGroupReferencesResponseBody &) = default ;
    DescribeSecurityGroupReferencesResponseBody(DescribeSecurityGroupReferencesResponseBody &&) = default ;
    DescribeSecurityGroupReferencesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupReferencesResponseBody() = default ;
    DescribeSecurityGroupReferencesResponseBody& operator=(const DescribeSecurityGroupReferencesResponseBody &) = default ;
    DescribeSecurityGroupReferencesResponseBody& operator=(DescribeSecurityGroupReferencesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityGroupReferences : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityGroupReferences& obj) { 
        DARABONBA_PTR_TO_JSON(SecurityGroupReference, securityGroupReference_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityGroupReferences& obj) { 
        DARABONBA_PTR_FROM_JSON(SecurityGroupReference, securityGroupReference_);
      };
      SecurityGroupReferences() = default ;
      SecurityGroupReferences(const SecurityGroupReferences &) = default ;
      SecurityGroupReferences(SecurityGroupReferences &&) = default ;
      SecurityGroupReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityGroupReferences() = default ;
      SecurityGroupReferences& operator=(const SecurityGroupReferences &) = default ;
      SecurityGroupReferences& operator=(SecurityGroupReferences &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SecurityGroupReference : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityGroupReference& obj) { 
          DARABONBA_PTR_TO_JSON(ReferencingSecurityGroups, referencingSecurityGroups_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityGroupReference& obj) { 
          DARABONBA_PTR_FROM_JSON(ReferencingSecurityGroups, referencingSecurityGroups_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        };
        SecurityGroupReference() = default ;
        SecurityGroupReference(const SecurityGroupReference &) = default ;
        SecurityGroupReference(SecurityGroupReference &&) = default ;
        SecurityGroupReference(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityGroupReference() = default ;
        SecurityGroupReference& operator=(const SecurityGroupReference &) = default ;
        SecurityGroupReference& operator=(SecurityGroupReference &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ReferencingSecurityGroups : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReferencingSecurityGroups& obj) { 
            DARABONBA_PTR_TO_JSON(ReferencingSecurityGroup, referencingSecurityGroup_);
          };
          friend void from_json(const Darabonba::Json& j, ReferencingSecurityGroups& obj) { 
            DARABONBA_PTR_FROM_JSON(ReferencingSecurityGroup, referencingSecurityGroup_);
          };
          ReferencingSecurityGroups() = default ;
          ReferencingSecurityGroups(const ReferencingSecurityGroups &) = default ;
          ReferencingSecurityGroups(ReferencingSecurityGroups &&) = default ;
          ReferencingSecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReferencingSecurityGroups() = default ;
          ReferencingSecurityGroups& operator=(const ReferencingSecurityGroups &) = default ;
          ReferencingSecurityGroups& operator=(ReferencingSecurityGroups &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ReferencingSecurityGroup : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ReferencingSecurityGroup& obj) { 
              DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
              DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
            };
            friend void from_json(const Darabonba::Json& j, ReferencingSecurityGroup& obj) { 
              DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
              DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
            };
            ReferencingSecurityGroup() = default ;
            ReferencingSecurityGroup(const ReferencingSecurityGroup &) = default ;
            ReferencingSecurityGroup(ReferencingSecurityGroup &&) = default ;
            ReferencingSecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ReferencingSecurityGroup() = default ;
            ReferencingSecurityGroup& operator=(const ReferencingSecurityGroup &) = default ;
            ReferencingSecurityGroup& operator=(ReferencingSecurityGroup &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->securityGroupId_ == nullptr; };
            // aliUid Field Functions 
            bool hasAliUid() const { return this->aliUid_ != nullptr;};
            void deleteAliUid() { this->aliUid_ = nullptr;};
            inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
            inline ReferencingSecurityGroup& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


            // securityGroupId Field Functions 
            bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
            void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
            inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
            inline ReferencingSecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


          protected:
            // The ID of the Alibaba Cloud account to which the security group whose rules reference the specified security group belongs.
            shared_ptr<string> aliUid_ {};
            // The ID of the security group whose rules reference the specified security group.
            shared_ptr<string> securityGroupId_ {};
          };

          virtual bool empty() const override { return this->referencingSecurityGroup_ == nullptr; };
          // referencingSecurityGroup Field Functions 
          bool hasReferencingSecurityGroup() const { return this->referencingSecurityGroup_ != nullptr;};
          void deleteReferencingSecurityGroup() { this->referencingSecurityGroup_ = nullptr;};
          inline const vector<ReferencingSecurityGroups::ReferencingSecurityGroup> & getReferencingSecurityGroup() const { DARABONBA_PTR_GET_CONST(referencingSecurityGroup_, vector<ReferencingSecurityGroups::ReferencingSecurityGroup>) };
          inline vector<ReferencingSecurityGroups::ReferencingSecurityGroup> getReferencingSecurityGroup() { DARABONBA_PTR_GET(referencingSecurityGroup_, vector<ReferencingSecurityGroups::ReferencingSecurityGroup>) };
          inline ReferencingSecurityGroups& setReferencingSecurityGroup(const vector<ReferencingSecurityGroups::ReferencingSecurityGroup> & referencingSecurityGroup) { DARABONBA_PTR_SET_VALUE(referencingSecurityGroup_, referencingSecurityGroup) };
          inline ReferencingSecurityGroups& setReferencingSecurityGroup(vector<ReferencingSecurityGroups::ReferencingSecurityGroup> && referencingSecurityGroup) { DARABONBA_PTR_SET_RVALUE(referencingSecurityGroup_, referencingSecurityGroup) };


        protected:
          shared_ptr<vector<ReferencingSecurityGroups::ReferencingSecurityGroup>> referencingSecurityGroup_ {};
        };

        virtual bool empty() const override { return this->referencingSecurityGroups_ == nullptr
        && this->securityGroupId_ == nullptr; };
        // referencingSecurityGroups Field Functions 
        bool hasReferencingSecurityGroups() const { return this->referencingSecurityGroups_ != nullptr;};
        void deleteReferencingSecurityGroups() { this->referencingSecurityGroups_ = nullptr;};
        inline const SecurityGroupReference::ReferencingSecurityGroups & getReferencingSecurityGroups() const { DARABONBA_PTR_GET_CONST(referencingSecurityGroups_, SecurityGroupReference::ReferencingSecurityGroups) };
        inline SecurityGroupReference::ReferencingSecurityGroups getReferencingSecurityGroups() { DARABONBA_PTR_GET(referencingSecurityGroups_, SecurityGroupReference::ReferencingSecurityGroups) };
        inline SecurityGroupReference& setReferencingSecurityGroups(const SecurityGroupReference::ReferencingSecurityGroups & referencingSecurityGroups) { DARABONBA_PTR_SET_VALUE(referencingSecurityGroups_, referencingSecurityGroups) };
        inline SecurityGroupReference& setReferencingSecurityGroups(SecurityGroupReference::ReferencingSecurityGroups && referencingSecurityGroups) { DARABONBA_PTR_SET_RVALUE(referencingSecurityGroups_, referencingSecurityGroups) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SecurityGroupReference& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      protected:
        // Details about the security groups whose rules reference the specified security group.
        shared_ptr<SecurityGroupReference::ReferencingSecurityGroups> referencingSecurityGroups_ {};
        // The ID of the specified security group.
        shared_ptr<string> securityGroupId_ {};
      };

      virtual bool empty() const override { return this->securityGroupReference_ == nullptr; };
      // securityGroupReference Field Functions 
      bool hasSecurityGroupReference() const { return this->securityGroupReference_ != nullptr;};
      void deleteSecurityGroupReference() { this->securityGroupReference_ = nullptr;};
      inline const vector<SecurityGroupReferences::SecurityGroupReference> & getSecurityGroupReference() const { DARABONBA_PTR_GET_CONST(securityGroupReference_, vector<SecurityGroupReferences::SecurityGroupReference>) };
      inline vector<SecurityGroupReferences::SecurityGroupReference> getSecurityGroupReference() { DARABONBA_PTR_GET(securityGroupReference_, vector<SecurityGroupReferences::SecurityGroupReference>) };
      inline SecurityGroupReferences& setSecurityGroupReference(const vector<SecurityGroupReferences::SecurityGroupReference> & securityGroupReference) { DARABONBA_PTR_SET_VALUE(securityGroupReference_, securityGroupReference) };
      inline SecurityGroupReferences& setSecurityGroupReference(vector<SecurityGroupReferences::SecurityGroupReference> && securityGroupReference) { DARABONBA_PTR_SET_RVALUE(securityGroupReference_, securityGroupReference) };


    protected:
      shared_ptr<vector<SecurityGroupReferences::SecurityGroupReference>> securityGroupReference_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityGroupReferences_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityGroupReferencesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupReferences Field Functions 
    bool hasSecurityGroupReferences() const { return this->securityGroupReferences_ != nullptr;};
    void deleteSecurityGroupReferences() { this->securityGroupReferences_ = nullptr;};
    inline const DescribeSecurityGroupReferencesResponseBody::SecurityGroupReferences & getSecurityGroupReferences() const { DARABONBA_PTR_GET_CONST(securityGroupReferences_, DescribeSecurityGroupReferencesResponseBody::SecurityGroupReferences) };
    inline DescribeSecurityGroupReferencesResponseBody::SecurityGroupReferences getSecurityGroupReferences() { DARABONBA_PTR_GET(securityGroupReferences_, DescribeSecurityGroupReferencesResponseBody::SecurityGroupReferences) };
    inline DescribeSecurityGroupReferencesResponseBody& setSecurityGroupReferences(const DescribeSecurityGroupReferencesResponseBody::SecurityGroupReferences & securityGroupReferences) { DARABONBA_PTR_SET_VALUE(securityGroupReferences_, securityGroupReferences) };
    inline DescribeSecurityGroupReferencesResponseBody& setSecurityGroupReferences(DescribeSecurityGroupReferencesResponseBody::SecurityGroupReferences && securityGroupReferences) { DARABONBA_PTR_SET_RVALUE(securityGroupReferences_, securityGroupReferences) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Details about the references to the specified security groups.
    shared_ptr<DescribeSecurityGroupReferencesResponseBody::SecurityGroupReferences> securityGroupReferences_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
