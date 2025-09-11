// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLDAPCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLDAPCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ModifyLDAPConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLDAPConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindDN, bindDN_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(SearchBase, searchBase_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLDAPConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindDN, bindDN_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(SearchBase, searchBase_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    ModifyLDAPConfigRequest() = default ;
    ModifyLDAPConfigRequest(const ModifyLDAPConfigRequest &) = default ;
    ModifyLDAPConfigRequest(ModifyLDAPConfigRequest &&) = default ;
    ModifyLDAPConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLDAPConfigRequest() = default ;
    ModifyLDAPConfigRequest& operator=(const ModifyLDAPConfigRequest &) = default ;
    ModifyLDAPConfigRequest& operator=(ModifyLDAPConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindDN_ != nullptr
        && this->fileSystemId_ != nullptr && this->searchBase_ != nullptr && this->URI_ != nullptr; };
    // bindDN Field Functions 
    bool hasBindDN() const { return this->bindDN_ != nullptr;};
    void deleteBindDN() { this->bindDN_ = nullptr;};
    inline string bindDN() const { DARABONBA_PTR_GET_DEFAULT(bindDN_, "") };
    inline ModifyLDAPConfigRequest& setBindDN(string bindDN) { DARABONBA_PTR_SET_VALUE(bindDN_, bindDN) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ModifyLDAPConfigRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // searchBase Field Functions 
    bool hasSearchBase() const { return this->searchBase_ != nullptr;};
    void deleteSearchBase() { this->searchBase_ = nullptr;};
    inline string searchBase() const { DARABONBA_PTR_GET_DEFAULT(searchBase_, "") };
    inline ModifyLDAPConfigRequest& setSearchBase(string searchBase) { DARABONBA_PTR_SET_VALUE(searchBase_, searchBase) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline ModifyLDAPConfigRequest& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // The LDAP entry.
    std::shared_ptr<string> bindDN_ = nullptr;
    // The ID of the file system.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The LDAP search base.
    // 
    // This parameter is required.
    std::shared_ptr<string> searchBase_ = nullptr;
    // The LDAP service address.
    // 
    // This parameter is required.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
