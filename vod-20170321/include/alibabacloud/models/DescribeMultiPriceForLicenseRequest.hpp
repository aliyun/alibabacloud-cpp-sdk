// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICEFORLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIPRICEFORLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeMultiPriceForLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiPriceForLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ParamStr, paramStr_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiPriceForLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamStr, paramStr_);
    };
    DescribeMultiPriceForLicenseRequest() = default ;
    DescribeMultiPriceForLicenseRequest(const DescribeMultiPriceForLicenseRequest &) = default ;
    DescribeMultiPriceForLicenseRequest(DescribeMultiPriceForLicenseRequest &&) = default ;
    DescribeMultiPriceForLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiPriceForLicenseRequest() = default ;
    DescribeMultiPriceForLicenseRequest& operator=(const DescribeMultiPriceForLicenseRequest &) = default ;
    DescribeMultiPriceForLicenseRequest& operator=(DescribeMultiPriceForLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paramStr_ != nullptr; };
    // paramStr Field Functions 
    bool hasParamStr() const { return this->paramStr_ != nullptr;};
    void deleteParamStr() { this->paramStr_ = nullptr;};
    inline string paramStr() const { DARABONBA_PTR_GET_DEFAULT(paramStr_, "") };
    inline DescribeMultiPriceForLicenseRequest& setParamStr(string paramStr) { DARABONBA_PTR_SET_VALUE(paramStr_, paramStr) };


  protected:
    std::shared_ptr<string> paramStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
