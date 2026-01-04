// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIPV6TRANSLATORACLLISTENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDIPV6TRANSLATORACLLISTENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AddIPv6TranslatorAclListEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddIPv6TranslatorAclListEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntryId, aclEntryId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddIPv6TranslatorAclListEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntryId, aclEntryId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddIPv6TranslatorAclListEntryResponseBody() = default ;
    AddIPv6TranslatorAclListEntryResponseBody(const AddIPv6TranslatorAclListEntryResponseBody &) = default ;
    AddIPv6TranslatorAclListEntryResponseBody(AddIPv6TranslatorAclListEntryResponseBody &&) = default ;
    AddIPv6TranslatorAclListEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddIPv6TranslatorAclListEntryResponseBody() = default ;
    AddIPv6TranslatorAclListEntryResponseBody& operator=(const AddIPv6TranslatorAclListEntryResponseBody &) = default ;
    AddIPv6TranslatorAclListEntryResponseBody& operator=(AddIPv6TranslatorAclListEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntryId_ == nullptr
        && this->requestId_ == nullptr; };
    // aclEntryId Field Functions 
    bool hasAclEntryId() const { return this->aclEntryId_ != nullptr;};
    void deleteAclEntryId() { this->aclEntryId_ = nullptr;};
    inline string getAclEntryId() const { DARABONBA_PTR_GET_DEFAULT(aclEntryId_, "") };
    inline AddIPv6TranslatorAclListEntryResponseBody& setAclEntryId(string aclEntryId) { DARABONBA_PTR_SET_VALUE(aclEntryId_, aclEntryId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddIPv6TranslatorAclListEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the ACL entry.
    shared_ptr<string> aclEntryId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
