// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREDITPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREDITPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCreditPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreditPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreditPackageId, creditPackageId_);
      DARABONBA_PTR_TO_JSON(CreditPackageStatus, creditPackageStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreditPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreditPackageId, creditPackageId_);
      DARABONBA_PTR_FROM_JSON(CreditPackageStatus, creditPackageStatus_);
    };
    DescribeCreditPackageRequest() = default ;
    DescribeCreditPackageRequest(const DescribeCreditPackageRequest &) = default ;
    DescribeCreditPackageRequest(DescribeCreditPackageRequest &&) = default ;
    DescribeCreditPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreditPackageRequest() = default ;
    DescribeCreditPackageRequest& operator=(const DescribeCreditPackageRequest &) = default ;
    DescribeCreditPackageRequest& operator=(DescribeCreditPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creditPackageId_ == nullptr
        && this->creditPackageStatus_ == nullptr; };
    // creditPackageId Field Functions 
    bool hasCreditPackageId() const { return this->creditPackageId_ != nullptr;};
    void deleteCreditPackageId() { this->creditPackageId_ = nullptr;};
    inline string getCreditPackageId() const { DARABONBA_PTR_GET_DEFAULT(creditPackageId_, "") };
    inline DescribeCreditPackageRequest& setCreditPackageId(string creditPackageId) { DARABONBA_PTR_SET_VALUE(creditPackageId_, creditPackageId) };


    // creditPackageStatus Field Functions 
    bool hasCreditPackageStatus() const { return this->creditPackageStatus_ != nullptr;};
    void deleteCreditPackageStatus() { this->creditPackageStatus_ = nullptr;};
    inline string getCreditPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(creditPackageStatus_, "") };
    inline DescribeCreditPackageRequest& setCreditPackageStatus(string creditPackageStatus) { DARABONBA_PTR_SET_VALUE(creditPackageStatus_, creditPackageStatus) };


  protected:
    shared_ptr<string> creditPackageId_ {};
    shared_ptr<string> creditPackageStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
