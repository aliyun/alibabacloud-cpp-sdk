// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFERHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFERHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTransferHistoryResponseBodyHistoryDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeTransferHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransferHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HistoryDetails, historyDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransferHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoryDetails, historyDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTransferHistoryResponseBody() = default ;
    DescribeTransferHistoryResponseBody(const DescribeTransferHistoryResponseBody &) = default ;
    DescribeTransferHistoryResponseBody(DescribeTransferHistoryResponseBody &&) = default ;
    DescribeTransferHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransferHistoryResponseBody() = default ;
    DescribeTransferHistoryResponseBody& operator=(const DescribeTransferHistoryResponseBody &) = default ;
    DescribeTransferHistoryResponseBody& operator=(DescribeTransferHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->historyDetails_ == nullptr
        && return this->requestId_ == nullptr; };
    // historyDetails Field Functions 
    bool hasHistoryDetails() const { return this->historyDetails_ != nullptr;};
    void deleteHistoryDetails() { this->historyDetails_ = nullptr;};
    inline const DescribeTransferHistoryResponseBodyHistoryDetails & historyDetails() const { DARABONBA_PTR_GET_CONST(historyDetails_, DescribeTransferHistoryResponseBodyHistoryDetails) };
    inline DescribeTransferHistoryResponseBodyHistoryDetails historyDetails() { DARABONBA_PTR_GET(historyDetails_, DescribeTransferHistoryResponseBodyHistoryDetails) };
    inline DescribeTransferHistoryResponseBody& setHistoryDetails(const DescribeTransferHistoryResponseBodyHistoryDetails & historyDetails) { DARABONBA_PTR_SET_VALUE(historyDetails_, historyDetails) };
    inline DescribeTransferHistoryResponseBody& setHistoryDetails(DescribeTransferHistoryResponseBodyHistoryDetails && historyDetails) { DARABONBA_PTR_SET_RVALUE(historyDetails_, historyDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransferHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The migration information.
    std::shared_ptr<DescribeTransferHistoryResponseBodyHistoryDetails> historyDetails_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
