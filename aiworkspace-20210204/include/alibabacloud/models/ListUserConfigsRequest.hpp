// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListUserConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryNames, categoryNames_);
      DARABONBA_PTR_TO_JSON(ConfigKeys, configKeys_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryNames, categoryNames_);
      DARABONBA_PTR_FROM_JSON(ConfigKeys, configKeys_);
    };
    ListUserConfigsRequest() = default ;
    ListUserConfigsRequest(const ListUserConfigsRequest &) = default ;
    ListUserConfigsRequest(ListUserConfigsRequest &&) = default ;
    ListUserConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserConfigsRequest() = default ;
    ListUserConfigsRequest& operator=(const ListUserConfigsRequest &) = default ;
    ListUserConfigsRequest& operator=(ListUserConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryNames_ == nullptr
        && this->configKeys_ == nullptr; };
    // categoryNames Field Functions 
    bool hasCategoryNames() const { return this->categoryNames_ != nullptr;};
    void deleteCategoryNames() { this->categoryNames_ = nullptr;};
    inline string getCategoryNames() const { DARABONBA_PTR_GET_DEFAULT(categoryNames_, "") };
    inline ListUserConfigsRequest& setCategoryNames(string categoryNames) { DARABONBA_PTR_SET_VALUE(categoryNames_, categoryNames) };


    // configKeys Field Functions 
    bool hasConfigKeys() const { return this->configKeys_ != nullptr;};
    void deleteConfigKeys() { this->configKeys_ = nullptr;};
    inline string getConfigKeys() const { DARABONBA_PTR_GET_DEFAULT(configKeys_, "") };
    inline ListUserConfigsRequest& setConfigKeys(string configKeys) { DARABONBA_PTR_SET_VALUE(configKeys_, configKeys) };


  protected:
    // The category. Currently, only DataPrivacyConfig is supported.
    shared_ptr<string> categoryNames_ {};
    // The configuration item keys. Currently, only customizePAIAssumedRole is supported.
    shared_ptr<string> configKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
