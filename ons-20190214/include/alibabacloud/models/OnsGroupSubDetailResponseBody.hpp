// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSGROUPSUBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSGROUPSUBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsGroupSubDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsGroupSubDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsGroupSubDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsGroupSubDetailResponseBody() = default ;
    OnsGroupSubDetailResponseBody(const OnsGroupSubDetailResponseBody &) = default ;
    OnsGroupSubDetailResponseBody(OnsGroupSubDetailResponseBody &&) = default ;
    OnsGroupSubDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsGroupSubDetailResponseBody() = default ;
    OnsGroupSubDetailResponseBody& operator=(const OnsGroupSubDetailResponseBody &) = default ;
    OnsGroupSubDetailResponseBody& operator=(OnsGroupSubDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(MessageModel, messageModel_);
        DARABONBA_PTR_TO_JSON(Online, online_);
        DARABONBA_PTR_TO_JSON(SubscriptionDataList, subscriptionDataList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(MessageModel, messageModel_);
        DARABONBA_PTR_FROM_JSON(Online, online_);
        DARABONBA_PTR_FROM_JSON(SubscriptionDataList, subscriptionDataList_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubscriptionDataList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubscriptionDataList& obj) { 
          DARABONBA_PTR_TO_JSON(SubscriptionDataList, subscriptionDataList_);
        };
        friend void from_json(const Darabonba::Json& j, SubscriptionDataList& obj) { 
          DARABONBA_PTR_FROM_JSON(SubscriptionDataList, subscriptionDataList_);
        };
        SubscriptionDataList() = default ;
        SubscriptionDataList(const SubscriptionDataList &) = default ;
        SubscriptionDataList(SubscriptionDataList &&) = default ;
        SubscriptionDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubscriptionDataList() = default ;
        SubscriptionDataList& operator=(const SubscriptionDataList &) = default ;
        SubscriptionDataList& operator=(SubscriptionDataList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SubscriptionDataListItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubscriptionDataListItem& obj) { 
            DARABONBA_PTR_TO_JSON(SubString, subString_);
            DARABONBA_PTR_TO_JSON(Topic, topic_);
          };
          friend void from_json(const Darabonba::Json& j, SubscriptionDataListItem& obj) { 
            DARABONBA_PTR_FROM_JSON(SubString, subString_);
            DARABONBA_PTR_FROM_JSON(Topic, topic_);
          };
          SubscriptionDataListItem() = default ;
          SubscriptionDataListItem(const SubscriptionDataListItem &) = default ;
          SubscriptionDataListItem(SubscriptionDataListItem &&) = default ;
          SubscriptionDataListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubscriptionDataListItem() = default ;
          SubscriptionDataListItem& operator=(const SubscriptionDataListItem &) = default ;
          SubscriptionDataListItem& operator=(SubscriptionDataListItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->subString_ == nullptr
        && this->topic_ == nullptr; };
          // subString Field Functions 
          bool hasSubString() const { return this->subString_ != nullptr;};
          void deleteSubString() { this->subString_ = nullptr;};
          inline string getSubString() const { DARABONBA_PTR_GET_DEFAULT(subString_, "") };
          inline SubscriptionDataListItem& setSubString(string subString) { DARABONBA_PTR_SET_VALUE(subString_, subString) };


          // topic Field Functions 
          bool hasTopic() const { return this->topic_ != nullptr;};
          void deleteTopic() { this->topic_ = nullptr;};
          inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
          inline SubscriptionDataListItem& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        protected:
          shared_ptr<string> subString_ {};
          shared_ptr<string> topic_ {};
        };

        virtual bool empty() const override { return this->subscriptionDataList_ == nullptr; };
        // subscriptionDataList Field Functions 
        bool hasSubscriptionDataList() const { return this->subscriptionDataList_ != nullptr;};
        void deleteSubscriptionDataList() { this->subscriptionDataList_ = nullptr;};
        inline const vector<SubscriptionDataList::SubscriptionDataListItem> & getSubscriptionDataList() const { DARABONBA_PTR_GET_CONST(subscriptionDataList_, vector<SubscriptionDataList::SubscriptionDataListItem>) };
        inline vector<SubscriptionDataList::SubscriptionDataListItem> getSubscriptionDataList() { DARABONBA_PTR_GET(subscriptionDataList_, vector<SubscriptionDataList::SubscriptionDataListItem>) };
        inline SubscriptionDataList& setSubscriptionDataList(const vector<SubscriptionDataList::SubscriptionDataListItem> & subscriptionDataList) { DARABONBA_PTR_SET_VALUE(subscriptionDataList_, subscriptionDataList) };
        inline SubscriptionDataList& setSubscriptionDataList(vector<SubscriptionDataList::SubscriptionDataListItem> && subscriptionDataList) { DARABONBA_PTR_SET_RVALUE(subscriptionDataList_, subscriptionDataList) };


      protected:
        shared_ptr<vector<SubscriptionDataList::SubscriptionDataListItem>> subscriptionDataList_ {};
      };

      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->messageModel_ == nullptr && this->online_ == nullptr && this->subscriptionDataList_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Data& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // messageModel Field Functions 
      bool hasMessageModel() const { return this->messageModel_ != nullptr;};
      void deleteMessageModel() { this->messageModel_ = nullptr;};
      inline string getMessageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
      inline Data& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
      inline Data& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // subscriptionDataList Field Functions 
      bool hasSubscriptionDataList() const { return this->subscriptionDataList_ != nullptr;};
      void deleteSubscriptionDataList() { this->subscriptionDataList_ = nullptr;};
      inline const Data::SubscriptionDataList & getSubscriptionDataList() const { DARABONBA_PTR_GET_CONST(subscriptionDataList_, Data::SubscriptionDataList) };
      inline Data::SubscriptionDataList getSubscriptionDataList() { DARABONBA_PTR_GET(subscriptionDataList_, Data::SubscriptionDataList) };
      inline Data& setSubscriptionDataList(const Data::SubscriptionDataList & subscriptionDataList) { DARABONBA_PTR_SET_VALUE(subscriptionDataList_, subscriptionDataList) };
      inline Data& setSubscriptionDataList(Data::SubscriptionDataList && subscriptionDataList) { DARABONBA_PTR_SET_RVALUE(subscriptionDataList_, subscriptionDataList) };


    protected:
      // The ID of the consumer group that you want to query.
      shared_ptr<string> groupId_ {};
      // The consumption mode. Valid values:
      // 
      // *   **CLUSTERING**: the clustering consumption mode
      // *   **BROADCASTING**: the broadcasting consumption mode
      // 
      // For more information about consumption modes, see [Clustering consumption and broadcasting consumption](https://help.aliyun.com/document_detail/43163.html).
      shared_ptr<string> messageModel_ {};
      // Indicates whether consumers in the group are online.
      shared_ptr<bool> online_ {};
      shared_ptr<Data::SubscriptionDataList> subscriptionDataList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsGroupSubDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsGroupSubDetailResponseBody::Data) };
    inline OnsGroupSubDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsGroupSubDetailResponseBody::Data) };
    inline OnsGroupSubDetailResponseBody& setData(const OnsGroupSubDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsGroupSubDetailResponseBody& setData(OnsGroupSubDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsGroupSubDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<OnsGroupSubDetailResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
