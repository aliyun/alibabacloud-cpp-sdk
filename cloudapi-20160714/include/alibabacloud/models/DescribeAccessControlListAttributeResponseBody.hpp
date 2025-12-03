// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessControlListAttributeResponseBodyAclEntrys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAccessControlListAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntrys, aclEntrys_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntrys, aclEntrys_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccessControlListAttributeResponseBody() = default ;
    DescribeAccessControlListAttributeResponseBody(const DescribeAccessControlListAttributeResponseBody &) = default ;
    DescribeAccessControlListAttributeResponseBody(DescribeAccessControlListAttributeResponseBody &&) = default ;
    DescribeAccessControlListAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListAttributeResponseBody() = default ;
    DescribeAccessControlListAttributeResponseBody& operator=(const DescribeAccessControlListAttributeResponseBody &) = default ;
    DescribeAccessControlListAttributeResponseBody& operator=(DescribeAccessControlListAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntrys_ == nullptr
        && return this->aclId_ == nullptr && return this->aclName_ == nullptr && return this->addressIPVersion_ == nullptr && return this->requestId_ == nullptr; };
    // aclEntrys Field Functions 
    bool hasAclEntrys() const { return this->aclEntrys_ != nullptr;};
    void deleteAclEntrys() { this->aclEntrys_ = nullptr;};
    inline const DescribeAccessControlListAttributeResponseBodyAclEntrys & aclEntrys() const { DARABONBA_PTR_GET_CONST(aclEntrys_, DescribeAccessControlListAttributeResponseBodyAclEntrys) };
    inline DescribeAccessControlListAttributeResponseBodyAclEntrys aclEntrys() { DARABONBA_PTR_GET(aclEntrys_, DescribeAccessControlListAttributeResponseBodyAclEntrys) };
    inline DescribeAccessControlListAttributeResponseBody& setAclEntrys(const DescribeAccessControlListAttributeResponseBodyAclEntrys & aclEntrys) { DARABONBA_PTR_SET_VALUE(aclEntrys_, aclEntrys) };
    inline DescribeAccessControlListAttributeResponseBody& setAclEntrys(DescribeAccessControlListAttributeResponseBodyAclEntrys && aclEntrys) { DARABONBA_PTR_SET_RVALUE(aclEntrys_, aclEntrys) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccessControlListAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the access control policy.
    std::shared_ptr<DescribeAccessControlListAttributeResponseBodyAclEntrys> aclEntrys_ = nullptr;
    // The ID of the access control policy.
    std::shared_ptr<string> aclId_ = nullptr;
    // The name of the access control policy.
    std::shared_ptr<string> aclName_ = nullptr;
    // The IP protocol version. Valid values: **ipv4** and **ipv6**.
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
