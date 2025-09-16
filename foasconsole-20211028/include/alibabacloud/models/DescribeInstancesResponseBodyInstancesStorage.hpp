// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESSTORAGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESSTORAGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesStorageOss.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesStorage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesStorage& obj) { 
      DARABONBA_PTR_TO_JSON(FullyManaged, fullyManaged_);
      DARABONBA_PTR_TO_JSON(OrderState, orderState_);
      DARABONBA_PTR_TO_JSON(Oss, oss_);
      DARABONBA_PTR_TO_JSON(SupportCreateFullyManagedStorage, supportCreateFullyManagedStorage_);
      DARABONBA_PTR_TO_JSON(SupportMigrationProgressDetection, supportMigrationProgressDetection_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesStorage& obj) { 
      DARABONBA_PTR_FROM_JSON(FullyManaged, fullyManaged_);
      DARABONBA_PTR_FROM_JSON(OrderState, orderState_);
      DARABONBA_PTR_FROM_JSON(Oss, oss_);
      DARABONBA_PTR_FROM_JSON(SupportCreateFullyManagedStorage, supportCreateFullyManagedStorage_);
      DARABONBA_PTR_FROM_JSON(SupportMigrationProgressDetection, supportMigrationProgressDetection_);
    };
    DescribeInstancesResponseBodyInstancesStorage() = default ;
    DescribeInstancesResponseBodyInstancesStorage(const DescribeInstancesResponseBodyInstancesStorage &) = default ;
    DescribeInstancesResponseBodyInstancesStorage(DescribeInstancesResponseBodyInstancesStorage &&) = default ;
    DescribeInstancesResponseBodyInstancesStorage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesStorage() = default ;
    DescribeInstancesResponseBodyInstancesStorage& operator=(const DescribeInstancesResponseBodyInstancesStorage &) = default ;
    DescribeInstancesResponseBodyInstancesStorage& operator=(DescribeInstancesResponseBodyInstancesStorage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fullyManaged_ != nullptr
        && this->orderState_ != nullptr && this->oss_ != nullptr && this->supportCreateFullyManagedStorage_ != nullptr && this->supportMigrationProgressDetection_ != nullptr; };
    // fullyManaged Field Functions 
    bool hasFullyManaged() const { return this->fullyManaged_ != nullptr;};
    void deleteFullyManaged() { this->fullyManaged_ = nullptr;};
    inline bool fullyManaged() const { DARABONBA_PTR_GET_DEFAULT(fullyManaged_, false) };
    inline DescribeInstancesResponseBodyInstancesStorage& setFullyManaged(bool fullyManaged) { DARABONBA_PTR_SET_VALUE(fullyManaged_, fullyManaged) };


    // orderState Field Functions 
    bool hasOrderState() const { return this->orderState_ != nullptr;};
    void deleteOrderState() { this->orderState_ = nullptr;};
    inline string orderState() const { DARABONBA_PTR_GET_DEFAULT(orderState_, "") };
    inline DescribeInstancesResponseBodyInstancesStorage& setOrderState(string orderState) { DARABONBA_PTR_SET_VALUE(orderState_, orderState) };


    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesStorageOss & oss() const { DARABONBA_PTR_GET_CONST(oss_, Models::DescribeInstancesResponseBodyInstancesStorageOss) };
    inline Models::DescribeInstancesResponseBodyInstancesStorageOss oss() { DARABONBA_PTR_GET(oss_, Models::DescribeInstancesResponseBodyInstancesStorageOss) };
    inline DescribeInstancesResponseBodyInstancesStorage& setOss(const Models::DescribeInstancesResponseBodyInstancesStorageOss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
    inline DescribeInstancesResponseBodyInstancesStorage& setOss(Models::DescribeInstancesResponseBodyInstancesStorageOss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


    // supportCreateFullyManagedStorage Field Functions 
    bool hasSupportCreateFullyManagedStorage() const { return this->supportCreateFullyManagedStorage_ != nullptr;};
    void deleteSupportCreateFullyManagedStorage() { this->supportCreateFullyManagedStorage_ = nullptr;};
    inline bool supportCreateFullyManagedStorage() const { DARABONBA_PTR_GET_DEFAULT(supportCreateFullyManagedStorage_, false) };
    inline DescribeInstancesResponseBodyInstancesStorage& setSupportCreateFullyManagedStorage(bool supportCreateFullyManagedStorage) { DARABONBA_PTR_SET_VALUE(supportCreateFullyManagedStorage_, supportCreateFullyManagedStorage) };


    // supportMigrationProgressDetection Field Functions 
    bool hasSupportMigrationProgressDetection() const { return this->supportMigrationProgressDetection_ != nullptr;};
    void deleteSupportMigrationProgressDetection() { this->supportMigrationProgressDetection_ = nullptr;};
    inline bool supportMigrationProgressDetection() const { DARABONBA_PTR_GET_DEFAULT(supportMigrationProgressDetection_, false) };
    inline DescribeInstancesResponseBodyInstancesStorage& setSupportMigrationProgressDetection(bool supportMigrationProgressDetection) { DARABONBA_PTR_SET_VALUE(supportMigrationProgressDetection_, supportMigrationProgressDetection) };


  protected:
    std::shared_ptr<bool> fullyManaged_ = nullptr;
    std::shared_ptr<string> orderState_ = nullptr;
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesStorageOss> oss_ = nullptr;
    std::shared_ptr<bool> supportCreateFullyManagedStorage_ = nullptr;
    std::shared_ptr<bool> supportMigrationProgressDetection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
