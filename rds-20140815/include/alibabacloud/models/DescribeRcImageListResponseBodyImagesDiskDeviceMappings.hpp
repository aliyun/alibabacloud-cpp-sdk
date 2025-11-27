// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCIMAGELISTRESPONSEBODYIMAGESDISKDEVICEMAPPINGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCIMAGELISTRESPONSEBODYIMAGESDISKDEVICEMAPPINGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCImageListResponseBodyImagesDiskDeviceMappings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCImageListResponseBodyImagesDiskDeviceMappings& obj) { 
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCImageListResponseBodyImagesDiskDeviceMappings& obj) { 
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeRCImageListResponseBodyImagesDiskDeviceMappings() = default ;
    DescribeRCImageListResponseBodyImagesDiskDeviceMappings(const DescribeRCImageListResponseBodyImagesDiskDeviceMappings &) = default ;
    DescribeRCImageListResponseBodyImagesDiskDeviceMappings(DescribeRCImageListResponseBodyImagesDiskDeviceMappings &&) = default ;
    DescribeRCImageListResponseBodyImagesDiskDeviceMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCImageListResponseBodyImagesDiskDeviceMappings() = default ;
    DescribeRCImageListResponseBodyImagesDiskDeviceMappings& operator=(const DescribeRCImageListResponseBodyImagesDiskDeviceMappings &) = default ;
    DescribeRCImageListResponseBodyImagesDiskDeviceMappings& operator=(DescribeRCImageListResponseBodyImagesDiskDeviceMappings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->device_ == nullptr
        && return this->size_ == nullptr && return this->type_ == nullptr; };
    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline string device() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
    inline DescribeRCImageListResponseBodyImagesDiskDeviceMappings& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline DescribeRCImageListResponseBodyImagesDiskDeviceMappings& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRCImageListResponseBodyImagesDiskDeviceMappings& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> device_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
