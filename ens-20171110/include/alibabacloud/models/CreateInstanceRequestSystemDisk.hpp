// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateInstanceRequestSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CreateInstanceRequestSystemDisk() = default ;
    CreateInstanceRequestSystemDisk(const CreateInstanceRequestSystemDisk &) = default ;
    CreateInstanceRequestSystemDisk(CreateInstanceRequestSystemDisk &&) = default ;
    CreateInstanceRequestSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestSystemDisk() = default ;
    CreateInstanceRequestSystemDisk& operator=(const CreateInstanceRequestSystemDisk &) = default ;
    CreateInstanceRequestSystemDisk& operator=(CreateInstanceRequestSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->size_ != nullptr; };
    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline CreateInstanceRequestSystemDisk& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The size of the system disk. Unit: GiB. Valid values: **20** and **40**. The value cannot be smaller than the size of the image and must be a multiple of 10 GiB.
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
