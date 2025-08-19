// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(action, action_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(action, action_);
    };
    DescribeTriggerRequest() = default ;
    DescribeTriggerRequest(const DescribeTriggerRequest &) = default ;
    DescribeTriggerRequest(DescribeTriggerRequest &&) = default ;
    DescribeTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTriggerRequest() = default ;
    DescribeTriggerRequest& operator=(const DescribeTriggerRequest &) = default ;
    DescribeTriggerRequest& operator=(DescribeTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->namespace_ != nullptr && this->type_ != nullptr && this->action_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTriggerRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeTriggerRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTriggerRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeTriggerRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


  protected:
    // The application name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace to which the application belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The type of trigger. Valid values:
    // 
    // *   `deployment`: performs actions on Deployments.
    // *   `application`: performs actions on applications that are deployed in Application Center.
    // 
    // Default value: `deployment`.
    // 
    // If you do not set this parameter, triggers are not filtered by type.
    std::shared_ptr<string> type_ = nullptr;
    // The action that the trigger performs. Set the value to redeploy.
    // 
    // `redeploy`: redeploys the resources specified by `project_id`.
    // 
    // If you do not specify this parameter, triggers are not filtered by action.
    std::shared_ptr<string> action_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
