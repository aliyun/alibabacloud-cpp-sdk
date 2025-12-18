// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGREGATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGREGATORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAggregatorRequestAggregatorAccounts.hpp>
#include <alibabacloud/models/UpdateAggregatorRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateAggregatorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggregatorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorAccounts, aggregatorAccounts_);
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAggregatorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorAccounts, aggregatorAccounts_);
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    UpdateAggregatorRequest() = default ;
    UpdateAggregatorRequest(const UpdateAggregatorRequest &) = default ;
    UpdateAggregatorRequest(UpdateAggregatorRequest &&) = default ;
    UpdateAggregatorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggregatorRequest() = default ;
    UpdateAggregatorRequest& operator=(const UpdateAggregatorRequest &) = default ;
    UpdateAggregatorRequest& operator=(UpdateAggregatorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorAccounts_ == nullptr
        && return this->aggregatorId_ == nullptr && return this->aggregatorName_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->folderId_ == nullptr
        && return this->tag_ == nullptr; };
    // aggregatorAccounts Field Functions 
    bool hasAggregatorAccounts() const { return this->aggregatorAccounts_ != nullptr;};
    void deleteAggregatorAccounts() { this->aggregatorAccounts_ = nullptr;};
    inline const vector<UpdateAggregatorRequestAggregatorAccounts> & aggregatorAccounts() const { DARABONBA_PTR_GET_CONST(aggregatorAccounts_, vector<UpdateAggregatorRequestAggregatorAccounts>) };
    inline vector<UpdateAggregatorRequestAggregatorAccounts> aggregatorAccounts() { DARABONBA_PTR_GET(aggregatorAccounts_, vector<UpdateAggregatorRequestAggregatorAccounts>) };
    inline UpdateAggregatorRequest& setAggregatorAccounts(const vector<UpdateAggregatorRequestAggregatorAccounts> & aggregatorAccounts) { DARABONBA_PTR_SET_VALUE(aggregatorAccounts_, aggregatorAccounts) };
    inline UpdateAggregatorRequest& setAggregatorAccounts(vector<UpdateAggregatorRequestAggregatorAccounts> && aggregatorAccounts) { DARABONBA_PTR_SET_RVALUE(aggregatorAccounts_, aggregatorAccounts) };


    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline UpdateAggregatorRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // aggregatorName Field Functions 
    bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
    void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
    inline string aggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
    inline UpdateAggregatorRequest& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAggregatorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAggregatorRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline UpdateAggregatorRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<UpdateAggregatorRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<UpdateAggregatorRequestTag>) };
    inline vector<UpdateAggregatorRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<UpdateAggregatorRequestTag>) };
    inline UpdateAggregatorRequest& setTag(const vector<UpdateAggregatorRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline UpdateAggregatorRequest& setTag(vector<UpdateAggregatorRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The members in the account group.
    // 
    // >  When you modify the configurations of an account group, this parameter can be left empty. In this case, the member list is not updated. If you want to update the member list, you must configure both the `AccountId` and `AccountType` parameters.
    std::shared_ptr<vector<UpdateAggregatorRequestAggregatorAccounts>> aggregatorAccounts_ = nullptr;
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The name of the account group.
    // 
    // For more information about how to obtain the name of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    std::shared_ptr<string> aggregatorName_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the account group.
    // 
    // For more information about how to obtain the description of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    std::shared_ptr<string> description_ = nullptr;
    // The folder ID. Separate multiple folder IDs with commas (,).
    std::shared_ptr<string> folderId_ = nullptr;
    // The tags of the resource.
    // 
    // You can add up to 20 tags to a resource.
    std::shared_ptr<vector<UpdateAggregatorRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
