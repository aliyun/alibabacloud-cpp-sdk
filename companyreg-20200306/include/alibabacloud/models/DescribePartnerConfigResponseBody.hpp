// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARTNERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARTNERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class DescribePartnerConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePartnerConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Contact, contact_);
      DARABONBA_PTR_TO_JSON(PartnerCode, partnerCode_);
      DARABONBA_PTR_TO_JSON(PartnerName, partnerName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePartnerConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Contact, contact_);
      DARABONBA_PTR_FROM_JSON(PartnerCode, partnerCode_);
      DARABONBA_PTR_FROM_JSON(PartnerName, partnerName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePartnerConfigResponseBody() = default ;
    DescribePartnerConfigResponseBody(const DescribePartnerConfigResponseBody &) = default ;
    DescribePartnerConfigResponseBody(DescribePartnerConfigResponseBody &&) = default ;
    DescribePartnerConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePartnerConfigResponseBody() = default ;
    DescribePartnerConfigResponseBody& operator=(const DescribePartnerConfigResponseBody &) = default ;
    DescribePartnerConfigResponseBody& operator=(DescribePartnerConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contact_ == nullptr
        && this->partnerCode_ == nullptr && this->partnerName_ == nullptr && this->requestId_ == nullptr; };
    // contact Field Functions 
    bool hasContact() const { return this->contact_ != nullptr;};
    void deleteContact() { this->contact_ = nullptr;};
    inline string getContact() const { DARABONBA_PTR_GET_DEFAULT(contact_, "") };
    inline DescribePartnerConfigResponseBody& setContact(string contact) { DARABONBA_PTR_SET_VALUE(contact_, contact) };


    // partnerCode Field Functions 
    bool hasPartnerCode() const { return this->partnerCode_ != nullptr;};
    void deletePartnerCode() { this->partnerCode_ = nullptr;};
    inline string getPartnerCode() const { DARABONBA_PTR_GET_DEFAULT(partnerCode_, "") };
    inline DescribePartnerConfigResponseBody& setPartnerCode(string partnerCode) { DARABONBA_PTR_SET_VALUE(partnerCode_, partnerCode) };


    // partnerName Field Functions 
    bool hasPartnerName() const { return this->partnerName_ != nullptr;};
    void deletePartnerName() { this->partnerName_ = nullptr;};
    inline string getPartnerName() const { DARABONBA_PTR_GET_DEFAULT(partnerName_, "") };
    inline DescribePartnerConfigResponseBody& setPartnerName(string partnerName) { DARABONBA_PTR_SET_VALUE(partnerName_, partnerName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePartnerConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> contact_ {};
    shared_ptr<string> partnerCode_ {};
    shared_ptr<string> partnerName_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
