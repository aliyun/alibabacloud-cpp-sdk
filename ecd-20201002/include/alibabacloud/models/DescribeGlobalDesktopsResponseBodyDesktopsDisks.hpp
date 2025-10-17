// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSRESPONSEBODYDESKTOPSDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDESKTOPSRESPONSEBODYDESKTOPSDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class DescribeGlobalDesktopsResponseBodyDesktopsDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDesktopsResponseBodyDesktopsDisks& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDesktopsResponseBodyDesktopsDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
    };
    DescribeGlobalDesktopsResponseBodyDesktopsDisks() = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsDisks(const DescribeGlobalDesktopsResponseBodyDesktopsDisks &) = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsDisks(DescribeGlobalDesktopsResponseBodyDesktopsDisks &&) = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDesktopsResponseBodyDesktopsDisks() = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsDisks& operator=(const DescribeGlobalDesktopsResponseBodyDesktopsDisks &) = default ;
    DescribeGlobalDesktopsResponseBodyDesktopsDisks& operator=(DescribeGlobalDesktopsResponseBodyDesktopsDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskId_ == nullptr
        && return this->diskSize_ == nullptr && return this->diskType_ == nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsDisks& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline DescribeGlobalDesktopsResponseBodyDesktopsDisks& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeGlobalDesktopsResponseBodyDesktopsDisks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


  protected:
    std::shared_ptr<string> diskId_ = nullptr;
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
