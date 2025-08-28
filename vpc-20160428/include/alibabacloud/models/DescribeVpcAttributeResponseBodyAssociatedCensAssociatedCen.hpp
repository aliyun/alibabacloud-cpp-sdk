// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYASSOCIATEDCENSASSOCIATEDCEN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCATTRIBUTERESPONSEBODYASSOCIATEDCENSASSOCIATEDCEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_TO_JSON(CenStatus, cenStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_FROM_JSON(CenStatus, cenStatus_);
    };
    DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen() = default ;
    DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen(const DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen &) = default ;
    DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen(DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen &&) = default ;
    DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen() = default ;
    DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen& operator=(const DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen &) = default ;
    DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen& operator=(DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->cenOwnerId_ != nullptr && this->cenStatus_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline int64_t cenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
    inline DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // cenStatus Field Functions 
    bool hasCenStatus() const { return this->cenStatus_ != nullptr;};
    void deleteCenStatus() { this->cenStatus_ = nullptr;};
    inline string cenStatus() const { DARABONBA_PTR_GET_DEFAULT(cenStatus_, "") };
    inline DescribeVpcAttributeResponseBodyAssociatedCensAssociatedCen& setCenStatus(string cenStatus) { DARABONBA_PTR_SET_VALUE(cenStatus_, cenStatus) };


  protected:
    // The ID of the CEN instance to which the VPC is attached.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the account to which the CEN instance belongs.
    std::shared_ptr<int64_t> cenOwnerId_ = nullptr;
    // The status of the CEN instance.
    // 
    // **Attached** is returned only when the VPC is attached to a CEN instance.
    std::shared_ptr<string> cenStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
