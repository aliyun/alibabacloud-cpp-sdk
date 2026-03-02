// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPBCINVOKEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPBCINVOKEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class DeletePbcInvokeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePbcInvokeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePbcInvokeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
    };
    DeletePbcInvokeRequest() = default ;
    DeletePbcInvokeRequest(const DeletePbcInvokeRequest &) = default ;
    DeletePbcInvokeRequest(DeletePbcInvokeRequest &&) = default ;
    DeletePbcInvokeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePbcInvokeRequest() = default ;
    DeletePbcInvokeRequest& operator=(const DeletePbcInvokeRequest &) = default ;
    DeletePbcInvokeRequest& operator=(DeletePbcInvokeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicant_ == nullptr
        && this->companyId_ == nullptr && this->marketId_ == nullptr && this->pbcId_ == nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline string getApplicant() const { DARABONBA_PTR_GET_DEFAULT(applicant_, "") };
    inline DeletePbcInvokeRequest& setApplicant(string applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline DeletePbcInvokeRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline DeletePbcInvokeRequest& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline int64_t getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, 0L) };
    inline DeletePbcInvokeRequest& setPbcId(int64_t pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


  protected:
    shared_ptr<string> applicant_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<int64_t> pbcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
