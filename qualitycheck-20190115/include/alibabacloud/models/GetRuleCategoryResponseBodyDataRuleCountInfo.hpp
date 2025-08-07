// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULECATEGORYRESPONSEBODYDATARULECOUNTINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRULECATEGORYRESPONSEBODYDATARULECOUNTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleCategoryResponseBodyDataRuleCountInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleCategoryResponseBodyDataRuleCountInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Select, select_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleCategoryResponseBodyDataRuleCountInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Select, select_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    GetRuleCategoryResponseBodyDataRuleCountInfo() = default ;
    GetRuleCategoryResponseBodyDataRuleCountInfo(const GetRuleCategoryResponseBodyDataRuleCountInfo &) = default ;
    GetRuleCategoryResponseBodyDataRuleCountInfo(GetRuleCategoryResponseBodyDataRuleCountInfo &&) = default ;
    GetRuleCategoryResponseBodyDataRuleCountInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleCategoryResponseBodyDataRuleCountInfo() = default ;
    GetRuleCategoryResponseBodyDataRuleCountInfo& operator=(const GetRuleCategoryResponseBodyDataRuleCountInfo &) = default ;
    GetRuleCategoryResponseBodyDataRuleCountInfo& operator=(GetRuleCategoryResponseBodyDataRuleCountInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->select_ != nullptr
        && this->type_ != nullptr && this->typeName_ != nullptr; };
    // select Field Functions 
    bool hasSelect() const { return this->select_ != nullptr;};
    void deleteSelect() { this->select_ = nullptr;};
    inline bool select() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
    inline GetRuleCategoryResponseBodyDataRuleCountInfo& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetRuleCategoryResponseBodyDataRuleCountInfo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string _typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline GetRuleCategoryResponseBodyDataRuleCountInfo& setTypeName(string _typeName) { DARABONBA_PTR_SET_VALUE(typeName_, _typeName) };


  protected:
    std::shared_ptr<bool> select_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
