// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESHOWSTORAGEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESHOWSTORAGEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeShowStorageInfoResponseBodyDataStorageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeShowStorageInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeShowStorageInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(StorageInfos, storageInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeShowStorageInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageInfos, storageInfos_);
    };
    DescribeShowStorageInfoResponseBodyData() = default ;
    DescribeShowStorageInfoResponseBodyData(const DescribeShowStorageInfoResponseBodyData &) = default ;
    DescribeShowStorageInfoResponseBodyData(DescribeShowStorageInfoResponseBodyData &&) = default ;
    DescribeShowStorageInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeShowStorageInfoResponseBodyData() = default ;
    DescribeShowStorageInfoResponseBodyData& operator=(const DescribeShowStorageInfoResponseBodyData &) = default ;
    DescribeShowStorageInfoResponseBodyData& operator=(DescribeShowStorageInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->storageInfos_ == nullptr; };
    // storageInfos Field Functions 
    bool hasStorageInfos() const { return this->storageInfos_ != nullptr;};
    void deleteStorageInfos() { this->storageInfos_ = nullptr;};
    inline const vector<Models::DescribeShowStorageInfoResponseBodyDataStorageInfos> & storageInfos() const { DARABONBA_PTR_GET_CONST(storageInfos_, vector<Models::DescribeShowStorageInfoResponseBodyDataStorageInfos>) };
    inline vector<Models::DescribeShowStorageInfoResponseBodyDataStorageInfos> storageInfos() { DARABONBA_PTR_GET(storageInfos_, vector<Models::DescribeShowStorageInfoResponseBodyDataStorageInfos>) };
    inline DescribeShowStorageInfoResponseBodyData& setStorageInfos(const vector<Models::DescribeShowStorageInfoResponseBodyDataStorageInfos> & storageInfos) { DARABONBA_PTR_SET_VALUE(storageInfos_, storageInfos) };
    inline DescribeShowStorageInfoResponseBodyData& setStorageInfos(vector<Models::DescribeShowStorageInfoResponseBodyDataStorageInfos> && storageInfos) { DARABONBA_PTR_SET_RVALUE(storageInfos_, storageInfos) };


  protected:
    std::shared_ptr<vector<Models::DescribeShowStorageInfoResponseBodyDataStorageInfos>> storageInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
