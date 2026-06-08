// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONCONTENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONCONTENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetApplicationContentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationContentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationContentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetApplicationContentsResponseBody() = default ;
    GetApplicationContentsResponseBody(const GetApplicationContentsResponseBody &) = default ;
    GetApplicationContentsResponseBody(GetApplicationContentsResponseBody &&) = default ;
    GetApplicationContentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationContentsResponseBody() = default ;
    GetApplicationContentsResponseBody& operator=(const GetApplicationContentsResponseBody &) = default ;
    GetApplicationContentsResponseBody& operator=(GetApplicationContentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationTime, applicationTime_);
        DARABONBA_PTR_TO_JSON(Contents, contents_);
        DARABONBA_PTR_TO_JSON(DefSchema, defSchema_);
        DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationTime, applicationTime_);
        DARABONBA_PTR_FROM_JSON(Contents, contents_);
        DARABONBA_PTR_FROM_JSON(DefSchema, defSchema_);
        DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Contents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Contents& obj) { 
          DARABONBA_PTR_TO_JSON(AccessTypes, accessTypes_);
          DARABONBA_PTR_TO_JSON(AuthMethod, authMethod_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DefSchema, defSchema_);
          DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
          DARABONBA_PTR_TO_JSON(FinalAccessTypes, finalAccessTypes_);
          DARABONBA_PTR_TO_JSON(Grantee, grantee_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
          DARABONBA_PTR_TO_JSON(Resource, resource_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Contents& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessTypes, accessTypes_);
          DARABONBA_PTR_FROM_JSON(AuthMethod, authMethod_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DefSchema, defSchema_);
          DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
          DARABONBA_PTR_FROM_JSON(FinalAccessTypes, finalAccessTypes_);
          DARABONBA_PTR_FROM_JSON(Grantee, grantee_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
          DARABONBA_PTR_FROM_JSON(Resource, resource_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Contents() = default ;
        Contents(const Contents &) = default ;
        Contents(Contents &&) = default ;
        Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Contents() = default ;
        Contents& operator=(const Contents &) = default ;
        Contents& operator=(Contents &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Resource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Resource& obj) { 
            DARABONBA_PTR_TO_JSON(DefSchema, defSchema_);
            DARABONBA_PTR_TO_JSON(DefVersion, defVersion_);
            DARABONBA_PTR_TO_JSON(MetaData, metaData_);
          };
          friend void from_json(const Darabonba::Json& j, Resource& obj) { 
            DARABONBA_PTR_FROM_JSON(DefSchema, defSchema_);
            DARABONBA_PTR_FROM_JSON(DefVersion, defVersion_);
            DARABONBA_PTR_FROM_JSON(MetaData, metaData_);
          };
          Resource() = default ;
          Resource(const Resource &) = default ;
          Resource(Resource &&) = default ;
          Resource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Resource() = default ;
          Resource& operator=(const Resource &) = default ;
          Resource& operator=(Resource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defSchema_ == nullptr
        && this->defVersion_ == nullptr && this->metaData_ == nullptr; };
          // defSchema Field Functions 
          bool hasDefSchema() const { return this->defSchema_ != nullptr;};
          void deleteDefSchema() { this->defSchema_ = nullptr;};
          inline string getDefSchema() const { DARABONBA_PTR_GET_DEFAULT(defSchema_, "") };
          inline Resource& setDefSchema(string defSchema) { DARABONBA_PTR_SET_VALUE(defSchema_, defSchema) };


          // defVersion Field Functions 
          bool hasDefVersion() const { return this->defVersion_ != nullptr;};
          void deleteDefVersion() { this->defVersion_ = nullptr;};
          inline string getDefVersion() const { DARABONBA_PTR_GET_DEFAULT(defVersion_, "") };
          inline Resource& setDefVersion(string defVersion) { DARABONBA_PTR_SET_VALUE(defVersion_, defVersion) };


          // metaData Field Functions 
          bool hasMetaData() const { return this->metaData_ != nullptr;};
          void deleteMetaData() { this->metaData_ = nullptr;};
          inline string getMetaData() const { DARABONBA_PTR_GET_DEFAULT(metaData_, "") };
          inline Resource& setMetaData(string metaData) { DARABONBA_PTR_SET_VALUE(metaData_, metaData) };


        protected:
          shared_ptr<string> defSchema_ {};
          shared_ptr<string> defVersion_ {};
          shared_ptr<string> metaData_ {};
        };

        class Grantee : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Grantee& obj) { 
            DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
            DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
          };
          friend void from_json(const Darabonba::Json& j, Grantee& obj) { 
            DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
            DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
          };
          Grantee() = default ;
          Grantee(const Grantee &) = default ;
          Grantee(Grantee &&) = default ;
          Grantee(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Grantee() = default ;
          Grantee& operator=(const Grantee &) = default ;
          Grantee& operator=(Grantee &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->principalId_ == nullptr
        && this->principalType_ == nullptr; };
          // principalId Field Functions 
          bool hasPrincipalId() const { return this->principalId_ != nullptr;};
          void deletePrincipalId() { this->principalId_ = nullptr;};
          inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
          inline Grantee& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


          // principalType Field Functions 
          bool hasPrincipalType() const { return this->principalType_ != nullptr;};
          void deletePrincipalType() { this->principalType_ = nullptr;};
          inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
          inline Grantee& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


        protected:
          shared_ptr<string> principalId_ {};
          shared_ptr<string> principalType_ {};
        };

        virtual bool empty() const override { return this->accessTypes_ == nullptr
        && this->authMethod_ == nullptr && this->createTime_ == nullptr && this->defSchema_ == nullptr && this->expirationTime_ == nullptr && this->finalAccessTypes_ == nullptr
        && this->grantee_ == nullptr && this->id_ == nullptr && this->processInstanceId_ == nullptr && this->resource_ == nullptr && this->resourceName_ == nullptr
        && this->status_ == nullptr && this->tenantId_ == nullptr && this->updateTime_ == nullptr; };
        // accessTypes Field Functions 
        bool hasAccessTypes() const { return this->accessTypes_ != nullptr;};
        void deleteAccessTypes() { this->accessTypes_ = nullptr;};
        inline const vector<string> & getAccessTypes() const { DARABONBA_PTR_GET_CONST(accessTypes_, vector<string>) };
        inline vector<string> getAccessTypes() { DARABONBA_PTR_GET(accessTypes_, vector<string>) };
        inline Contents& setAccessTypes(const vector<string> & accessTypes) { DARABONBA_PTR_SET_VALUE(accessTypes_, accessTypes) };
        inline Contents& setAccessTypes(vector<string> && accessTypes) { DARABONBA_PTR_SET_RVALUE(accessTypes_, accessTypes) };


        // authMethod Field Functions 
        bool hasAuthMethod() const { return this->authMethod_ != nullptr;};
        void deleteAuthMethod() { this->authMethod_ = nullptr;};
        inline string getAuthMethod() const { DARABONBA_PTR_GET_DEFAULT(authMethod_, "") };
        inline Contents& setAuthMethod(string authMethod) { DARABONBA_PTR_SET_VALUE(authMethod_, authMethod) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Contents& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // defSchema Field Functions 
        bool hasDefSchema() const { return this->defSchema_ != nullptr;};
        void deleteDefSchema() { this->defSchema_ = nullptr;};
        inline string getDefSchema() const { DARABONBA_PTR_GET_DEFAULT(defSchema_, "") };
        inline Contents& setDefSchema(string defSchema) { DARABONBA_PTR_SET_VALUE(defSchema_, defSchema) };


        // expirationTime Field Functions 
        bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
        void deleteExpirationTime() { this->expirationTime_ = nullptr;};
        inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
        inline Contents& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


        // finalAccessTypes Field Functions 
        bool hasFinalAccessTypes() const { return this->finalAccessTypes_ != nullptr;};
        void deleteFinalAccessTypes() { this->finalAccessTypes_ = nullptr;};
        inline const vector<string> & getFinalAccessTypes() const { DARABONBA_PTR_GET_CONST(finalAccessTypes_, vector<string>) };
        inline vector<string> getFinalAccessTypes() { DARABONBA_PTR_GET(finalAccessTypes_, vector<string>) };
        inline Contents& setFinalAccessTypes(const vector<string> & finalAccessTypes) { DARABONBA_PTR_SET_VALUE(finalAccessTypes_, finalAccessTypes) };
        inline Contents& setFinalAccessTypes(vector<string> && finalAccessTypes) { DARABONBA_PTR_SET_RVALUE(finalAccessTypes_, finalAccessTypes) };


        // grantee Field Functions 
        bool hasGrantee() const { return this->grantee_ != nullptr;};
        void deleteGrantee() { this->grantee_ = nullptr;};
        inline const Contents::Grantee & getGrantee() const { DARABONBA_PTR_GET_CONST(grantee_, Contents::Grantee) };
        inline Contents::Grantee getGrantee() { DARABONBA_PTR_GET(grantee_, Contents::Grantee) };
        inline Contents& setGrantee(const Contents::Grantee & grantee) { DARABONBA_PTR_SET_VALUE(grantee_, grantee) };
        inline Contents& setGrantee(Contents::Grantee && grantee) { DARABONBA_PTR_SET_RVALUE(grantee_, grantee) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Contents& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // processInstanceId Field Functions 
        bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
        void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
        inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
        inline Contents& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


        // resource Field Functions 
        bool hasResource() const { return this->resource_ != nullptr;};
        void deleteResource() { this->resource_ = nullptr;};
        inline const Contents::Resource & getResource() const { DARABONBA_PTR_GET_CONST(resource_, Contents::Resource) };
        inline Contents::Resource getResource() { DARABONBA_PTR_GET(resource_, Contents::Resource) };
        inline Contents& setResource(const Contents::Resource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
        inline Contents& setResource(Contents::Resource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline Contents& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Contents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Contents& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Contents& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<vector<string>> accessTypes_ {};
        shared_ptr<string> authMethod_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> defSchema_ {};
        shared_ptr<int64_t> expirationTime_ {};
        shared_ptr<vector<string>> finalAccessTypes_ {};
        shared_ptr<Contents::Grantee> grantee_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> processInstanceId_ {};
        shared_ptr<Contents::Resource> resource_ {};
        shared_ptr<string> resourceName_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> tenantId_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->applicationTime_ == nullptr
        && this->contents_ == nullptr && this->defSchema_ == nullptr && this->processInstanceId_ == nullptr && this->reason_ == nullptr && this->status_ == nullptr; };
      // applicationTime Field Functions 
      bool hasApplicationTime() const { return this->applicationTime_ != nullptr;};
      void deleteApplicationTime() { this->applicationTime_ = nullptr;};
      inline int64_t getApplicationTime() const { DARABONBA_PTR_GET_DEFAULT(applicationTime_, 0L) };
      inline Data& setApplicationTime(int64_t applicationTime) { DARABONBA_PTR_SET_VALUE(applicationTime_, applicationTime) };


      // contents Field Functions 
      bool hasContents() const { return this->contents_ != nullptr;};
      void deleteContents() { this->contents_ = nullptr;};
      inline const vector<Data::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<Data::Contents>) };
      inline vector<Data::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<Data::Contents>) };
      inline Data& setContents(const vector<Data::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
      inline Data& setContents(vector<Data::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


      // defSchema Field Functions 
      bool hasDefSchema() const { return this->defSchema_ != nullptr;};
      void deleteDefSchema() { this->defSchema_ = nullptr;};
      inline string getDefSchema() const { DARABONBA_PTR_GET_DEFAULT(defSchema_, "") };
      inline Data& setDefSchema(string defSchema) { DARABONBA_PTR_SET_VALUE(defSchema_, defSchema) };


      // processInstanceId Field Functions 
      bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
      void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
      inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
      inline Data& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Data& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<int64_t> applicationTime_ {};
      shared_ptr<vector<Data::Contents>> contents_ {};
      shared_ptr<string> defSchema_ {};
      shared_ptr<string> processInstanceId_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetApplicationContentsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetApplicationContentsResponseBody::Data) };
    inline GetApplicationContentsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetApplicationContentsResponseBody::Data) };
    inline GetApplicationContentsResponseBody& setData(const GetApplicationContentsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetApplicationContentsResponseBody& setData(GetApplicationContentsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApplicationContentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetApplicationContentsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
