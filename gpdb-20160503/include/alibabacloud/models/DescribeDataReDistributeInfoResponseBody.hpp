// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAREDISTRIBUTEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAREDISTRIBUTEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDataReDistributeInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataReDistributeInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataReDistributeInfo, dataReDistributeInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataReDistributeInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataReDistributeInfo, dataReDistributeInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataReDistributeInfoResponseBody() = default ;
    DescribeDataReDistributeInfoResponseBody(const DescribeDataReDistributeInfoResponseBody &) = default ;
    DescribeDataReDistributeInfoResponseBody(DescribeDataReDistributeInfoResponseBody &&) = default ;
    DescribeDataReDistributeInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataReDistributeInfoResponseBody() = default ;
    DescribeDataReDistributeInfoResponseBody& operator=(const DescribeDataReDistributeInfoResponseBody &) = default ;
    DescribeDataReDistributeInfoResponseBody& operator=(DescribeDataReDistributeInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataReDistributeInfo_ == nullptr
        && return this->requestId_ == nullptr; };
    // dataReDistributeInfo Field Functions 
    bool hasDataReDistributeInfo() const { return this->dataReDistributeInfo_ != nullptr;};
    void deleteDataReDistributeInfo() { this->dataReDistributeInfo_ = nullptr;};
    inline const DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo & dataReDistributeInfo() const { DARABONBA_PTR_GET_CONST(dataReDistributeInfo_, DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo) };
    inline DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo dataReDistributeInfo() { DARABONBA_PTR_GET(dataReDistributeInfo_, DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo) };
    inline DescribeDataReDistributeInfoResponseBody& setDataReDistributeInfo(const DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo & dataReDistributeInfo) { DARABONBA_PTR_SET_VALUE(dataReDistributeInfo_, dataReDistributeInfo) };
    inline DescribeDataReDistributeInfoResponseBody& setDataReDistributeInfo(DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo && dataReDistributeInfo) { DARABONBA_PTR_SET_RVALUE(dataReDistributeInfo_, dataReDistributeInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataReDistributeInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data redistribution information.
    std::shared_ptr<DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo> dataReDistributeInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
