// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListServiceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceGroupsList, serviceGroupsList_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceGroupsList, serviceGroupsList_);
    };
    ListServiceGroupsResponseBody() = default ;
    ListServiceGroupsResponseBody(const ListServiceGroupsResponseBody &) = default ;
    ListServiceGroupsResponseBody(ListServiceGroupsResponseBody &&) = default ;
    ListServiceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceGroupsResponseBody() = default ;
    ListServiceGroupsResponseBody& operator=(const ListServiceGroupsResponseBody &) = default ;
    ListServiceGroupsResponseBody& operator=(ListServiceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceGroupsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceGroupsList& obj) { 
        DARABONBA_PTR_TO_JSON(ListServiceGroups, listServiceGroups_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceGroupsList& obj) { 
        DARABONBA_PTR_FROM_JSON(ListServiceGroups, listServiceGroups_);
      };
      ServiceGroupsList() = default ;
      ServiceGroupsList(const ServiceGroupsList &) = default ;
      ServiceGroupsList(ServiceGroupsList &&) = default ;
      ServiceGroupsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceGroupsList() = default ;
      ServiceGroupsList& operator=(const ServiceGroupsList &) = default ;
      ServiceGroupsList& operator=(ServiceGroupsList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ListServiceGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ListServiceGroups& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        };
        friend void from_json(const Darabonba::Json& j, ListServiceGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        };
        ListServiceGroups() = default ;
        ListServiceGroups(const ListServiceGroups &) = default ;
        ListServiceGroups(ListServiceGroups &&) = default ;
        ListServiceGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ListServiceGroups() = default ;
        ListServiceGroups& operator=(const ListServiceGroups &) = default ;
        ListServiceGroups& operator=(ListServiceGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->groupId_ == nullptr && this->groupName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline ListServiceGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline ListServiceGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline ListServiceGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<string> groupId_ {};
        shared_ptr<string> groupName_ {};
      };

      virtual bool empty() const override { return this->listServiceGroups_ == nullptr; };
      // listServiceGroups Field Functions 
      bool hasListServiceGroups() const { return this->listServiceGroups_ != nullptr;};
      void deleteListServiceGroups() { this->listServiceGroups_ = nullptr;};
      inline const vector<ServiceGroupsList::ListServiceGroups> & getListServiceGroups() const { DARABONBA_PTR_GET_CONST(listServiceGroups_, vector<ServiceGroupsList::ListServiceGroups>) };
      inline vector<ServiceGroupsList::ListServiceGroups> getListServiceGroups() { DARABONBA_PTR_GET(listServiceGroups_, vector<ServiceGroupsList::ListServiceGroups>) };
      inline ServiceGroupsList& setListServiceGroups(const vector<ServiceGroupsList::ListServiceGroups> & listServiceGroups) { DARABONBA_PTR_SET_VALUE(listServiceGroups_, listServiceGroups) };
      inline ServiceGroupsList& setListServiceGroups(vector<ServiceGroupsList::ListServiceGroups> && listServiceGroups) { DARABONBA_PTR_SET_RVALUE(listServiceGroups_, listServiceGroups) };


    protected:
      shared_ptr<vector<ServiceGroupsList::ListServiceGroups>> listServiceGroups_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->serviceGroupsList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListServiceGroupsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListServiceGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceGroupsList Field Functions 
    bool hasServiceGroupsList() const { return this->serviceGroupsList_ != nullptr;};
    void deleteServiceGroupsList() { this->serviceGroupsList_ = nullptr;};
    inline const ListServiceGroupsResponseBody::ServiceGroupsList & getServiceGroupsList() const { DARABONBA_PTR_GET_CONST(serviceGroupsList_, ListServiceGroupsResponseBody::ServiceGroupsList) };
    inline ListServiceGroupsResponseBody::ServiceGroupsList getServiceGroupsList() { DARABONBA_PTR_GET(serviceGroupsList_, ListServiceGroupsResponseBody::ServiceGroupsList) };
    inline ListServiceGroupsResponseBody& setServiceGroupsList(const ListServiceGroupsResponseBody::ServiceGroupsList & serviceGroupsList) { DARABONBA_PTR_SET_VALUE(serviceGroupsList_, serviceGroupsList) };
    inline ListServiceGroupsResponseBody& setServiceGroupsList(ListServiceGroupsResponseBody::ServiceGroupsList && serviceGroupsList) { DARABONBA_PTR_SET_RVALUE(serviceGroupsList_, serviceGroupsList) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<ListServiceGroupsResponseBody::ServiceGroupsList> serviceGroupsList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
