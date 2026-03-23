// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAPLISTTOAPGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAPLISTTOAPGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class AddApListToApgroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddApListToApgroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApGroupId, apGroupId_);
      DARABONBA_PTR_TO_JSON(ApMacList, apMacListShrink_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
    };
    friend void from_json(const Darabonba::Json& j, AddApListToApgroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApGroupId, apGroupId_);
      DARABONBA_PTR_FROM_JSON(ApMacList, apMacListShrink_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
    };
    AddApListToApgroupShrinkRequest() = default ;
    AddApListToApgroupShrinkRequest(const AddApListToApgroupShrinkRequest &) = default ;
    AddApListToApgroupShrinkRequest(AddApListToApgroupShrinkRequest &&) = default ;
    AddApListToApgroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddApListToApgroupShrinkRequest() = default ;
    AddApListToApgroupShrinkRequest& operator=(const AddApListToApgroupShrinkRequest &) = default ;
    AddApListToApgroupShrinkRequest& operator=(AddApListToApgroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apGroupId_ == nullptr
        && this->apMacListShrink_ == nullptr && this->appCode_ == nullptr && this->appName_ == nullptr; };
    // apGroupId Field Functions 
    bool hasApGroupId() const { return this->apGroupId_ != nullptr;};
    void deleteApGroupId() { this->apGroupId_ = nullptr;};
    inline string getApGroupId() const { DARABONBA_PTR_GET_DEFAULT(apGroupId_, "") };
    inline AddApListToApgroupShrinkRequest& setApGroupId(string apGroupId) { DARABONBA_PTR_SET_VALUE(apGroupId_, apGroupId) };


    // apMacListShrink Field Functions 
    bool hasApMacListShrink() const { return this->apMacListShrink_ != nullptr;};
    void deleteApMacListShrink() { this->apMacListShrink_ = nullptr;};
    inline string getApMacListShrink() const { DARABONBA_PTR_GET_DEFAULT(apMacListShrink_, "") };
    inline AddApListToApgroupShrinkRequest& setApMacListShrink(string apMacListShrink) { DARABONBA_PTR_SET_VALUE(apMacListShrink_, apMacListShrink) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline AddApListToApgroupShrinkRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddApListToApgroupShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


  protected:
    // This parameter is required.
    shared_ptr<string> apGroupId_ {};
    // This parameter is required.
    shared_ptr<string> apMacListShrink_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
