// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAIOUTBOUNDTASKREQUESTRECALLRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAIOUTBOUNDTASKREQUESTRECALLRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class CreateAiOutboundTaskRequestRecallRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAiOutboundTaskRequestRecallRule& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAiOutboundTaskRequestRecallRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
    };
    CreateAiOutboundTaskRequestRecallRule() = default ;
    CreateAiOutboundTaskRequestRecallRule(const CreateAiOutboundTaskRequestRecallRule &) = default ;
    CreateAiOutboundTaskRequestRecallRule(CreateAiOutboundTaskRequestRecallRule &&) = default ;
    CreateAiOutboundTaskRequestRecallRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAiOutboundTaskRequestRecallRule() = default ;
    CreateAiOutboundTaskRequestRecallRule& operator=(const CreateAiOutboundTaskRequestRecallRule &) = default ;
    CreateAiOutboundTaskRequestRecallRule& operator=(CreateAiOutboundTaskRequestRecallRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->interval_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline CreateAiOutboundTaskRequestRecallRule& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline CreateAiOutboundTaskRequestRecallRule& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
