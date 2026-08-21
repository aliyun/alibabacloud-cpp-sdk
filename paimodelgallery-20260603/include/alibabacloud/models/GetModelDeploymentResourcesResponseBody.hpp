// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELDEPLOYMENTRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODELDEPLOYMENTRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAIModelGallery20260603
{
namespace Models
{
  class GetModelDeploymentResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelDeploymentResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MemberMatches, memberMatches_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelDeploymentResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberMatches, memberMatches_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetModelDeploymentResourcesResponseBody() = default ;
    GetModelDeploymentResourcesResponseBody(const GetModelDeploymentResourcesResponseBody &) = default ;
    GetModelDeploymentResourcesResponseBody(GetModelDeploymentResourcesResponseBody &&) = default ;
    GetModelDeploymentResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelDeploymentResourcesResponseBody() = default ;
    GetModelDeploymentResourcesResponseBody& operator=(const GetModelDeploymentResourcesResponseBody &) = default ;
    GetModelDeploymentResourcesResponseBody& operator=(GetModelDeploymentResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MemberMatches : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MemberMatches& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedResources, dedicatedResources_);
        DARABONBA_PTR_TO_JSON(MemberType, memberType_);
        DARABONBA_PTR_TO_JSON(PublicResources, publicResources_);
        DARABONBA_PTR_TO_JSON(Quotas, quotas_);
      };
      friend void from_json(const Darabonba::Json& j, MemberMatches& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedResources, dedicatedResources_);
        DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
        DARABONBA_PTR_FROM_JSON(PublicResources, publicResources_);
        DARABONBA_PTR_FROM_JSON(Quotas, quotas_);
      };
      MemberMatches() = default ;
      MemberMatches(const MemberMatches &) = default ;
      MemberMatches(MemberMatches &&) = default ;
      MemberMatches(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MemberMatches() = default ;
      MemberMatches& operator=(const MemberMatches &) = default ;
      MemberMatches& operator=(MemberMatches &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Quotas : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Quotas& obj) { 
          DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
        };
        friend void from_json(const Darabonba::Json& j, Quotas& obj) { 
          DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
        };
        Quotas() = default ;
        Quotas(const Quotas &) = default ;
        Quotas(Quotas &&) = default ;
        Quotas(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Quotas() = default ;
        Quotas& operator=(const Quotas &) = default ;
        Quotas& operator=(Quotas &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->quotaId_ == nullptr; };
        // quotaId Field Functions 
        bool hasQuotaId() const { return this->quotaId_ != nullptr;};
        void deleteQuotaId() { this->quotaId_ = nullptr;};
        inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
        inline Quotas& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


      protected:
        shared_ptr<string> quotaId_ {};
      };

      class PublicResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublicResources& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        };
        friend void from_json(const Darabonba::Json& j, PublicResources& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        };
        PublicResources() = default ;
        PublicResources(const PublicResources &) = default ;
        PublicResources(PublicResources &&) = default ;
        PublicResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PublicResources() = default ;
        PublicResources& operator=(const PublicResources &) = default ;
        PublicResources& operator=(PublicResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceType_ == nullptr; };
        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline PublicResources& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      protected:
        shared_ptr<string> instanceType_ {};
      };

      class DedicatedResources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DedicatedResources& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        };
        friend void from_json(const Darabonba::Json& j, DedicatedResources& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        };
        DedicatedResources() = default ;
        DedicatedResources(const DedicatedResources &) = default ;
        DedicatedResources(DedicatedResources &&) = default ;
        DedicatedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DedicatedResources() = default ;
        DedicatedResources& operator=(const DedicatedResources &) = default ;
        DedicatedResources& operator=(DedicatedResources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceId_ == nullptr; };
        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline DedicatedResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      protected:
        shared_ptr<string> resourceId_ {};
      };

      virtual bool empty() const override { return this->dedicatedResources_ == nullptr
        && this->memberType_ == nullptr && this->publicResources_ == nullptr && this->quotas_ == nullptr; };
      // dedicatedResources Field Functions 
      bool hasDedicatedResources() const { return this->dedicatedResources_ != nullptr;};
      void deleteDedicatedResources() { this->dedicatedResources_ = nullptr;};
      inline const vector<MemberMatches::DedicatedResources> & getDedicatedResources() const { DARABONBA_PTR_GET_CONST(dedicatedResources_, vector<MemberMatches::DedicatedResources>) };
      inline vector<MemberMatches::DedicatedResources> getDedicatedResources() { DARABONBA_PTR_GET(dedicatedResources_, vector<MemberMatches::DedicatedResources>) };
      inline MemberMatches& setDedicatedResources(const vector<MemberMatches::DedicatedResources> & dedicatedResources) { DARABONBA_PTR_SET_VALUE(dedicatedResources_, dedicatedResources) };
      inline MemberMatches& setDedicatedResources(vector<MemberMatches::DedicatedResources> && dedicatedResources) { DARABONBA_PTR_SET_RVALUE(dedicatedResources_, dedicatedResources) };


      // memberType Field Functions 
      bool hasMemberType() const { return this->memberType_ != nullptr;};
      void deleteMemberType() { this->memberType_ = nullptr;};
      inline string getMemberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
      inline MemberMatches& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


      // publicResources Field Functions 
      bool hasPublicResources() const { return this->publicResources_ != nullptr;};
      void deletePublicResources() { this->publicResources_ = nullptr;};
      inline const vector<MemberMatches::PublicResources> & getPublicResources() const { DARABONBA_PTR_GET_CONST(publicResources_, vector<MemberMatches::PublicResources>) };
      inline vector<MemberMatches::PublicResources> getPublicResources() { DARABONBA_PTR_GET(publicResources_, vector<MemberMatches::PublicResources>) };
      inline MemberMatches& setPublicResources(const vector<MemberMatches::PublicResources> & publicResources) { DARABONBA_PTR_SET_VALUE(publicResources_, publicResources) };
      inline MemberMatches& setPublicResources(vector<MemberMatches::PublicResources> && publicResources) { DARABONBA_PTR_SET_RVALUE(publicResources_, publicResources) };


      // quotas Field Functions 
      bool hasQuotas() const { return this->quotas_ != nullptr;};
      void deleteQuotas() { this->quotas_ = nullptr;};
      inline const vector<MemberMatches::Quotas> & getQuotas() const { DARABONBA_PTR_GET_CONST(quotas_, vector<MemberMatches::Quotas>) };
      inline vector<MemberMatches::Quotas> getQuotas() { DARABONBA_PTR_GET(quotas_, vector<MemberMatches::Quotas>) };
      inline MemberMatches& setQuotas(const vector<MemberMatches::Quotas> & quotas) { DARABONBA_PTR_SET_VALUE(quotas_, quotas) };
      inline MemberMatches& setQuotas(vector<MemberMatches::Quotas> && quotas) { DARABONBA_PTR_SET_RVALUE(quotas_, quotas) };


    protected:
      shared_ptr<vector<MemberMatches::DedicatedResources>> dedicatedResources_ {};
      shared_ptr<string> memberType_ {};
      shared_ptr<vector<MemberMatches::PublicResources>> publicResources_ {};
      shared_ptr<vector<MemberMatches::Quotas>> quotas_ {};
    };

    virtual bool empty() const override { return this->memberMatches_ == nullptr
        && this->requestId_ == nullptr; };
    // memberMatches Field Functions 
    bool hasMemberMatches() const { return this->memberMatches_ != nullptr;};
    void deleteMemberMatches() { this->memberMatches_ = nullptr;};
    inline const vector<GetModelDeploymentResourcesResponseBody::MemberMatches> & getMemberMatches() const { DARABONBA_PTR_GET_CONST(memberMatches_, vector<GetModelDeploymentResourcesResponseBody::MemberMatches>) };
    inline vector<GetModelDeploymentResourcesResponseBody::MemberMatches> getMemberMatches() { DARABONBA_PTR_GET(memberMatches_, vector<GetModelDeploymentResourcesResponseBody::MemberMatches>) };
    inline GetModelDeploymentResourcesResponseBody& setMemberMatches(const vector<GetModelDeploymentResourcesResponseBody::MemberMatches> & memberMatches) { DARABONBA_PTR_SET_VALUE(memberMatches_, memberMatches) };
    inline GetModelDeploymentResourcesResponseBody& setMemberMatches(vector<GetModelDeploymentResourcesResponseBody::MemberMatches> && memberMatches) { DARABONBA_PTR_SET_RVALUE(memberMatches_, memberMatches) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModelDeploymentResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetModelDeploymentResourcesResponseBody::MemberMatches>> memberMatches_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAIModelGallery20260603
#endif
