// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMAUTHPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMAUTHPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryCustomAuthPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomAuthPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Identity, identity_);
      DARABONBA_PTR_TO_JSON(IdentityType, identityType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomAuthPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Identity, identity_);
      DARABONBA_PTR_FROM_JSON(IdentityType, identityType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    QueryCustomAuthPermissionRequest() = default ;
    QueryCustomAuthPermissionRequest(const QueryCustomAuthPermissionRequest &) = default ;
    QueryCustomAuthPermissionRequest(QueryCustomAuthPermissionRequest &&) = default ;
    QueryCustomAuthPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomAuthPermissionRequest() = default ;
    QueryCustomAuthPermissionRequest& operator=(const QueryCustomAuthPermissionRequest &) = default ;
    QueryCustomAuthPermissionRequest& operator=(QueryCustomAuthPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identity_ == nullptr
        && this->identityType_ == nullptr && this->instanceId_ == nullptr && this->nextToken_ == nullptr && this->size_ == nullptr && this->topic_ == nullptr; };
    // identity Field Functions 
    bool hasIdentity() const { return this->identity_ != nullptr;};
    void deleteIdentity() { this->identity_ = nullptr;};
    inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
    inline QueryCustomAuthPermissionRequest& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


    // identityType Field Functions 
    bool hasIdentityType() const { return this->identityType_ != nullptr;};
    void deleteIdentityType() { this->identityType_ = nullptr;};
    inline string getIdentityType() const { DARABONBA_PTR_GET_DEFAULT(identityType_, "") };
    inline QueryCustomAuthPermissionRequest& setIdentityType(string identityType) { DARABONBA_PTR_SET_VALUE(identityType_, identityType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryCustomAuthPermissionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryCustomAuthPermissionRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline QueryCustomAuthPermissionRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline QueryCustomAuthPermissionRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The username or client ID.
    shared_ptr<string> identity_ {};
    // The identity type.
    shared_ptr<string> identityType_ {};
    // The ID of the ApsaraMQ for MQTT instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The token that marks the end position of the previous returned page. To obtain the next batch of data, call the operation again by using the value of NextToken returned by the previous request. If you call this operation for the first time or want to query all results, set NextToken to an empty string.
    shared_ptr<string> nextToken_ {};
    // The number of queries to be returned. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> size_ {};
    // The topic whose authorization information you want to query. Multi-level topics and wildcard characters are supported.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
