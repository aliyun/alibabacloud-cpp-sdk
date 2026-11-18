// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLANGFUSEUSERALLOWORGCREATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLANGFUSEUSERALLOWORGCREATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyLangfuseUserAllowOrgCreationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLangfuseUserAllowOrgCreationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLangfuseUserAllowOrgCreationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyLangfuseUserAllowOrgCreationResponseBody() = default ;
    ModifyLangfuseUserAllowOrgCreationResponseBody(const ModifyLangfuseUserAllowOrgCreationResponseBody &) = default ;
    ModifyLangfuseUserAllowOrgCreationResponseBody(ModifyLangfuseUserAllowOrgCreationResponseBody &&) = default ;
    ModifyLangfuseUserAllowOrgCreationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLangfuseUserAllowOrgCreationResponseBody() = default ;
    ModifyLangfuseUserAllowOrgCreationResponseBody& operator=(const ModifyLangfuseUserAllowOrgCreationResponseBody &) = default ;
    ModifyLangfuseUserAllowOrgCreationResponseBody& operator=(ModifyLangfuseUserAllowOrgCreationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AllowOrgCreation, allowOrgCreation_);
        DARABONBA_PTR_TO_JSON(Email, email_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowOrgCreation, allowOrgCreation_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
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
      virtual bool empty() const override { return this->allowOrgCreation_ == nullptr
        && this->email_ == nullptr; };
      // allowOrgCreation Field Functions 
      bool hasAllowOrgCreation() const { return this->allowOrgCreation_ != nullptr;};
      void deleteAllowOrgCreation() { this->allowOrgCreation_ = nullptr;};
      inline bool getAllowOrgCreation() const { DARABONBA_PTR_GET_DEFAULT(allowOrgCreation_, false) };
      inline Data& setAllowOrgCreation(bool allowOrgCreation) { DARABONBA_PTR_SET_VALUE(allowOrgCreation_, allowOrgCreation) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    protected:
      // Specifies whether the user is allowed to create organizations.
      shared_ptr<bool> allowOrgCreation_ {};
      // The email address of the user.
      shared_ptr<string> email_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyLangfuseUserAllowOrgCreationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyLangfuseUserAllowOrgCreationResponseBody::Data) };
    inline ModifyLangfuseUserAllowOrgCreationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyLangfuseUserAllowOrgCreationResponseBody::Data) };
    inline ModifyLangfuseUserAllowOrgCreationResponseBody& setData(const ModifyLangfuseUserAllowOrgCreationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyLangfuseUserAllowOrgCreationResponseBody& setData(ModifyLangfuseUserAllowOrgCreationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyLangfuseUserAllowOrgCreationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<ModifyLangfuseUserAllowOrgCreationResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
