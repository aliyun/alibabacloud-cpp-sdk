// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDYNAMICROUTERESPONSEBODYDYNAMICROUTE_HPP_
#define ALIBABACLOUD_MODELS_GETDYNAMICROUTERESPONSEBODYDYNAMICROUTE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetDynamicRouteResponseBodyDynamicRoute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDynamicRouteResponseBodyDynamicRoute& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DynamicRouteId, dynamicRouteId_);
      DARABONBA_PTR_TO_JSON(DynamicRouteType, dynamicRouteType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagIds, tagIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetDynamicRouteResponseBodyDynamicRoute& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DynamicRouteId, dynamicRouteId_);
      DARABONBA_PTR_FROM_JSON(DynamicRouteType, dynamicRouteType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagIds, tagIds_);
    };
    GetDynamicRouteResponseBodyDynamicRoute() = default ;
    GetDynamicRouteResponseBodyDynamicRoute(const GetDynamicRouteResponseBodyDynamicRoute &) = default ;
    GetDynamicRouteResponseBodyDynamicRoute(GetDynamicRouteResponseBodyDynamicRoute &&) = default ;
    GetDynamicRouteResponseBodyDynamicRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDynamicRouteResponseBodyDynamicRoute() = default ;
    GetDynamicRouteResponseBodyDynamicRoute& operator=(const GetDynamicRouteResponseBodyDynamicRoute &) = default ;
    GetDynamicRouteResponseBodyDynamicRoute& operator=(GetDynamicRouteResponseBodyDynamicRoute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationIds_ != nullptr
        && this->applicationType_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->dynamicRouteId_ != nullptr && this->dynamicRouteType_ != nullptr
        && this->name_ != nullptr && this->nextHop_ != nullptr && this->priority_ != nullptr && this->regionIds_ != nullptr && this->status_ != nullptr
        && this->tagIds_ != nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & applicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> applicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline GetDynamicRouteResponseBodyDynamicRoute& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline GetDynamicRouteResponseBodyDynamicRoute& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline GetDynamicRouteResponseBodyDynamicRoute& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetDynamicRouteResponseBodyDynamicRoute& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDynamicRouteResponseBodyDynamicRoute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dynamicRouteId Field Functions 
    bool hasDynamicRouteId() const { return this->dynamicRouteId_ != nullptr;};
    void deleteDynamicRouteId() { this->dynamicRouteId_ = nullptr;};
    inline string dynamicRouteId() const { DARABONBA_PTR_GET_DEFAULT(dynamicRouteId_, "") };
    inline GetDynamicRouteResponseBodyDynamicRoute& setDynamicRouteId(string dynamicRouteId) { DARABONBA_PTR_SET_VALUE(dynamicRouteId_, dynamicRouteId) };


    // dynamicRouteType Field Functions 
    bool hasDynamicRouteType() const { return this->dynamicRouteType_ != nullptr;};
    void deleteDynamicRouteType() { this->dynamicRouteType_ = nullptr;};
    inline string dynamicRouteType() const { DARABONBA_PTR_GET_DEFAULT(dynamicRouteType_, "") };
    inline GetDynamicRouteResponseBodyDynamicRoute& setDynamicRouteType(string dynamicRouteType) { DARABONBA_PTR_SET_VALUE(dynamicRouteType_, dynamicRouteType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDynamicRouteResponseBodyDynamicRoute& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline GetDynamicRouteResponseBodyDynamicRoute& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetDynamicRouteResponseBodyDynamicRoute& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & regionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> regionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline GetDynamicRouteResponseBodyDynamicRoute& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline GetDynamicRouteResponseBodyDynamicRoute& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDynamicRouteResponseBodyDynamicRoute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagIds Field Functions 
    bool hasTagIds() const { return this->tagIds_ != nullptr;};
    void deleteTagIds() { this->tagIds_ = nullptr;};
    inline const vector<string> & tagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
    inline vector<string> tagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
    inline GetDynamicRouteResponseBodyDynamicRoute& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
    inline GetDynamicRouteResponseBodyDynamicRoute& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


  protected:
    std::shared_ptr<vector<string>> applicationIds_ = nullptr;
    std::shared_ptr<string> applicationType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> dynamicRouteId_ = nullptr;
    std::shared_ptr<string> dynamicRouteType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nextHop_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<vector<string>> regionIds_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> tagIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
