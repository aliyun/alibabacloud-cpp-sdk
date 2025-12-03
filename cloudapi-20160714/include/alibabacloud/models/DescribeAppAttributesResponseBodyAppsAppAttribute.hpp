// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPATTRIBUTESRESPONSEBODYAPPSAPPATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPATTRIBUTESRESPONSEBODYAPPSAPPATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAppAttributesResponseBodyAppsAppAttributeTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppAttributesResponseBodyAppsAppAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppAttributesResponseBodyAppsAppAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppAttributesResponseBodyAppsAppAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeAppAttributesResponseBodyAppsAppAttribute() = default ;
    DescribeAppAttributesResponseBodyAppsAppAttribute(const DescribeAppAttributesResponseBodyAppsAppAttribute &) = default ;
    DescribeAppAttributesResponseBodyAppsAppAttribute(DescribeAppAttributesResponseBodyAppsAppAttribute &&) = default ;
    DescribeAppAttributesResponseBodyAppsAppAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppAttributesResponseBodyAppsAppAttribute() = default ;
    DescribeAppAttributesResponseBodyAppsAppAttribute& operator=(const DescribeAppAttributesResponseBodyAppsAppAttribute &) = default ;
    DescribeAppAttributesResponseBodyAppsAppAttribute& operator=(DescribeAppAttributesResponseBodyAppsAppAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->createdTime_ == nullptr && return this->description_ == nullptr && return this->disabled_ == nullptr && return this->extend_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->tags_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline DescribeAppAttributesResponseBodyAppsAppAttribute& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAppAttributesResponseBodyAppsAppAttribute& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeAppAttributesResponseBodyAppsAppAttribute& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAppAttributesResponseBodyAppsAppAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DescribeAppAttributesResponseBodyAppsAppAttribute& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline DescribeAppAttributesResponseBodyAppsAppAttribute& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeAppAttributesResponseBodyAppsAppAttribute& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeAppAttributesResponseBodyAppsAppAttributeTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeAppAttributesResponseBodyAppsAppAttributeTags) };
    inline Models::DescribeAppAttributesResponseBodyAppsAppAttributeTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeAppAttributesResponseBodyAppsAppAttributeTags) };
    inline DescribeAppAttributesResponseBodyAppsAppAttribute& setTags(const Models::DescribeAppAttributesResponseBodyAppsAppAttributeTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAppAttributesResponseBodyAppsAppAttribute& setTags(Models::DescribeAppAttributesResponseBodyAppsAppAttributeTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the app.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The name of the app.
    std::shared_ptr<string> appName_ = nullptr;
    // The creation time (UTC) of the app.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The description of the app.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> disabled_ = nullptr;
    // 扩展信息
    std::shared_ptr<string> extend_ = nullptr;
    // The modification time (UTC) of the app.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The tags.
    std::shared_ptr<Models::DescribeAppAttributesResponseBodyAppsAppAttributeTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
