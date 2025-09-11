// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPUTERESOURCERESPONSEBODYCOMPUTERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPUTERESOURCERESPONSEBODYCOMPUTERESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeComputeResourceResponseBodyComputeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComputeResourceResponseBodyComputeResource& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayValue, displayValue_);
      DARABONBA_PTR_TO_JSON(RealValue, realValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComputeResourceResponseBodyComputeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayValue, displayValue_);
      DARABONBA_PTR_FROM_JSON(RealValue, realValue_);
    };
    DescribeComputeResourceResponseBodyComputeResource() = default ;
    DescribeComputeResourceResponseBodyComputeResource(const DescribeComputeResourceResponseBodyComputeResource &) = default ;
    DescribeComputeResourceResponseBodyComputeResource(DescribeComputeResourceResponseBodyComputeResource &&) = default ;
    DescribeComputeResourceResponseBodyComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComputeResourceResponseBodyComputeResource() = default ;
    DescribeComputeResourceResponseBodyComputeResource& operator=(const DescribeComputeResourceResponseBodyComputeResource &) = default ;
    DescribeComputeResourceResponseBodyComputeResource& operator=(DescribeComputeResourceResponseBodyComputeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayValue_ != nullptr
        && this->realValue_ != nullptr; };
    // displayValue Field Functions 
    bool hasDisplayValue() const { return this->displayValue_ != nullptr;};
    void deleteDisplayValue() { this->displayValue_ = nullptr;};
    inline string displayValue() const { DARABONBA_PTR_GET_DEFAULT(displayValue_, "") };
    inline DescribeComputeResourceResponseBodyComputeResource& setDisplayValue(string displayValue) { DARABONBA_PTR_SET_VALUE(displayValue_, displayValue) };


    // realValue Field Functions 
    bool hasRealValue() const { return this->realValue_ != nullptr;};
    void deleteRealValue() { this->realValue_ = nullptr;};
    inline string realValue() const { DARABONBA_PTR_GET_DEFAULT(realValue_, "") };
    inline DescribeComputeResourceResponseBodyComputeResource& setRealValue(string realValue) { DARABONBA_PTR_SET_VALUE(realValue_, realValue) };


  protected:
    // The specifications of computing resources displayed in the console.
    std::shared_ptr<string> displayValue_ = nullptr;
    // The actual specifications of computing resources.
    std::shared_ptr<string> realValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
