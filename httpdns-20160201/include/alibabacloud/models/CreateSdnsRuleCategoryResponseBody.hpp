// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESDNSRULECATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESDNSRULECATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class CreateSdnsRuleCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSdnsRuleCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSdnsRuleCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSdnsRuleCategoryResponseBody() = default ;
    CreateSdnsRuleCategoryResponseBody(const CreateSdnsRuleCategoryResponseBody &) = default ;
    CreateSdnsRuleCategoryResponseBody(CreateSdnsRuleCategoryResponseBody &&) = default ;
    CreateSdnsRuleCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSdnsRuleCategoryResponseBody() = default ;
    CreateSdnsRuleCategoryResponseBody& operator=(const CreateSdnsRuleCategoryResponseBody &) = default ;
    CreateSdnsRuleCategoryResponseBody& operator=(CreateSdnsRuleCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->requestId_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateSdnsRuleCategoryResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSdnsRuleCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the policy created and saved in this request. This ID is consistent with the ID in the list and details, and is used for querying, updating, enabling, disabling, and deleting the policy. The ID is saved as a string to avoid precision loss of large integers.
    shared_ptr<string> id_ {};
    // The ID of the request. This ID is used to troubleshoot call issues and is not the policy ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
