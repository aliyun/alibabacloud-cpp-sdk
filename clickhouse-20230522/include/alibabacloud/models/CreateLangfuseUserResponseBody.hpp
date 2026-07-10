// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELANGFUSEUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELANGFUSEUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class CreateLangfuseUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLangfuseUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLangfuseUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateLangfuseUserResponseBody() = default ;
    CreateLangfuseUserResponseBody(const CreateLangfuseUserResponseBody &) = default ;
    CreateLangfuseUserResponseBody(CreateLangfuseUserResponseBody &&) = default ;
    CreateLangfuseUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLangfuseUserResponseBody() = default ;
    CreateLangfuseUserResponseBody& operator=(const CreateLangfuseUserResponseBody &) = default ;
    CreateLangfuseUserResponseBody& operator=(CreateLangfuseUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Membership, membership_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Membership, membership_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
      class Membership : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Membership& obj) { 
          DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, Membership& obj) { 
          DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        Membership() = default ;
        Membership(const Membership &) = default ;
        Membership(Membership &&) = default ;
        Membership(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Membership() = default ;
        Membership& operator=(const Membership &) = default ;
        Membership& operator=(Membership &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->organizationId_ == nullptr
        && this->role_ == nullptr; };
        // organizationId Field Functions 
        bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
        void deleteOrganizationId() { this->organizationId_ = nullptr;};
        inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
        inline Membership& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Membership& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        // The Langfuse organization ID.
        shared_ptr<string> organizationId_ {};
        // The role of the user in the organization.
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->email_ == nullptr && this->membership_ == nullptr && this->name_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Data& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // membership Field Functions 
      bool hasMembership() const { return this->membership_ != nullptr;};
      void deleteMembership() { this->membership_ = nullptr;};
      inline const Data::Membership & getMembership() const { DARABONBA_PTR_GET_CONST(membership_, Data::Membership) };
      inline Data::Membership getMembership() { DARABONBA_PTR_GET(membership_, Data::Membership) };
      inline Data& setMembership(const Data::Membership & membership) { DARABONBA_PTR_SET_VALUE(membership_, membership) };
      inline Data& setMembership(Data::Membership && membership) { DARABONBA_PTR_SET_RVALUE(membership_, membership) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The time when the user was created.
      shared_ptr<string> createdAt_ {};
      // The email address of the user.
      shared_ptr<string> email_ {};
      // The role of the user.
      shared_ptr<Data::Membership> membership_ {};
      // The username.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateLangfuseUserResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateLangfuseUserResponseBody::Data) };
    inline CreateLangfuseUserResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateLangfuseUserResponseBody::Data) };
    inline CreateLangfuseUserResponseBody& setData(const CreateLangfuseUserResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateLangfuseUserResponseBody& setData(CreateLangfuseUserResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLangfuseUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response data.
    shared_ptr<CreateLangfuseUserResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
