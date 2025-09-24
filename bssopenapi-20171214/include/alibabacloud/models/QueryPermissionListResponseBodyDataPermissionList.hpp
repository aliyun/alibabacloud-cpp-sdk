// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPERMISSIONLISTRESPONSEBODYDATAPERMISSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPERMISSIONLISTRESPONSEBODYDATAPERMISSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryPermissionListResponseBodyDataPermissionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPermissionListResponseBodyDataPermissionList& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PermissionCode, permissionCode_);
      DARABONBA_PTR_TO_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPermissionListResponseBodyDataPermissionList& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PermissionCode, permissionCode_);
      DARABONBA_PTR_FROM_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryPermissionListResponseBodyDataPermissionList() = default ;
    QueryPermissionListResponseBodyDataPermissionList(const QueryPermissionListResponseBodyDataPermissionList &) = default ;
    QueryPermissionListResponseBodyDataPermissionList(QueryPermissionListResponseBodyDataPermissionList &&) = default ;
    QueryPermissionListResponseBodyDataPermissionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPermissionListResponseBodyDataPermissionList() = default ;
    QueryPermissionListResponseBodyDataPermissionList& operator=(const QueryPermissionListResponseBodyDataPermissionList &) = default ;
    QueryPermissionListResponseBodyDataPermissionList& operator=(QueryPermissionListResponseBodyDataPermissionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->permissionCode_ != nullptr && this->permissionName_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryPermissionListResponseBodyDataPermissionList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // permissionCode Field Functions 
    bool hasPermissionCode() const { return this->permissionCode_ != nullptr;};
    void deletePermissionCode() { this->permissionCode_ = nullptr;};
    inline string permissionCode() const { DARABONBA_PTR_GET_DEFAULT(permissionCode_, "") };
    inline QueryPermissionListResponseBodyDataPermissionList& setPermissionCode(string permissionCode) { DARABONBA_PTR_SET_VALUE(permissionCode_, permissionCode) };


    // permissionName Field Functions 
    bool hasPermissionName() const { return this->permissionName_ != nullptr;};
    void deletePermissionName() { this->permissionName_ = nullptr;};
    inline string permissionName() const { DARABONBA_PTR_GET_DEFAULT(permissionName_, "") };
    inline QueryPermissionListResponseBodyDataPermissionList& setPermissionName(string permissionName) { DARABONBA_PTR_SET_VALUE(permissionName_, permissionName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryPermissionListResponseBodyDataPermissionList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time when the permission expired. If no value is returned, the permission is still valid. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. For example, 2016-05-23T12:00:00Z indicates that the permission expired at 20:00:00 on May 23, 2016 (UTC+8).
    std::shared_ptr<string> endTime_ = nullptr;
    // The code of the permission.
    std::shared_ptr<string> permissionCode_ = nullptr;
    // The name of the permission.
    std::shared_ptr<string> permissionName_ = nullptr;
    // The time when the permission took effect. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC. For example, 2016-05-23T12:00:00Z indicates that the permission took effect at 20:00:00 on May 23, 2016 (UTC+8).
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
