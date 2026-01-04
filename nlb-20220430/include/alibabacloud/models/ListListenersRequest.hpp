// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListListenersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListenerIds, listenerIds_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListenerIds, listenerIds_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListListenersRequest() = default ;
    ListListenersRequest(const ListListenersRequest &) = default ;
    ListListenersRequest(ListListenersRequest &&) = default ;
    ListListenersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersRequest() = default ;
    ListListenersRequest& operator=(const ListListenersRequest &) = default ;
    ListListenersRequest& operator=(ListListenersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag. You can specify up to 20 tags. The tag key cannot be an empty string.
      // 
      // It can be up to 64 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of the tag. You can specify up to 20 tags. The tag value can be an empty string.
      // 
      // It can be up to 128 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->listenerIds_ == nullptr
        && this->listenerProtocol_ == nullptr && this->loadBalancerIds_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr
        && this->secSensorEnabled_ == nullptr && this->tag_ == nullptr; };
    // listenerIds Field Functions 
    bool hasListenerIds() const { return this->listenerIds_ != nullptr;};
    void deleteListenerIds() { this->listenerIds_ = nullptr;};
    inline const vector<string> & getListenerIds() const { DARABONBA_PTR_GET_CONST(listenerIds_, vector<string>) };
    inline vector<string> getListenerIds() { DARABONBA_PTR_GET(listenerIds_, vector<string>) };
    inline ListListenersRequest& setListenerIds(const vector<string> & listenerIds) { DARABONBA_PTR_SET_VALUE(listenerIds_, listenerIds) };
    inline ListListenersRequest& setListenerIds(vector<string> && listenerIds) { DARABONBA_PTR_SET_RVALUE(listenerIds_, listenerIds) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline ListListenersRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const vector<string> & getLoadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, vector<string>) };
    inline vector<string> getLoadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, vector<string>) };
    inline ListListenersRequest& setLoadBalancerIds(const vector<string> & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline ListListenersRequest& setLoadBalancerIds(vector<string> && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListListenersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListListenersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListListenersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secSensorEnabled Field Functions 
    bool hasSecSensorEnabled() const { return this->secSensorEnabled_ != nullptr;};
    void deleteSecSensorEnabled() { this->secSensorEnabled_ = nullptr;};
    inline string getSecSensorEnabled() const { DARABONBA_PTR_GET_DEFAULT(secSensorEnabled_, "") };
    inline ListListenersRequest& setSecSensorEnabled(string secSensorEnabled) { DARABONBA_PTR_SET_VALUE(secSensorEnabled_, secSensorEnabled) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListListenersRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListListenersRequest::Tag>) };
    inline vector<ListListenersRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListListenersRequest::Tag>) };
    inline ListListenersRequest& setTag(const vector<ListListenersRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListListenersRequest& setTag(vector<ListListenersRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The listener IDs. You can specify up to 20 listeners.
    shared_ptr<vector<string>> listenerIds_ {};
    // The listener protocol. Valid values: **TCP**, **UDP**, and **TCPSSL**.
    shared_ptr<string> listenerProtocol_ {};
    // The IDs of the NLB instances. You can specify up to 20 instances.
    shared_ptr<vector<string>> loadBalancerIds_ {};
    // The number of entries to return in each call. Valid values: **1** to **100**. Default value: **20**
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token used to specify a particular page of results. Valid values:
    // 
    // *   Leave this parameter empty for the first query or the only query.
    // *   Set this parameter to the value of NextToken obtained from the previous query.
    shared_ptr<string> nextToken_ {};
    // The ID of the region where the NLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable fine-grained monitoring. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> secSensorEnabled_ {};
    // The tags.
    shared_ptr<vector<ListListenersRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
