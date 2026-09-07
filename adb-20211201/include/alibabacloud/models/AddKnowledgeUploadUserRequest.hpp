// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKNOWLEDGEUPLOADUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDKNOWLEDGEUPLOADUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class AddKnowledgeUploadUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKnowledgeUploadUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, AddKnowledgeUploadUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    AddKnowledgeUploadUserRequest() = default ;
    AddKnowledgeUploadUserRequest(const AddKnowledgeUploadUserRequest &) = default ;
    AddKnowledgeUploadUserRequest(AddKnowledgeUploadUserRequest &&) = default ;
    AddKnowledgeUploadUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKnowledgeUploadUserRequest() = default ;
    AddKnowledgeUploadUserRequest& operator=(const AddKnowledgeUploadUserRequest &) = default ;
    AddKnowledgeUploadUserRequest& operator=(AddKnowledgeUploadUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->fileLocation_ == nullptr && this->users_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline AddKnowledgeUploadUserRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fileLocation Field Functions 
    bool hasFileLocation() const { return this->fileLocation_ != nullptr;};
    void deleteFileLocation() { this->fileLocation_ = nullptr;};
    inline string getFileLocation() const { DARABONBA_PTR_GET_DEFAULT(fileLocation_, "") };
    inline AddKnowledgeUploadUserRequest& setFileLocation(string fileLocation) { DARABONBA_PTR_SET_VALUE(fileLocation_, fileLocation) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline string getUsers() const { DARABONBA_PTR_GET_DEFAULT(users_, "") };
    inline AddKnowledgeUploadUserRequest& setUsers(string users) { DARABONBA_PTR_SET_VALUE(users_, users) };


  protected:
    // The ID of the ADB instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The location of the knowledge base document.
    // 
    // This parameter is required.
    shared_ptr<string> fileLocation_ {};
    // The JSON string of the authorized user array.
    // 
    // This parameter is required.
    shared_ptr<string> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
