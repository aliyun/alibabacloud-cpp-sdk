// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEIMAGEBASELINEWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEIMAGEBASELINEWHITELISTREQUEST_HPP_
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
  class OperateImageBaselineWhitelistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateImageBaselineWhitelistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineItemKeyList, baselineItemKeyList_);
      DARABONBA_PTR_TO_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(ScanRange, scanRange_);
    };
    friend void from_json(const Darabonba::Json& j, OperateImageBaselineWhitelistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineItemKeyList, baselineItemKeyList_);
      DARABONBA_PTR_FROM_JSON(ImageUuid, imageUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(ScanRange, scanRange_);
    };
    OperateImageBaselineWhitelistRequest() = default ;
    OperateImageBaselineWhitelistRequest(const OperateImageBaselineWhitelistRequest &) = default ;
    OperateImageBaselineWhitelistRequest(OperateImageBaselineWhitelistRequest &&) = default ;
    OperateImageBaselineWhitelistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateImageBaselineWhitelistRequest() = default ;
    OperateImageBaselineWhitelistRequest& operator=(const OperateImageBaselineWhitelistRequest &) = default ;
    OperateImageBaselineWhitelistRequest& operator=(OperateImageBaselineWhitelistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baselineItemKeyList_ != nullptr
        && this->imageUuid_ != nullptr && this->lang_ != nullptr && this->operation_ != nullptr && this->scanRange_ != nullptr; };
    // baselineItemKeyList Field Functions 
    bool hasBaselineItemKeyList() const { return this->baselineItemKeyList_ != nullptr;};
    void deleteBaselineItemKeyList() { this->baselineItemKeyList_ = nullptr;};
    inline string baselineItemKeyList() const { DARABONBA_PTR_GET_DEFAULT(baselineItemKeyList_, "") };
    inline OperateImageBaselineWhitelistRequest& setBaselineItemKeyList(string baselineItemKeyList) { DARABONBA_PTR_SET_VALUE(baselineItemKeyList_, baselineItemKeyList) };


    // imageUuid Field Functions 
    bool hasImageUuid() const { return this->imageUuid_ != nullptr;};
    void deleteImageUuid() { this->imageUuid_ = nullptr;};
    inline string imageUuid() const { DARABONBA_PTR_GET_DEFAULT(imageUuid_, "") };
    inline OperateImageBaselineWhitelistRequest& setImageUuid(string imageUuid) { DARABONBA_PTR_SET_VALUE(imageUuid_, imageUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline OperateImageBaselineWhitelistRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline OperateImageBaselineWhitelistRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // scanRange Field Functions 
    bool hasScanRange() const { return this->scanRange_ != nullptr;};
    void deleteScanRange() { this->scanRange_ = nullptr;};
    inline const vector<string> & scanRange() const { DARABONBA_PTR_GET_CONST(scanRange_, vector<string>) };
    inline vector<string> scanRange() { DARABONBA_PTR_GET(scanRange_, vector<string>) };
    inline OperateImageBaselineWhitelistRequest& setScanRange(const vector<string> & scanRange) { DARABONBA_PTR_SET_VALUE(scanRange_, scanRange) };
    inline OperateImageBaselineWhitelistRequest& setScanRange(vector<string> && scanRange) { DARABONBA_PTR_SET_RVALUE(scanRange_, scanRange) };


  protected:
    // The keys of baseline check items.
    // 
    // This parameter is required.
    std::shared_ptr<string> baselineItemKeyList_ = nullptr;
    // The UUID of the image.
    std::shared_ptr<string> imageUuid_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The operation that you want to perform on the check items. Valid values:
    // 
    // *   **add**: adds the check items to the whitelist
    // *   **del**: removes the check items from the whitelist
    // 
    // This parameter is required.
    std::shared_ptr<string> operation_ = nullptr;
    // The types of the assets that you want to scan.
    std::shared_ptr<vector<string>> scanRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
