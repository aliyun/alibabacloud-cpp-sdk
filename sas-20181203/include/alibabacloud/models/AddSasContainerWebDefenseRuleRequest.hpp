// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSASCONTAINERWEBDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSASCONTAINERWEBDEFENSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddSasContainerWebDefenseRuleRequestPathConfDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddSasContainerWebDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSasContainerWebDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PathConfDTOList, pathConfDTOList_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, AddSasContainerWebDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PathConfDTOList, pathConfDTOList_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    AddSasContainerWebDefenseRuleRequest() = default ;
    AddSasContainerWebDefenseRuleRequest(const AddSasContainerWebDefenseRuleRequest &) = default ;
    AddSasContainerWebDefenseRuleRequest(AddSasContainerWebDefenseRuleRequest &&) = default ;
    AddSasContainerWebDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSasContainerWebDefenseRuleRequest() = default ;
    AddSasContainerWebDefenseRuleRequest& operator=(const AddSasContainerWebDefenseRuleRequest &) = default ;
    AddSasContainerWebDefenseRuleRequest& operator=(AddSasContainerWebDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pathConfDTOList_ != nullptr
        && this->ruleName_ != nullptr; };
    // pathConfDTOList Field Functions 
    bool hasPathConfDTOList() const { return this->pathConfDTOList_ != nullptr;};
    void deletePathConfDTOList() { this->pathConfDTOList_ = nullptr;};
    inline const vector<AddSasContainerWebDefenseRuleRequestPathConfDTOList> & pathConfDTOList() const { DARABONBA_PTR_GET_CONST(pathConfDTOList_, vector<AddSasContainerWebDefenseRuleRequestPathConfDTOList>) };
    inline vector<AddSasContainerWebDefenseRuleRequestPathConfDTOList> pathConfDTOList() { DARABONBA_PTR_GET(pathConfDTOList_, vector<AddSasContainerWebDefenseRuleRequestPathConfDTOList>) };
    inline AddSasContainerWebDefenseRuleRequest& setPathConfDTOList(const vector<AddSasContainerWebDefenseRuleRequestPathConfDTOList> & pathConfDTOList) { DARABONBA_PTR_SET_VALUE(pathConfDTOList_, pathConfDTOList) };
    inline AddSasContainerWebDefenseRuleRequest& setPathConfDTOList(vector<AddSasContainerWebDefenseRuleRequestPathConfDTOList> && pathConfDTOList) { DARABONBA_PTR_SET_RVALUE(pathConfDTOList_, pathConfDTOList) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline AddSasContainerWebDefenseRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The paths that you want to protect.
    std::shared_ptr<vector<AddSasContainerWebDefenseRuleRequestPathConfDTOList>> pathConfDTOList_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
