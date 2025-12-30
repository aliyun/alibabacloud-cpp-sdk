// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMAVAILABLEALERTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMAVAILABLEALERTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAvailableAlertGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAvailableAlertGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertGroups, alertGroups_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAvailableAlertGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertGroups, alertGroups_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCloudGtmAvailableAlertGroupsResponseBody() = default ;
    ListCloudGtmAvailableAlertGroupsResponseBody(const ListCloudGtmAvailableAlertGroupsResponseBody &) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBody(ListCloudGtmAvailableAlertGroupsResponseBody &&) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAvailableAlertGroupsResponseBody() = default ;
    ListCloudGtmAvailableAlertGroupsResponseBody& operator=(const ListCloudGtmAvailableAlertGroupsResponseBody &) = default ;
    ListCloudGtmAvailableAlertGroupsResponseBody& operator=(ListCloudGtmAvailableAlertGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      };
      friend void from_json(const Darabonba::Json& j, AlertGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      };
      AlertGroups() = default ;
      AlertGroups(const AlertGroups &) = default ;
      AlertGroups(AlertGroups &&) = default ;
      AlertGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertGroups() = default ;
      AlertGroups& operator=(const AlertGroups &) = default ;
      AlertGroups& operator=(AlertGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AlertGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertGroup& obj) { 
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        };
        friend void from_json(const Darabonba::Json& j, AlertGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        };
        AlertGroup() = default ;
        AlertGroup(const AlertGroup &) = default ;
        AlertGroup(AlertGroup &&) = default ;
        AlertGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertGroup() = default ;
        AlertGroup& operator=(const AlertGroup &) = default ;
        AlertGroup& operator=(AlertGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->groupName_ == nullptr; };
        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline AlertGroup& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      protected:
        // The name of the alert contact group.
        shared_ptr<string> groupName_ {};
      };

      virtual bool empty() const override { return this->alertGroup_ == nullptr; };
      // alertGroup Field Functions 
      bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
      void deleteAlertGroup() { this->alertGroup_ = nullptr;};
      inline const vector<AlertGroups::AlertGroup> & getAlertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, vector<AlertGroups::AlertGroup>) };
      inline vector<AlertGroups::AlertGroup> getAlertGroup() { DARABONBA_PTR_GET(alertGroup_, vector<AlertGroups::AlertGroup>) };
      inline AlertGroups& setAlertGroup(const vector<AlertGroups::AlertGroup> & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
      inline AlertGroups& setAlertGroup(vector<AlertGroups::AlertGroup> && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    protected:
      shared_ptr<vector<AlertGroups::AlertGroup>> alertGroup_ {};
    };

    virtual bool empty() const override { return this->alertGroups_ == nullptr
        && this->requestId_ == nullptr; };
    // alertGroups Field Functions 
    bool hasAlertGroups() const { return this->alertGroups_ != nullptr;};
    void deleteAlertGroups() { this->alertGroups_ = nullptr;};
    inline const ListCloudGtmAvailableAlertGroupsResponseBody::AlertGroups & getAlertGroups() const { DARABONBA_PTR_GET_CONST(alertGroups_, ListCloudGtmAvailableAlertGroupsResponseBody::AlertGroups) };
    inline ListCloudGtmAvailableAlertGroupsResponseBody::AlertGroups getAlertGroups() { DARABONBA_PTR_GET(alertGroups_, ListCloudGtmAvailableAlertGroupsResponseBody::AlertGroups) };
    inline ListCloudGtmAvailableAlertGroupsResponseBody& setAlertGroups(const ListCloudGtmAvailableAlertGroupsResponseBody::AlertGroups & alertGroups) { DARABONBA_PTR_SET_VALUE(alertGroups_, alertGroups) };
    inline ListCloudGtmAvailableAlertGroupsResponseBody& setAlertGroups(ListCloudGtmAvailableAlertGroupsResponseBody::AlertGroups && alertGroups) { DARABONBA_PTR_SET_RVALUE(alertGroups_, alertGroups) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloudGtmAvailableAlertGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert contact groups.
    shared_ptr<ListCloudGtmAvailableAlertGroupsResponseBody::AlertGroups> alertGroups_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
