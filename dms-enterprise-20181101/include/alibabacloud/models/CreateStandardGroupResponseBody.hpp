// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTANDARDGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESTANDARDGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateStandardGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStandardGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StandardGroup, standardGroup_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStandardGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StandardGroup, standardGroup_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateStandardGroupResponseBody() = default ;
    CreateStandardGroupResponseBody(const CreateStandardGroupResponseBody &) = default ;
    CreateStandardGroupResponseBody(CreateStandardGroupResponseBody &&) = default ;
    CreateStandardGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStandardGroupResponseBody() = default ;
    CreateStandardGroupResponseBody& operator=(const CreateStandardGroupResponseBody &) = default ;
    CreateStandardGroupResponseBody& operator=(CreateStandardGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StandardGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StandardGroup& obj) { 
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupMode, groupMode_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(LastMenderId, lastMenderId_);
      };
      friend void from_json(const Darabonba::Json& j, StandardGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupMode, groupMode_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(LastMenderId, lastMenderId_);
      };
      StandardGroup() = default ;
      StandardGroup(const StandardGroup &) = default ;
      StandardGroup(StandardGroup &&) = default ;
      StandardGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StandardGroup() = default ;
      StandardGroup& operator=(const StandardGroup &) = default ;
      StandardGroup& operator=(StandardGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dbType_ == nullptr
        && this->description_ == nullptr && this->groupId_ == nullptr && this->groupMode_ == nullptr && this->groupName_ == nullptr && this->lastMenderId_ == nullptr; };
      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline StandardGroup& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StandardGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline StandardGroup& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupMode Field Functions 
      bool hasGroupMode() const { return this->groupMode_ != nullptr;};
      void deleteGroupMode() { this->groupMode_ = nullptr;};
      inline string getGroupMode() const { DARABONBA_PTR_GET_DEFAULT(groupMode_, "") };
      inline StandardGroup& setGroupMode(string groupMode) { DARABONBA_PTR_SET_VALUE(groupMode_, groupMode) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline StandardGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // lastMenderId Field Functions 
      bool hasLastMenderId() const { return this->lastMenderId_ != nullptr;};
      void deleteLastMenderId() { this->lastMenderId_ = nullptr;};
      inline int64_t getLastMenderId() const { DARABONBA_PTR_GET_DEFAULT(lastMenderId_, 0L) };
      inline StandardGroup& setLastMenderId(int64_t lastMenderId) { DARABONBA_PTR_SET_VALUE(lastMenderId_, lastMenderId) };


    protected:
      // The type of the database engine. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
      shared_ptr<string> dbType_ {};
      // The description of the security rule set.
      shared_ptr<string> description_ {};
      // The security rule set ID.
      shared_ptr<int64_t> groupId_ {};
      // The control mode. Valid values:
      // 
      // *   **NONE_CONTROL**: Flexible Management
      // *   **STABLE**: Stable Change
      // *   **COMMON**: Security Collaboration
      shared_ptr<string> groupMode_ {};
      // The name of the security rule set.
      shared_ptr<string> groupName_ {};
      // The ID of the user who creates the security rule set.
      shared_ptr<int64_t> lastMenderId_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->standardGroup_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateStandardGroupResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateStandardGroupResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateStandardGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // standardGroup Field Functions 
    bool hasStandardGroup() const { return this->standardGroup_ != nullptr;};
    void deleteStandardGroup() { this->standardGroup_ = nullptr;};
    inline const CreateStandardGroupResponseBody::StandardGroup & getStandardGroup() const { DARABONBA_PTR_GET_CONST(standardGroup_, CreateStandardGroupResponseBody::StandardGroup) };
    inline CreateStandardGroupResponseBody::StandardGroup getStandardGroup() { DARABONBA_PTR_GET(standardGroup_, CreateStandardGroupResponseBody::StandardGroup) };
    inline CreateStandardGroupResponseBody& setStandardGroup(const CreateStandardGroupResponseBody::StandardGroup & standardGroup) { DARABONBA_PTR_SET_VALUE(standardGroup_, standardGroup) };
    inline CreateStandardGroupResponseBody& setStandardGroup(CreateStandardGroupResponseBody::StandardGroup && standardGroup) { DARABONBA_PTR_SET_RVALUE(standardGroup_, standardGroup) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateStandardGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the created security rule set.
    shared_ptr<CreateStandardGroupResponseBody::StandardGroup> standardGroup_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
