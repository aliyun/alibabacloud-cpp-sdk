// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETLIFECYCLERESPONSEBODYRULE_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETLIFECYCLERESPONSEBODYRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBucketLifecycleResponseBodyRuleExpiration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetBucketLifecycleResponseBodyRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketLifecycleResponseBodyRule& obj) { 
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(ID, ID_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketLifecycleResponseBodyRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(ID, ID_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetBucketLifecycleResponseBodyRule() = default ;
    GetBucketLifecycleResponseBodyRule(const GetBucketLifecycleResponseBodyRule &) = default ;
    GetBucketLifecycleResponseBodyRule(GetBucketLifecycleResponseBodyRule &&) = default ;
    GetBucketLifecycleResponseBodyRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketLifecycleResponseBodyRule() = default ;
    GetBucketLifecycleResponseBodyRule& operator=(const GetBucketLifecycleResponseBodyRule &) = default ;
    GetBucketLifecycleResponseBodyRule& operator=(GetBucketLifecycleResponseBodyRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expiration_ != nullptr
        && this->ID_ != nullptr && this->prefix_ != nullptr && this->status_ != nullptr; };
    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline const Models::GetBucketLifecycleResponseBodyRuleExpiration & expiration() const { DARABONBA_PTR_GET_CONST(expiration_, Models::GetBucketLifecycleResponseBodyRuleExpiration) };
    inline Models::GetBucketLifecycleResponseBodyRuleExpiration expiration() { DARABONBA_PTR_GET(expiration_, Models::GetBucketLifecycleResponseBodyRuleExpiration) };
    inline GetBucketLifecycleResponseBodyRule& setExpiration(const Models::GetBucketLifecycleResponseBodyRuleExpiration & expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };
    inline GetBucketLifecycleResponseBodyRule& setExpiration(Models::GetBucketLifecycleResponseBodyRuleExpiration && expiration) { DARABONBA_PTR_SET_RVALUE(expiration_, expiration) };


    // ID Field Functions 
    bool hasID() const { return this->ID_ != nullptr;};
    void deleteID() { this->ID_ = nullptr;};
    inline string ID() const { DARABONBA_PTR_GET_DEFAULT(ID_, "") };
    inline GetBucketLifecycleResponseBodyRule& setID(string ID) { DARABONBA_PTR_SET_VALUE(ID_, ID) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline GetBucketLifecycleResponseBodyRule& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetBucketLifecycleResponseBodyRule& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The expiration time.
    std::shared_ptr<Models::GetBucketLifecycleResponseBodyRuleExpiration> expiration_ = nullptr;
    // The unique ID of the rule.
    std::shared_ptr<string> ID_ = nullptr;
    // The prefix that is applied to the rule.
    std::shared_ptr<string> prefix_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **Enabled**: The rule is periodically executed.
    // *   **Disabled**: The rule is ignored.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
