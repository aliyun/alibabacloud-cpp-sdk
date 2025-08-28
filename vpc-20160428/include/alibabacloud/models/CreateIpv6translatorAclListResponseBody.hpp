// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPV6TRANSLATORACLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPV6TRANSLATORACLLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateIPv6TranslatorAclListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIPv6TranslatorAclListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIPv6TranslatorAclListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIPv6TranslatorAclListResponseBody() = default ;
    CreateIPv6TranslatorAclListResponseBody(const CreateIPv6TranslatorAclListResponseBody &) = default ;
    CreateIPv6TranslatorAclListResponseBody(CreateIPv6TranslatorAclListResponseBody &&) = default ;
    CreateIPv6TranslatorAclListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIPv6TranslatorAclListResponseBody() = default ;
    CreateIPv6TranslatorAclListResponseBody& operator=(const CreateIPv6TranslatorAclListResponseBody &) = default ;
    CreateIPv6TranslatorAclListResponseBody& operator=(CreateIPv6TranslatorAclListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclId_ != nullptr
        && this->requestId_ != nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline CreateIPv6TranslatorAclListResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIPv6TranslatorAclListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ACL ID.
    std::shared_ptr<string> aclId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
