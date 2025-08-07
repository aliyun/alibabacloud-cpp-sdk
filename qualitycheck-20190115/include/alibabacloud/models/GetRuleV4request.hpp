// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEV4REQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRULEV4REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleV4Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleV4Request& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleV4Request& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    GetRuleV4Request() = default ;
    GetRuleV4Request(const GetRuleV4Request &) = default ;
    GetRuleV4Request(GetRuleV4Request &&) = default ;
    GetRuleV4Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleV4Request() = default ;
    GetRuleV4Request& operator=(const GetRuleV4Request &) = default ;
    GetRuleV4Request& operator=(GetRuleV4Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleId_ != nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetRuleV4Request& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
