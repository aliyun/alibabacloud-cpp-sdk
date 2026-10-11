// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEGRESSPROXYGATEWAYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEGRESSPROXYGATEWAYSREQUEST_HPP_
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
  class ListEgressProxyGatewaysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEgressProxyGatewaysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EgressProxyConfigurationIds, egressProxyConfigurationIds_);
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayIds, egressProxyGatewayIds_);
      DARABONBA_PTR_TO_JSON(EgressProxyGatewayNames, egressProxyGatewayNames_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcIds, vpcIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListEgressProxyGatewaysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EgressProxyConfigurationIds, egressProxyConfigurationIds_);
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayIds, egressProxyGatewayIds_);
      DARABONBA_PTR_FROM_JSON(EgressProxyGatewayNames, egressProxyGatewayNames_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcIds, vpcIds_);
    };
    ListEgressProxyGatewaysRequest() = default ;
    ListEgressProxyGatewaysRequest(const ListEgressProxyGatewaysRequest &) = default ;
    ListEgressProxyGatewaysRequest(ListEgressProxyGatewaysRequest &&) = default ;
    ListEgressProxyGatewaysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEgressProxyGatewaysRequest() = default ;
    ListEgressProxyGatewaysRequest& operator=(const ListEgressProxyGatewaysRequest &) = default ;
    ListEgressProxyGatewaysRequest& operator=(ListEgressProxyGatewaysRequest &&) = default ;
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

    virtual bool empty() const override { return this->egressProxyConfigurationIds_ == nullptr
        && this->egressProxyGatewayIds_ == nullptr && this->egressProxyGatewayNames_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr
        && this->skip_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->vpcIds_ == nullptr; };
    // egressProxyConfigurationIds Field Functions 
    bool hasEgressProxyConfigurationIds() const { return this->egressProxyConfigurationIds_ != nullptr;};
    void deleteEgressProxyConfigurationIds() { this->egressProxyConfigurationIds_ = nullptr;};
    inline const vector<string> & getEgressProxyConfigurationIds() const { DARABONBA_PTR_GET_CONST(egressProxyConfigurationIds_, vector<string>) };
    inline vector<string> getEgressProxyConfigurationIds() { DARABONBA_PTR_GET(egressProxyConfigurationIds_, vector<string>) };
    inline ListEgressProxyGatewaysRequest& setEgressProxyConfigurationIds(const vector<string> & egressProxyConfigurationIds) { DARABONBA_PTR_SET_VALUE(egressProxyConfigurationIds_, egressProxyConfigurationIds) };
    inline ListEgressProxyGatewaysRequest& setEgressProxyConfigurationIds(vector<string> && egressProxyConfigurationIds) { DARABONBA_PTR_SET_RVALUE(egressProxyConfigurationIds_, egressProxyConfigurationIds) };


    // egressProxyGatewayIds Field Functions 
    bool hasEgressProxyGatewayIds() const { return this->egressProxyGatewayIds_ != nullptr;};
    void deleteEgressProxyGatewayIds() { this->egressProxyGatewayIds_ = nullptr;};
    inline const vector<string> & getEgressProxyGatewayIds() const { DARABONBA_PTR_GET_CONST(egressProxyGatewayIds_, vector<string>) };
    inline vector<string> getEgressProxyGatewayIds() { DARABONBA_PTR_GET(egressProxyGatewayIds_, vector<string>) };
    inline ListEgressProxyGatewaysRequest& setEgressProxyGatewayIds(const vector<string> & egressProxyGatewayIds) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayIds_, egressProxyGatewayIds) };
    inline ListEgressProxyGatewaysRequest& setEgressProxyGatewayIds(vector<string> && egressProxyGatewayIds) { DARABONBA_PTR_SET_RVALUE(egressProxyGatewayIds_, egressProxyGatewayIds) };


    // egressProxyGatewayNames Field Functions 
    bool hasEgressProxyGatewayNames() const { return this->egressProxyGatewayNames_ != nullptr;};
    void deleteEgressProxyGatewayNames() { this->egressProxyGatewayNames_ = nullptr;};
    inline const vector<string> & getEgressProxyGatewayNames() const { DARABONBA_PTR_GET_CONST(egressProxyGatewayNames_, vector<string>) };
    inline vector<string> getEgressProxyGatewayNames() { DARABONBA_PTR_GET(egressProxyGatewayNames_, vector<string>) };
    inline ListEgressProxyGatewaysRequest& setEgressProxyGatewayNames(const vector<string> & egressProxyGatewayNames) { DARABONBA_PTR_SET_VALUE(egressProxyGatewayNames_, egressProxyGatewayNames) };
    inline ListEgressProxyGatewaysRequest& setEgressProxyGatewayNames(vector<string> && egressProxyGatewayNames) { DARABONBA_PTR_SET_RVALUE(egressProxyGatewayNames_, egressProxyGatewayNames) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEgressProxyGatewaysRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEgressProxyGatewaysRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListEgressProxyGatewaysRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListEgressProxyGatewaysRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListEgressProxyGatewaysRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListEgressProxyGatewaysRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListEgressProxyGatewaysRequest::Tag>) };
    inline vector<ListEgressProxyGatewaysRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListEgressProxyGatewaysRequest::Tag>) };
    inline ListEgressProxyGatewaysRequest& setTag(const vector<ListEgressProxyGatewaysRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListEgressProxyGatewaysRequest& setTag(vector<ListEgressProxyGatewaysRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcIds Field Functions 
    bool hasVpcIds() const { return this->vpcIds_ != nullptr;};
    void deleteVpcIds() { this->vpcIds_ = nullptr;};
    inline const vector<string> & getVpcIds() const { DARABONBA_PTR_GET_CONST(vpcIds_, vector<string>) };
    inline vector<string> getVpcIds() { DARABONBA_PTR_GET(vpcIds_, vector<string>) };
    inline ListEgressProxyGatewaysRequest& setVpcIds(const vector<string> & vpcIds) { DARABONBA_PTR_SET_VALUE(vpcIds_, vpcIds) };
    inline ListEgressProxyGatewaysRequest& setVpcIds(vector<string> && vpcIds) { DARABONBA_PTR_SET_RVALUE(vpcIds_, vpcIds) };


  protected:
    shared_ptr<vector<string>> egressProxyConfigurationIds_ {};
    shared_ptr<vector<string>> egressProxyGatewayIds_ {};
    shared_ptr<vector<string>> egressProxyGatewayNames_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<int32_t> skip_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<ListEgressProxyGatewaysRequest::Tag>> tag_ {};
    shared_ptr<vector<string>> vpcIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EPG20260715
#endif
