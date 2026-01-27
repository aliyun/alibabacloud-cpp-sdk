// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICROUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICROUTESRESPONSEBODY_HPP_
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
  class ListDynamicRoutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicRoutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicRoutes, dynamicRoutes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicRoutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicRoutes, dynamicRoutes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListDynamicRoutesResponseBody() = default ;
    ListDynamicRoutesResponseBody(const ListDynamicRoutesResponseBody &) = default ;
    ListDynamicRoutesResponseBody(ListDynamicRoutesResponseBody &&) = default ;
    ListDynamicRoutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicRoutesResponseBody() = default ;
    ListDynamicRoutesResponseBody& operator=(const ListDynamicRoutesResponseBody &) = default ;
    ListDynamicRoutesResponseBody& operator=(ListDynamicRoutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DynamicRoutes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DynamicRoutes& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DynamicRoutes& obj) { 
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
      DynamicRoutes() = default ;
      DynamicRoutes(const DynamicRoutes &) = default ;
      DynamicRoutes(DynamicRoutes &&) = default ;
      DynamicRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DynamicRoutes() = default ;
      DynamicRoutes& operator=(const DynamicRoutes &) = default ;
      DynamicRoutes& operator=(DynamicRoutes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationIds_ == nullptr
        && this->applicationType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->dynamicRouteId_ == nullptr && this->dynamicRouteType_ == nullptr
        && this->name_ == nullptr && this->nextHop_ == nullptr && this->priority_ == nullptr && this->regionIds_ == nullptr && this->status_ == nullptr
        && this->tagIds_ == nullptr; };
      // applicationIds Field Functions 
      bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
      void deleteApplicationIds() { this->applicationIds_ = nullptr;};
      inline const vector<string> & getApplicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
      inline vector<string> getApplicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
      inline DynamicRoutes& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
      inline DynamicRoutes& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


      // applicationType Field Functions 
      bool hasApplicationType() const { return this->applicationType_ != nullptr;};
      void deleteApplicationType() { this->applicationType_ = nullptr;};
      inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
      inline DynamicRoutes& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline DynamicRoutes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DynamicRoutes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dynamicRouteId Field Functions 
      bool hasDynamicRouteId() const { return this->dynamicRouteId_ != nullptr;};
      void deleteDynamicRouteId() { this->dynamicRouteId_ = nullptr;};
      inline string getDynamicRouteId() const { DARABONBA_PTR_GET_DEFAULT(dynamicRouteId_, "") };
      inline DynamicRoutes& setDynamicRouteId(string dynamicRouteId) { DARABONBA_PTR_SET_VALUE(dynamicRouteId_, dynamicRouteId) };


      // dynamicRouteType Field Functions 
      bool hasDynamicRouteType() const { return this->dynamicRouteType_ != nullptr;};
      void deleteDynamicRouteType() { this->dynamicRouteType_ = nullptr;};
      inline string getDynamicRouteType() const { DARABONBA_PTR_GET_DEFAULT(dynamicRouteType_, "") };
      inline DynamicRoutes& setDynamicRouteType(string dynamicRouteType) { DARABONBA_PTR_SET_VALUE(dynamicRouteType_, dynamicRouteType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DynamicRoutes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nextHop Field Functions 
      bool hasNextHop() const { return this->nextHop_ != nullptr;};
      void deleteNextHop() { this->nextHop_ = nullptr;};
      inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
      inline DynamicRoutes& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline DynamicRoutes& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // regionIds Field Functions 
      bool hasRegionIds() const { return this->regionIds_ != nullptr;};
      void deleteRegionIds() { this->regionIds_ = nullptr;};
      inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
      inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
      inline DynamicRoutes& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
      inline DynamicRoutes& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DynamicRoutes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tagIds Field Functions 
      bool hasTagIds() const { return this->tagIds_ != nullptr;};
      void deleteTagIds() { this->tagIds_ = nullptr;};
      inline const vector<string> & getTagIds() const { DARABONBA_PTR_GET_CONST(tagIds_, vector<string>) };
      inline vector<string> getTagIds() { DARABONBA_PTR_GET(tagIds_, vector<string>) };
      inline DynamicRoutes& setTagIds(const vector<string> & tagIds) { DARABONBA_PTR_SET_VALUE(tagIds_, tagIds) };
      inline DynamicRoutes& setTagIds(vector<string> && tagIds) { DARABONBA_PTR_SET_RVALUE(tagIds_, tagIds) };


    protected:
      shared_ptr<vector<string>> applicationIds_ {};
      shared_ptr<string> applicationType_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> dynamicRouteId_ {};
      shared_ptr<string> dynamicRouteType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nextHop_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<vector<string>> regionIds_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<string>> tagIds_ {};
    };

    virtual bool empty() const override { return this->dynamicRoutes_ == nullptr
        && this->requestId_ == nullptr && this->totalNum_ == nullptr; };
    // dynamicRoutes Field Functions 
    bool hasDynamicRoutes() const { return this->dynamicRoutes_ != nullptr;};
    void deleteDynamicRoutes() { this->dynamicRoutes_ = nullptr;};
    inline const vector<ListDynamicRoutesResponseBody::DynamicRoutes> & getDynamicRoutes() const { DARABONBA_PTR_GET_CONST(dynamicRoutes_, vector<ListDynamicRoutesResponseBody::DynamicRoutes>) };
    inline vector<ListDynamicRoutesResponseBody::DynamicRoutes> getDynamicRoutes() { DARABONBA_PTR_GET(dynamicRoutes_, vector<ListDynamicRoutesResponseBody::DynamicRoutes>) };
    inline ListDynamicRoutesResponseBody& setDynamicRoutes(const vector<ListDynamicRoutesResponseBody::DynamicRoutes> & dynamicRoutes) { DARABONBA_PTR_SET_VALUE(dynamicRoutes_, dynamicRoutes) };
    inline ListDynamicRoutesResponseBody& setDynamicRoutes(vector<ListDynamicRoutesResponseBody::DynamicRoutes> && dynamicRoutes) { DARABONBA_PTR_SET_RVALUE(dynamicRoutes_, dynamicRoutes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDynamicRoutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListDynamicRoutesResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    shared_ptr<vector<ListDynamicRoutesResponseBody::DynamicRoutes>> dynamicRoutes_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalNum_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
