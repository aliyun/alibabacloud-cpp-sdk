// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBUCKETLIFECYCLERESPONSEBODYRULEEXPIRATION_HPP_
#define ALIBABACLOUD_MODELS_GETBUCKETLIFECYCLERESPONSEBODYRULEEXPIRATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class GetBucketLifecycleResponseBodyRuleExpiration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBucketLifecycleResponseBodyRuleExpiration& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedBeforeDate, createdBeforeDate_);
      DARABONBA_PTR_TO_JSON(Days, days_);
    };
    friend void from_json(const Darabonba::Json& j, GetBucketLifecycleResponseBodyRuleExpiration& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedBeforeDate, createdBeforeDate_);
      DARABONBA_PTR_FROM_JSON(Days, days_);
    };
    GetBucketLifecycleResponseBodyRuleExpiration() = default ;
    GetBucketLifecycleResponseBodyRuleExpiration(const GetBucketLifecycleResponseBodyRuleExpiration &) = default ;
    GetBucketLifecycleResponseBodyRuleExpiration(GetBucketLifecycleResponseBodyRuleExpiration &&) = default ;
    GetBucketLifecycleResponseBodyRuleExpiration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBucketLifecycleResponseBodyRuleExpiration() = default ;
    GetBucketLifecycleResponseBodyRuleExpiration& operator=(const GetBucketLifecycleResponseBodyRuleExpiration &) = default ;
    GetBucketLifecycleResponseBodyRuleExpiration& operator=(GetBucketLifecycleResponseBodyRuleExpiration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdBeforeDate_ != nullptr
        && this->days_ != nullptr; };
    // createdBeforeDate Field Functions 
    bool hasCreatedBeforeDate() const { return this->createdBeforeDate_ != nullptr;};
    void deleteCreatedBeforeDate() { this->createdBeforeDate_ = nullptr;};
    inline string createdBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(createdBeforeDate_, "") };
    inline GetBucketLifecycleResponseBodyRuleExpiration& setCreatedBeforeDate(string createdBeforeDate) { DARABONBA_PTR_SET_VALUE(createdBeforeDate_, createdBeforeDate) };


    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline string days() const { DARABONBA_PTR_GET_DEFAULT(days_, "") };
    inline GetBucketLifecycleResponseBodyRuleExpiration& setDays(string days) { DARABONBA_PTR_SET_VALUE(days_, days) };


  protected:
    // The expiration date.
    std::shared_ptr<string> createdBeforeDate_ = nullptr;
    // The validity period, in days.
    std::shared_ptr<string> days_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
