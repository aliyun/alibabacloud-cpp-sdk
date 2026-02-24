// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGGREGATORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGGREGATORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateAggregatorShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAggregatorShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorAccounts, aggregatorAccountsShrink_);
      DARABONBA_PTR_TO_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_TO_JSON(AggregatorType, aggregatorType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAggregatorShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorAccounts, aggregatorAccountsShrink_);
      DARABONBA_PTR_FROM_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_FROM_JSON(AggregatorType, aggregatorType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    CreateAggregatorShrinkRequest() = default ;
    CreateAggregatorShrinkRequest(const CreateAggregatorShrinkRequest &) = default ;
    CreateAggregatorShrinkRequest(CreateAggregatorShrinkRequest &&) = default ;
    CreateAggregatorShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAggregatorShrinkRequest() = default ;
    CreateAggregatorShrinkRequest& operator=(const CreateAggregatorShrinkRequest &) = default ;
    CreateAggregatorShrinkRequest& operator=(CreateAggregatorShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorAccountsShrink_ == nullptr
        && this->aggregatorName_ == nullptr && this->aggregatorType_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->folderId_ == nullptr
        && this->tagShrink_ == nullptr; };
    // aggregatorAccountsShrink Field Functions 
    bool hasAggregatorAccountsShrink() const { return this->aggregatorAccountsShrink_ != nullptr;};
    void deleteAggregatorAccountsShrink() { this->aggregatorAccountsShrink_ = nullptr;};
    inline string getAggregatorAccountsShrink() const { DARABONBA_PTR_GET_DEFAULT(aggregatorAccountsShrink_, "") };
    inline CreateAggregatorShrinkRequest& setAggregatorAccountsShrink(string aggregatorAccountsShrink) { DARABONBA_PTR_SET_VALUE(aggregatorAccountsShrink_, aggregatorAccountsShrink) };


    // aggregatorName Field Functions 
    bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
    void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
    inline string getAggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
    inline CreateAggregatorShrinkRequest& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


    // aggregatorType Field Functions 
    bool hasAggregatorType() const { return this->aggregatorType_ != nullptr;};
    void deleteAggregatorType() { this->aggregatorType_ = nullptr;};
    inline string getAggregatorType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorType_, "") };
    inline CreateAggregatorShrinkRequest& setAggregatorType(string aggregatorType) { DARABONBA_PTR_SET_VALUE(aggregatorType_, aggregatorType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAggregatorShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAggregatorShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline CreateAggregatorShrinkRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateAggregatorShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The member accounts of the account group.
    // 
    // > - If you set `AggregatorType` to \\`RD, you can leave this parameter empty. This indicates that all members in the resource directory are added to the global account group.
    // >
    // > - If you set `AggregatorType` to `FOLDER`, you can leave this parameter empty. This indicates that all members in a specific folder in the resource directory are added to the folder account group.
    shared_ptr<string> aggregatorAccountsShrink_ {};
    // The name of the account group.
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorName_ {};
    // The type of the account group. Valid values:
    // 
    // - RD: global account group.
    // 
    // - FOLDER: folder account group. You must also set the `FolderId` parameter. For more information about how to obtain a folder ID, see [ListAccounts](https://help.aliyun.com/document_detail/160016.html).
    // 
    // - CUSTOM (default): custom account group. You must also set the `AccountId` and `AccountType` parameters for `AggregatorAccounts`.
    shared_ptr<string> aggregatorType_ {};
    // A client token that is used to ensure the idempotence of the request. You must make sure that the token is unique for different requests. The `ClientToken` parameter can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The description of the account group.
    shared_ptr<string> description_ {};
    // The ID of the attached folder. You can specify multiple folder IDs. Separate the IDs with commas (,).
    // 
    // This parameter is required if you set `AggregatorType` to `FOLDER`.
    shared_ptr<string> folderId_ {};
    // The tags of the resource.
    // 
    // You can attach a maximum of 20 tags.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
