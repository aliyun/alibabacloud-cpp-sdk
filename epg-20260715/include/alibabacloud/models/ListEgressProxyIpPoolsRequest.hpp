// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEGRESSPROXYIPPOOLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEGRESSPROXYIPPOOLSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EPG20260715
{
namespace Models
{
  class ListEgressProxyIpPoolsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEgressProxyIpPoolsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayIds, egressProxyGatewayIds_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolIds, egressProxyIpPoolIds_);
      DARABONBA_PTR_TO_JSON(EgressProxyIpPoolNames, egressProxyIpPoolNames_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListEgressProxyIpPoolsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayIds, egressProxyGatewayIds_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolIds, egressProxyIpPoolIds_);
      DARABONBA_PTR_FROM_JSON(EgressProxyIpPoolNames, egressProxyIpPoolNames_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListEgressProxyIpPoolsRequest() = default ;
    ListEgressProxyIpPoolsRequest(const ListEgressProxyIpPoolsRequest &) = default ;
    ListEgressProxyIpPoolsRequest(ListEgressProxyIpPoolsRequest &&) = default ;
    ListEgressProxyIpPoolsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEgressProxyIpPoolsRequest() = default ;
    ListEgressProxyIpPoolsRequest& operator=(const ListEgressProxyIpPoolsRequest &) = default ;
    ListEgressProxyIpPoolsRequest& operator=(ListEgressProxyIpPoolsRequest &&) = default ;
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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->egressProxyGatewayIds_ == nullptr
        && this->egressProxyIpPoolIds_ == nullptr && this->egressProxyIpPoolNames_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->skip_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr; };
    // egressProxyGatewayIds Field Functions 
    bool hasEgressProxyGatewayIds() const { return this->egressProxyGatewayIds_ != nullptr;};
    void deleteEgressProxyGatewayIds() { this->egressProxyGatewayIds_ = nullptr;};
    inline const vector<string> & getEgressProxyGatewayIds() const { DARABONBA_PTR_GET_CONST(egressProxyGatewayIds_, vector<string>) };
    inline vector<string> getEgressProxyGatewayIds() { DARABONBA_PTR_GET(egressProxyGatewayIds_, vector<string>) };
    inline ListEgressProxyIpPoolsRequest& setEgressProxyGatewayIds(const vector<string> & egressProxyGatewayIds) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayIds_, egressProxyGatewayIds) };
    inline ListEgressProxyIpPoolsRequest& setEgressProxyGatewayIds(vector<string> && egressProxyGatewayIds) { DARABONBA_PTR_SET_RVALUE(egressProxyGatewayIds_, egressProxyGatewayIds) };


    // egressProxyIpPoolIds Field Functions 
    bool hasEgressProxyIpPoolIds() const { return this->egressProxyIpPoolIds_ != nullptr;};
    void deleteEgressProxyIpPoolIds() { this->egressProxyIpPoolIds_ = nullptr;};
    inline const vector<string> & getEgressProxyIpPoolIds() const { DARABONBA_PTR_GET_CONST(egressProxyIpPoolIds_, vector<string>) };
    inline vector<string> getEgressProxyIpPoolIds() { DARABONBA_PTR_GET(egressProxyIpPoolIds_, vector<string>) };
    inline ListEgressProxyIpPoolsRequest& setEgressProxyIpPoolIds(const vector<string> & egressProxyIpPoolIds) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolIds_, egressProxyIpPoolIds) };
    inline ListEgressProxyIpPoolsRequest& setEgressProxyIpPoolIds(vector<string> && egressProxyIpPoolIds) { DARABONBA_PTR_SET_RVALUE(egressProxyIpPoolIds_, egressProxyIpPoolIds) };


    // egressProxyIpPoolNames Field Functions 
    bool hasEgressProxyIpPoolNames() const { return this->egressProxyIpPoolNames_ != nullptr;};
    void deleteEgressProxyIpPoolNames() { this->egressProxyIpPoolNames_ = nullptr;};
    inline const vector<string> & getEgressProxyIpPoolNames() const { DARABONBA_PTR_GET_CONST(egressProxyIpPoolNames_, vector<string>) };
    inline vector<string> getEgressProxyIpPoolNames() { DARABONBA_PTR_GET(egressProxyIpPoolNames_, vector<string>) };
    inline ListEgressProxyIpPoolsRequest& setEgressProxyIpPoolNames(const vector<string> & egressProxyIpPoolNames) { DARABONBA_PTR_SET_VALUE(egressProxyIpPoolNames_, egressProxyIpPoolNames) };
    inline ListEgressProxyIpPoolsRequest& setEgressProxyIpPoolNames(vector<string> && egressProxyIpPoolNames) { DARABONBA_PTR_SET_RVALUE(egressProxyIpPoolNames_, egressProxyIpPoolNames) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEgressProxyIpPoolsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEgressProxyIpPoolsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListEgressProxyIpPoolsRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEgressProxyIpPoolsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListEgressProxyIpPoolsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListEgressProxyIpPoolsRequest::Tag>) };
    inline vector<ListEgressProxyIpPoolsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListEgressProxyIpPoolsRequest::Tag>) };
    inline ListEgressProxyIpPoolsRequest& setTag(const vector<ListEgressProxyIpPoolsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListEgressProxyIpPoolsRequest& setTag(vector<ListEgressProxyIpPoolsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    shared_ptr<vector<string>> egressProxyGatewayIds_ {};
    shared_ptr<vector<string>> egressProxyIpPoolIds_ {};
    shared_ptr<vector<string>> egressProxyIpPoolNames_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> skip_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<ListEgressProxyIpPoolsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
