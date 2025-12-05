// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateNetworkRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SourcePrivateIp, sourcePrivateIp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SourcePrivateIp, sourcePrivateIp_);
    };
    UpdateNetworkRuleRequest() = default ;
    UpdateNetworkRuleRequest(const UpdateNetworkRuleRequest &) = default ;
    UpdateNetworkRuleRequest(UpdateNetworkRuleRequest &&) = default ;
    UpdateNetworkRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkRuleRequest() = default ;
    UpdateNetworkRuleRequest& operator=(const UpdateNetworkRuleRequest &) = default ;
    UpdateNetworkRuleRequest& operator=(UpdateNetworkRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->sourcePrivateIp_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateNetworkRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateNetworkRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sourcePrivateIp Field Functions 
    bool hasSourcePrivateIp() const { return this->sourcePrivateIp_ != nullptr;};
    void deleteSourcePrivateIp() { this->sourcePrivateIp_ = nullptr;};
    inline string sourcePrivateIp() const { DARABONBA_PTR_GET_DEFAULT(sourcePrivateIp_, "") };
    inline UpdateNetworkRuleRequest& setSourcePrivateIp(string sourcePrivateIp) { DARABONBA_PTR_SET_VALUE(sourcePrivateIp_, sourcePrivateIp) };


  protected:
    // The description after the update.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the access control rule that you want to update.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The private IP address or CIDR block after the update. Separate multiple items with commas (,).
    std::shared_ptr<string> sourcePrivateIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
