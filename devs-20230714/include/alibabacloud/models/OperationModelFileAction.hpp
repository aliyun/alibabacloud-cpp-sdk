// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATIONMODELFILEACTION_HPP_
#define ALIBABACLOUD_MODELS_OPERATIONMODELFILEACTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class OperationModelFileAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperationModelFileAction& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(destination, destination_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(target, target_);
    };
    friend void from_json(const Darabonba::Json& j, OperationModelFileAction& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(destination, destination_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(target, target_);
    };
    OperationModelFileAction() = default ;
    OperationModelFileAction(const OperationModelFileAction &) = default ;
    OperationModelFileAction(OperationModelFileAction &&) = default ;
    OperationModelFileAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperationModelFileAction() = default ;
    OperationModelFileAction& operator=(const OperationModelFileAction &) = default ;
    OperationModelFileAction& operator=(OperationModelFileAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->destination_ != nullptr && this->source_ != nullptr && this->target_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline OperationModelFileAction& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline string destination() const { DARABONBA_PTR_GET_DEFAULT(destination_, "") };
    inline OperationModelFileAction& setDestination(string destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline OperationModelFileAction& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline OperationModelFileAction& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<string> destination_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
