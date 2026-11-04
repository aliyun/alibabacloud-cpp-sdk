// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFACEUSERGROUPANDDEVICEGROUPRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDFACEUSERGROUPANDDEVICEGROUPRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class AddFaceUserGroupAndDeviceGroupRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFaceUserGroupAndDeviceGroupRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddFaceUserGroupAndDeviceGroupRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddFaceUserGroupAndDeviceGroupRelationResponseBody() = default ;
    AddFaceUserGroupAndDeviceGroupRelationResponseBody(const AddFaceUserGroupAndDeviceGroupRelationResponseBody &) = default ;
    AddFaceUserGroupAndDeviceGroupRelationResponseBody(AddFaceUserGroupAndDeviceGroupRelationResponseBody &&) = default ;
    AddFaceUserGroupAndDeviceGroupRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFaceUserGroupAndDeviceGroupRelationResponseBody() = default ;
    AddFaceUserGroupAndDeviceGroupRelationResponseBody& operator=(const AddFaceUserGroupAndDeviceGroupRelationResponseBody &) = default ;
    AddFaceUserGroupAndDeviceGroupRelationResponseBody& operator=(AddFaceUserGroupAndDeviceGroupRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ControlId, controlId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ControlId, controlId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
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
      virtual bool empty() const override { return this->controlId_ == nullptr
        && this->modifiedTime_ == nullptr; };
      // controlId Field Functions 
      bool hasControlId() const { return this->controlId_ != nullptr;};
      void deleteControlId() { this->controlId_ = nullptr;};
      inline string getControlId() const { DARABONBA_PTR_GET_DEFAULT(controlId_, "") };
      inline Data& setControlId(string controlId) { DARABONBA_PTR_SET_VALUE(controlId_, controlId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Data& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    protected:
      // The associated control ID.
      shared_ptr<string> controlId_ {};
      // The modification time.
      shared_ptr<string> modifiedTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AddFaceUserGroupAndDeviceGroupRelationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddFaceUserGroupAndDeviceGroupRelationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddFaceUserGroupAndDeviceGroupRelationResponseBody::Data) };
    inline AddFaceUserGroupAndDeviceGroupRelationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddFaceUserGroupAndDeviceGroupRelationResponseBody::Data) };
    inline AddFaceUserGroupAndDeviceGroupRelationResponseBody& setData(const AddFaceUserGroupAndDeviceGroupRelationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddFaceUserGroupAndDeviceGroupRelationResponseBody& setData(AddFaceUserGroupAndDeviceGroupRelationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline AddFaceUserGroupAndDeviceGroupRelationResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddFaceUserGroupAndDeviceGroupRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddFaceUserGroupAndDeviceGroupRelationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The face synchronization relationship information.
    shared_ptr<AddFaceUserGroupAndDeviceGroupRelationResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
