// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESMBACLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESMBACLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSmbAclResponseBodyAcl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeSmbAclResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSmbAclResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Acl, acl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSmbAclResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Acl, acl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSmbAclResponseBody() = default ;
    DescribeSmbAclResponseBody(const DescribeSmbAclResponseBody &) = default ;
    DescribeSmbAclResponseBody(DescribeSmbAclResponseBody &&) = default ;
    DescribeSmbAclResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSmbAclResponseBody() = default ;
    DescribeSmbAclResponseBody& operator=(const DescribeSmbAclResponseBody &) = default ;
    DescribeSmbAclResponseBody& operator=(DescribeSmbAclResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acl_ == nullptr
        && return this->requestId_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline const DescribeSmbAclResponseBodyAcl & acl() const { DARABONBA_PTR_GET_CONST(acl_, DescribeSmbAclResponseBodyAcl) };
    inline DescribeSmbAclResponseBodyAcl acl() { DARABONBA_PTR_GET(acl_, DescribeSmbAclResponseBodyAcl) };
    inline DescribeSmbAclResponseBody& setAcl(const DescribeSmbAclResponseBodyAcl & acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };
    inline DescribeSmbAclResponseBody& setAcl(DescribeSmbAclResponseBodyAcl && acl) { DARABONBA_PTR_SET_RVALUE(acl_, acl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSmbAclResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the ACL feature.
    std::shared_ptr<DescribeSmbAclResponseBodyAcl> acl_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
