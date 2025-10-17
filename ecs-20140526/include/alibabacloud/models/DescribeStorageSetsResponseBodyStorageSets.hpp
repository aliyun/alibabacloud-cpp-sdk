// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGESETSRESPONSEBODYSTORAGESETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGESETSRESPONSEBODYSTORAGESETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStorageSetsResponseBodyStorageSetsStorageSet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeStorageSetsResponseBodyStorageSets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStorageSetsResponseBodyStorageSets& obj) { 
      DARABONBA_PTR_TO_JSON(StorageSet, storageSet_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStorageSetsResponseBodyStorageSets& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageSet, storageSet_);
    };
    DescribeStorageSetsResponseBodyStorageSets() = default ;
    DescribeStorageSetsResponseBodyStorageSets(const DescribeStorageSetsResponseBodyStorageSets &) = default ;
    DescribeStorageSetsResponseBodyStorageSets(DescribeStorageSetsResponseBodyStorageSets &&) = default ;
    DescribeStorageSetsResponseBodyStorageSets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStorageSetsResponseBodyStorageSets() = default ;
    DescribeStorageSetsResponseBodyStorageSets& operator=(const DescribeStorageSetsResponseBodyStorageSets &) = default ;
    DescribeStorageSetsResponseBodyStorageSets& operator=(DescribeStorageSetsResponseBodyStorageSets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->storageSet_ == nullptr; };
    // storageSet Field Functions 
    bool hasStorageSet() const { return this->storageSet_ != nullptr;};
    void deleteStorageSet() { this->storageSet_ = nullptr;};
    inline const vector<Models::DescribeStorageSetsResponseBodyStorageSetsStorageSet> & storageSet() const { DARABONBA_PTR_GET_CONST(storageSet_, vector<Models::DescribeStorageSetsResponseBodyStorageSetsStorageSet>) };
    inline vector<Models::DescribeStorageSetsResponseBodyStorageSetsStorageSet> storageSet() { DARABONBA_PTR_GET(storageSet_, vector<Models::DescribeStorageSetsResponseBodyStorageSetsStorageSet>) };
    inline DescribeStorageSetsResponseBodyStorageSets& setStorageSet(const vector<Models::DescribeStorageSetsResponseBodyStorageSetsStorageSet> & storageSet) { DARABONBA_PTR_SET_VALUE(storageSet_, storageSet) };
    inline DescribeStorageSetsResponseBodyStorageSets& setStorageSet(vector<Models::DescribeStorageSetsResponseBodyStorageSetsStorageSet> && storageSet) { DARABONBA_PTR_SET_RVALUE(storageSet_, storageSet) };


  protected:
    std::shared_ptr<vector<Models::DescribeStorageSetsResponseBodyStorageSetsStorageSet>> storageSet_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
