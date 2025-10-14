// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIGACTIONSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIGACTIONSRESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfigActionsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfigActionsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfigActionsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    WafRuleConfigActionsResponse() = default ;
    WafRuleConfigActionsResponse(const WafRuleConfigActionsResponse &) = default ;
    WafRuleConfigActionsResponse(WafRuleConfigActionsResponse &&) = default ;
    WafRuleConfigActionsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfigActionsResponse() = default ;
    WafRuleConfigActionsResponse& operator=(const WafRuleConfigActionsResponse &) = default ;
    WafRuleConfigActionsResponse& operator=(WafRuleConfigActionsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->id_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline WafRuleConfigActionsResponse& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline WafRuleConfigActionsResponse& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
