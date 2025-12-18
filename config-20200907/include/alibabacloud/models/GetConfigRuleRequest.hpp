// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONFIGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONFIGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetConfigRuleRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetConfigRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConfigRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetConfigRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetConfigRuleRequest() = default ;
    GetConfigRuleRequest(const GetConfigRuleRequest &) = default ;
    GetConfigRuleRequest(GetConfigRuleRequest &&) = default ;
    GetConfigRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConfigRuleRequest() = default ;
    GetConfigRuleRequest& operator=(const GetConfigRuleRequest &) = default ;
    GetConfigRuleRequest& operator=(GetConfigRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleId_ == nullptr
        && return this->tag_ == nullptr; };
    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline GetConfigRuleRequest& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<GetConfigRuleRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<GetConfigRuleRequestTag>) };
    inline vector<GetConfigRuleRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<GetConfigRuleRequestTag>) };
    inline GetConfigRuleRequest& setTag(const vector<GetConfigRuleRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline GetConfigRuleRequest& setTag(vector<GetConfigRuleRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The rule ID.
    // 
    // For more information about how to obtain the ID of a rule, see [ListConfigRules](https://help.aliyun.com/document_detail/169607.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The tags of the resource.
    // 
    // You can add up to 20 tags to a resource.
    std::shared_ptr<vector<GetConfigRuleRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
