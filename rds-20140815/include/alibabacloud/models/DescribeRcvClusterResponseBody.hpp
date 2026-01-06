// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCVCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCVCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCVClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCVClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VClusterStatus, VClusterStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCVClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VClusterStatus, VClusterStatus_);
    };
    DescribeRCVClusterResponseBody() = default ;
    DescribeRCVClusterResponseBody(const DescribeRCVClusterResponseBody &) = default ;
    DescribeRCVClusterResponseBody(DescribeRCVClusterResponseBody &&) = default ;
    DescribeRCVClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCVClusterResponseBody() = default ;
    DescribeRCVClusterResponseBody& operator=(const DescribeRCVClusterResponseBody &) = default ;
    DescribeRCVClusterResponseBody& operator=(DescribeRCVClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->VClusterStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCVClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // VClusterStatus Field Functions 
    bool hasVClusterStatus() const { return this->VClusterStatus_ != nullptr;};
    void deleteVClusterStatus() { this->VClusterStatus_ = nullptr;};
    inline string getVClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(VClusterStatus_, "") };
    inline DescribeRCVClusterResponseBody& setVClusterStatus(string VClusterStatus) { DARABONBA_PTR_SET_VALUE(VClusterStatus_, VClusterStatus) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> VClusterStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
