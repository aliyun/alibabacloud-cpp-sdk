// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALLCUSTOMIZEFLOWSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALLCUSTOMIZEFLOWSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeleteAllCustomizeFlowStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAllCustomizeFlowStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAllCustomizeFlowStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteAllCustomizeFlowStrategyRequest() = default ;
    DeleteAllCustomizeFlowStrategyRequest(const DeleteAllCustomizeFlowStrategyRequest &) = default ;
    DeleteAllCustomizeFlowStrategyRequest(DeleteAllCustomizeFlowStrategyRequest &&) = default ;
    DeleteAllCustomizeFlowStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAllCustomizeFlowStrategyRequest() = default ;
    DeleteAllCustomizeFlowStrategyRequest& operator=(const DeleteAllCustomizeFlowStrategyRequest &) = default ;
    DeleteAllCustomizeFlowStrategyRequest& operator=(DeleteAllCustomizeFlowStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->userId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAllCustomizeFlowStrategyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DeleteAllCustomizeFlowStrategyRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Region ID
    shared_ptr<string> regionId_ {};
    // User ID
    // 
    // This parameter is required.
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
