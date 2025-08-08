// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMODELSCOPEMODELINPUTNASCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMODELSCOPEMODELINPUTNASCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployModelScopeModelInputNasConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployModelScopeModelInputNasConfig& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployModelScopeModelInputNasConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    DeployModelScopeModelInputNasConfig() = default ;
    DeployModelScopeModelInputNasConfig(const DeployModelScopeModelInputNasConfig &) = default ;
    DeployModelScopeModelInputNasConfig(DeployModelScopeModelInputNasConfig &&) = default ;
    DeployModelScopeModelInputNasConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployModelScopeModelInputNasConfig() = default ;
    DeployModelScopeModelInputNasConfig& operator=(const DeployModelScopeModelInputNasConfig &) = default ;
    DeployModelScopeModelInputNasConfig& operator=(DeployModelScopeModelInputNasConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->mountPoints_ != nullptr && this->userId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline DeployModelScopeModelInputNasConfig& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<string> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<string>) };
    inline vector<string> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<string>) };
    inline DeployModelScopeModelInputNasConfig& setMountPoints(const vector<string> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline DeployModelScopeModelInputNasConfig& setMountPoints(vector<string> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int32_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0) };
    inline DeployModelScopeModelInputNasConfig& setUserId(int32_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int32_t> groupId_ = nullptr;
    std::shared_ptr<vector<string>> mountPoints_ = nullptr;
    std::shared_ptr<int32_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
