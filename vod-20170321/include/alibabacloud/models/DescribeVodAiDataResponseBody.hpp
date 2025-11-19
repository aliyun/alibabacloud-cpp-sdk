// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODAIDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodAIDataResponseBodyAIData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodAIDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodAIDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AIData, AIData_);
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodAIDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AIData, AIData_);
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodAIDataResponseBody() = default ;
    DescribeVodAIDataResponseBody(const DescribeVodAIDataResponseBody &) = default ;
    DescribeVodAIDataResponseBody(DescribeVodAIDataResponseBody &&) = default ;
    DescribeVodAIDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodAIDataResponseBody() = default ;
    DescribeVodAIDataResponseBody& operator=(const DescribeVodAIDataResponseBody &) = default ;
    DescribeVodAIDataResponseBody& operator=(DescribeVodAIDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIData_ == nullptr
        && return this->dataInterval_ == nullptr && return this->requestId_ == nullptr; };
    // AIData Field Functions 
    bool hasAIData() const { return this->AIData_ != nullptr;};
    void deleteAIData() { this->AIData_ = nullptr;};
    inline const DescribeVodAIDataResponseBodyAIData & AIData() const { DARABONBA_PTR_GET_CONST(AIData_, DescribeVodAIDataResponseBodyAIData) };
    inline DescribeVodAIDataResponseBodyAIData AIData() { DARABONBA_PTR_GET(AIData_, DescribeVodAIDataResponseBodyAIData) };
    inline DescribeVodAIDataResponseBody& setAIData(const DescribeVodAIDataResponseBodyAIData & AIData) { DARABONBA_PTR_SET_VALUE(AIData_, AIData) };
    inline DescribeVodAIDataResponseBody& setAIData(DescribeVodAIDataResponseBodyAIData && AIData) { DARABONBA_PTR_SET_RVALUE(AIData_, AIData) };


    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string dataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodAIDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodAIDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on video AI.
    std::shared_ptr<DescribeVodAIDataResponseBodyAIData> AIData_ = nullptr;
    // The time granularity at which the data was queried. Valid values:
    // 
    // *   **hour**
    // *   **day**
    std::shared_ptr<string> dataInterval_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
