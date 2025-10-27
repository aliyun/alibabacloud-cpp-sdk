// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSENSITIVEDEFINERULECONFIGRESPONSEBODYDATARULETREE_HPP_
#define ALIBABACLOUD_MODELS_GETSENSITIVEDEFINERULECONFIGRESPONSEBODYDATARULETREE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSensitiveDefineRuleConfigResponseBodyDataRuleTree : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSensitiveDefineRuleConfigResponseBodyDataRuleTree& obj) { 
      DARABONBA_PTR_TO_JSON(ClassKey, classKey_);
      DARABONBA_PTR_TO_JSON(ClassName, className_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, GetSensitiveDefineRuleConfigResponseBodyDataRuleTree& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassKey, classKey_);
      DARABONBA_PTR_FROM_JSON(ClassName, className_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTree() = default ;
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTree(const GetSensitiveDefineRuleConfigResponseBodyDataRuleTree &) = default ;
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTree(GetSensitiveDefineRuleConfigResponseBodyDataRuleTree &&) = default ;
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTree(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSensitiveDefineRuleConfigResponseBodyDataRuleTree() = default ;
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTree& operator=(const GetSensitiveDefineRuleConfigResponseBodyDataRuleTree &) = default ;
    GetSensitiveDefineRuleConfigResponseBodyDataRuleTree& operator=(GetSensitiveDefineRuleConfigResponseBodyDataRuleTree &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classKey_ == nullptr
        && return this->className_ == nullptr && return this->ruleList_ == nullptr; };
    // classKey Field Functions 
    bool hasClassKey() const { return this->classKey_ != nullptr;};
    void deleteClassKey() { this->classKey_ = nullptr;};
    inline string classKey() const { DARABONBA_PTR_GET_DEFAULT(classKey_, "") };
    inline GetSensitiveDefineRuleConfigResponseBodyDataRuleTree& setClassKey(string classKey) { DARABONBA_PTR_SET_VALUE(classKey_, classKey) };


    // className Field Functions 
    bool hasClassName() const { return this->className_ != nullptr;};
    void deleteClassName() { this->className_ = nullptr;};
    inline string className() const { DARABONBA_PTR_GET_DEFAULT(className_, "") };
    inline GetSensitiveDefineRuleConfigResponseBodyDataRuleTree& setClassName(string className) { DARABONBA_PTR_SET_VALUE(className_, className) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList>) };
    inline vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList>) };
    inline GetSensitiveDefineRuleConfigResponseBodyDataRuleTree& setRuleList(const vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline GetSensitiveDefineRuleConfigResponseBodyDataRuleTree& setRuleList(vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    // The category keyword of the check rule.
    std::shared_ptr<string> classKey_ = nullptr;
    // The category name of the check rule.
    std::shared_ptr<string> className_ = nullptr;
    // The list of check rules.
    std::shared_ptr<vector<Models::GetSensitiveDefineRuleConfigResponseBodyDataRuleTreeRuleList>> ruleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
