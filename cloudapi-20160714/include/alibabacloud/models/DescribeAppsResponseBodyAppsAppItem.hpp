// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYAPPSAPPITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODYAPPSAPPITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeAppsResponseBodyAppsAppItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBodyAppsAppItem& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBodyAppsAppItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
    };
    DescribeAppsResponseBodyAppsAppItem() = default ;
    DescribeAppsResponseBodyAppsAppItem(const DescribeAppsResponseBodyAppsAppItem &) = default ;
    DescribeAppsResponseBodyAppsAppItem(DescribeAppsResponseBodyAppsAppItem &&) = default ;
    DescribeAppsResponseBodyAppsAppItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBodyAppsAppItem() = default ;
    DescribeAppsResponseBodyAppsAppItem& operator=(const DescribeAppsResponseBodyAppsAppItem &) = default ;
    DescribeAppsResponseBodyAppsAppItem& operator=(DescribeAppsResponseBodyAppsAppItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->description_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline DescribeAppsResponseBodyAppsAppItem& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAppsResponseBodyAppsAppItem& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAppsResponseBodyAppsAppItem& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // The ID of the app.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The name of the app.
    std::shared_ptr<string> appName_ = nullptr;
    // The description of the app.
    std::shared_ptr<string> description_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
