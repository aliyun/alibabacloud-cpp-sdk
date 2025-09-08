// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITERULELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITERULELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class UpdateWhiteRuleListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhiteRuleListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
      DARABONBA_PTR_TO_JSON(WhiteRuleId, whiteRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhiteRuleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
      DARABONBA_PTR_FROM_JSON(WhiteRuleId, whiteRuleId_);
    };
    UpdateWhiteRuleListRequest() = default ;
    UpdateWhiteRuleListRequest(const UpdateWhiteRuleListRequest &) = default ;
    UpdateWhiteRuleListRequest(UpdateWhiteRuleListRequest &&) = default ;
    UpdateWhiteRuleListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhiteRuleListRequest() = default ;
    UpdateWhiteRuleListRequest& operator=(const UpdateWhiteRuleListRequest &) = default ;
    UpdateWhiteRuleListRequest& operator=(UpdateWhiteRuleListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expression_ != nullptr
        && this->incidentUuid_ != nullptr && this->regionId_ != nullptr && this->roleFor_ != nullptr && this->roleType_ != nullptr && this->whiteRuleId_ != nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline UpdateWhiteRuleListRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // incidentUuid Field Functions 
    bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
    void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
    inline string incidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
    inline UpdateWhiteRuleListRequest& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateWhiteRuleListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateWhiteRuleListRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline UpdateWhiteRuleListRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


    // whiteRuleId Field Functions 
    bool hasWhiteRuleId() const { return this->whiteRuleId_ != nullptr;};
    void deleteWhiteRuleId() { this->whiteRuleId_ = nullptr;};
    inline int64_t whiteRuleId() const { DARABONBA_PTR_GET_DEFAULT(whiteRuleId_, 0L) };
    inline UpdateWhiteRuleListRequest& setWhiteRuleId(int64_t whiteRuleId) { DARABONBA_PTR_SET_VALUE(whiteRuleId_, whiteRuleId) };


  protected:
    // The alert whitelist rule. The value is a JSON object.
    // 
    // This parameter is required.
    std::shared_ptr<string> expression_ = nullptr;
    // The UUID of the event.
    std::shared_ptr<string> incidentUuid_ = nullptr;
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    std::shared_ptr<int32_t> roleType_ = nullptr;
    // The unique ID of the whitelist rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> whiteRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
