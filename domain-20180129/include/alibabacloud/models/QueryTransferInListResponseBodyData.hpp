// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTRANSFERINLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTRANSFERINLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTransferInListResponseBodyDataTransferInInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryTransferInListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTransferInListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TransferInInfo, transferInInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTransferInListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TransferInInfo, transferInInfo_);
    };
    QueryTransferInListResponseBodyData() = default ;
    QueryTransferInListResponseBodyData(const QueryTransferInListResponseBodyData &) = default ;
    QueryTransferInListResponseBodyData(QueryTransferInListResponseBodyData &&) = default ;
    QueryTransferInListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTransferInListResponseBodyData() = default ;
    QueryTransferInListResponseBodyData& operator=(const QueryTransferInListResponseBodyData &) = default ;
    QueryTransferInListResponseBodyData& operator=(QueryTransferInListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transferInInfo_ == nullptr; };
    // transferInInfo Field Functions 
    bool hasTransferInInfo() const { return this->transferInInfo_ != nullptr;};
    void deleteTransferInInfo() { this->transferInInfo_ = nullptr;};
    inline const vector<Models::QueryTransferInListResponseBodyDataTransferInInfo> & transferInInfo() const { DARABONBA_PTR_GET_CONST(transferInInfo_, vector<Models::QueryTransferInListResponseBodyDataTransferInInfo>) };
    inline vector<Models::QueryTransferInListResponseBodyDataTransferInInfo> transferInInfo() { DARABONBA_PTR_GET(transferInInfo_, vector<Models::QueryTransferInListResponseBodyDataTransferInInfo>) };
    inline QueryTransferInListResponseBodyData& setTransferInInfo(const vector<Models::QueryTransferInListResponseBodyDataTransferInInfo> & transferInInfo) { DARABONBA_PTR_SET_VALUE(transferInInfo_, transferInInfo) };
    inline QueryTransferInListResponseBodyData& setTransferInInfo(vector<Models::QueryTransferInListResponseBodyDataTransferInInfo> && transferInInfo) { DARABONBA_PTR_SET_RVALUE(transferInInfo_, transferInInfo) };


  protected:
    std::shared_ptr<vector<Models::QueryTransferInListResponseBodyDataTransferInInfo>> transferInInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
