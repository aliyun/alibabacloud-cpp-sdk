// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class BindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Argument, argument_);
      DARABONBA_PTR_TO_JSON(BindingKey, bindingKey_);
      DARABONBA_PTR_TO_JSON(BindingType, bindingType_);
      DARABONBA_PTR_TO_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_TO_JSON(DstName, dstName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SrcName, srcName_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, BindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Argument, argument_);
      DARABONBA_PTR_FROM_JSON(BindingKey, bindingKey_);
      DARABONBA_PTR_FROM_JSON(BindingType, bindingType_);
      DARABONBA_PTR_FROM_JSON(ConsoleSessionId, consoleSessionId_);
      DARABONBA_PTR_FROM_JSON(DstName, dstName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SrcName, srcName_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    BindRequest() = default ;
    BindRequest(const BindRequest &) = default ;
    BindRequest(BindRequest &&) = default ;
    BindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindRequest() = default ;
    BindRequest& operator=(const BindRequest &) = default ;
    BindRequest& operator=(BindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->argument_ == nullptr
        && return this->bindingKey_ == nullptr && return this->bindingType_ == nullptr && return this->consoleSessionId_ == nullptr && return this->dstName_ == nullptr && return this->instanceId_ == nullptr
        && return this->srcName_ == nullptr && return this->vhostName_ == nullptr; };
    // argument Field Functions 
    bool hasArgument() const { return this->argument_ != nullptr;};
    void deleteArgument() { this->argument_ = nullptr;};
    inline string argument() const { DARABONBA_PTR_GET_DEFAULT(argument_, "") };
    inline BindRequest& setArgument(string argument) { DARABONBA_PTR_SET_VALUE(argument_, argument) };


    // bindingKey Field Functions 
    bool hasBindingKey() const { return this->bindingKey_ != nullptr;};
    void deleteBindingKey() { this->bindingKey_ = nullptr;};
    inline string bindingKey() const { DARABONBA_PTR_GET_DEFAULT(bindingKey_, "") };
    inline BindRequest& setBindingKey(string bindingKey) { DARABONBA_PTR_SET_VALUE(bindingKey_, bindingKey) };


    // bindingType Field Functions 
    bool hasBindingType() const { return this->bindingType_ != nullptr;};
    void deleteBindingType() { this->bindingType_ = nullptr;};
    inline int32_t bindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, 0) };
    inline BindRequest& setBindingType(int32_t bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


    // consoleSessionId Field Functions 
    bool hasConsoleSessionId() const { return this->consoleSessionId_ != nullptr;};
    void deleteConsoleSessionId() { this->consoleSessionId_ = nullptr;};
    inline string consoleSessionId() const { DARABONBA_PTR_GET_DEFAULT(consoleSessionId_, "") };
    inline BindRequest& setConsoleSessionId(string consoleSessionId) { DARABONBA_PTR_SET_VALUE(consoleSessionId_, consoleSessionId) };


    // dstName Field Functions 
    bool hasDstName() const { return this->dstName_ != nullptr;};
    void deleteDstName() { this->dstName_ = nullptr;};
    inline string dstName() const { DARABONBA_PTR_GET_DEFAULT(dstName_, "") };
    inline BindRequest& setDstName(string dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BindRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // srcName Field Functions 
    bool hasSrcName() const { return this->srcName_ != nullptr;};
    void deleteSrcName() { this->srcName_ = nullptr;};
    inline string srcName() const { DARABONBA_PTR_GET_DEFAULT(srcName_, "") };
    inline BindRequest& setSrcName(string srcName) { DARABONBA_PTR_SET_VALUE(srcName_, srcName) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline BindRequest& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<string> argument_ = nullptr;
    std::shared_ptr<string> bindingKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> bindingType_ = nullptr;
    std::shared_ptr<string> consoleSessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dstName_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> srcName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
