// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFERHISTORYRESPONSEBODYHISTORYDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFERHISTORYRESPONSEBODYHISTORYDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeTransferHistoryResponseBodyHistoryDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransferHistoryResponseBodyHistoryDetails& obj) { 
      DARABONBA_PTR_TO_JSON(HistoryDetail, historyDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransferHistoryResponseBodyHistoryDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(HistoryDetail, historyDetail_);
    };
    DescribeTransferHistoryResponseBodyHistoryDetails() = default ;
    DescribeTransferHistoryResponseBodyHistoryDetails(const DescribeTransferHistoryResponseBodyHistoryDetails &) = default ;
    DescribeTransferHistoryResponseBodyHistoryDetails(DescribeTransferHistoryResponseBodyHistoryDetails &&) = default ;
    DescribeTransferHistoryResponseBodyHistoryDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransferHistoryResponseBodyHistoryDetails() = default ;
    DescribeTransferHistoryResponseBodyHistoryDetails& operator=(const DescribeTransferHistoryResponseBodyHistoryDetails &) = default ;
    DescribeTransferHistoryResponseBodyHistoryDetails& operator=(DescribeTransferHistoryResponseBodyHistoryDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->historyDetail_ == nullptr; };
    // historyDetail Field Functions 
    bool hasHistoryDetail() const { return this->historyDetail_ != nullptr;};
    void deleteHistoryDetail() { this->historyDetail_ = nullptr;};
    inline const vector<Models::DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail> & historyDetail() const { DARABONBA_PTR_GET_CONST(historyDetail_, vector<Models::DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail>) };
    inline vector<Models::DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail> historyDetail() { DARABONBA_PTR_GET(historyDetail_, vector<Models::DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail>) };
    inline DescribeTransferHistoryResponseBodyHistoryDetails& setHistoryDetail(const vector<Models::DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail> & historyDetail) { DARABONBA_PTR_SET_VALUE(historyDetail_, historyDetail) };
    inline DescribeTransferHistoryResponseBodyHistoryDetails& setHistoryDetail(vector<Models::DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail> && historyDetail) { DARABONBA_PTR_SET_RVALUE(historyDetail_, historyDetail) };


  protected:
    std::shared_ptr<vector<Models::DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail>> historyDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
