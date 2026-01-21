// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORMDATABYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFORMDATABYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFormDataByIDResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFormDataByIDResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(formData, formData_);
      DARABONBA_PTR_TO_JSON(formInstId, formInstId_);
      DARABONBA_PTR_TO_JSON(modifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_TO_JSON(originator, originator_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFormDataByIDResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(formData, formData_);
      DARABONBA_PTR_FROM_JSON(formInstId, formInstId_);
      DARABONBA_PTR_FROM_JSON(modifiedTimeGMT, modifiedTimeGMT_);
      DARABONBA_PTR_FROM_JSON(originator, originator_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
    };
    GetFormDataByIDResponseBody() = default ;
    GetFormDataByIDResponseBody(const GetFormDataByIDResponseBody &) = default ;
    GetFormDataByIDResponseBody(GetFormDataByIDResponseBody &&) = default ;
    GetFormDataByIDResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFormDataByIDResponseBody() = default ;
    GetFormDataByIDResponseBody& operator=(const GetFormDataByIDResponseBody &) = default ;
    GetFormDataByIDResponseBody& operator=(GetFormDataByIDResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Originator : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Originator& obj) { 
        DARABONBA_PTR_TO_JSON(DepartmentName, departmentName_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Originator& obj) { 
        DARABONBA_PTR_FROM_JSON(DepartmentName, departmentName_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Originator() = default ;
      Originator(const Originator &) = default ;
      Originator(Originator &&) = default ;
      Originator(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Originator() = default ;
      Originator& operator=(const Originator &) = default ;
      Originator& operator=(Originator &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Name : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Name& obj) { 
          DARABONBA_PTR_TO_JSON(NameInChinese, nameInChinese_);
          DARABONBA_PTR_TO_JSON(NameInEnglish, nameInEnglish_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Name& obj) { 
          DARABONBA_PTR_FROM_JSON(NameInChinese, nameInChinese_);
          DARABONBA_PTR_FROM_JSON(NameInEnglish, nameInEnglish_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Name() = default ;
        Name(const Name &) = default ;
        Name(Name &&) = default ;
        Name(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Name() = default ;
        Name& operator=(const Name &) = default ;
        Name& operator=(Name &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nameInChinese_ == nullptr
        && this->nameInEnglish_ == nullptr && this->type_ == nullptr; };
        // nameInChinese Field Functions 
        bool hasNameInChinese() const { return this->nameInChinese_ != nullptr;};
        void deleteNameInChinese() { this->nameInChinese_ = nullptr;};
        inline string getNameInChinese() const { DARABONBA_PTR_GET_DEFAULT(nameInChinese_, "") };
        inline Name& setNameInChinese(string nameInChinese) { DARABONBA_PTR_SET_VALUE(nameInChinese_, nameInChinese) };


        // nameInEnglish Field Functions 
        bool hasNameInEnglish() const { return this->nameInEnglish_ != nullptr;};
        void deleteNameInEnglish() { this->nameInEnglish_ = nullptr;};
        inline string getNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(nameInEnglish_, "") };
        inline Name& setNameInEnglish(string nameInEnglish) { DARABONBA_PTR_SET_VALUE(nameInEnglish_, nameInEnglish) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Name& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> nameInChinese_ {};
        shared_ptr<string> nameInEnglish_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->departmentName_ == nullptr
        && this->email_ == nullptr && this->name_ == nullptr && this->userId_ == nullptr; };
      // departmentName Field Functions 
      bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
      void deleteDepartmentName() { this->departmentName_ = nullptr;};
      inline string getDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
      inline Originator& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Originator& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline const Originator::Name & getName() const { DARABONBA_PTR_GET_CONST(name_, Originator::Name) };
      inline Originator::Name getName() { DARABONBA_PTR_GET(name_, Originator::Name) };
      inline Originator& setName(const Originator::Name & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
      inline Originator& setName(Originator::Name && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Originator& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> departmentName_ {};
      shared_ptr<string> email_ {};
      shared_ptr<Originator::Name> name_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->formData_ == nullptr
        && this->formInstId_ == nullptr && this->modifiedTimeGMT_ == nullptr && this->originator_ == nullptr && this->requestId_ == nullptr && this->vendorRequestId_ == nullptr
        && this->vendorType_ == nullptr; };
    // formData Field Functions 
    bool hasFormData() const { return this->formData_ != nullptr;};
    void deleteFormData() { this->formData_ = nullptr;};
    inline     const Darabonba::Json & getFormData() const { DARABONBA_GET(formData_) };
    Darabonba::Json & getFormData() { DARABONBA_GET(formData_) };
    inline GetFormDataByIDResponseBody& setFormData(const Darabonba::Json & formData) { DARABONBA_SET_VALUE(formData_, formData) };
    inline GetFormDataByIDResponseBody& setFormData(Darabonba::Json && formData) { DARABONBA_SET_RVALUE(formData_, formData) };


    // formInstId Field Functions 
    bool hasFormInstId() const { return this->formInstId_ != nullptr;};
    void deleteFormInstId() { this->formInstId_ = nullptr;};
    inline string getFormInstId() const { DARABONBA_PTR_GET_DEFAULT(formInstId_, "") };
    inline GetFormDataByIDResponseBody& setFormInstId(string formInstId) { DARABONBA_PTR_SET_VALUE(formInstId_, formInstId) };


    // modifiedTimeGMT Field Functions 
    bool hasModifiedTimeGMT() const { return this->modifiedTimeGMT_ != nullptr;};
    void deleteModifiedTimeGMT() { this->modifiedTimeGMT_ = nullptr;};
    inline string getModifiedTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimeGMT_, "") };
    inline GetFormDataByIDResponseBody& setModifiedTimeGMT(string modifiedTimeGMT) { DARABONBA_PTR_SET_VALUE(modifiedTimeGMT_, modifiedTimeGMT) };


    // originator Field Functions 
    bool hasOriginator() const { return this->originator_ != nullptr;};
    void deleteOriginator() { this->originator_ = nullptr;};
    inline const GetFormDataByIDResponseBody::Originator & getOriginator() const { DARABONBA_PTR_GET_CONST(originator_, GetFormDataByIDResponseBody::Originator) };
    inline GetFormDataByIDResponseBody::Originator getOriginator() { DARABONBA_PTR_GET(originator_, GetFormDataByIDResponseBody::Originator) };
    inline GetFormDataByIDResponseBody& setOriginator(const GetFormDataByIDResponseBody::Originator & originator) { DARABONBA_PTR_SET_VALUE(originator_, originator) };
    inline GetFormDataByIDResponseBody& setOriginator(GetFormDataByIDResponseBody::Originator && originator) { DARABONBA_PTR_SET_RVALUE(originator_, originator) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFormDataByIDResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string getVendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline GetFormDataByIDResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetFormDataByIDResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    Darabonba::Json formData_ {};
    shared_ptr<string> formInstId_ {};
    shared_ptr<string> modifiedTimeGMT_ {};
    shared_ptr<GetFormDataByIDResponseBody::Originator> originator_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> vendorRequestId_ {};
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
