// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASETINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASETINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDatasetInfoResponseBodyDatasetInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDatasetInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatasetInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetInfo, datasetInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatasetInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetInfo, datasetInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDatasetInfoResponseBody() = default ;
    DescribeDatasetInfoResponseBody(const DescribeDatasetInfoResponseBody &) = default ;
    DescribeDatasetInfoResponseBody(DescribeDatasetInfoResponseBody &&) = default ;
    DescribeDatasetInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatasetInfoResponseBody() = default ;
    DescribeDatasetInfoResponseBody& operator=(const DescribeDatasetInfoResponseBody &) = default ;
    DescribeDatasetInfoResponseBody& operator=(DescribeDatasetInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // datasetInfo Field Functions 
    bool hasDatasetInfo() const { return this->datasetInfo_ != nullptr;};
    void deleteDatasetInfo() { this->datasetInfo_ = nullptr;};
    inline const DescribeDatasetInfoResponseBodyDatasetInfo & datasetInfo() const { DARABONBA_PTR_GET_CONST(datasetInfo_, DescribeDatasetInfoResponseBodyDatasetInfo) };
    inline DescribeDatasetInfoResponseBodyDatasetInfo datasetInfo() { DARABONBA_PTR_GET(datasetInfo_, DescribeDatasetInfoResponseBodyDatasetInfo) };
    inline DescribeDatasetInfoResponseBody& setDatasetInfo(const DescribeDatasetInfoResponseBodyDatasetInfo & datasetInfo) { DARABONBA_PTR_SET_VALUE(datasetInfo_, datasetInfo) };
    inline DescribeDatasetInfoResponseBody& setDatasetInfo(DescribeDatasetInfoResponseBodyDatasetInfo && datasetInfo) { DARABONBA_PTR_SET_RVALUE(datasetInfo_, datasetInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatasetInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The dataset info.
    std::shared_ptr<DescribeDatasetInfoResponseBodyDatasetInfo> datasetInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
