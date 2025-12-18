// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATECOMPLIANCEPACKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATECOMPLIANCEPACKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregateCompliancePacksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregateCompliancePacksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CompliancePackIds, compliancePackIds_);
      DARABONBA_PTR_TO_JSON(DeleteRule, deleteRule_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregateCompliancePacksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CompliancePackIds, compliancePackIds_);
      DARABONBA_PTR_FROM_JSON(DeleteRule, deleteRule_);
    };
    DeleteAggregateCompliancePacksRequest() = default ;
    DeleteAggregateCompliancePacksRequest(const DeleteAggregateCompliancePacksRequest &) = default ;
    DeleteAggregateCompliancePacksRequest(DeleteAggregateCompliancePacksRequest &&) = default ;
    DeleteAggregateCompliancePacksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregateCompliancePacksRequest() = default ;
    DeleteAggregateCompliancePacksRequest& operator=(const DeleteAggregateCompliancePacksRequest &) = default ;
    DeleteAggregateCompliancePacksRequest& operator=(DeleteAggregateCompliancePacksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->clientToken_ == nullptr && return this->compliancePackIds_ == nullptr && return this->deleteRule_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline DeleteAggregateCompliancePacksRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteAggregateCompliancePacksRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliancePackIds Field Functions 
    bool hasCompliancePackIds() const { return this->compliancePackIds_ != nullptr;};
    void deleteCompliancePackIds() { this->compliancePackIds_ = nullptr;};
    inline string compliancePackIds() const { DARABONBA_PTR_GET_DEFAULT(compliancePackIds_, "") };
    inline DeleteAggregateCompliancePacksRequest& setCompliancePackIds(string compliancePackIds) { DARABONBA_PTR_SET_VALUE(compliancePackIds_, compliancePackIds) };


    // deleteRule Field Functions 
    bool hasDeleteRule() const { return this->deleteRule_ != nullptr;};
    void deleteDeleteRule() { this->deleteRule_ = nullptr;};
    inline bool deleteRule() const { DARABONBA_PTR_GET_DEFAULT(deleteRule_, false) };
    inline DeleteAggregateCompliancePacksRequest& setDeleteRule(bool deleteRule) { DARABONBA_PTR_SET_VALUE(deleteRule_, deleteRule) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `token` can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the compliance package. Separate multiple compliance package IDs with commas (,).
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListAggregateCompliancePacks](https://help.aliyun.com/document_detail/262059.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> compliancePackIds_ = nullptr;
    // Specifies whether to delete the rules in the compliance package. Valid values:
    // 
    // *   true: The rules are deleted.
    // *   false (default): The rules are not deleted.
    std::shared_ptr<bool> deleteRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
