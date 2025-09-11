// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEANDCLEANRECYCLEBINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEANDCLEANRECYCLEBINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DisableAndCleanRecycleBinRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableAndCleanRecycleBinRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableAndCleanRecycleBinRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    DisableAndCleanRecycleBinRequest() = default ;
    DisableAndCleanRecycleBinRequest(const DisableAndCleanRecycleBinRequest &) = default ;
    DisableAndCleanRecycleBinRequest(DisableAndCleanRecycleBinRequest &&) = default ;
    DisableAndCleanRecycleBinRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableAndCleanRecycleBinRequest() = default ;
    DisableAndCleanRecycleBinRequest& operator=(const DisableAndCleanRecycleBinRequest &) = default ;
    DisableAndCleanRecycleBinRequest& operator=(DisableAndCleanRecycleBinRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSystemId_ != nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DisableAndCleanRecycleBinRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
