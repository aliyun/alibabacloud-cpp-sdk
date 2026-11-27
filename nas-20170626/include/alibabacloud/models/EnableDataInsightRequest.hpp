// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEDATAINSIGHTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEDATAINSIGHTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class EnableDataInsightRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableDataInsightRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableDataInsightRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
    };
    EnableDataInsightRequest() = default ;
    EnableDataInsightRequest(const EnableDataInsightRequest &) = default ;
    EnableDataInsightRequest(EnableDataInsightRequest &&) = default ;
    EnableDataInsightRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableDataInsightRequest() = default ;
    EnableDataInsightRequest& operator=(const EnableDataInsightRequest &) = default ;
    EnableDataInsightRequest& operator=(EnableDataInsightRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline EnableDataInsightRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


  protected:
    // The ID of the file system. The ID must start with `bmcpfs-`, such as bmcpfs-125487****. You can obtain the ID by purchasing a file system through the NAS console or by calling the [DescribeFileSystems](https://www.alibabacloud.com/help/en/nas/developer-reference/api-nas-2017-06-26-describefilesystems) operation and setting FileSystemType to bmcpfs.
    // 
    // > This feature is supported only by CPFS for Lingjun file systems.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
