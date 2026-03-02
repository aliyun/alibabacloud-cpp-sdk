// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSETTLEDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSETTLEDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListSettledsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSettledsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(enterpriseName, enterpriseName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListSettledsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(enterpriseName, enterpriseName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListSettledsRequest() = default ;
    ListSettledsRequest(const ListSettledsRequest &) = default ;
    ListSettledsRequest(ListSettledsRequest &&) = default ;
    ListSettledsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSettledsRequest() = default ;
    ListSettledsRequest& operator=(const ListSettledsRequest &) = default ;
    ListSettledsRequest& operator=(ListSettledsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->applicant_ == nullptr && this->enterpriseName_ == nullptr && this->status_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListSettledsRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline string getApplicant() const { DARABONBA_PTR_GET_DEFAULT(applicant_, "") };
    inline ListSettledsRequest& setApplicant(string applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };


    // enterpriseName Field Functions 
    bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
    void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
    inline string getEnterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
    inline ListSettledsRequest& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSettledsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> applicant_ {};
    shared_ptr<string> enterpriseName_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
