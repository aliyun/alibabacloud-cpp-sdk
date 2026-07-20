// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSUGGESTIONLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSUGGESTIONLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetSecuritySuggestionListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecuritySuggestionListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListConfigRulesRequest, listConfigRulesRequestShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecuritySuggestionListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListConfigRulesRequest, listConfigRulesRequestShrink_);
    };
    GetSecuritySuggestionListShrinkRequest() = default ;
    GetSecuritySuggestionListShrinkRequest(const GetSecuritySuggestionListShrinkRequest &) = default ;
    GetSecuritySuggestionListShrinkRequest(GetSecuritySuggestionListShrinkRequest &&) = default ;
    GetSecuritySuggestionListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecuritySuggestionListShrinkRequest() = default ;
    GetSecuritySuggestionListShrinkRequest& operator=(const GetSecuritySuggestionListShrinkRequest &) = default ;
    GetSecuritySuggestionListShrinkRequest& operator=(GetSecuritySuggestionListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listConfigRulesRequestShrink_ == nullptr; };
    // listConfigRulesRequestShrink Field Functions 
    bool hasListConfigRulesRequestShrink() const { return this->listConfigRulesRequestShrink_ != nullptr;};
    void deleteListConfigRulesRequestShrink() { this->listConfigRulesRequestShrink_ = nullptr;};
    inline string getListConfigRulesRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(listConfigRulesRequestShrink_, "") };
    inline GetSecuritySuggestionListShrinkRequest& setListConfigRulesRequestShrink(string listConfigRulesRequestShrink) { DARABONBA_PTR_SET_VALUE(listConfigRulesRequestShrink_, listConfigRulesRequestShrink) };


  protected:
    shared_ptr<string> listConfigRulesRequestShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
