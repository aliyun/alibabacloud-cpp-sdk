// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPSPECREQUESTRESOURCESPECS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPSPECREQUESTRESOURCESPECS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopSpecRequestResourceSpecs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopSpecRequestResourceSpecs& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_TO_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopSpecRequestResourceSpecs& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(RootDiskSizeGib, rootDiskSizeGib_);
      DARABONBA_PTR_FROM_JSON(UserDiskSizeGib, userDiskSizeGib_);
    };
    ModifyDesktopSpecRequestResourceSpecs() = default ;
    ModifyDesktopSpecRequestResourceSpecs(const ModifyDesktopSpecRequestResourceSpecs &) = default ;
    ModifyDesktopSpecRequestResourceSpecs(ModifyDesktopSpecRequestResourceSpecs &&) = default ;
    ModifyDesktopSpecRequestResourceSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopSpecRequestResourceSpecs() = default ;
    ModifyDesktopSpecRequestResourceSpecs& operator=(const ModifyDesktopSpecRequestResourceSpecs &) = default ;
    ModifyDesktopSpecRequestResourceSpecs& operator=(ModifyDesktopSpecRequestResourceSpecs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desktopId_ != nullptr
        && this->rootDiskSizeGib_ != nullptr && this->userDiskSizeGib_ != nullptr; };
    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ModifyDesktopSpecRequestResourceSpecs& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // rootDiskSizeGib Field Functions 
    bool hasRootDiskSizeGib() const { return this->rootDiskSizeGib_ != nullptr;};
    void deleteRootDiskSizeGib() { this->rootDiskSizeGib_ = nullptr;};
    inline int32_t rootDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(rootDiskSizeGib_, 0) };
    inline ModifyDesktopSpecRequestResourceSpecs& setRootDiskSizeGib(int32_t rootDiskSizeGib) { DARABONBA_PTR_SET_VALUE(rootDiskSizeGib_, rootDiskSizeGib) };


    // userDiskSizeGib Field Functions 
    bool hasUserDiskSizeGib() const { return this->userDiskSizeGib_ != nullptr;};
    void deleteUserDiskSizeGib() { this->userDiskSizeGib_ = nullptr;};
    inline int32_t userDiskSizeGib() const { DARABONBA_PTR_GET_DEFAULT(userDiskSizeGib_, 0) };
    inline ModifyDesktopSpecRequestResourceSpecs& setUserDiskSizeGib(int32_t userDiskSizeGib) { DARABONBA_PTR_SET_VALUE(userDiskSizeGib_, userDiskSizeGib) };


  protected:
    // The ID of the cloud computer.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The target size of the system disk. Valid values: 80-500 GiB. The value must be a multiple of 10.
    std::shared_ptr<int32_t> rootDiskSizeGib_ = nullptr;
    // The target size of the data disk. Valid values: 80-500 GiB. The value must be a multiple of 10.
    std::shared_ptr<int32_t> userDiskSizeGib_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
