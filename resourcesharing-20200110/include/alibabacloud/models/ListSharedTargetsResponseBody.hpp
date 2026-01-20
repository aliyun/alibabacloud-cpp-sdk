// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSHAREDTARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSHAREDTARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class ListSharedTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSharedTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SharedTargets, sharedTargets_);
    };
    friend void from_json(const Darabonba::Json& j, ListSharedTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SharedTargets, sharedTargets_);
    };
    ListSharedTargetsResponseBody() = default ;
    ListSharedTargetsResponseBody(const ListSharedTargetsResponseBody &) = default ;
    ListSharedTargetsResponseBody(ListSharedTargetsResponseBody &&) = default ;
    ListSharedTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSharedTargetsResponseBody() = default ;
    ListSharedTargetsResponseBody& operator=(const ListSharedTargetsResponseBody &) = default ;
    ListSharedTargetsResponseBody& operator=(ListSharedTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SharedTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SharedTargets& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(External, external_);
        DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetProperty, targetProperty_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, SharedTargets& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(External, external_);
        DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetProperty, targetProperty_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      SharedTargets() = default ;
      SharedTargets(const SharedTargets &) = default ;
      SharedTargets(SharedTargets &&) = default ;
      SharedTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SharedTargets() = default ;
      SharedTargets& operator=(const SharedTargets &) = default ;
      SharedTargets& operator=(SharedTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->external_ == nullptr && this->resourceShareId_ == nullptr && this->targetId_ == nullptr && this->targetProperty_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline SharedTargets& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // external Field Functions 
      bool hasExternal() const { return this->external_ != nullptr;};
      void deleteExternal() { this->external_ = nullptr;};
      inline bool getExternal() const { DARABONBA_PTR_GET_DEFAULT(external_, false) };
      inline SharedTargets& setExternal(bool external) { DARABONBA_PTR_SET_VALUE(external_, external) };


      // resourceShareId Field Functions 
      bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
      void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
      inline string getResourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
      inline SharedTargets& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline SharedTargets& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetProperty Field Functions 
      bool hasTargetProperty() const { return this->targetProperty_ != nullptr;};
      void deleteTargetProperty() { this->targetProperty_ = nullptr;};
      inline string getTargetProperty() const { DARABONBA_PTR_GET_DEFAULT(targetProperty_, "") };
      inline SharedTargets& setTargetProperty(string targetProperty) { DARABONBA_PTR_SET_VALUE(targetProperty_, targetProperty) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline SharedTargets& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The time when the principal was associated with the resource share.
      shared_ptr<string> createTime_ {};
      // Indicates whether the principal is outside the resource directory. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> external_ {};
      // The ID of the resource share.
      shared_ptr<string> resourceShareId_ {};
      // The ID of the principal or resource owner.
      // 
      // *   If the value of `ResourceOwner` is `Self`, the value of this parameter is the ID of a principal.
      // *   If the value of `ResourceOwner` is `OtherAccounts`, the value of this parameter is the ID of a resource owner.
      shared_ptr<string> targetId_ {};
      // The properties of the principal, such as the time range within which the resource is shared.
      // 
      // >  This parameter is returned only if the principal is an Alibaba Cloud service.
      shared_ptr<string> targetProperty_ {};
      // The time when the association of the principal was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->sharedTargets_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSharedTargetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSharedTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sharedTargets Field Functions 
    bool hasSharedTargets() const { return this->sharedTargets_ != nullptr;};
    void deleteSharedTargets() { this->sharedTargets_ = nullptr;};
    inline const vector<ListSharedTargetsResponseBody::SharedTargets> & getSharedTargets() const { DARABONBA_PTR_GET_CONST(sharedTargets_, vector<ListSharedTargetsResponseBody::SharedTargets>) };
    inline vector<ListSharedTargetsResponseBody::SharedTargets> getSharedTargets() { DARABONBA_PTR_GET(sharedTargets_, vector<ListSharedTargetsResponseBody::SharedTargets>) };
    inline ListSharedTargetsResponseBody& setSharedTargets(const vector<ListSharedTargetsResponseBody::SharedTargets> & sharedTargets) { DARABONBA_PTR_SET_VALUE(sharedTargets_, sharedTargets) };
    inline ListSharedTargetsResponseBody& setSharedTargets(vector<ListSharedTargetsResponseBody::SharedTargets> && sharedTargets) { DARABONBA_PTR_SET_RVALUE(sharedTargets_, sharedTargets) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information of the principals.
    shared_ptr<vector<ListSharedTargetsResponseBody::SharedTargets>> sharedTargets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
