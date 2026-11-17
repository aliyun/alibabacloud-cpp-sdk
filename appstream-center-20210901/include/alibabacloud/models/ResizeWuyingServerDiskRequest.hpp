// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIZEWUYINGSERVERDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESIZEWUYINGSERVERDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ResizeWuyingServerDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResizeWuyingServerDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataDiskList, dataDiskList_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SystemDiskNewSize, systemDiskNewSize_);
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
    };
    friend void from_json(const Darabonba::Json& j, ResizeWuyingServerDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataDiskList, dataDiskList_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SystemDiskNewSize, systemDiskNewSize_);
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
    };
    ResizeWuyingServerDiskRequest() = default ;
    ResizeWuyingServerDiskRequest(const ResizeWuyingServerDiskRequest &) = default ;
    ResizeWuyingServerDiskRequest(ResizeWuyingServerDiskRequest &&) = default ;
    ResizeWuyingServerDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResizeWuyingServerDiskRequest() = default ;
    ResizeWuyingServerDiskRequest& operator=(const ResizeWuyingServerDiskRequest &) = default ;
    ResizeWuyingServerDiskRequest& operator=(ResizeWuyingServerDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataDiskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDiskList& obj) { 
        DARABONBA_PTR_TO_JSON(DiskNo, diskNo_);
        DARABONBA_PTR_TO_JSON(DiskSubType, diskSubType_);
        DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        DARABONBA_PTR_TO_JSON(NewSize, newSize_);
      };
      friend void from_json(const Darabonba::Json& j, DataDiskList& obj) { 
        DARABONBA_PTR_FROM_JSON(DiskNo, diskNo_);
        DARABONBA_PTR_FROM_JSON(DiskSubType, diskSubType_);
        DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        DARABONBA_PTR_FROM_JSON(NewSize, newSize_);
      };
      DataDiskList() = default ;
      DataDiskList(const DataDiskList &) = default ;
      DataDiskList(DataDiskList &&) = default ;
      DataDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDiskList() = default ;
      DataDiskList& operator=(const DataDiskList &) = default ;
      DataDiskList& operator=(DataDiskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->diskNo_ == nullptr
        && this->diskSubType_ == nullptr && this->diskType_ == nullptr && this->newSize_ == nullptr; };
      // diskNo Field Functions 
      bool hasDiskNo() const { return this->diskNo_ != nullptr;};
      void deleteDiskNo() { this->diskNo_ = nullptr;};
      inline string getDiskNo() const { DARABONBA_PTR_GET_DEFAULT(diskNo_, "") };
      inline DataDiskList& setDiskNo(string diskNo) { DARABONBA_PTR_SET_VALUE(diskNo_, diskNo) };


      // diskSubType Field Functions 
      bool hasDiskSubType() const { return this->diskSubType_ != nullptr;};
      void deleteDiskSubType() { this->diskSubType_ = nullptr;};
      inline string getDiskSubType() const { DARABONBA_PTR_GET_DEFAULT(diskSubType_, "") };
      inline DataDiskList& setDiskSubType(string diskSubType) { DARABONBA_PTR_SET_VALUE(diskSubType_, diskSubType) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline DataDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // newSize Field Functions 
      bool hasNewSize() const { return this->newSize_ != nullptr;};
      void deleteNewSize() { this->newSize_ = nullptr;};
      inline int32_t getNewSize() const { DARABONBA_PTR_GET_DEFAULT(newSize_, 0) };
      inline DataDiskList& setNewSize(int32_t newSize) { DARABONBA_PTR_SET_VALUE(newSize_, newSize) };


    protected:
      // The disk number.
      shared_ptr<string> diskNo_ {};
      // The disk subtype.
      shared_ptr<string> diskSubType_ {};
      // The type of disk data included in the image. By default, the system cloud disk and data cloud disks of the instance are included.
      shared_ptr<string> diskType_ {};
      // The new size.
      shared_ptr<int32_t> newSize_ {};
    };

    virtual bool empty() const override { return this->dataDiskList_ == nullptr
        && this->productType_ == nullptr && this->systemDiskNewSize_ == nullptr && this->wuyingServerId_ == nullptr; };
    // dataDiskList Field Functions 
    bool hasDataDiskList() const { return this->dataDiskList_ != nullptr;};
    void deleteDataDiskList() { this->dataDiskList_ = nullptr;};
    inline const vector<ResizeWuyingServerDiskRequest::DataDiskList> & getDataDiskList() const { DARABONBA_PTR_GET_CONST(dataDiskList_, vector<ResizeWuyingServerDiskRequest::DataDiskList>) };
    inline vector<ResizeWuyingServerDiskRequest::DataDiskList> getDataDiskList() { DARABONBA_PTR_GET(dataDiskList_, vector<ResizeWuyingServerDiskRequest::DataDiskList>) };
    inline ResizeWuyingServerDiskRequest& setDataDiskList(const vector<ResizeWuyingServerDiskRequest::DataDiskList> & dataDiskList) { DARABONBA_PTR_SET_VALUE(dataDiskList_, dataDiskList) };
    inline ResizeWuyingServerDiskRequest& setDataDiskList(vector<ResizeWuyingServerDiskRequest::DataDiskList> && dataDiskList) { DARABONBA_PTR_SET_RVALUE(dataDiskList_, dataDiskList) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ResizeWuyingServerDiskRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // systemDiskNewSize Field Functions 
    bool hasSystemDiskNewSize() const { return this->systemDiskNewSize_ != nullptr;};
    void deleteSystemDiskNewSize() { this->systemDiskNewSize_ = nullptr;};
    inline int32_t getSystemDiskNewSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskNewSize_, 0) };
    inline ResizeWuyingServerDiskRequest& setSystemDiskNewSize(int32_t systemDiskNewSize) { DARABONBA_PTR_SET_VALUE(systemDiskNewSize_, systemDiskNewSize) };


    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string getWuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline ResizeWuyingServerDiskRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


  protected:
    // The size and specifications of the data cloud disks.
    shared_ptr<vector<ResizeWuyingServerDiskRequest::DataDiskList>> dataDiskList_ {};
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
