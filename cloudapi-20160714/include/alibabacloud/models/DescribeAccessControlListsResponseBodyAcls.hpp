// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSRESPONSEBODYACLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTSRESPONSEBODYACLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessControlListsResponseBodyAclsAcl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAccessControlListsResponseBodyAcls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListsResponseBodyAcls& obj) { 
      DARABONBA_PTR_TO_JSON(Acl, acl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListsResponseBodyAcls& obj) { 
      DARABONBA_PTR_FROM_JSON(Acl, acl_);
    };
    DescribeAccessControlListsResponseBodyAcls() = default ;
    DescribeAccessControlListsResponseBodyAcls(const DescribeAccessControlListsResponseBodyAcls &) = default ;
    DescribeAccessControlListsResponseBodyAcls(DescribeAccessControlListsResponseBodyAcls &&) = default ;
    DescribeAccessControlListsResponseBodyAcls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListsResponseBodyAcls() = default ;
    DescribeAccessControlListsResponseBodyAcls& operator=(const DescribeAccessControlListsResponseBodyAcls &) = default ;
    DescribeAccessControlListsResponseBodyAcls& operator=(DescribeAccessControlListsResponseBodyAcls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acl_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline const vector<Models::DescribeAccessControlListsResponseBodyAclsAcl> & acl() const { DARABONBA_PTR_GET_CONST(acl_, vector<Models::DescribeAccessControlListsResponseBodyAclsAcl>) };
    inline vector<Models::DescribeAccessControlListsResponseBodyAclsAcl> acl() { DARABONBA_PTR_GET(acl_, vector<Models::DescribeAccessControlListsResponseBodyAclsAcl>) };
    inline DescribeAccessControlListsResponseBodyAcls& setAcl(const vector<Models::DescribeAccessControlListsResponseBodyAclsAcl> & acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };
    inline DescribeAccessControlListsResponseBodyAcls& setAcl(vector<Models::DescribeAccessControlListsResponseBodyAclsAcl> && acl) { DARABONBA_PTR_SET_RVALUE(acl_, acl) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccessControlListsResponseBodyAclsAcl>> acl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
