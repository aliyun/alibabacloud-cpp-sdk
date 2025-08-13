// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSEDSERVICERESPONSEBODYRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSEDSERVICERESPONSEBODYRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeUsedServiceResponseBodyRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsedServiceResponseBodyRecords& obj) { 
      DARABONBA_PTR_TO_JSON(enName, enName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsedServiceResponseBodyRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(enName, enName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
    };
    DescribeUsedServiceResponseBodyRecords() = default ;
    DescribeUsedServiceResponseBodyRecords(const DescribeUsedServiceResponseBodyRecords &) = default ;
    DescribeUsedServiceResponseBodyRecords(DescribeUsedServiceResponseBodyRecords &&) = default ;
    DescribeUsedServiceResponseBodyRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsedServiceResponseBodyRecords() = default ;
    DescribeUsedServiceResponseBodyRecords& operator=(const DescribeUsedServiceResponseBodyRecords &) = default ;
    DescribeUsedServiceResponseBodyRecords& operator=(DescribeUsedServiceResponseBodyRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enName_ != nullptr
        && this->name_ != nullptr && this->serviceCode_ != nullptr; };
    // enName Field Functions 
    bool hasEnName() const { return this->enName_ != nullptr;};
    void deleteEnName() { this->enName_ = nullptr;};
    inline string enName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
    inline DescribeUsedServiceResponseBodyRecords& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeUsedServiceResponseBodyRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeUsedServiceResponseBodyRecords& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    // English name
    std::shared_ptr<string> enName_ = nullptr;
    // Service name
    std::shared_ptr<string> name_ = nullptr;
    // Service code
    std::shared_ptr<string> serviceCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
