// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENFSACLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENFSACLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeNfsAclResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNfsAclResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Acl, acl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNfsAclResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Acl, acl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNfsAclResponseBody() = default ;
    DescribeNfsAclResponseBody(const DescribeNfsAclResponseBody &) = default ;
    DescribeNfsAclResponseBody(DescribeNfsAclResponseBody &&) = default ;
    DescribeNfsAclResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNfsAclResponseBody() = default ;
    DescribeNfsAclResponseBody& operator=(const DescribeNfsAclResponseBody &) = default ;
    DescribeNfsAclResponseBody& operator=(DescribeNfsAclResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Acl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Acl& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, Acl& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      };
      Acl() = default ;
      Acl(const Acl &) = default ;
      Acl(Acl &&) = default ;
      Acl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Acl() = default ;
      Acl& operator=(const Acl &) = default ;
      Acl& operator=(Acl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Acl& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      // Indicates whether the NFS ACL feature is enabled.
      // 
      // *   true: The NFS ACL feature is enabled.
      // *   false: The NFS ACL feature is disabled.
      shared_ptr<bool> enabled_ {};
    };

    virtual bool empty() const override { return this->acl_ == nullptr
        && this->requestId_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline const DescribeNfsAclResponseBody::Acl & getAcl() const { DARABONBA_PTR_GET_CONST(acl_, DescribeNfsAclResponseBody::Acl) };
    inline DescribeNfsAclResponseBody::Acl getAcl() { DARABONBA_PTR_GET(acl_, DescribeNfsAclResponseBody::Acl) };
    inline DescribeNfsAclResponseBody& setAcl(const DescribeNfsAclResponseBody::Acl & acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };
    inline DescribeNfsAclResponseBody& setAcl(DescribeNfsAclResponseBody::Acl && acl) { DARABONBA_PTR_SET_RVALUE(acl_, acl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNfsAclResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the ACL feature.
    shared_ptr<DescribeNfsAclResponseBody::Acl> acl_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
