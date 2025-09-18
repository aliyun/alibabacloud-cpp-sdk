// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODYDATACLUSTERINFOMILVUSRESOURCEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODYDATACLUSTERINFOMILVUSRESOURCEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(CuNum, cuNum_);
      DARABONBA_PTR_TO_JSON(CuRatio, cuRatio_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Replica, replica_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(CuNum, cuNum_);
      DARABONBA_PTR_FROM_JSON(CuRatio, cuRatio_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Replica, replica_);
    };
    GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList() = default ;
    GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList(const GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList &) = default ;
    GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList(GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList &&) = default ;
    GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList() = default ;
    GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList& operator=(const GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList &) = default ;
    GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList& operator=(GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentType_ != nullptr
        && this->cuNum_ != nullptr && this->cuRatio_ != nullptr && this->diskSize_ != nullptr && this->diskType_ != nullptr && this->replica_ != nullptr; };
    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // cuNum Field Functions 
    bool hasCuNum() const { return this->cuNum_ != nullptr;};
    void deleteCuNum() { this->cuNum_ = nullptr;};
    inline int32_t cuNum() const { DARABONBA_PTR_GET_DEFAULT(cuNum_, 0) };
    inline GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList& setCuNum(int32_t cuNum) { DARABONBA_PTR_SET_VALUE(cuNum_, cuNum) };


    // cuRatio Field Functions 
    bool hasCuRatio() const { return this->cuRatio_ != nullptr;};
    void deleteCuRatio() { this->cuRatio_ = nullptr;};
    inline int32_t cuRatio() const { DARABONBA_PTR_GET_DEFAULT(cuRatio_, 0) };
    inline GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList& setCuRatio(int32_t cuRatio) { DARABONBA_PTR_SET_VALUE(cuRatio_, cuRatio) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline int32_t replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
    inline GetInstanceDetailResponseBodyDataClusterInfoMilvusResourceInfoList& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


  protected:
    // The component type. Valid values:
    // 
    // *   standalone
    // *   proxy
    // *   mix_coordinator
    // *   query
    // *   index
    // *   data
    std::shared_ptr<string> componentType_ = nullptr;
    // The number of CUs.
    std::shared_ptr<int32_t> cuNum_ = nullptr;
    std::shared_ptr<int32_t> cuRatio_ = nullptr;
    // The disk size.
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    // The disk type.
    std::shared_ptr<string> diskType_ = nullptr;
    // The number of replicas.
    std::shared_ptr<int32_t> replica_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
