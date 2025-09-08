// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPRODSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPRODSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAllProdsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllProdsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllProdsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    ListAllProdsRequest() = default ;
    ListAllProdsRequest(const ListAllProdsRequest &) = default ;
    ListAllProdsRequest(ListAllProdsRequest &&) = default ;
    ListAllProdsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllProdsRequest() = default ;
    ListAllProdsRequest& operator=(const ListAllProdsRequest &) = default ;
    ListAllProdsRequest& operator=(ListAllProdsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->roleFor_ != nullptr && this->roleType_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAllProdsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListAllProdsRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline ListAllProdsRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The region in which the data management center of the threat analysis feature resides. Specify this parameter based on the regions in which your assets reside. Valid values:
    // 
    // *   cn-hangzhou: Your assets reside in regions in China.
    // *   ap-southeast-1: Your assets reside in regions outside China.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the account that you switch from the management account.
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    // The type of the view. Valid values:
    // 
    // - 0: the current Alibaba Cloud account
    // - 1: the global account
    std::shared_ptr<int32_t> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
