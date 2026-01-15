// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODESPEC_HPP_
#define ALIBABACLOUD_MODELS_NODESPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BindingPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class NodeSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeSpec& obj) { 
      DARABONBA_PTR_TO_JSON(BindingPolicy, bindingPolicy_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(HyperType, hyperType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, NodeSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingPolicy, bindingPolicy_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(HyperType, hyperType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    NodeSpec() = default ;
    NodeSpec(const NodeSpec &) = default ;
    NodeSpec(NodeSpec &&) = default ;
    NodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeSpec() = default ;
    NodeSpec& operator=(const NodeSpec &) = default ;
    NodeSpec& operator=(NodeSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindingPolicy_ == nullptr
        && this->count_ == nullptr && this->hyperType_ == nullptr && this->type_ == nullptr; };
    // bindingPolicy Field Functions 
    bool hasBindingPolicy() const { return this->bindingPolicy_ != nullptr;};
    void deleteBindingPolicy() { this->bindingPolicy_ = nullptr;};
    inline const BindingPolicy & getBindingPolicy() const { DARABONBA_PTR_GET_CONST(bindingPolicy_, BindingPolicy) };
    inline BindingPolicy getBindingPolicy() { DARABONBA_PTR_GET(bindingPolicy_, BindingPolicy) };
    inline NodeSpec& setBindingPolicy(const BindingPolicy & bindingPolicy) { DARABONBA_PTR_SET_VALUE(bindingPolicy_, bindingPolicy) };
    inline NodeSpec& setBindingPolicy(BindingPolicy && bindingPolicy) { DARABONBA_PTR_SET_RVALUE(bindingPolicy_, bindingPolicy) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline NodeSpec& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // hyperType Field Functions 
    bool hasHyperType() const { return this->hyperType_ != nullptr;};
    void deleteHyperType() { this->hyperType_ = nullptr;};
    inline string getHyperType() const { DARABONBA_PTR_GET_DEFAULT(hyperType_, "") };
    inline NodeSpec& setHyperType(string hyperType) { DARABONBA_PTR_SET_VALUE(hyperType_, hyperType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NodeSpec& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<BindingPolicy> bindingPolicy_ {};
    shared_ptr<int64_t> count_ {};
    shared_ptr<string> hyperType_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
