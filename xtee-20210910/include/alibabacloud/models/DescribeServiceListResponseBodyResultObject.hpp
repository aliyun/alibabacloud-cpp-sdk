// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeServiceListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
    };
    DescribeServiceListResponseBodyResultObject() = default ;
    DescribeServiceListResponseBodyResultObject(const DescribeServiceListResponseBodyResultObject &) = default ;
    DescribeServiceListResponseBodyResultObject(DescribeServiceListResponseBodyResultObject &&) = default ;
    DescribeServiceListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceListResponseBodyResultObject() = default ;
    DescribeServiceListResponseBodyResultObject& operator=(const DescribeServiceListResponseBodyResultObject &) = default ;
    DescribeServiceListResponseBodyResultObject& operator=(DescribeServiceListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serviceCode_ == nullptr
        && return this->serviceName_ == nullptr; };
    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeServiceListResponseBodyResultObject& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeServiceListResponseBodyResultObject& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // Service code
    std::shared_ptr<string> serviceCode_ = nullptr;
    // Service name.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
