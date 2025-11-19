// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODSTORAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODSTORAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodStorageDataResponseBodyStorageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodStorageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodStorageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StorageData, storageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodStorageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StorageData, storageData_);
    };
    DescribeVodStorageDataResponseBody() = default ;
    DescribeVodStorageDataResponseBody(const DescribeVodStorageDataResponseBody &) = default ;
    DescribeVodStorageDataResponseBody(DescribeVodStorageDataResponseBody &&) = default ;
    DescribeVodStorageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodStorageDataResponseBody() = default ;
    DescribeVodStorageDataResponseBody& operator=(const DescribeVodStorageDataResponseBody &) = default ;
    DescribeVodStorageDataResponseBody& operator=(DescribeVodStorageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && return this->requestId_ == nullptr && return this->storageData_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodStorageDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodStorageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // storageData Field Functions 
    bool hasStorageData() const { return this->storageData_ != nullptr;};
    void deleteStorageData() { this->storageData_ = nullptr;};
    inline const DescribeVodStorageDataResponseBodyStorageData & storageData() const { DARABONBA_PTR_GET_CONST(storageData_, DescribeVodStorageDataResponseBodyStorageData) };
    inline DescribeVodStorageDataResponseBodyStorageData storageData() { DARABONBA_PTR_GET(storageData_, DescribeVodStorageDataResponseBodyStorageData) };
    inline DescribeVodStorageDataResponseBody& setStorageData(const DescribeVodStorageDataResponseBodyStorageData & storageData) { DARABONBA_PTR_SET_VALUE(storageData_, storageData) };
    inline DescribeVodStorageDataResponseBody& setStorageData(DescribeVodStorageDataResponseBodyStorageData && storageData) { DARABONBA_PTR_SET_RVALUE(storageData_, storageData) };


  protected:
    // The time granularity at which the data was queried. Valid values:
    // 
    // *   **hour**
    // *   **day**
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The storage usage data returned.
    std::shared_ptr<DescribeVodStorageDataResponseBodyStorageData> storageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
