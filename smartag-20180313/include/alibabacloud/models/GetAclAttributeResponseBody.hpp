// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACLATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACLATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class GetAclAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAclAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(ErrorConfigSmartAGCount, errorConfigSmartAGCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAclAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(ErrorConfigSmartAGCount, errorConfigSmartAGCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAclAttributeResponseBody() = default ;
    GetAclAttributeResponseBody(const GetAclAttributeResponseBody &) = default ;
    GetAclAttributeResponseBody(GetAclAttributeResponseBody &&) = default ;
    GetAclAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAclAttributeResponseBody() = default ;
    GetAclAttributeResponseBody& operator=(const GetAclAttributeResponseBody &) = default ;
    GetAclAttributeResponseBody& operator=(GetAclAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclName_ == nullptr && this->errorConfigSmartAGCount_ == nullptr && this->requestId_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline GetAclAttributeResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string getAclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline GetAclAttributeResponseBody& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // errorConfigSmartAGCount Field Functions 
    bool hasErrorConfigSmartAGCount() const { return this->errorConfigSmartAGCount_ != nullptr;};
    void deleteErrorConfigSmartAGCount() { this->errorConfigSmartAGCount_ = nullptr;};
    inline int32_t getErrorConfigSmartAGCount() const { DARABONBA_PTR_GET_DEFAULT(errorConfigSmartAGCount_, 0) };
    inline GetAclAttributeResponseBody& setErrorConfigSmartAGCount(int32_t errorConfigSmartAGCount) { DARABONBA_PTR_SET_VALUE(errorConfigSmartAGCount_, errorConfigSmartAGCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAclAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the ACL.
    shared_ptr<string> aclId_ {};
    // The name of the ACL.
    shared_ptr<string> aclName_ {};
    // The number of SAG devices that are associated with the ACL who has DPI configuration errors.
    // 
    // You can call the [ListDpiConfigError](https://help.aliyun.com/document_detail/197566.html) operation to query exception details and SAG device information.
    shared_ptr<int32_t> errorConfigSmartAGCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
