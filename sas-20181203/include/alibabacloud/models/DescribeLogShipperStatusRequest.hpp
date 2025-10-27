// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSHIPPERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSHIPPERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeLogShipperStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogShipperStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogShipperStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
    };
    DescribeLogShipperStatusRequest() = default ;
    DescribeLogShipperStatusRequest(const DescribeLogShipperStatusRequest &) = default ;
    DescribeLogShipperStatusRequest(DescribeLogShipperStatusRequest &&) = default ;
    DescribeLogShipperStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogShipperStatusRequest() = default ;
    DescribeLogShipperStatusRequest& operator=(const DescribeLogShipperStatusRequest &) = default ;
    DescribeLogShipperStatusRequest& operator=(DescribeLogShipperStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeLogShipperStatusRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


  protected:
    // The ID of the request source. Set the value to **sas**.
    std::shared_ptr<string> from_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
