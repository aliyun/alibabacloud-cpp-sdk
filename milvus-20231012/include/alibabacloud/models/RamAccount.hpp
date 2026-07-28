// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RAMACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_RAMACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class RamAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RamAccount& obj) { 
      DARABONBA_PTR_TO_JSON(bindable, bindable_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, RamAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(bindable, bindable_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    RamAccount() = default ;
    RamAccount(const RamAccount &) = default ;
    RamAccount(RamAccount &&) = default ;
    RamAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RamAccount() = default ;
    RamAccount& operator=(const RamAccount &) = default ;
    RamAccount& operator=(RamAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindable_ == nullptr
        && this->displayName_ == nullptr && this->uid_ == nullptr && this->userName_ == nullptr; };
    // bindable Field Functions 
    bool hasBindable() const { return this->bindable_ != nullptr;};
    void deleteBindable() { this->bindable_ = nullptr;};
    inline bool getBindable() const { DARABONBA_PTR_GET_DEFAULT(bindable_, false) };
    inline RamAccount& setBindable(bool bindable) { DARABONBA_PTR_SET_VALUE(bindable_, bindable) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline RamAccount& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline RamAccount& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline RamAccount& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Specifies whether the RamAccount can be bound to other resources.
    shared_ptr<bool> bindable_ {};
    // The display name for the RamAccount, which appears in the console.
    shared_ptr<string> displayName_ {};
    // The unique identifier for the RamAccount.
    shared_ptr<string> uid_ {};
    // The user name for the RamAccount.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
