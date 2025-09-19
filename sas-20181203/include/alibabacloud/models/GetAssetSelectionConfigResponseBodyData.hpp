// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSELECTIONCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSELECTIONCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetSelectionConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetSelectionConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetSelectionConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GetAssetSelectionConfigResponseBodyData() = default ;
    GetAssetSelectionConfigResponseBodyData(const GetAssetSelectionConfigResponseBodyData &) = default ;
    GetAssetSelectionConfigResponseBodyData(GetAssetSelectionConfigResponseBodyData &&) = default ;
    GetAssetSelectionConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetSelectionConfigResponseBodyData() = default ;
    GetAssetSelectionConfigResponseBodyData& operator=(const GetAssetSelectionConfigResponseBodyData &) = default ;
    GetAssetSelectionConfigResponseBodyData& operator=(GetAssetSelectionConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->platform_ != nullptr
        && this->selectionKey_ != nullptr && this->targetType_ != nullptr; };
    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetAssetSelectionConfigResponseBodyData& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // selectionKey Field Functions 
    bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
    void deleteSelectionKey() { this->selectionKey_ = nullptr;};
    inline string selectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
    inline GetAssetSelectionConfigResponseBodyData& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetAssetSelectionConfigResponseBodyData& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The operating system of the asset. Valid values:
    // 
    // *   **windows**
    // *   **linux**
    std::shared_ptr<string> platform_ = nullptr;
    // The ID of the current asset selection. It can be used to query and modify the asset that is selected.
    std::shared_ptr<string> selectionKey_ = nullptr;
    // The dimension based on which the asset is selected. Valid values:
    // 
    // *   **instance**: The asset is selected by server.
    // *   **group**: The asset is selected by group.
    // *   **vpc**: The asset is selected by VPC.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
