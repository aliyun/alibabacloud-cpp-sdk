// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKTRAFFICTOPRATIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKTRAFFICTOPRATIORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkTrafficTopRatioResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkTrafficTopRatioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkTrafficTopRatioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCount, dataCount_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkTrafficTopRatioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNetworkTrafficTopRatioResponseBody() = default ;
    DescribeNetworkTrafficTopRatioResponseBody(const DescribeNetworkTrafficTopRatioResponseBody &) = default ;
    DescribeNetworkTrafficTopRatioResponseBody(DescribeNetworkTrafficTopRatioResponseBody &&) = default ;
    DescribeNetworkTrafficTopRatioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkTrafficTopRatioResponseBody() = default ;
    DescribeNetworkTrafficTopRatioResponseBody& operator=(const DescribeNetworkTrafficTopRatioResponseBody &) = default ;
    DescribeNetworkTrafficTopRatioResponseBody& operator=(DescribeNetworkTrafficTopRatioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataCount_ == nullptr
        && return this->dataList_ == nullptr && return this->dataType_ == nullptr && return this->requestId_ == nullptr; };
    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int32_t dataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0) };
    inline DescribeNetworkTrafficTopRatioResponseBody& setDataCount(int32_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeNetworkTrafficTopRatioResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeNetworkTrafficTopRatioResponseBodyDataList>) };
    inline vector<DescribeNetworkTrafficTopRatioResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeNetworkTrafficTopRatioResponseBodyDataList>) };
    inline DescribeNetworkTrafficTopRatioResponseBody& setDataList(const vector<DescribeNetworkTrafficTopRatioResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeNetworkTrafficTopRatioResponseBody& setDataList(vector<DescribeNetworkTrafficTopRatioResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DescribeNetworkTrafficTopRatioResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkTrafficTopRatioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> dataCount_ = nullptr;
    std::shared_ptr<vector<DescribeNetworkTrafficTopRatioResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
