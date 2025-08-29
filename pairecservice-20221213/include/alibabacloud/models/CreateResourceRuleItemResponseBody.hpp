// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCERULEITEMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCERULEITEMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateResourceRuleItemResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceRuleItemResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRuleItemId, resourceRuleItemId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceRuleItemResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRuleItemId, resourceRuleItemId_);
    };
    CreateResourceRuleItemResponseBody() = default ;
    CreateResourceRuleItemResponseBody(const CreateResourceRuleItemResponseBody &) = default ;
    CreateResourceRuleItemResponseBody(CreateResourceRuleItemResponseBody &&) = default ;
    CreateResourceRuleItemResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceRuleItemResponseBody() = default ;
    CreateResourceRuleItemResponseBody& operator=(const CreateResourceRuleItemResponseBody &) = default ;
    CreateResourceRuleItemResponseBody& operator=(CreateResourceRuleItemResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceRuleItemId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceRuleItemResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRuleItemId Field Functions 
    bool hasResourceRuleItemId() const { return this->resourceRuleItemId_ != nullptr;};
    void deleteResourceRuleItemId() { this->resourceRuleItemId_ = nullptr;};
    inline string resourceRuleItemId() const { DARABONBA_PTR_GET_DEFAULT(resourceRuleItemId_, "") };
    inline CreateResourceRuleItemResponseBody& setResourceRuleItemId(string resourceRuleItemId) { DARABONBA_PTR_SET_VALUE(resourceRuleItemId_, resourceRuleItemId) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceRuleItemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
