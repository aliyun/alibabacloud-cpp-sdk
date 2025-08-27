// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COSTCENTERQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_COSTCENTERQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CostCenterQueryResponseBodyModuleEntityDOS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CostCenterQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CostCenterQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(alipay_no, alipayNo_);
      DARABONBA_PTR_TO_JSON(corp_id, corpId_);
      DARABONBA_PTR_TO_JSON(disable, disable_);
      DARABONBA_PTR_TO_JSON(entity_d_o_s, entityDOS_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(number, number_);
      DARABONBA_PTR_TO_JSON(rule_code, ruleCode_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, CostCenterQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(alipay_no, alipayNo_);
      DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
      DARABONBA_PTR_FROM_JSON(disable, disable_);
      DARABONBA_PTR_FROM_JSON(entity_d_o_s, entityDOS_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(number, number_);
      DARABONBA_PTR_FROM_JSON(rule_code, ruleCode_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    CostCenterQueryResponseBodyModule() = default ;
    CostCenterQueryResponseBodyModule(const CostCenterQueryResponseBodyModule &) = default ;
    CostCenterQueryResponseBodyModule(CostCenterQueryResponseBodyModule &&) = default ;
    CostCenterQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CostCenterQueryResponseBodyModule() = default ;
    CostCenterQueryResponseBodyModule& operator=(const CostCenterQueryResponseBodyModule &) = default ;
    CostCenterQueryResponseBodyModule& operator=(CostCenterQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alipayNo_ != nullptr
        && this->corpId_ != nullptr && this->disable_ != nullptr && this->entityDOS_ != nullptr && this->id_ != nullptr && this->number_ != nullptr
        && this->ruleCode_ != nullptr && this->scope_ != nullptr && this->thirdpartId_ != nullptr && this->title_ != nullptr; };
    // alipayNo Field Functions 
    bool hasAlipayNo() const { return this->alipayNo_ != nullptr;};
    void deleteAlipayNo() { this->alipayNo_ = nullptr;};
    inline string alipayNo() const { DARABONBA_PTR_GET_DEFAULT(alipayNo_, "") };
    inline CostCenterQueryResponseBodyModule& setAlipayNo(string alipayNo) { DARABONBA_PTR_SET_VALUE(alipayNo_, alipayNo) };


    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CostCenterQueryResponseBodyModule& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline int64_t disable() const { DARABONBA_PTR_GET_DEFAULT(disable_, 0L) };
    inline CostCenterQueryResponseBodyModule& setDisable(int64_t disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // entityDOS Field Functions 
    bool hasEntityDOS() const { return this->entityDOS_ != nullptr;};
    void deleteEntityDOS() { this->entityDOS_ = nullptr;};
    inline const vector<Models::CostCenterQueryResponseBodyModuleEntityDOS> & entityDOS() const { DARABONBA_PTR_GET_CONST(entityDOS_, vector<Models::CostCenterQueryResponseBodyModuleEntityDOS>) };
    inline vector<Models::CostCenterQueryResponseBodyModuleEntityDOS> entityDOS() { DARABONBA_PTR_GET(entityDOS_, vector<Models::CostCenterQueryResponseBodyModuleEntityDOS>) };
    inline CostCenterQueryResponseBodyModule& setEntityDOS(const vector<Models::CostCenterQueryResponseBodyModuleEntityDOS> & entityDOS) { DARABONBA_PTR_SET_VALUE(entityDOS_, entityDOS) };
    inline CostCenterQueryResponseBodyModule& setEntityDOS(vector<Models::CostCenterQueryResponseBodyModuleEntityDOS> && entityDOS) { DARABONBA_PTR_SET_RVALUE(entityDOS_, entityDOS) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CostCenterQueryResponseBodyModule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline CostCenterQueryResponseBodyModule& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // ruleCode Field Functions 
    bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
    void deleteRuleCode() { this->ruleCode_ = nullptr;};
    inline int64_t ruleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, 0L) };
    inline CostCenterQueryResponseBodyModule& setRuleCode(int64_t ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline int64_t scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, 0L) };
    inline CostCenterQueryResponseBodyModule& setScope(int64_t scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // thirdpartId Field Functions 
    bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
    void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
    inline string thirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
    inline CostCenterQueryResponseBodyModule& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CostCenterQueryResponseBodyModule& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> alipayNo_ = nullptr;
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<int64_t> disable_ = nullptr;
    std::shared_ptr<vector<Models::CostCenterQueryResponseBodyModuleEntityDOS>> entityDOS_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> number_ = nullptr;
    // rule code
    std::shared_ptr<int64_t> ruleCode_ = nullptr;
    std::shared_ptr<int64_t> scope_ = nullptr;
    std::shared_ptr<string> thirdpartId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
