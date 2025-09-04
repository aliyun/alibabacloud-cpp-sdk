// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDINGSRESPONSEBODYDATABINDINGS_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDINGSRESPONSEBODYDATABINDINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListBindingsResponseBodyDataBindings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindingsResponseBodyDataBindings& obj) { 
      DARABONBA_PTR_TO_JSON(Argument, argument_);
      DARABONBA_PTR_TO_JSON(BindingKey, bindingKey_);
      DARABONBA_PTR_TO_JSON(BindingType, bindingType_);
      DARABONBA_PTR_TO_JSON(DestinationName, destinationName_);
      DARABONBA_PTR_TO_JSON(SourceExchange, sourceExchange_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindingsResponseBodyDataBindings& obj) { 
      DARABONBA_PTR_FROM_JSON(Argument, argument_);
      DARABONBA_PTR_FROM_JSON(BindingKey, bindingKey_);
      DARABONBA_PTR_FROM_JSON(BindingType, bindingType_);
      DARABONBA_PTR_FROM_JSON(DestinationName, destinationName_);
      DARABONBA_PTR_FROM_JSON(SourceExchange, sourceExchange_);
    };
    ListBindingsResponseBodyDataBindings() = default ;
    ListBindingsResponseBodyDataBindings(const ListBindingsResponseBodyDataBindings &) = default ;
    ListBindingsResponseBodyDataBindings(ListBindingsResponseBodyDataBindings &&) = default ;
    ListBindingsResponseBodyDataBindings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindingsResponseBodyDataBindings() = default ;
    ListBindingsResponseBodyDataBindings& operator=(const ListBindingsResponseBodyDataBindings &) = default ;
    ListBindingsResponseBodyDataBindings& operator=(ListBindingsResponseBodyDataBindings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->argument_ != nullptr
        && this->bindingKey_ != nullptr && this->bindingType_ != nullptr && this->destinationName_ != nullptr && this->sourceExchange_ != nullptr; };
    // argument Field Functions 
    bool hasArgument() const { return this->argument_ != nullptr;};
    void deleteArgument() { this->argument_ = nullptr;};
    inline string argument() const { DARABONBA_PTR_GET_DEFAULT(argument_, "") };
    inline ListBindingsResponseBodyDataBindings& setArgument(string argument) { DARABONBA_PTR_SET_VALUE(argument_, argument) };


    // bindingKey Field Functions 
    bool hasBindingKey() const { return this->bindingKey_ != nullptr;};
    void deleteBindingKey() { this->bindingKey_ = nullptr;};
    inline string bindingKey() const { DARABONBA_PTR_GET_DEFAULT(bindingKey_, "") };
    inline ListBindingsResponseBodyDataBindings& setBindingKey(string bindingKey) { DARABONBA_PTR_SET_VALUE(bindingKey_, bindingKey) };


    // bindingType Field Functions 
    bool hasBindingType() const { return this->bindingType_ != nullptr;};
    void deleteBindingType() { this->bindingType_ = nullptr;};
    inline string bindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, "") };
    inline ListBindingsResponseBodyDataBindings& setBindingType(string bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


    // destinationName Field Functions 
    bool hasDestinationName() const { return this->destinationName_ != nullptr;};
    void deleteDestinationName() { this->destinationName_ = nullptr;};
    inline string destinationName() const { DARABONBA_PTR_GET_DEFAULT(destinationName_, "") };
    inline ListBindingsResponseBodyDataBindings& setDestinationName(string destinationName) { DARABONBA_PTR_SET_VALUE(destinationName_, destinationName) };


    // sourceExchange Field Functions 
    bool hasSourceExchange() const { return this->sourceExchange_ != nullptr;};
    void deleteSourceExchange() { this->sourceExchange_ = nullptr;};
    inline string sourceExchange() const { DARABONBA_PTR_GET_DEFAULT(sourceExchange_, "") };
    inline ListBindingsResponseBodyDataBindings& setSourceExchange(string sourceExchange) { DARABONBA_PTR_SET_VALUE(sourceExchange_, sourceExchange) };


  protected:
    // The x-match attribute. Valid values:
    // 
    // *   **all:** A headers exchange routes a message to a queue only if all binding attributes of the queue except for x-match match the headers attributes of the message. This value is the default value.
    // *   **any:** A headers exchange routes a message to a queue if one or more binding attributes of the queue except for x-match match the headers attributes of the message.
    // 
    // This parameter is available only for headers exchanges.
    std::shared_ptr<string> argument_ = nullptr;
    // The binding key.
    // 
    // *   If the source exchange is not a topic exchange, the binding key must meet the following conventions:
    // 
    //     *   The binding key can contain only letters, digits, hyphens (-), underscores (_), periods (.), forward slashes (/), and at signs (@).
    //     *   The binding key must be 1 to 255 characters in length.
    // 
    // *   If the source exchange is a topic exchange, the binding key must meet the following conventions:
    // 
    //     *   The binding key can contain letters, digits, hyphens (-), underscores (_), asterisks (\\*), periods (.), number signs (#), forward slashes (/), and at signs (@).
    //     *   The binding key cannot start or end with a period (.). If a binding key starts with a number sign (#) or an asterisk (\\*), the number sign (#) or asterisk (\\*) must be followed by a period (.). If the binding key ends with a number sign (#) or an asterisk (\\*), the number sign (#) or asterisk (\\*) must be preceded by a period (.). If a number sign (#) or an asterisk (\\*) is used in the middle of a binding key, the number sign (#) or asterisk (\\*) must be preceded and followed by a period (.).
    //     *   The binding key must be 1 to 255 characters in length.
    std::shared_ptr<string> bindingKey_ = nullptr;
    // The type of the object to which the source exchange is bound. Valid values:
    // 
    // *   **QUEUE**
    // *   **EXCHANGE**
    std::shared_ptr<string> bindingType_ = nullptr;
    // The name of the object to which the source exchange is bound.
    std::shared_ptr<string> destinationName_ = nullptr;
    // The name of the source exchange.
    std::shared_ptr<string> sourceExchange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
