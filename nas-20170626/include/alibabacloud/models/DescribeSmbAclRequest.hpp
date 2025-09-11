// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMBACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMBACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeSmbAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmbAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmbAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    DescribeSmbAclRequest() = default ;
    DescribeSmbAclRequest(const DescribeSmbAclRequest &) = default ;
    DescribeSmbAclRequest(DescribeSmbAclRequest &&) = default ;
    DescribeSmbAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmbAclRequest() = default ;
    DescribeSmbAclRequest& operator=(const DescribeSmbAclRequest &) = default ;
    DescribeSmbAclRequest& operator=(DescribeSmbAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileSystemId_ != nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeSmbAclRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


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
