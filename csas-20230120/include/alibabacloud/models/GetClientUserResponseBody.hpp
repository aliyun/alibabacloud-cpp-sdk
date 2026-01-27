// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetClientUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetClientUserResponseBody() = default ;
    GetClientUserResponseBody(const GetClientUserResponseBody &) = default ;
    GetClientUserResponseBody(GetClientUserResponseBody &&) = default ;
    GetClientUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientUserResponseBody() = default ;
    GetClientUserResponseBody& operator=(const GetClientUserResponseBody &) = default ;
    GetClientUserResponseBody& operator=(GetClientUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Department, department_);
        DARABONBA_PTR_TO_JSON(DepartmentId, departmentId_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdpConfigId, idpConfigId_);
        DARABONBA_PTR_TO_JSON(MobileNumber, mobileNumber_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(Username, username_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Department, department_);
        DARABONBA_PTR_FROM_JSON(DepartmentId, departmentId_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdpConfigId, idpConfigId_);
        DARABONBA_PTR_FROM_JSON(MobileNumber, mobileNumber_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(Username, username_);
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
      class Department : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Department& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, Department& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        Department() = default ;
        Department(const Department &) = default ;
        Department(Department &&) = default ;
        Department(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Department() = default ;
        Department& operator=(const Department &) = default ;
        Department& operator=(Department &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Department& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Department& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->department_ == nullptr
        && this->departmentId_ == nullptr && this->description_ == nullptr && this->email_ == nullptr && this->id_ == nullptr && this->idpConfigId_ == nullptr
        && this->mobileNumber_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr && this->username_ == nullptr; };
      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline const Data::Department & getDepartment() const { DARABONBA_PTR_GET_CONST(department_, Data::Department) };
      inline Data::Department getDepartment() { DARABONBA_PTR_GET(department_, Data::Department) };
      inline Data& setDepartment(const Data::Department & department) { DARABONBA_PTR_SET_VALUE(department_, department) };
      inline Data& setDepartment(Data::Department && department) { DARABONBA_PTR_SET_RVALUE(department_, department) };


      // departmentId Field Functions 
      bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
      void deleteDepartmentId() { this->departmentId_ = nullptr;};
      inline string getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
      inline Data& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Data& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idpConfigId Field Functions 
      bool hasIdpConfigId() const { return this->idpConfigId_ != nullptr;};
      void deleteIdpConfigId() { this->idpConfigId_ = nullptr;};
      inline string getIdpConfigId() const { DARABONBA_PTR_GET_DEFAULT(idpConfigId_, "") };
      inline Data& setIdpConfigId(string idpConfigId) { DARABONBA_PTR_SET_VALUE(idpConfigId_, idpConfigId) };


      // mobileNumber Field Functions 
      bool hasMobileNumber() const { return this->mobileNumber_ != nullptr;};
      void deleteMobileNumber() { this->mobileNumber_ = nullptr;};
      inline string getMobileNumber() const { DARABONBA_PTR_GET_DEFAULT(mobileNumber_, "") };
      inline Data& setMobileNumber(string mobileNumber) { DARABONBA_PTR_SET_VALUE(mobileNumber_, mobileNumber) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline Data& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<Data::Department> department_ {};
      shared_ptr<string> departmentId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> email_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> idpConfigId_ {};
      shared_ptr<string> mobileNumber_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetClientUserResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetClientUserResponseBody::Data) };
    inline GetClientUserResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetClientUserResponseBody::Data) };
    inline GetClientUserResponseBody& setData(const GetClientUserResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetClientUserResponseBody& setData(GetClientUserResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetClientUserResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
