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
        && return this->aggregatorName_ == nullptr && return this->aggregatorType_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->folderId_ == nullptr
        && return this->tagShrink_ == nullptr; };
    // aggregatorAccountsShrink Field Functions 
    bool hasAggregatorAccountsShrink() const { return this->aggregatorAccountsShrink_ != nullptr;};
    void deleteAggregatorAccountsShrink() { this->aggregatorAccountsShrink_ = nullptr;};
    inline string aggregatorAccountsShrink() const { DARABONBA_PTR_GET_DEFAULT(aggregatorAccountsShrink_, "") };
    inline CreateAggregatorShrinkRequest& setAggregatorAccountsShrink(string aggregatorAccountsShrink) { DARABONBA_PTR_SET_VALUE(aggregatorAccountsShrink_, aggregatorAccountsShrink) };


    // aggregatorName Field Functions 
    bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
    void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
    inline string aggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
    inline CreateAggregatorShrinkRequest& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


    // aggregatorType Field Functions 
    bool hasAggregatorType() const { return this->aggregatorType_ != nullptr;};
    void deleteAggregatorType() { this->aggregatorType_ = nullptr;};
    inline string aggregatorType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorType_, "") };
    inline CreateAggregatorShrinkRequest& setAggregatorType(string aggregatorType) { DARABONBA_PTR_SET_VALUE(aggregatorType_, aggregatorType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAggregatorShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAggregatorShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline CreateAggregatorShrinkRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateAggregatorShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The information about the member accounts in the account group. Example:
    // 
    //     [{
    //     	"accountId": 171322098523****,
    //     	"accountType":"ResourceDirectory",
    //                     "accountName":"Alice"
    //     }, {
    //     	"accountId": 100532098349****,
    //     	"accountType":"ResourceDirectory",
    //                     "accountName":"Tom"
    //     }]
    // 
    // >  If `AggregatorType` is set to `RD` or `FOLDER`, this parameter can be left empty, which indicates that all accounts in the resource directory are added to the global account group.
    std::shared_ptr<string> aggregatorAccountsShrink_ = nullptr;
    // The name of the account group.
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorName_ = nullptr;
    // The type of the account group. Valid values:
    // 
    // *   RD: global account group.
    // *   FOLDER: account group of the folder.
    // *   CUSTOM (default): custom account group.
    std::shared_ptr<string> aggregatorType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `token` can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the account group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the folder to which the account group is attached. You must specify this parameter if `AggregatorType` is set to `FOLDER`. Multiple resource folder IDs should be separated by commas (,).
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
