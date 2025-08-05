// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTEVENTTARGETSCONCURRENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTEVENTTARGETSCONCURRENTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateRuleRequestEventTargetsConcurrentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestEventTargetsConcurrentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestEventTargetsConcurrentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
    };
    CreateRuleRequestEventTargetsConcurrentConfig() = default ;
    CreateRuleRequestEventTargetsConcurrentConfig(const CreateRuleRequestEventTargetsConcurrentConfig &) = default ;
    CreateRuleRequestEventTargetsConcurrentConfig(CreateRuleRequestEventTargetsConcurrentConfig &&) = default ;
    CreateRuleRequestEventTargetsConcurrentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestEventTargetsConcurrentConfig() = default ;
    CreateRuleRequestEventTargetsConcurrentConfig& operator=(const CreateRuleRequestEventTargetsConcurrentConfig &) = default ;
    CreateRuleRequestEventTargetsConcurrentConfig& operator=(CreateRuleRequestEventTargetsConcurrentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->concurrency_ != nullptr; };
    // concurrency Field Functions 
    bool hasConcurrency() const { return this->concurrency_ != nullptr;};
    void deleteConcurrency() { this->concurrency_ = nullptr;};
    inline int64_t concurrency() const { DARABONBA_PTR_GET_DEFAULT(concurrency_, 0L) };
    inline CreateRuleRequestEventTargetsConcurrentConfig& setConcurrency(int64_t concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };


  protected:
    // The concurrency.
    std::shared_ptr<int64_t> concurrency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
