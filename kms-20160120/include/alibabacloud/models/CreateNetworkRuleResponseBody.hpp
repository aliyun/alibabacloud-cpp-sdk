// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateNetworkRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourcePrivateIp, sourcePrivateIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourcePrivateIp, sourcePrivateIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateNetworkRuleResponseBody() = default ;
    CreateNetworkRuleResponseBody(const CreateNetworkRuleResponseBody &) = default ;
    CreateNetworkRuleResponseBody(CreateNetworkRuleResponseBody &&) = default ;
    CreateNetworkRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkRuleResponseBody() = default ;
    CreateNetworkRuleResponseBody& operator=(const CreateNetworkRuleResponseBody &) = default ;
    CreateNetworkRuleResponseBody& operator=(CreateNetworkRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->requestId_ == nullptr && return this->sourcePrivateIp_ == nullptr && return this->type_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline CreateNetworkRuleResponseBody& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateNetworkRuleResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateNetworkRuleResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourcePrivateIp Field Functions 
    bool hasSourcePrivateIp() const { return this->sourcePrivateIp_ != nullptr;};
    void deleteSourcePrivateIp() { this->sourcePrivateIp_ = nullptr;};
    inline string sourcePrivateIp() const { DARABONBA_PTR_GET_DEFAULT(sourcePrivateIp_, "") };
    inline CreateNetworkRuleResponseBody& setSourcePrivateIp(string sourcePrivateIp) { DARABONBA_PTR_SET_VALUE(sourcePrivateIp_, sourcePrivateIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateNetworkRuleResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ARN of the access control rule.
    std::shared_ptr<string> arn_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the access control rule.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The private IP address or private CIDR block.
    std::shared_ptr<string> sourcePrivateIp_ = nullptr;
    // The network type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
