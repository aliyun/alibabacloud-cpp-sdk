// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class CreateAccessRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessRuleId, accessRuleId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAccessRuleResponseBody() = default ;
    CreateAccessRuleResponseBody(const CreateAccessRuleResponseBody &) = default ;
    CreateAccessRuleResponseBody(CreateAccessRuleResponseBody &&) = default ;
    CreateAccessRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessRuleResponseBody() = default ;
    CreateAccessRuleResponseBody& operator=(const CreateAccessRuleResponseBody &) = default ;
    CreateAccessRuleResponseBody& operator=(CreateAccessRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessRuleId_ == nullptr
        && return this->requestId_ == nullptr; };
    // accessRuleId Field Functions 
    bool hasAccessRuleId() const { return this->accessRuleId_ != nullptr;};
    void deleteAccessRuleId() { this->accessRuleId_ = nullptr;};
    inline string accessRuleId() const { DARABONBA_PTR_GET_DEFAULT(accessRuleId_, "") };
    inline CreateAccessRuleResponseBody& setAccessRuleId(string accessRuleId) { DARABONBA_PTR_SET_VALUE(accessRuleId_, accessRuleId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAccessRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> accessRuleId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
