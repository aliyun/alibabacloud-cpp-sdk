// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCESHAREASSOCIATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCESHAREASSOCIATIONSREQUEST_HPP_
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
  class ListResourceShareAssociationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceShareAssociationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssociationStatus, associationStatus_);
      DARABONBA_PTR_TO_JSON(AssociationType, associationType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceShareIds, resourceShareIds_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceShareAssociationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociationStatus, associationStatus_);
      DARABONBA_PTR_FROM_JSON(AssociationType, associationType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceArn, resourceArn_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareIds, resourceShareIds_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    ListResourceShareAssociationsRequest() = default ;
    ListResourceShareAssociationsRequest(const ListResourceShareAssociationsRequest &) = default ;
    ListResourceShareAssociationsRequest(ListResourceShareAssociationsRequest &&) = default ;
    ListResourceShareAssociationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceShareAssociationsRequest() = default ;
    ListResourceShareAssociationsRequest& operator=(const ListResourceShareAssociationsRequest &) = default ;
    ListResourceShareAssociationsRequest& operator=(ListResourceShareAssociationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associationStatus_ != nullptr
        && this->associationType_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->resourceArn_ != nullptr && this->resourceId_ != nullptr
        && this->resourceShareIds_ != nullptr && this->target_ != nullptr; };
    // associationStatus Field Functions 
    bool hasAssociationStatus() const { return this->associationStatus_ != nullptr;};
    void deleteAssociationStatus() { this->associationStatus_ = nullptr;};
    inline string associationStatus() const { DARABONBA_PTR_GET_DEFAULT(associationStatus_, "") };
    inline ListResourceShareAssociationsRequest& setAssociationStatus(string associationStatus) { DARABONBA_PTR_SET_VALUE(associationStatus_, associationStatus) };


    // associationType Field Functions 
    bool hasAssociationType() const { return this->associationType_ != nullptr;};
    void deleteAssociationType() { this->associationType_ = nullptr;};
    inline string associationType() const { DARABONBA_PTR_GET_DEFAULT(associationType_, "") };
    inline ListResourceShareAssociationsRequest& setAssociationType(string associationType) { DARABONBA_PTR_SET_VALUE(associationType_, associationType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceShareAssociationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceShareAssociationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceArn Field Functions 
    bool hasResourceArn() const { return this->resourceArn_ != nullptr;};
    void deleteResourceArn() { this->resourceArn_ = nullptr;};
    inline string resourceArn() const { DARABONBA_PTR_GET_DEFAULT(resourceArn_, "") };
    inline ListResourceShareAssociationsRequest& setResourceArn(string resourceArn) { DARABONBA_PTR_SET_VALUE(resourceArn_, resourceArn) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListResourceShareAssociationsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceShareIds Field Functions 
    bool hasResourceShareIds() const { return this->resourceShareIds_ != nullptr;};
    void deleteResourceShareIds() { this->resourceShareIds_ = nullptr;};
    inline const vector<string> & resourceShareIds() const { DARABONBA_PTR_GET_CONST(resourceShareIds_, vector<string>) };
    inline vector<string> resourceShareIds() { DARABONBA_PTR_GET(resourceShareIds_, vector<string>) };
    inline ListResourceShareAssociationsRequest& setResourceShareIds(const vector<string> & resourceShareIds) { DARABONBA_PTR_SET_VALUE(resourceShareIds_, resourceShareIds) };
    inline ListResourceShareAssociationsRequest& setResourceShareIds(vector<string> && resourceShareIds) { DARABONBA_PTR_SET_RVALUE(resourceShareIds_, resourceShareIds) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListResourceShareAssociationsRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    // The association status. Valid values:
    // 
    // *   Associating: The entity is being associated.
    // *   Associated: The entity is associated.
    // *   Failed: The entity fails to be associated.
    // *   Disassociating: The entity is being disassociated.
    // *   Disassociated: The entity is disassociated.
    // 
    // >  The system deletes the records of entities in the `Failed` or `Disassociated` state within 48 hours to 96 hours.
    std::shared_ptr<string> associationStatus_ = nullptr;
    // The association type. Valid values:
    // 
    // *   Resource
    // *   Target
    // 
    // This parameter is required.
    std::shared_ptr<string> associationType_ = nullptr;
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The `token` that is used to initiate the next request if the response of the current request is truncated. You can use the token to initiate another request and obtain the remaining records.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> resourceArn_ = nullptr;
    // The ID of the resource.
    // 
    // >  This parameter is unavailable if you set the `AssociationType` parameter to `Target`.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The IDs of the resource shares.
    // 
    // Valid values of N: 1 to 5. This indicates that a maximum of five resource shares can be specified at a time.
    std::shared_ptr<vector<string>> resourceShareIds_ = nullptr;
    // The ID of the principal.
    // 
    // >  This parameter is unavailable if you set the `AssociationType` parameter to `Resource`.
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
