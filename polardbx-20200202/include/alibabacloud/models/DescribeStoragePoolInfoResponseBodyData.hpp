// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTORAGEPOOLINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTORAGEPOOLINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStoragePoolInfoResponseBodyDataStoragePools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeStoragePoolInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStoragePoolInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(StoragePools, storagePools_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStoragePoolInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(StoragePools, storagePools_);
    };
    DescribeStoragePoolInfoResponseBodyData() = default ;
    DescribeStoragePoolInfoResponseBodyData(const DescribeStoragePoolInfoResponseBodyData &) = default ;
    DescribeStoragePoolInfoResponseBodyData(DescribeStoragePoolInfoResponseBodyData &&) = default ;
    DescribeStoragePoolInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStoragePoolInfoResponseBodyData() = default ;
    DescribeStoragePoolInfoResponseBodyData& operator=(const DescribeStoragePoolInfoResponseBodyData &) = default ;
    DescribeStoragePoolInfoResponseBodyData& operator=(DescribeStoragePoolInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->storagePools_ == nullptr; };
    // storagePools Field Functions 
    bool hasStoragePools() const { return this->storagePools_ != nullptr;};
    void deleteStoragePools() { this->storagePools_ = nullptr;};
    inline const vector<Models::DescribeStoragePoolInfoResponseBodyDataStoragePools> & storagePools() const { DARABONBA_PTR_GET_CONST(storagePools_, vector<Models::DescribeStoragePoolInfoResponseBodyDataStoragePools>) };
    inline vector<Models::DescribeStoragePoolInfoResponseBodyDataStoragePools> storagePools() { DARABONBA_PTR_GET(storagePools_, vector<Models::DescribeStoragePoolInfoResponseBodyDataStoragePools>) };
    inline DescribeStoragePoolInfoResponseBodyData& setStoragePools(const vector<Models::DescribeStoragePoolInfoResponseBodyDataStoragePools> & storagePools) { DARABONBA_PTR_SET_VALUE(storagePools_, storagePools) };
    inline DescribeStoragePoolInfoResponseBodyData& setStoragePools(vector<Models::DescribeStoragePoolInfoResponseBodyDataStoragePools> && storagePools) { DARABONBA_PTR_SET_RVALUE(storagePools_, storagePools) };


  protected:
    std::shared_ptr<vector<Models::DescribeStoragePoolInfoResponseBodyDataStoragePools>> storagePools_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
