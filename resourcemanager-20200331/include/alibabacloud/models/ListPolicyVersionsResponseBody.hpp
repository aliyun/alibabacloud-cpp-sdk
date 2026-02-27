// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOLICYVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOLICYVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListPolicyVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPolicyVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyVersions, policyVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPolicyVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyVersions, policyVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPolicyVersionsResponseBody() = default ;
    ListPolicyVersionsResponseBody(const ListPolicyVersionsResponseBody &) = default ;
    ListPolicyVersionsResponseBody(ListPolicyVersionsResponseBody &&) = default ;
    ListPolicyVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPolicyVersionsResponseBody() = default ;
    ListPolicyVersionsResponseBody& operator=(const ListPolicyVersionsResponseBody &) = default ;
    ListPolicyVersionsResponseBody& operator=(ListPolicyVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyVersions& obj) { 
        DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      };
      PolicyVersions() = default ;
      PolicyVersions(const PolicyVersions &) = default ;
      PolicyVersions(PolicyVersions &&) = default ;
      PolicyVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyVersions() = default ;
      PolicyVersions& operator=(const PolicyVersions &) = default ;
      PolicyVersions& operator=(PolicyVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PolicyVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PolicyVersion& obj) { 
          DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
          DARABONBA_PTR_TO_JSON(IsDefaultVersion, isDefaultVersion_);
          DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        };
        friend void from_json(const Darabonba::Json& j, PolicyVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
          DARABONBA_PTR_FROM_JSON(IsDefaultVersion, isDefaultVersion_);
          DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        };
        PolicyVersion() = default ;
        PolicyVersion(const PolicyVersion &) = default ;
        PolicyVersion(PolicyVersion &&) = default ;
        PolicyVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PolicyVersion() = default ;
        PolicyVersion& operator=(const PolicyVersion &) = default ;
        PolicyVersion& operator=(PolicyVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createDate_ == nullptr
        && this->isDefaultVersion_ == nullptr && this->versionId_ == nullptr; };
        // createDate Field Functions 
        bool hasCreateDate() const { return this->createDate_ != nullptr;};
        void deleteCreateDate() { this->createDate_ = nullptr;};
        inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
        inline PolicyVersion& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


        // isDefaultVersion Field Functions 
        bool hasIsDefaultVersion() const { return this->isDefaultVersion_ != nullptr;};
        void deleteIsDefaultVersion() { this->isDefaultVersion_ = nullptr;};
        inline bool getIsDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(isDefaultVersion_, false) };
        inline PolicyVersion& setIsDefaultVersion(bool isDefaultVersion) { DARABONBA_PTR_SET_VALUE(isDefaultVersion_, isDefaultVersion) };


        // versionId Field Functions 
        bool hasVersionId() const { return this->versionId_ != nullptr;};
        void deleteVersionId() { this->versionId_ = nullptr;};
        inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
        inline PolicyVersion& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      protected:
        shared_ptr<string> createDate_ {};
        shared_ptr<bool> isDefaultVersion_ {};
        shared_ptr<string> versionId_ {};
      };

      virtual bool empty() const override { return this->policyVersion_ == nullptr; };
      // policyVersion Field Functions 
      bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
      void deletePolicyVersion() { this->policyVersion_ = nullptr;};
      inline const vector<PolicyVersions::PolicyVersion> & getPolicyVersion() const { DARABONBA_PTR_GET_CONST(policyVersion_, vector<PolicyVersions::PolicyVersion>) };
      inline vector<PolicyVersions::PolicyVersion> getPolicyVersion() { DARABONBA_PTR_GET(policyVersion_, vector<PolicyVersions::PolicyVersion>) };
      inline PolicyVersions& setPolicyVersion(const vector<PolicyVersions::PolicyVersion> & policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };
      inline PolicyVersions& setPolicyVersion(vector<PolicyVersions::PolicyVersion> && policyVersion) { DARABONBA_PTR_SET_RVALUE(policyVersion_, policyVersion) };


    protected:
      shared_ptr<vector<PolicyVersions::PolicyVersion>> policyVersion_ {};
    };

    virtual bool empty() const override { return this->policyVersions_ == nullptr
        && this->requestId_ == nullptr; };
    // policyVersions Field Functions 
    bool hasPolicyVersions() const { return this->policyVersions_ != nullptr;};
    void deletePolicyVersions() { this->policyVersions_ = nullptr;};
    inline const ListPolicyVersionsResponseBody::PolicyVersions & getPolicyVersions() const { DARABONBA_PTR_GET_CONST(policyVersions_, ListPolicyVersionsResponseBody::PolicyVersions) };
    inline ListPolicyVersionsResponseBody::PolicyVersions getPolicyVersions() { DARABONBA_PTR_GET(policyVersions_, ListPolicyVersionsResponseBody::PolicyVersions) };
    inline ListPolicyVersionsResponseBody& setPolicyVersions(const ListPolicyVersionsResponseBody::PolicyVersions & policyVersions) { DARABONBA_PTR_SET_VALUE(policyVersions_, policyVersions) };
    inline ListPolicyVersionsResponseBody& setPolicyVersions(ListPolicyVersionsResponseBody::PolicyVersions && policyVersions) { DARABONBA_PTR_SET_RVALUE(policyVersions_, policyVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPolicyVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListPolicyVersionsResponseBody::PolicyVersions> policyVersions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
