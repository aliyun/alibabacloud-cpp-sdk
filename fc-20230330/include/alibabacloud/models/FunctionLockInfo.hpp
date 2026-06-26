// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUNCTIONLOCKINFO_HPP_
#define ALIBABACLOUD_MODELS_FUNCTIONLOCKINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class FunctionLockInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FunctionLockInfo& obj) { 
      DARABONBA_PTR_TO_JSON(lockedAt, lockedAt_);
      DARABONBA_PTR_TO_JSON(lockedBy, lockedBy_);
      DARABONBA_PTR_TO_JSON(lockedResources, lockedResources_);
    };
    friend void from_json(const Darabonba::Json& j, FunctionLockInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(lockedAt, lockedAt_);
      DARABONBA_PTR_FROM_JSON(lockedBy, lockedBy_);
      DARABONBA_PTR_FROM_JSON(lockedResources, lockedResources_);
    };
    FunctionLockInfo() = default ;
    FunctionLockInfo(const FunctionLockInfo &) = default ;
    FunctionLockInfo(FunctionLockInfo &&) = default ;
    FunctionLockInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FunctionLockInfo() = default ;
    FunctionLockInfo& operator=(const FunctionLockInfo &) = default ;
    FunctionLockInfo& operator=(FunctionLockInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lockedAt_ == nullptr
        && this->lockedBy_ == nullptr && this->lockedResources_ == nullptr; };
    // lockedAt Field Functions 
    bool hasLockedAt() const { return this->lockedAt_ != nullptr;};
    void deleteLockedAt() { this->lockedAt_ = nullptr;};
    inline string getLockedAt() const { DARABONBA_PTR_GET_DEFAULT(lockedAt_, "") };
    inline FunctionLockInfo& setLockedAt(string lockedAt) { DARABONBA_PTR_SET_VALUE(lockedAt_, lockedAt) };


    // lockedBy Field Functions 
    bool hasLockedBy() const { return this->lockedBy_ != nullptr;};
    void deleteLockedBy() { this->lockedBy_ = nullptr;};
    inline string getLockedBy() const { DARABONBA_PTR_GET_DEFAULT(lockedBy_, "") };
    inline FunctionLockInfo& setLockedBy(string lockedBy) { DARABONBA_PTR_SET_VALUE(lockedBy_, lockedBy) };


    // lockedResources Field Functions 
    bool hasLockedResources() const { return this->lockedResources_ != nullptr;};
    void deleteLockedResources() { this->lockedResources_ = nullptr;};
    inline const vector<string> & getLockedResources() const { DARABONBA_PTR_GET_CONST(lockedResources_, vector<string>) };
    inline vector<string> getLockedResources() { DARABONBA_PTR_GET(lockedResources_, vector<string>) };
    inline FunctionLockInfo& setLockedResources(const vector<string> & lockedResources) { DARABONBA_PTR_SET_VALUE(lockedResources_, lockedResources) };
    inline FunctionLockInfo& setLockedResources(vector<string> && lockedResources) { DARABONBA_PTR_SET_RVALUE(lockedResources_, lockedResources) };


  protected:
    // The timestamp when the lock was applied.
    shared_ptr<string> lockedAt_ {};
    // The name of the entity that applied the lock.
    shared_ptr<string> lockedBy_ {};
    // The list of locked resource types. Valid values include `function`, `trigger`, `version`, and `alias`.
    shared_ptr<vector<string>> lockedResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
