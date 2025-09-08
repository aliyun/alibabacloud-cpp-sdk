// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTSCENEBYEVENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTSCENEBYEVENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertSceneByEventResponseBodyDataTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAlertSceneByEventResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertSceneByEventResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(AlertNameId, alertNameId_);
      DARABONBA_PTR_TO_JSON(AlertTile, alertTile_);
      DARABONBA_PTR_TO_JSON(AlertTileId, alertTileId_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(AlertTypeId, alertTypeId_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertSceneByEventResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(AlertNameId, alertNameId_);
      DARABONBA_PTR_FROM_JSON(AlertTile, alertTile_);
      DARABONBA_PTR_FROM_JSON(AlertTileId, alertTileId_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(AlertTypeId, alertTypeId_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    DescribeAlertSceneByEventResponseBodyData() = default ;
    DescribeAlertSceneByEventResponseBodyData(const DescribeAlertSceneByEventResponseBodyData &) = default ;
    DescribeAlertSceneByEventResponseBodyData(DescribeAlertSceneByEventResponseBodyData &&) = default ;
    DescribeAlertSceneByEventResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertSceneByEventResponseBodyData() = default ;
    DescribeAlertSceneByEventResponseBodyData& operator=(const DescribeAlertSceneByEventResponseBodyData &) = default ;
    DescribeAlertSceneByEventResponseBodyData& operator=(DescribeAlertSceneByEventResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertName_ != nullptr
        && this->alertNameId_ != nullptr && this->alertTile_ != nullptr && this->alertTileId_ != nullptr && this->alertType_ != nullptr && this->alertTypeId_ != nullptr
        && this->targets_ != nullptr; };
    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline DescribeAlertSceneByEventResponseBodyData& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertNameId Field Functions 
    bool hasAlertNameId() const { return this->alertNameId_ != nullptr;};
    void deleteAlertNameId() { this->alertNameId_ = nullptr;};
    inline string alertNameId() const { DARABONBA_PTR_GET_DEFAULT(alertNameId_, "") };
    inline DescribeAlertSceneByEventResponseBodyData& setAlertNameId(string alertNameId) { DARABONBA_PTR_SET_VALUE(alertNameId_, alertNameId) };


    // alertTile Field Functions 
    bool hasAlertTile() const { return this->alertTile_ != nullptr;};
    void deleteAlertTile() { this->alertTile_ = nullptr;};
    inline string alertTile() const { DARABONBA_PTR_GET_DEFAULT(alertTile_, "") };
    inline DescribeAlertSceneByEventResponseBodyData& setAlertTile(string alertTile) { DARABONBA_PTR_SET_VALUE(alertTile_, alertTile) };


    // alertTileId Field Functions 
    bool hasAlertTileId() const { return this->alertTileId_ != nullptr;};
    void deleteAlertTileId() { this->alertTileId_ = nullptr;};
    inline string alertTileId() const { DARABONBA_PTR_GET_DEFAULT(alertTileId_, "") };
    inline DescribeAlertSceneByEventResponseBodyData& setAlertTileId(string alertTileId) { DARABONBA_PTR_SET_VALUE(alertTileId_, alertTileId) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline DescribeAlertSceneByEventResponseBodyData& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // alertTypeId Field Functions 
    bool hasAlertTypeId() const { return this->alertTypeId_ != nullptr;};
    void deleteAlertTypeId() { this->alertTypeId_ = nullptr;};
    inline string alertTypeId() const { DARABONBA_PTR_GET_DEFAULT(alertTypeId_, "") };
    inline DescribeAlertSceneByEventResponseBodyData& setAlertTypeId(string alertTypeId) { DARABONBA_PTR_SET_VALUE(alertTypeId_, alertTypeId) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<Models::DescribeAlertSceneByEventResponseBodyDataTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Models::DescribeAlertSceneByEventResponseBodyDataTargets>) };
    inline vector<Models::DescribeAlertSceneByEventResponseBodyDataTargets> targets() { DARABONBA_PTR_GET(targets_, vector<Models::DescribeAlertSceneByEventResponseBodyDataTargets>) };
    inline DescribeAlertSceneByEventResponseBodyData& setTargets(const vector<Models::DescribeAlertSceneByEventResponseBodyDataTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline DescribeAlertSceneByEventResponseBodyData& setTargets(vector<Models::DescribeAlertSceneByEventResponseBodyDataTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The alert name. The display name of the alert name varies based on the language of the system, such as Chinese and English.
    std::shared_ptr<string> alertName_ = nullptr;
    // The ID of the alert name.
    std::shared_ptr<string> alertNameId_ = nullptr;
    // The alert title. The display name of the alert title varies based on the language of the system, such as Chinese and English.
    std::shared_ptr<string> alertTile_ = nullptr;
    // The ID of the alert title.
    std::shared_ptr<string> alertTileId_ = nullptr;
    // The alert type. The display name of the alert type varies based on the language of the system, such as Chinese and English.
    std::shared_ptr<string> alertType_ = nullptr;
    // The ID of the alert type.
    std::shared_ptr<string> alertTypeId_ = nullptr;
    // The objects that can be added to the whitelist.
    std::shared_ptr<vector<Models::DescribeAlertSceneByEventResponseBodyDataTargets>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
