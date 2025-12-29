// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSSTATUSV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSSTATUSV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeOssStatusV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssStatusV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssStatusV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeOssStatusV2Request() = default ;
    DescribeOssStatusV2Request(const DescribeOssStatusV2Request &) = default ;
    DescribeOssStatusV2Request(DescribeOssStatusV2Request &&) = default ;
    DescribeOssStatusV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssStatusV2Request() = default ;
    DescribeOssStatusV2Request& operator=(const DescribeOssStatusV2Request &) = default ;
    DescribeOssStatusV2Request& operator=(DescribeOssStatusV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceCode_ == nullptr
        && this->sourceIp_ == nullptr; };
    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeOssStatusV2Request& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeOssStatusV2Request& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // ServiceCode for Real Person Cloud products:
    // - **antcloudauth**: Financial-grade real person authentication
    // - **cloudauthst (discontinued)**: Enhanced real person authentication
    shared_ptr<string> serviceCode_ {};
    // Visitor\\"s source IP address.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
