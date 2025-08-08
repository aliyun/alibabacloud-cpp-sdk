// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAIOUTBOUNDTASKREQUESTRECALLRULE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAIOUTBOUNDTASKREQUESTRECALLRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class UpdateAiOutboundTaskRequestRecallRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAiOutboundTaskRequestRecallRule& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAiOutboundTaskRequestRecallRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
    };
    UpdateAiOutboundTaskRequestRecallRule() = default ;
    UpdateAiOutboundTaskRequestRecallRule(const UpdateAiOutboundTaskRequestRecallRule &) = default ;
    UpdateAiOutboundTaskRequestRecallRule(UpdateAiOutboundTaskRequestRecallRule &&) = default ;
    UpdateAiOutboundTaskRequestRecallRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAiOutboundTaskRequestRecallRule() = default ;
    UpdateAiOutboundTaskRequestRecallRule& operator=(const UpdateAiOutboundTaskRequestRecallRule &) = default ;
    UpdateAiOutboundTaskRequestRecallRule& operator=(UpdateAiOutboundTaskRequestRecallRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->interval_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline UpdateAiOutboundTaskRequestRecallRule& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateAiOutboundTaskRequestRecallRule& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
