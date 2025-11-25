// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETTIMETOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETTIMETOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInternetTimeTopResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetTimeTopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetTimeTopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCount, dataCount_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficTime, trafficTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetTimeTopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficTime, trafficTime_);
    };
    DescribeInternetTimeTopResponseBody() = default ;
    DescribeInternetTimeTopResponseBody(const DescribeInternetTimeTopResponseBody &) = default ;
    DescribeInternetTimeTopResponseBody(DescribeInternetTimeTopResponseBody &&) = default ;
    DescribeInternetTimeTopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetTimeTopResponseBody() = default ;
    DescribeInternetTimeTopResponseBody& operator=(const DescribeInternetTimeTopResponseBody &) = default ;
    DescribeInternetTimeTopResponseBody& operator=(DescribeInternetTimeTopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataCount_ == nullptr
        && return this->dataList_ == nullptr && return this->requestId_ == nullptr && return this->trafficTime_ == nullptr; };
    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int32_t dataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0) };
    inline DescribeInternetTimeTopResponseBody& setDataCount(int32_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetTimeTopResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetTimeTopResponseBodyDataList>) };
    inline vector<DescribeInternetTimeTopResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetTimeTopResponseBodyDataList>) };
    inline DescribeInternetTimeTopResponseBody& setDataList(const vector<DescribeInternetTimeTopResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetTimeTopResponseBody& setDataList(vector<DescribeInternetTimeTopResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetTimeTopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficTime Field Functions 
    bool hasTrafficTime() const { return this->trafficTime_ != nullptr;};
    void deleteTrafficTime() { this->trafficTime_ = nullptr;};
    inline int32_t trafficTime() const { DARABONBA_PTR_GET_DEFAULT(trafficTime_, 0) };
    inline DescribeInternetTimeTopResponseBody& setTrafficTime(int32_t trafficTime) { DARABONBA_PTR_SET_VALUE(trafficTime_, trafficTime) };


  protected:
    std::shared_ptr<int32_t> dataCount_ = nullptr;
    std::shared_ptr<vector<DescribeInternetTimeTopResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> trafficTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
