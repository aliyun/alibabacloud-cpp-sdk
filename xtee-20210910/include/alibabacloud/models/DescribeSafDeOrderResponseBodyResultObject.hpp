// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFDEORDERRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFDEORDERRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafDeOrderResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafDeOrderResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(expirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(openUserType, openUserType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafDeOrderResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(expirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(openUserType, openUserType_);
    };
    DescribeSafDeOrderResponseBodyResultObject() = default ;
    DescribeSafDeOrderResponseBodyResultObject(const DescribeSafDeOrderResponseBodyResultObject &) = default ;
    DescribeSafDeOrderResponseBodyResultObject(DescribeSafDeOrderResponseBodyResultObject &&) = default ;
    DescribeSafDeOrderResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafDeOrderResponseBodyResultObject() = default ;
    DescribeSafDeOrderResponseBodyResultObject& operator=(const DescribeSafDeOrderResponseBodyResultObject &) = default ;
    DescribeSafDeOrderResponseBodyResultObject& operator=(DescribeSafDeOrderResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expirationDate_ != nullptr
        && this->openUserType_ != nullptr; };
    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline int64_t expirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, 0L) };
    inline DescribeSafDeOrderResponseBodyResultObject& setExpirationDate(int64_t expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // openUserType Field Functions 
    bool hasOpenUserType() const { return this->openUserType_ != nullptr;};
    void deleteOpenUserType() { this->openUserType_ = nullptr;};
    inline int32_t openUserType() const { DARABONBA_PTR_GET_DEFAULT(openUserType_, 0) };
    inline DescribeSafDeOrderResponseBodyResultObject& setOpenUserType(int32_t openUserType) { DARABONBA_PTR_SET_VALUE(openUserType_, openUserType) };


  protected:
    // Expiration time
    std::shared_ptr<int64_t> expirationDate_ = nullptr;
    // Based on the product type subscribed by the customer, the console permissions are divided into three categories:
    // 
    //      1. New Customer: Has not purchased/subscribed to any service.
    //      2. Old Customer (Subscription): Customers who have purchased the SAF product.
    //      3. Pay-As-You-Go: Customers who have purchased the SAF_BAG product or activated SAF_POS.
    std::shared_ptr<int32_t> openUserType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
