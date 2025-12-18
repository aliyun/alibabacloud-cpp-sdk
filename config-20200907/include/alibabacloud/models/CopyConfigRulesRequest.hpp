// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYCONFIGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYCONFIGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CopyConfigRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyConfigRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesAggregatorIds, desAggregatorIds_);
      DARABONBA_PTR_TO_JSON(SrcAggregatorId, srcAggregatorId_);
      DARABONBA_PTR_TO_JSON(SrcConfigRuleIds, srcConfigRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, CopyConfigRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesAggregatorIds, desAggregatorIds_);
      DARABONBA_PTR_FROM_JSON(SrcAggregatorId, srcAggregatorId_);
      DARABONBA_PTR_FROM_JSON(SrcConfigRuleIds, srcConfigRuleIds_);
    };
    CopyConfigRulesRequest() = default ;
    CopyConfigRulesRequest(const CopyConfigRulesRequest &) = default ;
    CopyConfigRulesRequest(CopyConfigRulesRequest &&) = default ;
    CopyConfigRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyConfigRulesRequest() = default ;
    CopyConfigRulesRequest& operator=(const CopyConfigRulesRequest &) = default ;
    CopyConfigRulesRequest& operator=(CopyConfigRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desAggregatorIds_ == nullptr
        && return this->srcAggregatorId_ == nullptr && return this->srcConfigRuleIds_ == nullptr; };
    // desAggregatorIds Field Functions 
    bool hasDesAggregatorIds() const { return this->desAggregatorIds_ != nullptr;};
    void deleteDesAggregatorIds() { this->desAggregatorIds_ = nullptr;};
    inline string desAggregatorIds() const { DARABONBA_PTR_GET_DEFAULT(desAggregatorIds_, "") };
    inline CopyConfigRulesRequest& setDesAggregatorIds(string desAggregatorIds) { DARABONBA_PTR_SET_VALUE(desAggregatorIds_, desAggregatorIds) };


    // srcAggregatorId Field Functions 
    bool hasSrcAggregatorId() const { return this->srcAggregatorId_ != nullptr;};
    void deleteSrcAggregatorId() { this->srcAggregatorId_ = nullptr;};
    inline string srcAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(srcAggregatorId_, "") };
    inline CopyConfigRulesRequest& setSrcAggregatorId(string srcAggregatorId) { DARABONBA_PTR_SET_VALUE(srcAggregatorId_, srcAggregatorId) };


    // srcConfigRuleIds Field Functions 
    bool hasSrcConfigRuleIds() const { return this->srcConfigRuleIds_ != nullptr;};
    void deleteSrcConfigRuleIds() { this->srcConfigRuleIds_ = nullptr;};
    inline string srcConfigRuleIds() const { DARABONBA_PTR_GET_DEFAULT(srcConfigRuleIds_, "") };
    inline CopyConfigRulesRequest& setSrcConfigRuleIds(string srcConfigRuleIds) { DARABONBA_PTR_SET_VALUE(srcConfigRuleIds_, srcConfigRuleIds) };


  protected:
    // The IDs of the destination account groups into which the rules are replicated. Separate multiple account group IDs with commas (,).
    // 
    // > If you leave this parameter empty, the compliance packages are replicated into the same account group.
    std::shared_ptr<string> desAggregatorIds_ = nullptr;
    // The ID of the account group to which the rules belong.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    std::shared_ptr<string> srcAggregatorId_ = nullptr;
    // The rule IDs. Separate multiple rule IDs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> srcConfigRuleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
