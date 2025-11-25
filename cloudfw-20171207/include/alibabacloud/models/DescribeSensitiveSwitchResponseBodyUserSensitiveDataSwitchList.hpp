// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVESWITCHRESPONSEBODYUSERSENSITIVEDATASWITCHLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVESWITCHRESPONSEBODYUSERSENSITIVEDATASWITCHLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SensitiveCategory, sensitiveCategory_);
      DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SensitiveCategory, sensitiveCategory_);
      DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
      DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
    };
    DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList() = default ;
    DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList(const DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList &) = default ;
    DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList(DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList &&) = default ;
    DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList() = default ;
    DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList& operator=(const DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList &) = default ;
    DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList& operator=(DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryName_ == nullptr
        && return this->description_ == nullptr && return this->sensitiveCategory_ == nullptr && return this->sensitiveLevel_ == nullptr && return this->switchStatus_ == nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // sensitiveCategory Field Functions 
    bool hasSensitiveCategory() const { return this->sensitiveCategory_ != nullptr;};
    void deleteSensitiveCategory() { this->sensitiveCategory_ = nullptr;};
    inline string sensitiveCategory() const { DARABONBA_PTR_GET_DEFAULT(sensitiveCategory_, "") };
    inline DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList& setSensitiveCategory(string sensitiveCategory) { DARABONBA_PTR_SET_VALUE(sensitiveCategory_, sensitiveCategory) };


    // sensitiveLevel Field Functions 
    bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
    void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
    inline string sensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
    inline DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


    // switchStatus Field Functions 
    bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
    void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
    inline int32_t switchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, 0) };
    inline DescribeSensitiveSwitchResponseBodyUserSensitiveDataSwitchList& setSwitchStatus(int32_t switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


  protected:
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> sensitiveCategory_ = nullptr;
    std::shared_ptr<string> sensitiveLevel_ = nullptr;
    std::shared_ptr<int32_t> switchStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
