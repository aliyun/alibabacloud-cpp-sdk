// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLDPSCOMPUTEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLDPSCOMPUTEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class ListLdpsComputeGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLdpsComputeGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(GroupList, groupList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLdpsComputeGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(GroupList, groupList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLdpsComputeGroupsResponseBody() = default ;
    ListLdpsComputeGroupsResponseBody(const ListLdpsComputeGroupsResponseBody &) = default ;
    ListLdpsComputeGroupsResponseBody(ListLdpsComputeGroupsResponseBody &&) = default ;
    ListLdpsComputeGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLdpsComputeGroupsResponseBody() = default ;
    ListLdpsComputeGroupsResponseBody& operator=(const ListLdpsComputeGroupsResponseBody &) = default ;
    ListLdpsComputeGroupsResponseBody& operator=(ListLdpsComputeGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupList& obj) { 
        DARABONBA_PTR_TO_JSON(ExceptionInfo, exceptionInfo_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
        DARABONBA_ANY_TO_JSON(Properties, properties_);
        DARABONBA_PTR_TO_JSON(RayInteractiveAccessAddr, rayInteractiveAccessAddr_);
        DARABONBA_PTR_TO_JSON(RayVpcWebUIAddr, rayVpcWebUIAddr_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(WebUI, webUI_);
      };
      friend void from_json(const Darabonba::Json& j, GroupList& obj) { 
        DARABONBA_PTR_FROM_JSON(ExceptionInfo, exceptionInfo_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
        DARABONBA_ANY_FROM_JSON(Properties, properties_);
        DARABONBA_PTR_FROM_JSON(RayInteractiveAccessAddr, rayInteractiveAccessAddr_);
        DARABONBA_PTR_FROM_JSON(RayVpcWebUIAddr, rayVpcWebUIAddr_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(WebUI, webUI_);
      };
      GroupList() = default ;
      GroupList(const GroupList &) = default ;
      GroupList(GroupList &&) = default ;
      GroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupList() = default ;
      GroupList& operator=(const GroupList &) = default ;
      GroupList& operator=(GroupList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->exceptionInfo_ == nullptr
        && this->groupName_ == nullptr && this->isDefault_ == nullptr && this->properties_ == nullptr && this->rayInteractiveAccessAddr_ == nullptr && this->rayVpcWebUIAddr_ == nullptr
        && this->state_ == nullptr && this->webUI_ == nullptr; };
      // exceptionInfo Field Functions 
      bool hasExceptionInfo() const { return this->exceptionInfo_ != nullptr;};
      void deleteExceptionInfo() { this->exceptionInfo_ = nullptr;};
      inline string getExceptionInfo() const { DARABONBA_PTR_GET_DEFAULT(exceptionInfo_, "") };
      inline GroupList& setExceptionInfo(string exceptionInfo) { DARABONBA_PTR_SET_VALUE(exceptionInfo_, exceptionInfo) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline GroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline GroupList& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline       const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
      Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
      inline GroupList& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
      inline GroupList& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


      // rayInteractiveAccessAddr Field Functions 
      bool hasRayInteractiveAccessAddr() const { return this->rayInteractiveAccessAddr_ != nullptr;};
      void deleteRayInteractiveAccessAddr() { this->rayInteractiveAccessAddr_ = nullptr;};
      inline string getRayInteractiveAccessAddr() const { DARABONBA_PTR_GET_DEFAULT(rayInteractiveAccessAddr_, "") };
      inline GroupList& setRayInteractiveAccessAddr(string rayInteractiveAccessAddr) { DARABONBA_PTR_SET_VALUE(rayInteractiveAccessAddr_, rayInteractiveAccessAddr) };


      // rayVpcWebUIAddr Field Functions 
      bool hasRayVpcWebUIAddr() const { return this->rayVpcWebUIAddr_ != nullptr;};
      void deleteRayVpcWebUIAddr() { this->rayVpcWebUIAddr_ = nullptr;};
      inline string getRayVpcWebUIAddr() const { DARABONBA_PTR_GET_DEFAULT(rayVpcWebUIAddr_, "") };
      inline GroupList& setRayVpcWebUIAddr(string rayVpcWebUIAddr) { DARABONBA_PTR_SET_VALUE(rayVpcWebUIAddr_, rayVpcWebUIAddr) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline GroupList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // webUI Field Functions 
      bool hasWebUI() const { return this->webUI_ != nullptr;};
      void deleteWebUI() { this->webUI_ = nullptr;};
      inline string getWebUI() const { DARABONBA_PTR_GET_DEFAULT(webUI_, "") };
      inline GroupList& setWebUI(string webUI) { DARABONBA_PTR_SET_VALUE(webUI_, webUI) };


    protected:
      shared_ptr<string> exceptionInfo_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<bool> isDefault_ {};
      Darabonba::Json properties_ {};
      shared_ptr<string> rayInteractiveAccessAddr_ {};
      shared_ptr<string> rayVpcWebUIAddr_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> webUI_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->groupList_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListLdpsComputeGroupsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // groupList Field Functions 
    bool hasGroupList() const { return this->groupList_ != nullptr;};
    void deleteGroupList() { this->groupList_ = nullptr;};
    inline const vector<ListLdpsComputeGroupsResponseBody::GroupList> & getGroupList() const { DARABONBA_PTR_GET_CONST(groupList_, vector<ListLdpsComputeGroupsResponseBody::GroupList>) };
    inline vector<ListLdpsComputeGroupsResponseBody::GroupList> getGroupList() { DARABONBA_PTR_GET(groupList_, vector<ListLdpsComputeGroupsResponseBody::GroupList>) };
    inline ListLdpsComputeGroupsResponseBody& setGroupList(const vector<ListLdpsComputeGroupsResponseBody::GroupList> & groupList) { DARABONBA_PTR_SET_VALUE(groupList_, groupList) };
    inline ListLdpsComputeGroupsResponseBody& setGroupList(vector<ListLdpsComputeGroupsResponseBody::GroupList> && groupList) { DARABONBA_PTR_SET_RVALUE(groupList_, groupList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLdpsComputeGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<ListLdpsComputeGroupsResponseBody::GroupList>> groupList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
