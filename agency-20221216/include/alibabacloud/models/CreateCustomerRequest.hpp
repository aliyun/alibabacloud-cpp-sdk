// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class CreateCustomerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
      DARABONBA_PTR_TO_JSON(CustomerSource, customerSource_);
      DARABONBA_PTR_TO_JSON(CustomerSubTrade, customerSubTrade_);
      DARABONBA_PTR_TO_JSON(CustomerTrade, customerTrade_);
      DARABONBA_PTR_TO_JSON(Nation, nation_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
      DARABONBA_PTR_FROM_JSON(CustomerSource, customerSource_);
      DARABONBA_PTR_FROM_JSON(CustomerSubTrade, customerSubTrade_);
      DARABONBA_PTR_FROM_JSON(CustomerTrade, customerTrade_);
      DARABONBA_PTR_FROM_JSON(Nation, nation_);
    };
    CreateCustomerRequest() = default ;
    CreateCustomerRequest(const CreateCustomerRequest &) = default ;
    CreateCustomerRequest(CreateCustomerRequest &&) = default ;
    CreateCustomerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomerRequest() = default ;
    CreateCustomerRequest& operator=(const CreateCustomerRequest &) = default ;
    CreateCustomerRequest& operator=(CreateCustomerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customerName_ == nullptr
        && return this->customerSource_ == nullptr && return this->customerSubTrade_ == nullptr && return this->customerTrade_ == nullptr && return this->nation_ == nullptr; };
    // customerName Field Functions 
    bool hasCustomerName() const { return this->customerName_ != nullptr;};
    void deleteCustomerName() { this->customerName_ = nullptr;};
    inline string customerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
    inline CreateCustomerRequest& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


    // customerSource Field Functions 
    bool hasCustomerSource() const { return this->customerSource_ != nullptr;};
    void deleteCustomerSource() { this->customerSource_ = nullptr;};
    inline string customerSource() const { DARABONBA_PTR_GET_DEFAULT(customerSource_, "") };
    inline CreateCustomerRequest& setCustomerSource(string customerSource) { DARABONBA_PTR_SET_VALUE(customerSource_, customerSource) };


    // customerSubTrade Field Functions 
    bool hasCustomerSubTrade() const { return this->customerSubTrade_ != nullptr;};
    void deleteCustomerSubTrade() { this->customerSubTrade_ = nullptr;};
    inline string customerSubTrade() const { DARABONBA_PTR_GET_DEFAULT(customerSubTrade_, "") };
    inline CreateCustomerRequest& setCustomerSubTrade(string customerSubTrade) { DARABONBA_PTR_SET_VALUE(customerSubTrade_, customerSubTrade) };


    // customerTrade Field Functions 
    bool hasCustomerTrade() const { return this->customerTrade_ != nullptr;};
    void deleteCustomerTrade() { this->customerTrade_ = nullptr;};
    inline string customerTrade() const { DARABONBA_PTR_GET_DEFAULT(customerTrade_, "") };
    inline CreateCustomerRequest& setCustomerTrade(string customerTrade) { DARABONBA_PTR_SET_VALUE(customerTrade_, customerTrade) };


    // nation Field Functions 
    bool hasNation() const { return this->nation_ != nullptr;};
    void deleteNation() { this->nation_ = nullptr;};
    inline string nation() const { DARABONBA_PTR_GET_DEFAULT(nation_, "") };
    inline CreateCustomerRequest& setNation(string nation) { DARABONBA_PTR_SET_VALUE(nation_, nation) };


  protected:
    // Customer\\"s name.
    // 
    // This parameter is required.
    std::shared_ptr<string> customerName_ = nullptr;
    // The source/channel that allow client to connected with us. Please enumerate with Customer Source.
    // 
    // This parameter is required.
    std::shared_ptr<string> customerSource_ = nullptr;
    // The sub-industry that Customer\\"s business belongs to. Please enumerate with Customer Trade.
    std::shared_ptr<string> customerSubTrade_ = nullptr;
    // The industry that Customer\\"s business belongs to. Please enumerate with Customer Trade.
    // 
    // This parameter is required.
    std::shared_ptr<string> customerTrade_ = nullptr;
    // The region that Customer choose to launch the Cloud Service. Please use ListCountries to confirm the valid region list for current UID.
    // 
    // This parameter is required.
    std::shared_ptr<string> nation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
