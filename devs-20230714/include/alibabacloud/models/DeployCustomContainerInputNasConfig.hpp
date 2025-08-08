// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTNASCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYCUSTOMCONTAINERINPUTNASCONFIG_HPP_
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
  class DeployCustomContainerInputNasConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployCustomContainerInputNasConfig& obj) { 
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployCustomContainerInputNasConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    DeployCustomContainerInputNasConfig() = default ;
    DeployCustomContainerInputNasConfig(const DeployCustomContainerInputNasConfig &) = default ;
    DeployCustomContainerInputNasConfig(DeployCustomContainerInputNasConfig &&) = default ;
    DeployCustomContainerInputNasConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployCustomContainerInputNasConfig() = default ;
    DeployCustomContainerInputNasConfig& operator=(const DeployCustomContainerInputNasConfig &) = default ;
    DeployCustomContainerInputNasConfig& operator=(DeployCustomContainerInputNasConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->mountPoints_ != nullptr && this->userId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DeployCustomContainerInputNasConfig& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // mountPoints Field Functions 
    bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
    void deleteMountPoints() { this->mountPoints_ = nullptr;};
    inline const vector<string> & mountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<string>) };
    inline vector<string> mountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<string>) };
    inline DeployCustomContainerInputNasConfig& setMountPoints(const vector<string> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
    inline DeployCustomContainerInputNasConfig& setMountPoints(vector<string> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DeployCustomContainerInputNasConfig& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<vector<string>> mountPoints_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
