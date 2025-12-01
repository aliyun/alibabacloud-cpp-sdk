// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHMODIFYENTITLEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHMODIFYENTITLEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class BatchModifyEntitlementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchModifyEntitlementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(MaxDesktopPerUser, maxDesktopPerUser_);
      DARABONBA_PTR_TO_JSON(MaxUserPerDesktop, maxUserPerDesktop_);
      DARABONBA_PTR_TO_JSON(Preview, preview_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Strategy, strategy_);
    };
    friend void from_json(const Darabonba::Json& j, BatchModifyEntitlementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(MaxDesktopPerUser, maxDesktopPerUser_);
      DARABONBA_PTR_FROM_JSON(MaxUserPerDesktop, maxUserPerDesktop_);
      DARABONBA_PTR_FROM_JSON(Preview, preview_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
    };
    BatchModifyEntitlementRequest() = default ;
    BatchModifyEntitlementRequest(const BatchModifyEntitlementRequest &) = default ;
    BatchModifyEntitlementRequest(BatchModifyEntitlementRequest &&) = default ;
    BatchModifyEntitlementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchModifyEntitlementRequest() = default ;
    BatchModifyEntitlementRequest& operator=(const BatchModifyEntitlementRequest &) = default ;
    BatchModifyEntitlementRequest& operator=(BatchModifyEntitlementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopId_ == nullptr
        && return this->endUserId_ == nullptr && return this->maxDesktopPerUser_ == nullptr && return this->maxUserPerDesktop_ == nullptr && return this->preview_ == nullptr && return this->regionId_ == nullptr
        && return this->strategy_ == nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & desktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> desktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline BatchModifyEntitlementRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline BatchModifyEntitlementRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & endUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> endUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline BatchModifyEntitlementRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline BatchModifyEntitlementRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // maxDesktopPerUser Field Functions 
    bool hasMaxDesktopPerUser() const { return this->maxDesktopPerUser_ != nullptr;};
    void deleteMaxDesktopPerUser() { this->maxDesktopPerUser_ = nullptr;};
    inline int32_t maxDesktopPerUser() const { DARABONBA_PTR_GET_DEFAULT(maxDesktopPerUser_, 0) };
    inline BatchModifyEntitlementRequest& setMaxDesktopPerUser(int32_t maxDesktopPerUser) { DARABONBA_PTR_SET_VALUE(maxDesktopPerUser_, maxDesktopPerUser) };


    // maxUserPerDesktop Field Functions 
    bool hasMaxUserPerDesktop() const { return this->maxUserPerDesktop_ != nullptr;};
    void deleteMaxUserPerDesktop() { this->maxUserPerDesktop_ = nullptr;};
    inline int32_t maxUserPerDesktop() const { DARABONBA_PTR_GET_DEFAULT(maxUserPerDesktop_, 0) };
    inline BatchModifyEntitlementRequest& setMaxUserPerDesktop(int32_t maxUserPerDesktop) { DARABONBA_PTR_SET_VALUE(maxUserPerDesktop_, maxUserPerDesktop) };


    // preview Field Functions 
    bool hasPreview() const { return this->preview_ != nullptr;};
    void deletePreview() { this->preview_ = nullptr;};
    inline bool preview() const { DARABONBA_PTR_GET_DEFAULT(preview_, false) };
    inline BatchModifyEntitlementRequest& setPreview(bool preview) { DARABONBA_PTR_SET_VALUE(preview_, preview) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchModifyEntitlementRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // strategy Field Functions 
    bool hasStrategy() const { return this->strategy_ != nullptr;};
    void deleteStrategy() { this->strategy_ = nullptr;};
    inline string strategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
    inline BatchModifyEntitlementRequest& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> desktopId_ = nullptr;
    std::shared_ptr<vector<string>> endUserId_ = nullptr;
    std::shared_ptr<int32_t> maxDesktopPerUser_ = nullptr;
    std::shared_ptr<int32_t> maxUserPerDesktop_ = nullptr;
    std::shared_ptr<bool> preview_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> strategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
