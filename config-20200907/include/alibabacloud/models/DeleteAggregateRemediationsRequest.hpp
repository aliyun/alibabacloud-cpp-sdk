// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATEREMEDIATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATEREMEDIATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregateRemediationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregateRemediationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(RemediationIds, remediationIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregateRemediationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(RemediationIds, remediationIds_);
    };
    DeleteAggregateRemediationsRequest() = default ;
    DeleteAggregateRemediationsRequest(const DeleteAggregateRemediationsRequest &) = default ;
    DeleteAggregateRemediationsRequest(DeleteAggregateRemediationsRequest &&) = default ;
    DeleteAggregateRemediationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregateRemediationsRequest() = default ;
    DeleteAggregateRemediationsRequest& operator=(const DeleteAggregateRemediationsRequest &) = default ;
    DeleteAggregateRemediationsRequest& operator=(DeleteAggregateRemediationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->remediationIds_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline DeleteAggregateRemediationsRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // remediationIds Field Functions 
    bool hasRemediationIds() const { return this->remediationIds_ != nullptr;};
    void deleteRemediationIds() { this->remediationIds_ = nullptr;};
    inline string getRemediationIds() const { DARABONBA_PTR_GET_DEFAULT(remediationIds_, "") };
    inline DeleteAggregateRemediationsRequest& setRemediationIds(string remediationIds) { DARABONBA_PTR_SET_VALUE(remediationIds_, remediationIds) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The ID of the remediation template. Separate multiple remediation template IDs with commas (,).
    // 
    // For more information about how to obtain the ID of a remediation template, see [ListAggregateRemediations](https://help.aliyun.com/document_detail/270036.html).
    // 
    // This parameter is required.
    shared_ptr<string> remediationIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
