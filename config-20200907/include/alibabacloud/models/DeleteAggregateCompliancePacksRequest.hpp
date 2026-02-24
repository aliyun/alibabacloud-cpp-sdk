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
        && this->clientToken_ == nullptr && this->compliancePackIds_ == nullptr && this->deleteRule_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline DeleteAggregateCompliancePacksRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteAggregateCompliancePacksRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliancePackIds Field Functions 
    bool hasCompliancePackIds() const { return this->compliancePackIds_ != nullptr;};
    void deleteCompliancePackIds() { this->compliancePackIds_ = nullptr;};
    inline string getCompliancePackIds() const { DARABONBA_PTR_GET_DEFAULT(compliancePackIds_, "") };
    inline DeleteAggregateCompliancePacksRequest& setCompliancePackIds(string compliancePackIds) { DARABONBA_PTR_SET_VALUE(compliancePackIds_, compliancePackIds) };


    // deleteRule Field Functions 
    bool hasDeleteRule() const { return this->deleteRule_ != nullptr;};
    void deleteDeleteRule() { this->deleteRule_ = nullptr;};
    inline bool getDeleteRule() const { DARABONBA_PTR_GET_DEFAULT(deleteRule_, false) };
    inline DeleteAggregateCompliancePacksRequest& setDeleteRule(bool deleteRule) { DARABONBA_PTR_SET_VALUE(deleteRule_, deleteRule) };


  protected:
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> compliancePackIds_ {};
    shared_ptr<bool> deleteRule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
