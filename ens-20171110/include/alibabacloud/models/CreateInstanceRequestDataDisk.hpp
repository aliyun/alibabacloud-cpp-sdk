// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTDATADISK_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUESTDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateInstanceRequestDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequestDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequestDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    CreateInstanceRequestDataDisk() = default ;
    CreateInstanceRequestDataDisk(const CreateInstanceRequestDataDisk &) = default ;
    CreateInstanceRequestDataDisk(CreateInstanceRequestDataDisk &&) = default ;
    CreateInstanceRequestDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequestDataDisk() = default ;
    CreateInstanceRequestDataDisk& operator=(const CreateInstanceRequestDataDisk &) = default ;
    CreateInstanceRequestDataDisk& operator=(CreateInstanceRequestDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->size_ == nullptr; };
    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline CreateInstanceRequestDataDisk& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The capacity of the first data disk. Unit: GiB. The capacity is at least 20 GiB and is a multiple of 10 GiB.
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
