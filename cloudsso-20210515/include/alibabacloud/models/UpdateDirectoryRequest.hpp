// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIRECTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(NewDirectoryName, newDirectoryName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(NewDirectoryName, newDirectoryName_);
    };
    UpdateDirectoryRequest() = default ;
    UpdateDirectoryRequest(const UpdateDirectoryRequest &) = default ;
    UpdateDirectoryRequest(UpdateDirectoryRequest &&) = default ;
    UpdateDirectoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDirectoryRequest() = default ;
    UpdateDirectoryRequest& operator=(const UpdateDirectoryRequest &) = default ;
    UpdateDirectoryRequest& operator=(UpdateDirectoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->newDirectoryName_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateDirectoryRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // newDirectoryName Field Functions 
    bool hasNewDirectoryName() const { return this->newDirectoryName_ != nullptr;};
    void deleteNewDirectoryName() { this->newDirectoryName_ = nullptr;};
    inline string getNewDirectoryName() const { DARABONBA_PTR_GET_DEFAULT(newDirectoryName_, "") };
    inline UpdateDirectoryRequest& setNewDirectoryName(string newDirectoryName) { DARABONBA_PTR_SET_VALUE(newDirectoryName_, newDirectoryName) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The new name of the directory. The name must be globally unique.
    // 
    // The name can contain lowercase letters, digits, and hyphens (-). The name cannot start or end with a hyphen (-) and cannot contain two consecutive hyphens (-). If you want the new name of the directory to start with `d-`, you must set this parameter to the ID of the directory.
    // 
    // The name must be 2 to 64 characters in length.
    shared_ptr<string> newDirectoryName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
