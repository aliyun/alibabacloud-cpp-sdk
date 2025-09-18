// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATAINITCONTAINERSCONFIGEMPTYDIRDESC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATAINITCONTAINERSCONFIGEMPTYDIRDESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc() = default ;
    DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc(const DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc(DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc &&) = default ;
    DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc() = default ;
    DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc& operator=(const DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc& operator=(DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc &&) = default ;
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
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApplicationConfigResponseBodyDataInitContainersConfigEmptyDirDesc& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
