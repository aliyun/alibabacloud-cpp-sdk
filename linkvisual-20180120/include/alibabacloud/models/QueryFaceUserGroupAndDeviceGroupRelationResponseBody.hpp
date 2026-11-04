// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFACEUSERGROUPANDDEVICEGROUPRELATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYFACEUSERGROUPANDDEVICEGROUPRELATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryFaceUserGroupAndDeviceGroupRelationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFaceUserGroupAndDeviceGroupRelationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFaceUserGroupAndDeviceGroupRelationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryFaceUserGroupAndDeviceGroupRelationResponseBody() = default ;
    QueryFaceUserGroupAndDeviceGroupRelationResponseBody(const QueryFaceUserGroupAndDeviceGroupRelationResponseBody &) = default ;
    QueryFaceUserGroupAndDeviceGroupRelationResponseBody(QueryFaceUserGroupAndDeviceGroupRelationResponseBody &&) = default ;
    QueryFaceUserGroupAndDeviceGroupRelationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFaceUserGroupAndDeviceGroupRelationResponseBody() = default ;
    QueryFaceUserGroupAndDeviceGroupRelationResponseBody& operator=(const QueryFaceUserGroupAndDeviceGroupRelationResponseBody &) = default ;
    QueryFaceUserGroupAndDeviceGroupRelationResponseBody& operator=(QueryFaceUserGroupAndDeviceGroupRelationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ControlId, controlId_);
        DARABONBA_PTR_TO_JSON(ControlType, controlType_);
        DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ControlId, controlId_);
        DARABONBA_PTR_FROM_JSON(ControlType, controlType_);
        DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
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
        && this->controlType_ == nullptr && this->deviceGroupId_ == nullptr && this->modifiedTime_ == nullptr && this->userGroupId_ == nullptr; };
      // controlId Field Functions 
      bool hasControlId() const { return this->controlId_ != nullptr;};
      void deleteControlId() { this->controlId_ = nullptr;};
      inline string getControlId() const { DARABONBA_PTR_GET_DEFAULT(controlId_, "") };
      inline Data& setControlId(string controlId) { DARABONBA_PTR_SET_VALUE(controlId_, controlId) };


      // controlType Field Functions 
      bool hasControlType() const { return this->controlType_ != nullptr;};
      void deleteControlType() { this->controlType_ = nullptr;};
      inline string getControlType() const { DARABONBA_PTR_GET_DEFAULT(controlType_, "") };
      inline Data& setControlType(string controlType) { DARABONBA_PTR_SET_VALUE(controlType_, controlType) };


      // deviceGroupId Field Functions 
      bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
      void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
      inline string getDeviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
      inline Data& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Data& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline Data& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    protected:
      // The control ID for the face synchronization relationship between user groups and device groups.
      shared_ptr<string> controlId_ {};
      // The face synchronization relationship.
      shared_ptr<string> controlType_ {};
      // The device group ID.
      shared_ptr<string> deviceGroupId_ {};
      // The modification time.
      shared_ptr<string> modifiedTime_ {};
      // The user group ID.
      shared_ptr<string> userGroupId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryFaceUserGroupAndDeviceGroupRelationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryFaceUserGroupAndDeviceGroupRelationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryFaceUserGroupAndDeviceGroupRelationResponseBody::Data) };
    inline QueryFaceUserGroupAndDeviceGroupRelationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryFaceUserGroupAndDeviceGroupRelationResponseBody::Data) };
    inline QueryFaceUserGroupAndDeviceGroupRelationResponseBody& setData(const QueryFaceUserGroupAndDeviceGroupRelationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryFaceUserGroupAndDeviceGroupRelationResponseBody& setData(QueryFaceUserGroupAndDeviceGroupRelationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline QueryFaceUserGroupAndDeviceGroupRelationResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryFaceUserGroupAndDeviceGroupRelationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryFaceUserGroupAndDeviceGroupRelationResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The return value of the API call.
    shared_ptr<QueryFaceUserGroupAndDeviceGroupRelationResponseBody::Data> data_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
