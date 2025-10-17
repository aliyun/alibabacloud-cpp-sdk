// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERFORMANCEVIEWREQUESTVIEWDETAILCATEGORIESKEYS_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERFORMANCEVIEWREQUESTVIEWDETAILCATEGORIESKEYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreatePerformanceViewRequestViewDetailCategoriesKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePerformanceViewRequestViewDetailCategoriesKeys& obj) { 
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePerformanceViewRequestViewDetailCategoriesKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
    };
    CreatePerformanceViewRequestViewDetailCategoriesKeys() = default ;
    CreatePerformanceViewRequestViewDetailCategoriesKeys(const CreatePerformanceViewRequestViewDetailCategoriesKeys &) = default ;
    CreatePerformanceViewRequestViewDetailCategoriesKeys(CreatePerformanceViewRequestViewDetailCategoriesKeys &&) = default ;
    CreatePerformanceViewRequestViewDetailCategoriesKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePerformanceViewRequestViewDetailCategoriesKeys() = default ;
    CreatePerformanceViewRequestViewDetailCategoriesKeys& operator=(const CreatePerformanceViewRequestViewDetailCategoriesKeys &) = default ;
    CreatePerformanceViewRequestViewDetailCategoriesKeys& operator=(CreatePerformanceViewRequestViewDetailCategoriesKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyName_ == nullptr
        && return this->selected_ == nullptr; };
    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline CreatePerformanceViewRequestViewDetailCategoriesKeys& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline CreatePerformanceViewRequestViewDetailCategoriesKeys& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    // The name of the metric.
    std::shared_ptr<string> keyName_ = nullptr;
    // Specifies whether to select the metric. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> selected_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
