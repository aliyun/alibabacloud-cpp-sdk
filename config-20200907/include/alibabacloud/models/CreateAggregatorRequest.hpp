// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGGREGATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGGREGATORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAggregatorRequestAggregatorAccounts.hpp>
#include <alibabacloud/models/CreateAggregatorRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateAggregatorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAggregatorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorAccounts, aggregatorAccounts_);
      DARABONBA_PTR_TO_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_TO_JSON(AggregatorType, aggregatorType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAggregatorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorAccounts, aggregatorAccounts_);
      DARABONBA_PTR_FROM_JSON(AggregatorName, aggregatorName_);
      DARABONBA_PTR_FROM_JSON(AggregatorType, aggregatorType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateAggregatorRequest() = default ;
    CreateAggregatorRequest(const CreateAggregatorRequest &) = default ;
    CreateAggregatorRequest(CreateAggregatorRequest &&) = default ;
    CreateAggregatorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAggregatorRequest() = default ;
    CreateAggregatorRequest& operator=(const CreateAggregatorRequest &) = default ;
    CreateAggregatorRequest& operator=(CreateAggregatorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorAccounts_ == nullptr
        && return this->aggregatorName_ == nullptr && return this->aggregatorType_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->folderId_ == nullptr
        && return this->tag_ == nullptr; };
    // aggregatorAccounts Field Functions 
    bool hasAggregatorAccounts() const { return this->aggregatorAccounts_ != nullptr;};
    void deleteAggregatorAccounts() { this->aggregatorAccounts_ = nullptr;};
    inline const vector<CreateAggregatorRequestAggregatorAccounts> & aggregatorAccounts() const { DARABONBA_PTR_GET_CONST(aggregatorAccounts_, vector<CreateAggregatorRequestAggregatorAccounts>) };
    inline vector<CreateAggregatorRequestAggregatorAccounts> aggregatorAccounts() { DARABONBA_PTR_GET(aggregatorAccounts_, vector<CreateAggregatorRequestAggregatorAccounts>) };
    inline CreateAggregatorRequest& setAggregatorAccounts(const vector<CreateAggregatorRequestAggregatorAccounts> & aggregatorAccounts) { DARABONBA_PTR_SET_VALUE(aggregatorAccounts_, aggregatorAccounts) };
    inline CreateAggregatorRequest& setAggregatorAccounts(vector<CreateAggregatorRequestAggregatorAccounts> && aggregatorAccounts) { DARABONBA_PTR_SET_RVALUE(aggregatorAccounts_, aggregatorAccounts) };


    // aggregatorName Field Functions 
    bool hasAggregatorName() const { return this->aggregatorName_ != nullptr;};
    void deleteAggregatorName() { this->aggregatorName_ = nullptr;};
    inline string aggregatorName() const { DARABONBA_PTR_GET_DEFAULT(aggregatorName_, "") };
    inline CreateAggregatorRequest& setAggregatorName(string aggregatorName) { DARABONBA_PTR_SET_VALUE(aggregatorName_, aggregatorName) };


    // aggregatorType Field Functions 
    bool hasAggregatorType() const { return this->aggregatorType_ != nullptr;};
    void deleteAggregatorType() { this->aggregatorType_ = nullptr;};
    inline string aggregatorType() const { DARABONBA_PTR_GET_DEFAULT(aggregatorType_, "") };
    inline CreateAggregatorRequest& setAggregatorType(string aggregatorType) { DARABONBA_PTR_SET_VALUE(aggregatorType_, aggregatorType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAggregatorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAggregatorRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline CreateAggregatorRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAggregatorRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAggregatorRequestTag>) };
    inline vector<CreateAggregatorRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateAggregatorRequestTag>) };
    inline CreateAggregatorRequest& setTag(const vector<CreateAggregatorRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAggregatorRequest& setTag(vector<CreateAggregatorRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


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
    std::shared_ptr<vector<CreateAggregatorRequestAggregatorAccounts>> aggregatorAccounts_ = nullptr;
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
    std::shared_ptr<vector<CreateAggregatorRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
