// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTEGRATEDSERVICESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTEGRATEDSERVICESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DescribeIntegratedServiceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIntegratedServiceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIntegratedServiceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
    };
    DescribeIntegratedServiceStatusRequest() = default ;
    DescribeIntegratedServiceStatusRequest(const DescribeIntegratedServiceStatusRequest &) = default ;
    DescribeIntegratedServiceStatusRequest(DescribeIntegratedServiceStatusRequest &&) = default ;
    DescribeIntegratedServiceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIntegratedServiceStatusRequest() = default ;
    DescribeIntegratedServiceStatusRequest& operator=(const DescribeIntegratedServiceStatusRequest &) = default ;
    DescribeIntegratedServiceStatusRequest& operator=(DescribeIntegratedServiceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceCode_ == nullptr; };
    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeIntegratedServiceStatusRequest& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> serviceCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
