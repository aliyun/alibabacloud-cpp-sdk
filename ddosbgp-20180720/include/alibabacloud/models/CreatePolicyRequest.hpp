// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class CreatePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PortVersion, portVersion_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PortVersion, portVersion_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreatePolicyRequest() = default ;
    CreatePolicyRequest(const CreatePolicyRequest &) = default ;
    CreatePolicyRequest(CreatePolicyRequest &&) = default ;
    CreatePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolicyRequest() = default ;
    CreatePolicyRequest& operator=(const CreatePolicyRequest &) = default ;
    CreatePolicyRequest& operator=(CreatePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->portVersion_ == nullptr && this->type_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePolicyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // portVersion Field Functions 
    bool hasPortVersion() const { return this->portVersion_ != nullptr;};
    void deletePortVersion() { this->portVersion_ = nullptr;};
    inline string getPortVersion() const { DARABONBA_PTR_GET_DEFAULT(portVersion_, "") };
    inline CreatePolicyRequest& setPortVersion(string portVersion) { DARABONBA_PTR_SET_VALUE(portVersion_, portVersion) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreatePolicyRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The policy name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The version of the port-specific mitigation policy. Valid values:
    // 
    // - **Not specified**: creates a default surf DPI engine policy.
    // - **2**: creates a new stream DPI engine policy.
    // > Only port-specific mitigation policies support this parameter.
    shared_ptr<string> portVersion_ {};
    // The policy type. Valid values:
    // - **l3**: IP-specific mitigation policy.
    // - **l4**: port-specific mitigation policy.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
