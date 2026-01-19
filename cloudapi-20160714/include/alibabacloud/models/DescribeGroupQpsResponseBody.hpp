// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPQPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPQPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeGroupQpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupQpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GroupQps, groupQps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupQpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupQps, groupQps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupQpsResponseBody() = default ;
    DescribeGroupQpsResponseBody(const DescribeGroupQpsResponseBody &) = default ;
    DescribeGroupQpsResponseBody(DescribeGroupQpsResponseBody &&) = default ;
    DescribeGroupQpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupQpsResponseBody() = default ;
    DescribeGroupQpsResponseBody& operator=(const DescribeGroupQpsResponseBody &) = default ;
    DescribeGroupQpsResponseBody& operator=(DescribeGroupQpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupQps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupQps& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItem, monitorItem_);
      };
      friend void from_json(const Darabonba::Json& j, GroupQps& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItem, monitorItem_);
      };
      GroupQps() = default ;
      GroupQps(const GroupQps &) = default ;
      GroupQps(GroupQps &&) = default ;
      GroupQps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupQps() = default ;
      GroupQps& operator=(const GroupQps &) = default ;
      GroupQps& operator=(GroupQps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MonitorItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonitorItem& obj) { 
          DARABONBA_PTR_TO_JSON(ItemTime, itemTime_);
          DARABONBA_PTR_TO_JSON(ItemValue, itemValue_);
        };
        friend void from_json(const Darabonba::Json& j, MonitorItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ItemTime, itemTime_);
          DARABONBA_PTR_FROM_JSON(ItemValue, itemValue_);
        };
        MonitorItem() = default ;
        MonitorItem(const MonitorItem &) = default ;
        MonitorItem(MonitorItem &&) = default ;
        MonitorItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MonitorItem() = default ;
        MonitorItem& operator=(const MonitorItem &) = default ;
        MonitorItem& operator=(MonitorItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->itemTime_ == nullptr
        && this->itemValue_ == nullptr; };
        // itemTime Field Functions 
        bool hasItemTime() const { return this->itemTime_ != nullptr;};
        void deleteItemTime() { this->itemTime_ = nullptr;};
        inline string getItemTime() const { DARABONBA_PTR_GET_DEFAULT(itemTime_, "") };
        inline MonitorItem& setItemTime(string itemTime) { DARABONBA_PTR_SET_VALUE(itemTime_, itemTime) };


        // itemValue Field Functions 
        bool hasItemValue() const { return this->itemValue_ != nullptr;};
        void deleteItemValue() { this->itemValue_ = nullptr;};
        inline string getItemValue() const { DARABONBA_PTR_GET_DEFAULT(itemValue_, "") };
        inline MonitorItem& setItemValue(string itemValue) { DARABONBA_PTR_SET_VALUE(itemValue_, itemValue) };


      protected:
        // The point in time.
        shared_ptr<string> itemTime_ {};
        // The number of requests at the specified point in time.
        shared_ptr<string> itemValue_ {};
      };

      virtual bool empty() const override { return this->monitorItem_ == nullptr; };
      // monitorItem Field Functions 
      bool hasMonitorItem() const { return this->monitorItem_ != nullptr;};
      void deleteMonitorItem() { this->monitorItem_ = nullptr;};
      inline const vector<GroupQps::MonitorItem> & getMonitorItem() const { DARABONBA_PTR_GET_CONST(monitorItem_, vector<GroupQps::MonitorItem>) };
      inline vector<GroupQps::MonitorItem> getMonitorItem() { DARABONBA_PTR_GET(monitorItem_, vector<GroupQps::MonitorItem>) };
      inline GroupQps& setMonitorItem(const vector<GroupQps::MonitorItem> & monitorItem) { DARABONBA_PTR_SET_VALUE(monitorItem_, monitorItem) };
      inline GroupQps& setMonitorItem(vector<GroupQps::MonitorItem> && monitorItem) { DARABONBA_PTR_SET_RVALUE(monitorItem_, monitorItem) };


    protected:
      shared_ptr<vector<GroupQps::MonitorItem>> monitorItem_ {};
    };

    virtual bool empty() const override { return this->groupQps_ == nullptr
        && this->requestId_ == nullptr; };
    // groupQps Field Functions 
    bool hasGroupQps() const { return this->groupQps_ != nullptr;};
    void deleteGroupQps() { this->groupQps_ = nullptr;};
    inline const DescribeGroupQpsResponseBody::GroupQps & getGroupQps() const { DARABONBA_PTR_GET_CONST(groupQps_, DescribeGroupQpsResponseBody::GroupQps) };
    inline DescribeGroupQpsResponseBody::GroupQps getGroupQps() { DARABONBA_PTR_GET(groupQps_, DescribeGroupQpsResponseBody::GroupQps) };
    inline DescribeGroupQpsResponseBody& setGroupQps(const DescribeGroupQpsResponseBody::GroupQps & groupQps) { DARABONBA_PTR_SET_VALUE(groupQps_, groupQps) };
    inline DescribeGroupQpsResponseBody& setGroupQps(DescribeGroupQpsResponseBody::GroupQps && groupQps) { DARABONBA_PTR_SET_RVALUE(groupQps_, groupQps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupQpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of requests directed to the API group.
    shared_ptr<DescribeGroupQpsResponseBody::GroupQps> groupQps_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
