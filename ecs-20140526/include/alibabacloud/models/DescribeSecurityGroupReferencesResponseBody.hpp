// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPREFERENCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPREFERENCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeSecurityGroupReferencesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupReferencesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupReferences, securityGroupReferences_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupReferencesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupReferences, securityGroupReferences_);
    };
    DescribeSecurityGroupReferencesResponseBody() = default ;
    DescribeSecurityGroupReferencesResponseBody(const DescribeSecurityGroupReferencesResponseBody &) = default ;
    DescribeSecurityGroupReferencesResponseBody(DescribeSecurityGroupReferencesResponseBody &&) = default ;
    DescribeSecurityGroupReferencesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupReferencesResponseBody() = default ;
    DescribeSecurityGroupReferencesResponseBody& operator=(const DescribeSecurityGroupReferencesResponseBody &) = default ;
    DescribeSecurityGroupReferencesResponseBody& operator=(DescribeSecurityGroupReferencesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->securityGroupReferences_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityGroupReferencesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupReferences Field Functions 
    bool hasSecurityGroupReferences() const { return this->securityGroupReferences_ != nullptr;};
    void deleteSecurityGroupReferences() { this->securityGroupReferences_ = nullptr;};
    inline const DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences & securityGroupReferences() const { DARABONBA_PTR_GET_CONST(securityGroupReferences_, DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences) };
    inline DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences securityGroupReferences() { DARABONBA_PTR_GET(securityGroupReferences_, DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences) };
    inline DescribeSecurityGroupReferencesResponseBody& setSecurityGroupReferences(const DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences & securityGroupReferences) { DARABONBA_PTR_SET_VALUE(securityGroupReferences_, securityGroupReferences) };
    inline DescribeSecurityGroupReferencesResponseBody& setSecurityGroupReferences(DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences && securityGroupReferences) { DARABONBA_PTR_SET_RVALUE(securityGroupReferences_, securityGroupReferences) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details about the references to the specified security groups.
    std::shared_ptr<DescribeSecurityGroupReferencesResponseBodySecurityGroupReferences> securityGroupReferences_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
