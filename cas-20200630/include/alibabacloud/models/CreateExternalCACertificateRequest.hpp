// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateExternalCACertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalCACertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiPassthrough, apiPassthrough_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Validity, validity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalCACertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiPassthrough, apiPassthrough_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Validity, validity_);
    };
    CreateExternalCACertificateRequest() = default ;
    CreateExternalCACertificateRequest(const CreateExternalCACertificateRequest &) = default ;
    CreateExternalCACertificateRequest(CreateExternalCACertificateRequest &&) = default ;
    CreateExternalCACertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalCACertificateRequest() = default ;
    CreateExternalCACertificateRequest& operator=(const CreateExternalCACertificateRequest &) = default ;
    CreateExternalCACertificateRequest& operator=(CreateExternalCACertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class ApiPassthrough : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiPassthrough& obj) { 
        DARABONBA_PTR_TO_JSON(Extensions, extensions_);
        DARABONBA_PTR_TO_JSON(Subject, subject_);
      };
      friend void from_json(const Darabonba::Json& j, ApiPassthrough& obj) { 
        DARABONBA_PTR_FROM_JSON(Extensions, extensions_);
        DARABONBA_PTR_FROM_JSON(Subject, subject_);
      };
      ApiPassthrough() = default ;
      ApiPassthrough(const ApiPassthrough &) = default ;
      ApiPassthrough(ApiPassthrough &&) = default ;
      ApiPassthrough(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiPassthrough() = default ;
      ApiPassthrough& operator=(const ApiPassthrough &) = default ;
      ApiPassthrough& operator=(ApiPassthrough &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Subject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Subject& obj) { 
          DARABONBA_PTR_TO_JSON(CommonName, commonName_);
          DARABONBA_PTR_TO_JSON(Country, country_);
          DARABONBA_PTR_TO_JSON(Locality, locality_);
          DARABONBA_PTR_TO_JSON(Organization, organization_);
          DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
          DARABONBA_PTR_TO_JSON(State, state_);
        };
        friend void from_json(const Darabonba::Json& j, Subject& obj) { 
          DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
          DARABONBA_PTR_FROM_JSON(Country, country_);
          DARABONBA_PTR_FROM_JSON(Locality, locality_);
          DARABONBA_PTR_FROM_JSON(Organization, organization_);
          DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
          DARABONBA_PTR_FROM_JSON(State, state_);
        };
        Subject() = default ;
        Subject(const Subject &) = default ;
        Subject(Subject &&) = default ;
        Subject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Subject() = default ;
        Subject& operator=(const Subject &) = default ;
        Subject& operator=(Subject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->commonName_ == nullptr
        && this->country_ == nullptr && this->locality_ == nullptr && this->organization_ == nullptr && this->organizationUnit_ == nullptr && this->state_ == nullptr; };
        // commonName Field Functions 
        bool hasCommonName() const { return this->commonName_ != nullptr;};
        void deleteCommonName() { this->commonName_ = nullptr;};
        inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
        inline Subject& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


        // country Field Functions 
        bool hasCountry() const { return this->country_ != nullptr;};
        void deleteCountry() { this->country_ = nullptr;};
        inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
        inline Subject& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


        // locality Field Functions 
        bool hasLocality() const { return this->locality_ != nullptr;};
        void deleteLocality() { this->locality_ = nullptr;};
        inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
        inline Subject& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


        // organization Field Functions 
        bool hasOrganization() const { return this->organization_ != nullptr;};
        void deleteOrganization() { this->organization_ = nullptr;};
        inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
        inline Subject& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


        // organizationUnit Field Functions 
        bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
        void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
        inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
        inline Subject& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Subject& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      protected:
        shared_ptr<string> commonName_ {};
        shared_ptr<string> country_ {};
        shared_ptr<string> locality_ {};
        shared_ptr<string> organization_ {};
        shared_ptr<string> organizationUnit_ {};
        shared_ptr<string> state_ {};
      };

      class Extensions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Extensions& obj) { 
          DARABONBA_PTR_TO_JSON(ExtendedKeyUsages, extendedKeyUsages_);
          DARABONBA_PTR_TO_JSON(PathLenConstraint, pathLenConstraint_);
        };
        friend void from_json(const Darabonba::Json& j, Extensions& obj) { 
          DARABONBA_PTR_FROM_JSON(ExtendedKeyUsages, extendedKeyUsages_);
          DARABONBA_PTR_FROM_JSON(PathLenConstraint, pathLenConstraint_);
        };
        Extensions() = default ;
        Extensions(const Extensions &) = default ;
        Extensions(Extensions &&) = default ;
        Extensions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Extensions() = default ;
        Extensions& operator=(const Extensions &) = default ;
        Extensions& operator=(Extensions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->extendedKeyUsages_ == nullptr
        && this->pathLenConstraint_ == nullptr; };
        // extendedKeyUsages Field Functions 
        bool hasExtendedKeyUsages() const { return this->extendedKeyUsages_ != nullptr;};
        void deleteExtendedKeyUsages() { this->extendedKeyUsages_ = nullptr;};
        inline const vector<string> & getExtendedKeyUsages() const { DARABONBA_PTR_GET_CONST(extendedKeyUsages_, vector<string>) };
        inline vector<string> getExtendedKeyUsages() { DARABONBA_PTR_GET(extendedKeyUsages_, vector<string>) };
        inline Extensions& setExtendedKeyUsages(const vector<string> & extendedKeyUsages) { DARABONBA_PTR_SET_VALUE(extendedKeyUsages_, extendedKeyUsages) };
        inline Extensions& setExtendedKeyUsages(vector<string> && extendedKeyUsages) { DARABONBA_PTR_SET_RVALUE(extendedKeyUsages_, extendedKeyUsages) };


        // pathLenConstraint Field Functions 
        bool hasPathLenConstraint() const { return this->pathLenConstraint_ != nullptr;};
        void deletePathLenConstraint() { this->pathLenConstraint_ = nullptr;};
        inline int32_t getPathLenConstraint() const { DARABONBA_PTR_GET_DEFAULT(pathLenConstraint_, 0) };
        inline Extensions& setPathLenConstraint(int32_t pathLenConstraint) { DARABONBA_PTR_SET_VALUE(pathLenConstraint_, pathLenConstraint) };


      protected:
        shared_ptr<vector<string>> extendedKeyUsages_ {};
        shared_ptr<int32_t> pathLenConstraint_ {};
      };

      virtual bool empty() const override { return this->extensions_ == nullptr
        && this->subject_ == nullptr; };
      // extensions Field Functions 
      bool hasExtensions() const { return this->extensions_ != nullptr;};
      void deleteExtensions() { this->extensions_ = nullptr;};
      inline const ApiPassthrough::Extensions & getExtensions() const { DARABONBA_PTR_GET_CONST(extensions_, ApiPassthrough::Extensions) };
      inline ApiPassthrough::Extensions getExtensions() { DARABONBA_PTR_GET(extensions_, ApiPassthrough::Extensions) };
      inline ApiPassthrough& setExtensions(const ApiPassthrough::Extensions & extensions) { DARABONBA_PTR_SET_VALUE(extensions_, extensions) };
      inline ApiPassthrough& setExtensions(ApiPassthrough::Extensions && extensions) { DARABONBA_PTR_SET_RVALUE(extensions_, extensions) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline const ApiPassthrough::Subject & getSubject() const { DARABONBA_PTR_GET_CONST(subject_, ApiPassthrough::Subject) };
      inline ApiPassthrough::Subject getSubject() { DARABONBA_PTR_GET(subject_, ApiPassthrough::Subject) };
      inline ApiPassthrough& setSubject(const ApiPassthrough::Subject & subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };
      inline ApiPassthrough& setSubject(ApiPassthrough::Subject && subject) { DARABONBA_PTR_SET_RVALUE(subject_, subject) };


    protected:
      shared_ptr<ApiPassthrough::Extensions> extensions_ {};
      shared_ptr<ApiPassthrough::Subject> subject_ {};
    };

    virtual bool empty() const override { return this->apiPassthrough_ == nullptr
        && this->csr_ == nullptr && this->instanceId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->validity_ == nullptr; };
    // apiPassthrough Field Functions 
    bool hasApiPassthrough() const { return this->apiPassthrough_ != nullptr;};
    void deleteApiPassthrough() { this->apiPassthrough_ = nullptr;};
    inline const CreateExternalCACertificateRequest::ApiPassthrough & getApiPassthrough() const { DARABONBA_PTR_GET_CONST(apiPassthrough_, CreateExternalCACertificateRequest::ApiPassthrough) };
    inline CreateExternalCACertificateRequest::ApiPassthrough getApiPassthrough() { DARABONBA_PTR_GET(apiPassthrough_, CreateExternalCACertificateRequest::ApiPassthrough) };
    inline CreateExternalCACertificateRequest& setApiPassthrough(const CreateExternalCACertificateRequest::ApiPassthrough & apiPassthrough) { DARABONBA_PTR_SET_VALUE(apiPassthrough_, apiPassthrough) };
    inline CreateExternalCACertificateRequest& setApiPassthrough(CreateExternalCACertificateRequest::ApiPassthrough && apiPassthrough) { DARABONBA_PTR_SET_RVALUE(apiPassthrough_, apiPassthrough) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string getCsr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateExternalCACertificateRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateExternalCACertificateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateExternalCACertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateExternalCACertificateRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateExternalCACertificateRequest::Tags>) };
    inline vector<CreateExternalCACertificateRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateExternalCACertificateRequest::Tags>) };
    inline CreateExternalCACertificateRequest& setTags(const vector<CreateExternalCACertificateRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateExternalCACertificateRequest& setTags(vector<CreateExternalCACertificateRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // validity Field Functions 
    bool hasValidity() const { return this->validity_ != nullptr;};
    void deleteValidity() { this->validity_ = nullptr;};
    inline string getValidity() const { DARABONBA_PTR_GET_DEFAULT(validity_, "") };
    inline CreateExternalCACertificateRequest& setValidity(string validity) { DARABONBA_PTR_SET_VALUE(validity_, validity) };


  protected:
    shared_ptr<CreateExternalCACertificateRequest::ApiPassthrough> apiPassthrough_ {};
    shared_ptr<string> csr_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<vector<CreateExternalCACertificateRequest::Tags>> tags_ {};
    shared_ptr<string> validity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
