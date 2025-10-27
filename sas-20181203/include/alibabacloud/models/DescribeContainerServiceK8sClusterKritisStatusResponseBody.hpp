// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERKRITISSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERKRITISSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerServiceK8sClusterKritisStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerServiceK8sClusterKritisStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KritisStatus, kritisStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerServiceK8sClusterKritisStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KritisStatus, kritisStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeContainerServiceK8sClusterKritisStatusResponseBody() = default ;
    DescribeContainerServiceK8sClusterKritisStatusResponseBody(const DescribeContainerServiceK8sClusterKritisStatusResponseBody &) = default ;
    DescribeContainerServiceK8sClusterKritisStatusResponseBody(DescribeContainerServiceK8sClusterKritisStatusResponseBody &&) = default ;
    DescribeContainerServiceK8sClusterKritisStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerServiceK8sClusterKritisStatusResponseBody() = default ;
    DescribeContainerServiceK8sClusterKritisStatusResponseBody& operator=(const DescribeContainerServiceK8sClusterKritisStatusResponseBody &) = default ;
    DescribeContainerServiceK8sClusterKritisStatusResponseBody& operator=(DescribeContainerServiceK8sClusterKritisStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->kritisStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // kritisStatus Field Functions 
    bool hasKritisStatus() const { return this->kritisStatus_ != nullptr;};
    void deleteKritisStatus() { this->kritisStatus_ = nullptr;};
    inline const DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus & kritisStatus() const { DARABONBA_PTR_GET_CONST(kritisStatus_, DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus) };
    inline DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus kritisStatus() { DARABONBA_PTR_GET(kritisStatus_, DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus) };
    inline DescribeContainerServiceK8sClusterKritisStatusResponseBody& setKritisStatus(const DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus & kritisStatus) { DARABONBA_PTR_SET_VALUE(kritisStatus_, kritisStatus) };
    inline DescribeContainerServiceK8sClusterKritisStatusResponseBody& setKritisStatus(DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus && kritisStatus) { DARABONBA_PTR_SET_RVALUE(kritisStatus_, kritisStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerServiceK8sClusterKritisStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Kritis status of the ACK cluster.
    std::shared_ptr<DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus> kritisStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
