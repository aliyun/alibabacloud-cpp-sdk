// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESMBACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESMBACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class EnableSmbAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableSmbAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Keytab, keytab_);
      DARABONBA_PTR_TO_JSON(KeytabMd5, keytabMd5_);
    };
    friend void from_json(const Darabonba::Json& j, EnableSmbAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Keytab, keytab_);
      DARABONBA_PTR_FROM_JSON(KeytabMd5, keytabMd5_);
    };
    EnableSmbAclRequest() = default ;
    EnableSmbAclRequest(const EnableSmbAclRequest &) = default ;
    EnableSmbAclRequest(EnableSmbAclRequest &&) = default ;
    EnableSmbAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableSmbAclRequest() = default ;
    EnableSmbAclRequest& operator=(const EnableSmbAclRequest &) = default ;
    EnableSmbAclRequest& operator=(EnableSmbAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->keytab_ == nullptr && this->keytabMd5_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline EnableSmbAclRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // keytab Field Functions 
    bool hasKeytab() const { return this->keytab_ != nullptr;};
    void deleteKeytab() { this->keytab_ = nullptr;};
    inline string getKeytab() const { DARABONBA_PTR_GET_DEFAULT(keytab_, "") };
    inline EnableSmbAclRequest& setKeytab(string keytab) { DARABONBA_PTR_SET_VALUE(keytab_, keytab) };


    // keytabMd5 Field Functions 
    bool hasKeytabMd5() const { return this->keytabMd5_ != nullptr;};
    void deleteKeytabMd5() { this->keytabMd5_ = nullptr;};
    inline string getKeytabMd5() const { DARABONBA_PTR_GET_DEFAULT(keytabMd5_, "") };
    inline EnableSmbAclRequest& setKeytabMd5(string keytabMd5) { DARABONBA_PTR_SET_VALUE(keytabMd5_, keytabMd5) };


  protected:
    // The ID of the file system.
    // 
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    // The string that is generated after the system encodes the keytab file by using Base64.
    shared_ptr<string> keytab_ {};
    // The string that is generated after the system encodes the keytab file by using MD5.
    shared_ptr<string> keytabMd5_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
