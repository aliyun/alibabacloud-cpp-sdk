// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEWUYINGSERVERDISKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZEWUYINGSERVERDISKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ResizeWuyingServerDiskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeWuyingServerDiskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskList, dataDiskListShrink_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SystemDiskNewSize, systemDiskNewSize_);
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeWuyingServerDiskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskList, dataDiskListShrink_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SystemDiskNewSize, systemDiskNewSize_);
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
    };
    ResizeWuyingServerDiskShrinkRequest() = default ;
    ResizeWuyingServerDiskShrinkRequest(const ResizeWuyingServerDiskShrinkRequest &) = default ;
    ResizeWuyingServerDiskShrinkRequest(ResizeWuyingServerDiskShrinkRequest &&) = default ;
    ResizeWuyingServerDiskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeWuyingServerDiskShrinkRequest() = default ;
    ResizeWuyingServerDiskShrinkRequest& operator=(const ResizeWuyingServerDiskShrinkRequest &) = default ;
    ResizeWuyingServerDiskShrinkRequest& operator=(ResizeWuyingServerDiskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataDiskListShrink_ == nullptr
        && this->productType_ == nullptr && this->systemDiskNewSize_ == nullptr && this->wuyingServerId_ == nullptr; };
    // dataDiskListShrink Field Functions 
    bool hasDataDiskListShrink() const { return this->dataDiskListShrink_ != nullptr;};
    void deleteDataDiskListShrink() { this->dataDiskListShrink_ = nullptr;};
    inline string getDataDiskListShrink() const { DARABONBA_PTR_GET_DEFAULT(dataDiskListShrink_, "") };
    inline ResizeWuyingServerDiskShrinkRequest& setDataDiskListShrink(string dataDiskListShrink) { DARABONBA_PTR_SET_VALUE(dataDiskListShrink_, dataDiskListShrink) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ResizeWuyingServerDiskShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // systemDiskNewSize Field Functions 
    bool hasSystemDiskNewSize() const { return this->systemDiskNewSize_ != nullptr;};
    void deleteSystemDiskNewSize() { this->systemDiskNewSize_ = nullptr;};
    inline int32_t getSystemDiskNewSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskNewSize_, 0) };
    inline ResizeWuyingServerDiskShrinkRequest& setSystemDiskNewSize(int32_t systemDiskNewSize) { DARABONBA_PTR_SET_VALUE(systemDiskNewSize_, systemDiskNewSize) };


    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string getWuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline ResizeWuyingServerDiskShrinkRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


  protected:
    // The size and specifications of the data cloud disks.
    shared_ptr<string> dataDiskListShrink_ {};
    // The product type.
    shared_ptr<string> productType_ {};
    // The new size of the system cloud disk, in GB.
    shared_ptr<int32_t> systemDiskNewSize_ {};
    // The ID of the WUYING Workspace.
    shared_ptr<string> wuyingServerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
