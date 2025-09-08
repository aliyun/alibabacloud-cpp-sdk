// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATAMOUNTDESC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONCONFIGRESPONSEBODYDATAMOUNTDESC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationConfigResponseBodyDataMountDesc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationConfigResponseBodyDataMountDesc& obj) { 
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(NasPath, nasPath_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationConfigResponseBodyDataMountDesc& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(NasPath, nasPath_);
    };
    DescribeApplicationConfigResponseBodyDataMountDesc() = default ;
    DescribeApplicationConfigResponseBodyDataMountDesc(const DescribeApplicationConfigResponseBodyDataMountDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataMountDesc(DescribeApplicationConfigResponseBodyDataMountDesc &&) = default ;
    DescribeApplicationConfigResponseBodyDataMountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationConfigResponseBodyDataMountDesc() = default ;
    DescribeApplicationConfigResponseBodyDataMountDesc& operator=(const DescribeApplicationConfigResponseBodyDataMountDesc &) = default ;
    DescribeApplicationConfigResponseBodyDataMountDesc& operator=(DescribeApplicationConfigResponseBodyDataMountDesc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mountPath_ != nullptr
        && this->nasPath_ != nullptr; };
    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline DescribeApplicationConfigResponseBodyDataMountDesc& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // nasPath Field Functions 
    bool hasNasPath() const { return this->nasPath_ != nullptr;};
    void deleteNasPath() { this->nasPath_ = nullptr;};
    inline string nasPath() const { DARABONBA_PTR_GET_DEFAULT(nasPath_, "") };
    inline DescribeApplicationConfigResponseBodyDataMountDesc& setNasPath(string nasPath) { DARABONBA_PTR_SET_VALUE(nasPath_, nasPath) };


  protected:
    // The path on which the NAS file system is mounted.
    std::shared_ptr<string> mountPath_ = nullptr;
    // The directory in the NAS file system.
    std::shared_ptr<string> nasPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
