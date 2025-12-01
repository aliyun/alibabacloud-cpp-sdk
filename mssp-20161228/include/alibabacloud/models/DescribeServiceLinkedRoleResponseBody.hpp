// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICELINKEDROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class DescribeServiceLinkedRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceLinkedRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EntityRoleGrant, entityRoleGrant_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceLinkedRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityRoleGrant, entityRoleGrant_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServiceLinkedRoleResponseBody() = default ;
    DescribeServiceLinkedRoleResponseBody(const DescribeServiceLinkedRoleResponseBody &) = default ;
    DescribeServiceLinkedRoleResponseBody(DescribeServiceLinkedRoleResponseBody &&) = default ;
    DescribeServiceLinkedRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceLinkedRoleResponseBody() = default ;
    DescribeServiceLinkedRoleResponseBody& operator=(const DescribeServiceLinkedRoleResponseBody &) = default ;
    DescribeServiceLinkedRoleResponseBody& operator=(DescribeServiceLinkedRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityRoleGrant_ == nullptr
        && return this->requestId_ == nullptr; };
    // entityRoleGrant Field Functions 
    bool hasEntityRoleGrant() const { return this->entityRoleGrant_ != nullptr;};
    void deleteEntityRoleGrant() { this->entityRoleGrant_ = nullptr;};
    inline bool entityRoleGrant() const { DARABONBA_PTR_GET_DEFAULT(entityRoleGrant_, false) };
    inline DescribeServiceLinkedRoleResponseBody& setEntityRoleGrant(bool entityRoleGrant) { DARABONBA_PTR_SET_VALUE(entityRoleGrant_, entityRoleGrant) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceLinkedRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Whether the service-linked role permission is granted:
    // - true: Granted.
    // - false: Not granted.
    std::shared_ptr<bool> entityRoleGrant_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
