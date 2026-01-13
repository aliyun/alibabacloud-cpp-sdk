// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateResourceRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceRuleId, resourceRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceRuleId, resourceRuleId_);
    };
    CreateResourceRuleResponseBody() = default ;
    CreateResourceRuleResponseBody(const CreateResourceRuleResponseBody &) = default ;
    CreateResourceRuleResponseBody(CreateResourceRuleResponseBody &&) = default ;
    CreateResourceRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceRuleResponseBody() = default ;
    CreateResourceRuleResponseBody& operator=(const CreateResourceRuleResponseBody &) = default ;
    CreateResourceRuleResponseBody& operator=(CreateResourceRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceRuleId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceRuleId Field Functions 
    bool hasResourceRuleId() const { return this->resourceRuleId_ != nullptr;};
    void deleteResourceRuleId() { this->resourceRuleId_ = nullptr;};
    inline string getResourceRuleId() const { DARABONBA_PTR_GET_DEFAULT(resourceRuleId_, "") };
    inline CreateResourceRuleResponseBody& setResourceRuleId(string resourceRuleId) { DARABONBA_PTR_SET_VALUE(resourceRuleId_, resourceRuleId) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resourceRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
