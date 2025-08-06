// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPARTNERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPARTNERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class DescribePartnerConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePartnerConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(PartnerCode, partnerCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePartnerConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(PartnerCode, partnerCode_);
    };
    DescribePartnerConfigRequest() = default ;
    DescribePartnerConfigRequest(const DescribePartnerConfigRequest &) = default ;
    DescribePartnerConfigRequest(DescribePartnerConfigRequest &&) = default ;
    DescribePartnerConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePartnerConfigRequest() = default ;
    DescribePartnerConfigRequest& operator=(const DescribePartnerConfigRequest &) = default ;
    DescribePartnerConfigRequest& operator=(DescribePartnerConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->partnerCode_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribePartnerConfigRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // partnerCode Field Functions 
    bool hasPartnerCode() const { return this->partnerCode_ != nullptr;};
    void deletePartnerCode() { this->partnerCode_ = nullptr;};
    inline string partnerCode() const { DARABONBA_PTR_GET_DEFAULT(partnerCode_, "") };
    inline DescribePartnerConfigRequest& setPartnerCode(string partnerCode) { DARABONBA_PTR_SET_VALUE(partnerCode_, partnerCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> partnerCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
