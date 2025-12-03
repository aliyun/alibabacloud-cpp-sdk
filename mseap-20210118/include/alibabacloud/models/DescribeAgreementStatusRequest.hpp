// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGREEMENTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGREEMENTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class DescribeAgreementStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgreementStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgreementCode, agreementCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgreementStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgreementCode, agreementCode_);
    };
    DescribeAgreementStatusRequest() = default ;
    DescribeAgreementStatusRequest(const DescribeAgreementStatusRequest &) = default ;
    DescribeAgreementStatusRequest(DescribeAgreementStatusRequest &&) = default ;
    DescribeAgreementStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgreementStatusRequest() = default ;
    DescribeAgreementStatusRequest& operator=(const DescribeAgreementStatusRequest &) = default ;
    DescribeAgreementStatusRequest& operator=(DescribeAgreementStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agreementCode_ == nullptr; };
    // agreementCode Field Functions 
    bool hasAgreementCode() const { return this->agreementCode_ != nullptr;};
    void deleteAgreementCode() { this->agreementCode_ = nullptr;};
    inline string agreementCode() const { DARABONBA_PTR_GET_DEFAULT(agreementCode_, "") };
    inline DescribeAgreementStatusRequest& setAgreementCode(string agreementCode) { DARABONBA_PTR_SET_VALUE(agreementCode_, agreementCode) };


  protected:
    std::shared_ptr<string> agreementCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
