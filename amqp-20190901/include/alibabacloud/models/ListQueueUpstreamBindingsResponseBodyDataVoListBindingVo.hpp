// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUEUPSTREAMBINDINGSRESPONSEBODYDATAVOLISTBINDINGVO_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUEUPSTREAMBINDINGSRESPONSEBODYDATAVOLISTBINDINGVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO& obj) { 
      DARABONBA_PTR_TO_JSON(Argument, argument_);
      DARABONBA_PTR_TO_JSON(BindingKey, bindingKey_);
      DARABONBA_PTR_TO_JSON(BindingType, bindingType_);
      DARABONBA_PTR_TO_JSON(DstName, dstName_);
      DARABONBA_PTR_TO_JSON(SrcName, srcName_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Argument, argument_);
      DARABONBA_PTR_FROM_JSON(BindingKey, bindingKey_);
      DARABONBA_PTR_FROM_JSON(BindingType, bindingType_);
      DARABONBA_PTR_FROM_JSON(DstName, dstName_);
      DARABONBA_PTR_FROM_JSON(SrcName, srcName_);
    };
    ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO() = default ;
    ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO(const ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO &) = default ;
    ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO(ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO &&) = default ;
    ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO() = default ;
    ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO& operator=(const ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO &) = default ;
    ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO& operator=(ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->argument_ == nullptr
        && return this->bindingKey_ == nullptr && return this->bindingType_ == nullptr && return this->dstName_ == nullptr && return this->srcName_ == nullptr; };
    // argument Field Functions 
    bool hasArgument() const { return this->argument_ != nullptr;};
    void deleteArgument() { this->argument_ = nullptr;};
    inline string argument() const { DARABONBA_PTR_GET_DEFAULT(argument_, "") };
    inline ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO& setArgument(string argument) { DARABONBA_PTR_SET_VALUE(argument_, argument) };


    // bindingKey Field Functions 
    bool hasBindingKey() const { return this->bindingKey_ != nullptr;};
    void deleteBindingKey() { this->bindingKey_ = nullptr;};
    inline string bindingKey() const { DARABONBA_PTR_GET_DEFAULT(bindingKey_, "") };
    inline ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO& setBindingKey(string bindingKey) { DARABONBA_PTR_SET_VALUE(bindingKey_, bindingKey) };


    // bindingType Field Functions 
    bool hasBindingType() const { return this->bindingType_ != nullptr;};
    void deleteBindingType() { this->bindingType_ = nullptr;};
    inline int32_t bindingType() const { DARABONBA_PTR_GET_DEFAULT(bindingType_, 0) };
    inline ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO& setBindingType(int32_t bindingType) { DARABONBA_PTR_SET_VALUE(bindingType_, bindingType) };


    // dstName Field Functions 
    bool hasDstName() const { return this->dstName_ != nullptr;};
    void deleteDstName() { this->dstName_ = nullptr;};
    inline string dstName() const { DARABONBA_PTR_GET_DEFAULT(dstName_, "") };
    inline ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO& setDstName(string dstName) { DARABONBA_PTR_SET_VALUE(dstName_, dstName) };


    // srcName Field Functions 
    bool hasSrcName() const { return this->srcName_ != nullptr;};
    void deleteSrcName() { this->srcName_ = nullptr;};
    inline string srcName() const { DARABONBA_PTR_GET_DEFAULT(srcName_, "") };
    inline ListQueueUpstreamBindingsResponseBodyDataVoListBindingVO& setSrcName(string srcName) { DARABONBA_PTR_SET_VALUE(srcName_, srcName) };


  protected:
    std::shared_ptr<string> argument_ = nullptr;
    std::shared_ptr<string> bindingKey_ = nullptr;
    std::shared_ptr<int32_t> bindingType_ = nullptr;
    std::shared_ptr<string> dstName_ = nullptr;
    std::shared_ptr<string> srcName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
