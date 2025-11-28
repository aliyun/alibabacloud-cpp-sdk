// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGEDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGEDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListEdgeDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListEdgeDeviceRequest() = default ;
    ListEdgeDeviceRequest(const ListEdgeDeviceRequest &) = default ;
    ListEdgeDeviceRequest(ListEdgeDeviceRequest &&) = default ;
    ListEdgeDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeDeviceRequest() = default ;
    ListEdgeDeviceRequest& operator=(const ListEdgeDeviceRequest &) = default ;
    ListEdgeDeviceRequest& operator=(ListEdgeDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->num_ == nullptr && return this->productKey_ == nullptr && return this->regionId_ == nullptr && return this->size_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListEdgeDeviceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int32_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0) };
    inline ListEdgeDeviceRequest& setNum(int32_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string productKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline ListEdgeDeviceRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEdgeDeviceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListEdgeDeviceRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> num_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productKey_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
