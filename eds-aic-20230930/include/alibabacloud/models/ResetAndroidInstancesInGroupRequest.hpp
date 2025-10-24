// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETANDROIDINSTANCESINGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETANDROIDINSTANCESINGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ResetAndroidInstancesInGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetAndroidInstancesInGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_TO_JSON(SettingResetType, settingResetType_);
    };
    friend void from_json(const Darabonba::Json& j, ResetAndroidInstancesInGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_FROM_JSON(SettingResetType, settingResetType_);
    };
    ResetAndroidInstancesInGroupRequest() = default ;
    ResetAndroidInstancesInGroupRequest(const ResetAndroidInstancesInGroupRequest &) = default ;
    ResetAndroidInstancesInGroupRequest(ResetAndroidInstancesInGroupRequest &&) = default ;
    ResetAndroidInstancesInGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetAndroidInstancesInGroupRequest() = default ;
    ResetAndroidInstancesInGroupRequest& operator=(const ResetAndroidInstancesInGroupRequest &) = default ;
    ResetAndroidInstancesInGroupRequest& operator=(ResetAndroidInstancesInGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && return this->saleMode_ == nullptr && return this->settingResetType_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & androidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> androidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline ResetAndroidInstancesInGroupRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline ResetAndroidInstancesInGroupRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string saleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline ResetAndroidInstancesInGroupRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


    // settingResetType Field Functions 
    bool hasSettingResetType() const { return this->settingResetType_ != nullptr;};
    void deleteSettingResetType() { this->settingResetType_ = nullptr;};
    inline int32_t settingResetType() const { DARABONBA_PTR_GET_DEFAULT(settingResetType_, 0) };
    inline ResetAndroidInstancesInGroupRequest& setSettingResetType(int32_t settingResetType) { DARABONBA_PTR_SET_VALUE(settingResetType_, settingResetType) };


  protected:
    // The IDs of the cloud phone instances.
    std::shared_ptr<vector<string>> androidInstanceIds_ = nullptr;
    std::shared_ptr<string> saleMode_ = nullptr;
    std::shared_ptr<int32_t> settingResetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
