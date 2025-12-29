// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeOssStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
    };
    DescribeOssStatusRequest() = default ;
    DescribeOssStatusRequest(const DescribeOssStatusRequest &) = default ;
    DescribeOssStatusRequest(DescribeOssStatusRequest &&) = default ;
    DescribeOssStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssStatusRequest() = default ;
    DescribeOssStatusRequest& operator=(const DescribeOssStatusRequest &) = default ;
    DescribeOssStatusRequest& operator=(DescribeOssStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceCode_ == nullptr; };
    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeOssStatusRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    // Service code:
    // - antcloudauth: Financial-grade real-person authentication
    // - cloudauthst (discontinued): Enhanced real-person authentication
    shared_ptr<string> serviceCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
