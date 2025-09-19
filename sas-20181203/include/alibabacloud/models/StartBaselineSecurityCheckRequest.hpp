// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTBASELINESECURITYCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTBASELINESECURITYCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class StartBaselineSecurityCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartBaselineSecurityCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ItemIds, itemIds_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, StartBaselineSecurityCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemIds, itemIds_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    StartBaselineSecurityCheckRequest() = default ;
    StartBaselineSecurityCheckRequest(const StartBaselineSecurityCheckRequest &) = default ;
    StartBaselineSecurityCheckRequest(StartBaselineSecurityCheckRequest &&) = default ;
    StartBaselineSecurityCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartBaselineSecurityCheckRequest() = default ;
    StartBaselineSecurityCheckRequest& operator=(const StartBaselineSecurityCheckRequest &) = default ;
    StartBaselineSecurityCheckRequest& operator=(StartBaselineSecurityCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemIds_ != nullptr
        && this->lang_ != nullptr && this->resourceOwnerId_ != nullptr && this->sourceIp_ != nullptr && this->type_ != nullptr; };
    // itemIds Field Functions 
    bool hasItemIds() const { return this->itemIds_ != nullptr;};
    void deleteItemIds() { this->itemIds_ = nullptr;};
    inline const vector<int64_t> & itemIds() const { DARABONBA_PTR_GET_CONST(itemIds_, vector<int64_t>) };
    inline vector<int64_t> itemIds() { DARABONBA_PTR_GET(itemIds_, vector<int64_t>) };
    inline StartBaselineSecurityCheckRequest& setItemIds(const vector<int64_t> & itemIds) { DARABONBA_PTR_SET_VALUE(itemIds_, itemIds) };
    inline StartBaselineSecurityCheckRequest& setItemIds(vector<int64_t> && itemIds) { DARABONBA_PTR_SET_RVALUE(itemIds_, itemIds) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline StartBaselineSecurityCheckRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline StartBaselineSecurityCheckRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline StartBaselineSecurityCheckRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline StartBaselineSecurityCheckRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The IDs of the check items.
    // 
    // > To perform a check task on cloud service configurations, you must specify the ID of the check item. You can call the [DescribeRiskItemType](~~DescribeRiskItemType~~) operation to query the IDs of check items.
    std::shared_ptr<vector<int64_t>> itemIds_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The type of the check task. Valid values:
    // 
    // *   **check**
    // *   **verify**
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
