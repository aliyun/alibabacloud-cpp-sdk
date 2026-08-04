// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCACHEOPERATESYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCACHEOPERATESYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class SetCacheOperateSyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCacheOperateSyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptVersion, exceptVersion_);
      DARABONBA_PTR_TO_JSON(ExpireSeconds, expireSeconds_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(SetType, setType_);
      DARABONBA_PTR_TO_JSON(ValueClazz, valueClazz_);
      DARABONBA_PTR_TO_JSON(ValueString, valueString_);
    };
    friend void from_json(const Darabonba::Json& j, SetCacheOperateSyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptVersion, exceptVersion_);
      DARABONBA_PTR_FROM_JSON(ExpireSeconds, expireSeconds_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(SetType, setType_);
      DARABONBA_PTR_FROM_JSON(ValueClazz, valueClazz_);
      DARABONBA_PTR_FROM_JSON(ValueString, valueString_);
    };
    SetCacheOperateSyncRequest() = default ;
    SetCacheOperateSyncRequest(const SetCacheOperateSyncRequest &) = default ;
    SetCacheOperateSyncRequest(SetCacheOperateSyncRequest &&) = default ;
    SetCacheOperateSyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCacheOperateSyncRequest() = default ;
    SetCacheOperateSyncRequest& operator=(const SetCacheOperateSyncRequest &) = default ;
    SetCacheOperateSyncRequest& operator=(SetCacheOperateSyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptVersion_ == nullptr
        && this->expireSeconds_ == nullptr && this->key_ == nullptr && this->setType_ == nullptr && this->valueClazz_ == nullptr && this->valueString_ == nullptr; };
    // exceptVersion Field Functions 
    bool hasExceptVersion() const { return this->exceptVersion_ != nullptr;};
    void deleteExceptVersion() { this->exceptVersion_ = nullptr;};
    inline int32_t getExceptVersion() const { DARABONBA_PTR_GET_DEFAULT(exceptVersion_, 0) };
    inline SetCacheOperateSyncRequest& setExceptVersion(int32_t exceptVersion) { DARABONBA_PTR_SET_VALUE(exceptVersion_, exceptVersion) };


    // expireSeconds Field Functions 
    bool hasExpireSeconds() const { return this->expireSeconds_ != nullptr;};
    void deleteExpireSeconds() { this->expireSeconds_ = nullptr;};
    inline int32_t getExpireSeconds() const { DARABONBA_PTR_GET_DEFAULT(expireSeconds_, 0) };
    inline SetCacheOperateSyncRequest& setExpireSeconds(int32_t expireSeconds) { DARABONBA_PTR_SET_VALUE(expireSeconds_, expireSeconds) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SetCacheOperateSyncRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // setType Field Functions 
    bool hasSetType() const { return this->setType_ != nullptr;};
    void deleteSetType() { this->setType_ = nullptr;};
    inline string getSetType() const { DARABONBA_PTR_GET_DEFAULT(setType_, "") };
    inline SetCacheOperateSyncRequest& setSetType(string setType) { DARABONBA_PTR_SET_VALUE(setType_, setType) };


    // valueClazz Field Functions 
    bool hasValueClazz() const { return this->valueClazz_ != nullptr;};
    void deleteValueClazz() { this->valueClazz_ = nullptr;};
    inline string getValueClazz() const { DARABONBA_PTR_GET_DEFAULT(valueClazz_, "") };
    inline SetCacheOperateSyncRequest& setValueClazz(string valueClazz) { DARABONBA_PTR_SET_VALUE(valueClazz_, valueClazz) };


    // valueString Field Functions 
    bool hasValueString() const { return this->valueString_ != nullptr;};
    void deleteValueString() { this->valueString_ = nullptr;};
    inline string getValueString() const { DARABONBA_PTR_GET_DEFAULT(valueString_, "") };
    inline SetCacheOperateSyncRequest& setValueString(string valueString) { DARABONBA_PTR_SET_VALUE(valueString_, valueString) };


  protected:
    shared_ptr<int32_t> exceptVersion_ {};
    shared_ptr<int32_t> expireSeconds_ {};
    shared_ptr<string> key_ {};
    shared_ptr<string> setType_ {};
    shared_ptr<string> valueClazz_ {};
    shared_ptr<string> valueString_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
