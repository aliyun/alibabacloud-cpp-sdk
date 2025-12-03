// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETITEMINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETITEMINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDatasetItemInfoResponseBodyDatasetItemInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDatasetItemInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetItemInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetItemInfo, datasetItemInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetItemInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetItemInfo, datasetItemInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDatasetItemInfoResponseBody() = default ;
    DescribeDatasetItemInfoResponseBody(const DescribeDatasetItemInfoResponseBody &) = default ;
    DescribeDatasetItemInfoResponseBody(DescribeDatasetItemInfoResponseBody &&) = default ;
    DescribeDatasetItemInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetItemInfoResponseBody() = default ;
    DescribeDatasetItemInfoResponseBody& operator=(const DescribeDatasetItemInfoResponseBody &) = default ;
    DescribeDatasetItemInfoResponseBody& operator=(DescribeDatasetItemInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetItemInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // datasetItemInfo Field Functions 
    bool hasDatasetItemInfo() const { return this->datasetItemInfo_ != nullptr;};
    void deleteDatasetItemInfo() { this->datasetItemInfo_ = nullptr;};
    inline const DescribeDatasetItemInfoResponseBodyDatasetItemInfo & datasetItemInfo() const { DARABONBA_PTR_GET_CONST(datasetItemInfo_, DescribeDatasetItemInfoResponseBodyDatasetItemInfo) };
    inline DescribeDatasetItemInfoResponseBodyDatasetItemInfo datasetItemInfo() { DARABONBA_PTR_GET(datasetItemInfo_, DescribeDatasetItemInfoResponseBodyDatasetItemInfo) };
    inline DescribeDatasetItemInfoResponseBody& setDatasetItemInfo(const DescribeDatasetItemInfoResponseBodyDatasetItemInfo & datasetItemInfo) { DARABONBA_PTR_SET_VALUE(datasetItemInfo_, datasetItemInfo) };
    inline DescribeDatasetItemInfoResponseBody& setDatasetItemInfo(DescribeDatasetItemInfoResponseBodyDatasetItemInfo && datasetItemInfo) { DARABONBA_PTR_SET_RVALUE(datasetItemInfo_, datasetItemInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatasetItemInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Dataset information.
    std::shared_ptr<DescribeDatasetItemInfoResponseBodyDatasetItemInfo> datasetItemInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
