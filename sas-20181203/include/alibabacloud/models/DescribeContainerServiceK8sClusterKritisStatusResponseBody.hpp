// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERKRITISSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERKRITISSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class KritisStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KritisStatus& obj) { 
        DARABONBA_PTR_TO_JSON(Install, install_);
      };
      friend void from_json(const Darabonba::Json& j, KritisStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(Install, install_);
      };
      KritisStatus() = default ;
      KritisStatus(const KritisStatus &) = default ;
      KritisStatus(KritisStatus &&) = default ;
      KritisStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KritisStatus() = default ;
      KritisStatus& operator=(const KritisStatus &) = default ;
      KritisStatus& operator=(KritisStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->install_ == nullptr; };
      // install Field Functions 
      bool hasInstall() const { return this->install_ != nullptr;};
      void deleteInstall() { this->install_ = nullptr;};
      inline bool getInstall() const { DARABONBA_PTR_GET_DEFAULT(install_, false) };
      inline KritisStatus& setInstall(bool install) { DARABONBA_PTR_SET_VALUE(install_, install) };


    protected:
      // Indicates whether Kritis is installed. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> install_ {};
    };

    virtual bool empty() const override { return this->kritisStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // kritisStatus Field Functions 
    bool hasKritisStatus() const { return this->kritisStatus_ != nullptr;};
    void deleteKritisStatus() { this->kritisStatus_ = nullptr;};
    inline const DescribeContainerServiceK8sClusterKritisStatusResponseBody::KritisStatus & getKritisStatus() const { DARABONBA_PTR_GET_CONST(kritisStatus_, DescribeContainerServiceK8sClusterKritisStatusResponseBody::KritisStatus) };
    inline DescribeContainerServiceK8sClusterKritisStatusResponseBody::KritisStatus getKritisStatus() { DARABONBA_PTR_GET(kritisStatus_, DescribeContainerServiceK8sClusterKritisStatusResponseBody::KritisStatus) };
    inline DescribeContainerServiceK8sClusterKritisStatusResponseBody& setKritisStatus(const DescribeContainerServiceK8sClusterKritisStatusResponseBody::KritisStatus & kritisStatus) { DARABONBA_PTR_SET_VALUE(kritisStatus_, kritisStatus) };
    inline DescribeContainerServiceK8sClusterKritisStatusResponseBody& setKritisStatus(DescribeContainerServiceK8sClusterKritisStatusResponseBody::KritisStatus && kritisStatus) { DARABONBA_PTR_SET_RVALUE(kritisStatus_, kritisStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerServiceK8sClusterKritisStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Kritis status of the ACK cluster.
    shared_ptr<DescribeContainerServiceK8sClusterKritisStatusResponseBody::KritisStatus> kritisStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
