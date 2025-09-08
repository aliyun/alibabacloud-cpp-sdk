// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATASIDECARCONTAINERSCONFIGEMPTYDIRDESC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATASIDECARCONTAINERSCONFIGEMPTYDIRDESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc() = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc(const DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc(DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc &&) = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc() = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc& operator=(const DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc& operator=(DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountPath_ != nullptr
        && this->name_ != nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApplicationConfigResponseBodyDataSidecarContainersConfigEmptyDirDesc& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // Mount path of the data volume within the container.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The name of the shared temporary storage.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
