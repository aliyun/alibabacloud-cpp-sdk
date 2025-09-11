// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMLDAP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMLDAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap& obj) { 
      DARABONBA_PTR_TO_JSON(BindDN, bindDN_);
      DARABONBA_PTR_TO_JSON(SearchBase, searchBase_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap& obj) { 
      DARABONBA_PTR_FROM_JSON(BindDN, bindDN_);
      DARABONBA_PTR_FROM_JSON(SearchBase, searchBase_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap(const DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap(DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindDN_ != nullptr
        && this->searchBase_ != nullptr && this->URI_ != nullptr; };
    // bindDN Field Functions 
    bool hasBindDN() const { return this->bindDN_ != nullptr;};
    void deleteBindDN() { this->bindDN_ = nullptr;};
    inline string bindDN() const { DARABONBA_PTR_GET_DEFAULT(bindDN_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap& setBindDN(string bindDN) { DARABONBA_PTR_SET_VALUE(bindDN_, bindDN) };


    // searchBase Field Functions 
    bool hasSearchBase() const { return this->searchBase_ != nullptr;};
    void deleteSearchBase() { this->searchBase_ = nullptr;};
    inline string searchBase() const { DARABONBA_PTR_GET_DEFAULT(searchBase_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap& setSearchBase(string searchBase) { DARABONBA_PTR_SET_VALUE(searchBase_, searchBase) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemLdap& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


  protected:
    // An LDAP entry.
    std::shared_ptr<string> bindDN_ = nullptr;
    // An LDAP search base.
    std::shared_ptr<string> searchBase_ = nullptr;
    // An LDAP URI.
    std::shared_ptr<string> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
