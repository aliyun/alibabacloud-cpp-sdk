// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERKRITISSTATUSRESPONSEBODYKRITISSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERSERVICEK8SCLUSTERKRITISSTATUSRESPONSEBODYKRITISSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Install, install_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Install, install_);
    };
    DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus() = default ;
    DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus(const DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus &) = default ;
    DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus(DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus &&) = default ;
    DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus() = default ;
    DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus& operator=(const DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus &) = default ;
    DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus& operator=(DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->install_ == nullptr; };
    // install Field Functions 
    bool hasInstall() const { return this->install_ != nullptr;};
    void deleteInstall() { this->install_ = nullptr;};
    inline bool install() const { DARABONBA_PTR_GET_DEFAULT(install_, false) };
    inline DescribeContainerServiceK8sClusterKritisStatusResponseBodyKritisStatus& setInstall(bool install) { DARABONBA_PTR_SET_VALUE(install_, install) };


  protected:
    // Indicates whether Kritis is installed. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> install_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
