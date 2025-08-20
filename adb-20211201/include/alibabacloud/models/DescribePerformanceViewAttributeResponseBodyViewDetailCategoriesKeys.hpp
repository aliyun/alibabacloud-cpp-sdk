// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWATTRIBUTERESPONSEBODYVIEWDETAILCATEGORIESKEYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPERFORMANCEVIEWATTRIBUTERESPONSEBODYVIEWDETAILCATEGORIESKEYS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAutoMc, enableAutoMc_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAutoMc, enableAutoMc_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
    };
    DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys() = default ;
    DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys(const DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys &) = default ;
    DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys(DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys &&) = default ;
    DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys() = default ;
    DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& operator=(const DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys &) = default ;
    DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& operator=(DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableAutoMc_ != nullptr
        && this->engine_ != nullptr && this->groupType_ != nullptr && this->keyName_ != nullptr && this->selected_ != nullptr; };
    // enableAutoMc Field Functions 
    bool hasEnableAutoMc() const { return this->enableAutoMc_ != nullptr;};
    void deleteEnableAutoMc() { this->enableAutoMc_ = nullptr;};
    inline bool enableAutoMc() const { DARABONBA_PTR_GET_DEFAULT(enableAutoMc_, false) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& setEnableAutoMc(bool enableAutoMc) { DARABONBA_PTR_SET_VALUE(enableAutoMc_, enableAutoMc) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline const vector<string> & engine() const { DARABONBA_PTR_GET_CONST(engine_, vector<string>) };
    inline vector<string> engine() { DARABONBA_PTR_GET(engine_, vector<string>) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& setEngine(const vector<string> & engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& setEngine(vector<string> && engine) { DARABONBA_PTR_SET_RVALUE(engine_, engine) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline const vector<string> & groupType() const { DARABONBA_PTR_GET_CONST(groupType_, vector<string>) };
    inline vector<string> groupType() { DARABONBA_PTR_GET(groupType_, vector<string>) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& setGroupType(const vector<string> & groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& setGroupType(vector<string> && groupType) { DARABONBA_PTR_SET_RVALUE(groupType_, groupType) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline bool selected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
    inline DescribePerformanceViewAttributeResponseBodyViewDetailCategoriesKeys& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


  protected:
    // Indicates whether the multi-cluster feature is enabled. Valid values:
    // 
    // - true
    // 
    // - false
    std::shared_ptr<bool> enableAutoMc_ = nullptr;
    // The database engine of the cluster. Valid values:
    // 
    // *  AnalyticDB
    std::shared_ptr<vector<string>> engine_ = nullptr;
    // The type of the resource group. Valid values:
    // 
    // *   **Interactive**
    // *   **Job**
    // 
    // >  For more information about resource groups, see [Resource group overview](https://help.aliyun.com/document_detail/428610.html).
    std::shared_ptr<vector<string>> groupType_ = nullptr;
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
