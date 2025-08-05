// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESSTORAGETIERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYDATAPROPERTIESSTORAGETIERINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetProjectResponseBodyDataPropertiesStorageTierInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyDataPropertiesStorageTierInfo& obj) { 
      DARABONBA_PTR_TO_JSON(projectBackupSize, projectBackupSize_);
      DARABONBA_PTR_TO_JSON(projectTotalSize, projectTotalSize_);
      DARABONBA_PTR_TO_JSON(storageTierSize, storageTierSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyDataPropertiesStorageTierInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(projectBackupSize, projectBackupSize_);
      DARABONBA_PTR_FROM_JSON(projectTotalSize, projectTotalSize_);
      DARABONBA_PTR_FROM_JSON(storageTierSize, storageTierSize_);
    };
    GetProjectResponseBodyDataPropertiesStorageTierInfo() = default ;
    GetProjectResponseBodyDataPropertiesStorageTierInfo(const GetProjectResponseBodyDataPropertiesStorageTierInfo &) = default ;
    GetProjectResponseBodyDataPropertiesStorageTierInfo(GetProjectResponseBodyDataPropertiesStorageTierInfo &&) = default ;
    GetProjectResponseBodyDataPropertiesStorageTierInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyDataPropertiesStorageTierInfo() = default ;
    GetProjectResponseBodyDataPropertiesStorageTierInfo& operator=(const GetProjectResponseBodyDataPropertiesStorageTierInfo &) = default ;
    GetProjectResponseBodyDataPropertiesStorageTierInfo& operator=(GetProjectResponseBodyDataPropertiesStorageTierInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectBackupSize_ != nullptr
        && this->projectTotalSize_ != nullptr && this->storageTierSize_ != nullptr; };
    // projectBackupSize Field Functions 
    bool hasProjectBackupSize() const { return this->projectBackupSize_ != nullptr;};
    void deleteProjectBackupSize() { this->projectBackupSize_ = nullptr;};
    inline int64_t projectBackupSize() const { DARABONBA_PTR_GET_DEFAULT(projectBackupSize_, 0L) };
    inline GetProjectResponseBodyDataPropertiesStorageTierInfo& setProjectBackupSize(int64_t projectBackupSize) { DARABONBA_PTR_SET_VALUE(projectBackupSize_, projectBackupSize) };


    // projectTotalSize Field Functions 
    bool hasProjectTotalSize() const { return this->projectTotalSize_ != nullptr;};
    void deleteProjectTotalSize() { this->projectTotalSize_ = nullptr;};
    inline int64_t projectTotalSize() const { DARABONBA_PTR_GET_DEFAULT(projectTotalSize_, 0L) };
    inline GetProjectResponseBodyDataPropertiesStorageTierInfo& setProjectTotalSize(int64_t projectTotalSize) { DARABONBA_PTR_SET_VALUE(projectTotalSize_, projectTotalSize) };


    // storageTierSize Field Functions 
    bool hasStorageTierSize() const { return this->storageTierSize_ != nullptr;};
    void deleteStorageTierSize() { this->storageTierSize_ = nullptr;};
    inline const Models::GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize & storageTierSize() const { DARABONBA_PTR_GET_CONST(storageTierSize_, Models::GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize) };
    inline Models::GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize storageTierSize() { DARABONBA_PTR_GET(storageTierSize_, Models::GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize) };
    inline GetProjectResponseBodyDataPropertiesStorageTierInfo& setStorageTierSize(const Models::GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize & storageTierSize) { DARABONBA_PTR_SET_VALUE(storageTierSize_, storageTierSize) };
    inline GetProjectResponseBodyDataPropertiesStorageTierInfo& setStorageTierSize(Models::GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize && storageTierSize) { DARABONBA_PTR_SET_RVALUE(storageTierSize_, storageTierSize) };


  protected:
    // The backup storage usage.
    std::shared_ptr<int64_t> projectBackupSize_ = nullptr;
    // The total storage usage.
    std::shared_ptr<int64_t> projectTotalSize_ = nullptr;
    // The [storage tier](https://www.alibabacloud.com/help/zh/maxcompute/user-guide/tiered-storage) information.
    std::shared_ptr<Models::GetProjectResponseBodyDataPropertiesStorageTierInfoStorageTierSize> storageTierSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
