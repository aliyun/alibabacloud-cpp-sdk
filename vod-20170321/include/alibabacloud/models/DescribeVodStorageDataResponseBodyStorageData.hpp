// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSTORAGEDATARESPONSEBODYSTORAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSTORAGEDATARESPONSEBODYSTORAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodStorageDataResponseBodyStorageDataStorageDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodStorageDataResponseBodyStorageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodStorageDataResponseBodyStorageData& obj) { 
      DARABONBA_PTR_TO_JSON(StorageDataItem, storageDataItem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodStorageDataResponseBodyStorageData& obj) { 
      DARABONBA_PTR_FROM_JSON(StorageDataItem, storageDataItem_);
    };
    DescribeVodStorageDataResponseBodyStorageData() = default ;
    DescribeVodStorageDataResponseBodyStorageData(const DescribeVodStorageDataResponseBodyStorageData &) = default ;
    DescribeVodStorageDataResponseBodyStorageData(DescribeVodStorageDataResponseBodyStorageData &&) = default ;
    DescribeVodStorageDataResponseBodyStorageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodStorageDataResponseBodyStorageData() = default ;
    DescribeVodStorageDataResponseBodyStorageData& operator=(const DescribeVodStorageDataResponseBodyStorageData &) = default ;
    DescribeVodStorageDataResponseBodyStorageData& operator=(DescribeVodStorageDataResponseBodyStorageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->storageDataItem_ != nullptr; };
    // storageDataItem Field Functions 
    bool hasStorageDataItem() const { return this->storageDataItem_ != nullptr;};
    void deleteStorageDataItem() { this->storageDataItem_ = nullptr;};
    inline const vector<Models::DescribeVodStorageDataResponseBodyStorageDataStorageDataItem> & storageDataItem() const { DARABONBA_PTR_GET_CONST(storageDataItem_, vector<Models::DescribeVodStorageDataResponseBodyStorageDataStorageDataItem>) };
    inline vector<Models::DescribeVodStorageDataResponseBodyStorageDataStorageDataItem> storageDataItem() { DARABONBA_PTR_GET(storageDataItem_, vector<Models::DescribeVodStorageDataResponseBodyStorageDataStorageDataItem>) };
    inline DescribeVodStorageDataResponseBodyStorageData& setStorageDataItem(const vector<Models::DescribeVodStorageDataResponseBodyStorageDataStorageDataItem> & storageDataItem) { DARABONBA_PTR_SET_VALUE(storageDataItem_, storageDataItem) };
    inline DescribeVodStorageDataResponseBodyStorageData& setStorageDataItem(vector<Models::DescribeVodStorageDataResponseBodyStorageDataStorageDataItem> && storageDataItem) { DARABONBA_PTR_SET_RVALUE(storageDataItem_, storageDataItem) };


  protected:
    std::shared_ptr<vector<Models::DescribeVodStorageDataResponseBodyStorageDataStorageDataItem>> storageDataItem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
