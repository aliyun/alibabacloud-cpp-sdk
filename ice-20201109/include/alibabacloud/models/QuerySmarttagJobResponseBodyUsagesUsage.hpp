// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODYUSAGESUSAGE_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGJOBRESPONSEBODYUSAGESUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class QuerySmarttagJobResponseBodyUsagesUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagJobResponseBodyUsagesUsage& obj) { 
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagJobResponseBodyUsagesUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QuerySmarttagJobResponseBodyUsagesUsage() = default ;
    QuerySmarttagJobResponseBodyUsagesUsage(const QuerySmarttagJobResponseBodyUsagesUsage &) = default ;
    QuerySmarttagJobResponseBodyUsagesUsage(QuerySmarttagJobResponseBodyUsagesUsage &&) = default ;
    QuerySmarttagJobResponseBodyUsagesUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagJobResponseBodyUsagesUsage() = default ;
    QuerySmarttagJobResponseBodyUsagesUsage& operator=(const QuerySmarttagJobResponseBodyUsagesUsage &) = default ;
    QuerySmarttagJobResponseBodyUsagesUsage& operator=(QuerySmarttagJobResponseBodyUsagesUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quota_ == nullptr
        && return this->type_ == nullptr; };
    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int64_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0L) };
    inline QuerySmarttagJobResponseBodyUsagesUsage& setQuota(int64_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QuerySmarttagJobResponseBodyUsagesUsage& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> quota_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
