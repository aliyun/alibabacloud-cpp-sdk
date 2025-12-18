// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGREGATORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGREGATORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateAggregatorShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggregatorShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorAccounts, aggregatorAccountsShrink_);
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAggregatorShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorAccounts, aggregatorAccountsShrink_);
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    UpdateAggregatorShrinkRequest() = default ;
    UpdateAggregatorShrinkRequest(const UpdateAggregatorShrinkRequest &) = default ;
    UpdateAggregatorShrinkRequest(UpdateAggregatorShrinkRequest &&) = default ;
    UpdateAggregatorShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggregatorShrinkRequest() = default ;
    UpdateAggregatorShrinkRequest& operator=(const UpdateAggregatorShrinkRequest &) = default ;
    UpdateAggregatorShrinkRequest& operator=(UpdateAggregatorShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorAccountsShrink_ == nullptr
        && return this->aggregatorId_ == nullptr && return this->aggregatorName_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->folderId_ == nullptr
        && return this->tagShrink_ == nullptr; };
    // aggregatorAccountsShrink Field Functions 
    bool hasAggregatorAccountsShrink() const { return this->aggregatorAccountsShrink_ != nullptr;};
    void deleteAggregatorAccountsShrink() { this->aggregatorAccountsShrink_ = nullptr;};
    inline string aggregatorAccountsShrink() const { DARABONBA_PTR_GET_DEFAULT(aggregatorAccountsShrink_, "") };
    inline UpdateAggregatorShrinkRequest& setAggregatorAccountsShrink(string aggregatorAccountsShrink) { DARABONBA_PTR_SET_VALUE(aggregatorAccountsShrink_, aggregatorAccountsShrink) };


    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline UpdateAggregatorShrinkRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // aggregatorName Field Functions 
    bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
    void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
    inline string aggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
    inline UpdateAggregatorShrinkRequest& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAggregatorShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAggregatorShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline UpdateAggregatorShrinkRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline UpdateAggregatorShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The members in the account group.
    // 
    // >  When you modify the configurations of an account group, this parameter can be left empty. In this case, the member list is not updated. If you want to update the member list, you must configure both the `AccountId` and `AccountType` parameters.
    std::shared_ptr<string> aggregatorAccountsShrink_ = nullptr;
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
    std::shared_ptr<string> tagShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
