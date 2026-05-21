// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDLEADERINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDLEADERINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class BindLeaderInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindLeaderInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(leaderInstanceId, leaderInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, BindLeaderInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(leaderInstanceId, leaderInstanceId_);
    };
    BindLeaderInstanceRequest() = default ;
    BindLeaderInstanceRequest(const BindLeaderInstanceRequest &) = default ;
    BindLeaderInstanceRequest(BindLeaderInstanceRequest &&) = default ;
    BindLeaderInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindLeaderInstanceRequest() = default ;
    BindLeaderInstanceRequest& operator=(const BindLeaderInstanceRequest &) = default ;
    BindLeaderInstanceRequest& operator=(BindLeaderInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->leaderInstanceId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BindLeaderInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // leaderInstanceId Field Functions 
    bool hasLeaderInstanceId() const { return this->leaderInstanceId_ != nullptr;};
    void deleteLeaderInstanceId() { this->leaderInstanceId_ = nullptr;};
    inline string getLeaderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(leaderInstanceId_, "") };
    inline BindLeaderInstanceRequest& setLeaderInstanceId(string leaderInstanceId) { DARABONBA_PTR_SET_VALUE(leaderInstanceId_, leaderInstanceId) };


  protected:
    shared_ptr<string> regionId_ {};
    shared_ptr<string> leaderInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
