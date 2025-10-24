// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAPASSENGERREFUNDDETAILSPASSENGER_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAPASSENGERREFUNDDETAILSPASSENGER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailResponseBodyDataPassengerRefundDetailsPassenger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailResponseBodyDataPassengerRefundDetailsPassenger& obj) { 
      DARABONBA_PTR_TO_JSON(document, document_);
      DARABONBA_PTR_TO_JSON(first_name, firstName_);
      DARABONBA_PTR_TO_JSON(last_name, lastName_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailResponseBodyDataPassengerRefundDetailsPassenger& obj) { 
      DARABONBA_PTR_FROM_JSON(document, document_);
      DARABONBA_PTR_FROM_JSON(first_name, firstName_);
      DARABONBA_PTR_FROM_JSON(last_name, lastName_);
    };
    RefundDetailResponseBodyDataPassengerRefundDetailsPassenger() = default ;
    RefundDetailResponseBodyDataPassengerRefundDetailsPassenger(const RefundDetailResponseBodyDataPassengerRefundDetailsPassenger &) = default ;
    RefundDetailResponseBodyDataPassengerRefundDetailsPassenger(RefundDetailResponseBodyDataPassengerRefundDetailsPassenger &&) = default ;
    RefundDetailResponseBodyDataPassengerRefundDetailsPassenger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailResponseBodyDataPassengerRefundDetailsPassenger() = default ;
    RefundDetailResponseBodyDataPassengerRefundDetailsPassenger& operator=(const RefundDetailResponseBodyDataPassengerRefundDetailsPassenger &) = default ;
    RefundDetailResponseBodyDataPassengerRefundDetailsPassenger& operator=(RefundDetailResponseBodyDataPassengerRefundDetailsPassenger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->document_ == nullptr
        && return this->firstName_ == nullptr && return this->lastName_ == nullptr; };
    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string document() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline RefundDetailResponseBodyDataPassengerRefundDetailsPassenger& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // firstName Field Functions 
    bool hasFirstName() const { return this->firstName_ != nullptr;};
    void deleteFirstName() { this->firstName_ = nullptr;};
    inline string firstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
    inline RefundDetailResponseBodyDataPassengerRefundDetailsPassenger& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


    // lastName Field Functions 
    bool hasLastName() const { return this->lastName_ != nullptr;};
    void deleteLastName() { this->lastName_ = nullptr;};
    inline string lastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
    inline RefundDetailResponseBodyDataPassengerRefundDetailsPassenger& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


  protected:
    // credential number
    std::shared_ptr<string> document_ = nullptr;
    // first name
    std::shared_ptr<string> firstName_ = nullptr;
    // last name
    std::shared_ptr<string> lastName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
