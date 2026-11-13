// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPLICATIONCUSTOMRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPLICATIONCUSTOMRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteApplicationCustomRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteApplicationCustomRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCustomRuleIds, applicationCustomRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteApplicationCustomRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCustomRuleIds, applicationCustomRuleIds_);
    };
    DeleteApplicationCustomRulesRequest() = default ;
    DeleteApplicationCustomRulesRequest(const DeleteApplicationCustomRulesRequest &) = default ;
    DeleteApplicationCustomRulesRequest(DeleteApplicationCustomRulesRequest &&) = default ;
    DeleteApplicationCustomRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteApplicationCustomRulesRequest() = default ;
    DeleteApplicationCustomRulesRequest& operator=(const DeleteApplicationCustomRulesRequest &) = default ;
    DeleteApplicationCustomRulesRequest& operator=(DeleteApplicationCustomRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCustomRuleIds_ == nullptr; };
    // applicationCustomRuleIds Field Functions 
    bool hasApplicationCustomRuleIds() const { return this->applicationCustomRuleIds_ != nullptr;};
    void deleteApplicationCustomRuleIds() { this->applicationCustomRuleIds_ = nullptr;};
    inline const vector<string> & getApplicationCustomRuleIds() const { DARABONBA_PTR_GET_CONST(applicationCustomRuleIds_, vector<string>) };
    inline vector<string> getApplicationCustomRuleIds() { DARABONBA_PTR_GET(applicationCustomRuleIds_, vector<string>) };
    inline DeleteApplicationCustomRulesRequest& setApplicationCustomRuleIds(const vector<string> & applicationCustomRuleIds) { DARABONBA_PTR_SET_VALUE(applicationCustomRuleIds_, applicationCustomRuleIds) };
    inline DeleteApplicationCustomRulesRequest& setApplicationCustomRuleIds(vector<string> && applicationCustomRuleIds) { DARABONBA_PTR_SET_RVALUE(applicationCustomRuleIds_, applicationCustomRuleIds) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> applicationCustomRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
