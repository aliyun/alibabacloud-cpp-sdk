// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWEBFILTERRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWEBFILTERRULESREQUEST_HPP_
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
  class DeleteWebFilterRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWebFilterRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WebFilterRuleIds, webFilterRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWebFilterRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WebFilterRuleIds, webFilterRuleIds_);
    };
    DeleteWebFilterRulesRequest() = default ;
    DeleteWebFilterRulesRequest(const DeleteWebFilterRulesRequest &) = default ;
    DeleteWebFilterRulesRequest(DeleteWebFilterRulesRequest &&) = default ;
    DeleteWebFilterRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWebFilterRulesRequest() = default ;
    DeleteWebFilterRulesRequest& operator=(const DeleteWebFilterRulesRequest &) = default ;
    DeleteWebFilterRulesRequest& operator=(DeleteWebFilterRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->webFilterRuleIds_ == nullptr; };
    // webFilterRuleIds Field Functions 
    bool hasWebFilterRuleIds() const { return this->webFilterRuleIds_ != nullptr;};
    void deleteWebFilterRuleIds() { this->webFilterRuleIds_ = nullptr;};
    inline const vector<string> & getWebFilterRuleIds() const { DARABONBA_PTR_GET_CONST(webFilterRuleIds_, vector<string>) };
    inline vector<string> getWebFilterRuleIds() { DARABONBA_PTR_GET(webFilterRuleIds_, vector<string>) };
    inline DeleteWebFilterRulesRequest& setWebFilterRuleIds(const vector<string> & webFilterRuleIds) { DARABONBA_PTR_SET_VALUE(webFilterRuleIds_, webFilterRuleIds) };
    inline DeleteWebFilterRulesRequest& setWebFilterRuleIds(vector<string> && webFilterRuleIds) { DARABONBA_PTR_SET_RVALUE(webFilterRuleIds_, webFilterRuleIds) };


  protected:
    // The IDs of the web filtering rules to delete. You can specify up to 100 IDs in a single request. The IDs cannot be empty and must be unique.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> webFilterRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
