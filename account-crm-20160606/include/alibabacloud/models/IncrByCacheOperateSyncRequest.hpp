// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCRBYCACHEOPERATESYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INCRBYCACHEOPERATESYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class IncrByCacheOperateSyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncrByCacheOperateSyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(ExpireSeconds, expireSeconds_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Step, step_);
    };
    friend void from_json(const Darabonba::Json& j, IncrByCacheOperateSyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(ExpireSeconds, expireSeconds_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
    };
    IncrByCacheOperateSyncRequest() = default ;
    IncrByCacheOperateSyncRequest(const IncrByCacheOperateSyncRequest &) = default ;
    IncrByCacheOperateSyncRequest(IncrByCacheOperateSyncRequest &&) = default ;
    IncrByCacheOperateSyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncrByCacheOperateSyncRequest() = default ;
    IncrByCacheOperateSyncRequest& operator=(const IncrByCacheOperateSyncRequest &) = default ;
    IncrByCacheOperateSyncRequest& operator=(IncrByCacheOperateSyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->expireSeconds_ == nullptr && this->key_ == nullptr && this->step_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline int32_t getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, 0) };
    inline IncrByCacheOperateSyncRequest& setDefaultValue(int32_t defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // expireSeconds Field Functions 
    bool hasExpireSeconds() const { return this->expireSeconds_ != nullptr;};
    void deleteExpireSeconds() { this->expireSeconds_ = nullptr;};
    inline int32_t getExpireSeconds() const { DARABONBA_PTR_GET_DEFAULT(expireSeconds_, 0) };
    inline IncrByCacheOperateSyncRequest& setExpireSeconds(int32_t expireSeconds) { DARABONBA_PTR_SET_VALUE(expireSeconds_, expireSeconds) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline IncrByCacheOperateSyncRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
    inline IncrByCacheOperateSyncRequest& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


  protected:
    shared_ptr<int32_t> defaultValue_ {};
    shared_ptr<int32_t> expireSeconds_ {};
    shared_ptr<string> key_ {};
    shared_ptr<int32_t> step_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
