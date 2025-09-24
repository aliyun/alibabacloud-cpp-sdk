// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELIEVEACCOUNTRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELIEVEACCOUNTRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class RelieveAccountRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RelieveAccountRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChildUserId, childUserId_);
      DARABONBA_PTR_TO_JSON(ParentUserId, parentUserId_);
      DARABONBA_PTR_TO_JSON(RelationId, relationId_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RelieveAccountRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildUserId, childUserId_);
      DARABONBA_PTR_FROM_JSON(ParentUserId, parentUserId_);
      DARABONBA_PTR_FROM_JSON(RelationId, relationId_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RelieveAccountRelationRequest() = default ;
    RelieveAccountRelationRequest(const RelieveAccountRelationRequest &) = default ;
    RelieveAccountRelationRequest(RelieveAccountRelationRequest &&) = default ;
    RelieveAccountRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RelieveAccountRelationRequest() = default ;
    RelieveAccountRelationRequest& operator=(const RelieveAccountRelationRequest &) = default ;
    RelieveAccountRelationRequest& operator=(RelieveAccountRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->childUserId_ != nullptr
        && this->parentUserId_ != nullptr && this->relationId_ != nullptr && this->relationType_ != nullptr && this->requestId_ != nullptr; };
    // childUserId Field Functions 
    bool hasChildUserId() const { return this->childUserId_ != nullptr;};
    void deleteChildUserId() { this->childUserId_ = nullptr;};
    inline int64_t childUserId() const { DARABONBA_PTR_GET_DEFAULT(childUserId_, 0L) };
    inline RelieveAccountRelationRequest& setChildUserId(int64_t childUserId) { DARABONBA_PTR_SET_VALUE(childUserId_, childUserId) };


    // parentUserId Field Functions 
    bool hasParentUserId() const { return this->parentUserId_ != nullptr;};
    void deleteParentUserId() { this->parentUserId_ = nullptr;};
    inline int64_t parentUserId() const { DARABONBA_PTR_GET_DEFAULT(parentUserId_, 0L) };
    inline RelieveAccountRelationRequest& setParentUserId(int64_t parentUserId) { DARABONBA_PTR_SET_VALUE(parentUserId_, parentUserId) };


    // relationId Field Functions 
    bool hasRelationId() const { return this->relationId_ != nullptr;};
    void deleteRelationId() { this->relationId_ = nullptr;};
    inline int64_t relationId() const { DARABONBA_PTR_GET_DEFAULT(relationId_, 0L) };
    inline RelieveAccountRelationRequest& setRelationId(int64_t relationId) { DARABONBA_PTR_SET_VALUE(relationId_, relationId) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline RelieveAccountRelationRequest& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RelieveAccountRelationRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the Alibaba Cloud account that is used as the member. You must set the RelationId parameter or all of the ParentUserId, ChildUserId, and RelationType parameters.
    std::shared_ptr<int64_t> childUserId_ = nullptr;
    // The ID of the Alibaba Cloud account that is used as the management account. You must set the RelationId parameter or all of the ParentUserId, ChildUserId, and RelationType parameters.
    std::shared_ptr<int64_t> parentUserId_ = nullptr;
    // The ID of the financial relationship between the management account and the member. You must set the RelationId parameter or all of the ParentUserId, ChildUserId, and RelationType parameters.
    std::shared_ptr<int64_t> relationId_ = nullptr;
    // The type of the financial relationship. Set the value to enterprise_group.
    std::shared_ptr<string> relationType_ = nullptr;
    // The unique ID of the request. The ID is used to mark a request and troubleshoot a problem.
    // 
    // This parameter is required.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
