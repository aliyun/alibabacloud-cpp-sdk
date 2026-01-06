// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLENFSACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLENFSACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class EnableNfsAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableNfsAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableNfsAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    EnableNfsAclRequest() = default ;
    EnableNfsAclRequest(const EnableNfsAclRequest &) = default ;
    EnableNfsAclRequest(EnableNfsAclRequest &&) = default ;
    EnableNfsAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableNfsAclRequest() = default ;
    EnableNfsAclRequest& operator=(const EnableNfsAclRequest &) = default ;
    EnableNfsAclRequest& operator=(EnableNfsAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline EnableNfsAclRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The ID of the file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
