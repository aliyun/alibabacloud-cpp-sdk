// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLIENTCONFSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLIENTCONFSTRATEGYREQUEST_HPP_
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
  class ModifyClientConfStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClientConfStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagExt, tagExt_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClientConfStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagExt, tagExt_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    ModifyClientConfStrategyRequest() = default ;
    ModifyClientConfStrategyRequest(const ModifyClientConfStrategyRequest &) = default ;
    ModifyClientConfStrategyRequest(ModifyClientConfStrategyRequest &&) = default ;
    ModifyClientConfStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClientConfStrategyRequest() = default ;
    ModifyClientConfStrategyRequest& operator=(const ModifyClientConfStrategyRequest &) = default ;
    ModifyClientConfStrategyRequest& operator=(ModifyClientConfStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr
        && this->tagExt_ != nullptr && this->tagValue_ != nullptr && this->uuid_ != nullptr && this->uuids_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ModifyClientConfStrategyRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tagExt Field Functions 
    bool hasTagExt() const { return this->tagExt_ != nullptr;};
    void deleteTagExt() { this->tagExt_ = nullptr;};
    inline string tagExt() const { DARABONBA_PTR_GET_DEFAULT(tagExt_, "") };
    inline ModifyClientConfStrategyRequest& setTagExt(string tagExt) { DARABONBA_PTR_SET_VALUE(tagExt_, tagExt) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline ModifyClientConfStrategyRequest& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ModifyClientConfStrategyRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & uuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> uuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline ModifyClientConfStrategyRequest& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline ModifyClientConfStrategyRequest& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


  protected:
    // The key of the tag that is added to the agent configuration policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> tag_ = nullptr;
    // The extended tag of the agent configuration policy.
    std::shared_ptr<string> tagExt_ = nullptr;
    // The value of the tag that is added to the agent configuration policy.
    // 
    // *   major
    // *   advanced
    // *   basic
    // 
    // This parameter is required.
    std::shared_ptr<string> tagValue_ = nullptr;
    // The UUID of the server that you want to query.
    std::shared_ptr<string> uuid_ = nullptr;
    // The UUID of the asset. You can specify a maximum of 500 UUIDs at a time.
    std::shared_ptr<vector<string>> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
