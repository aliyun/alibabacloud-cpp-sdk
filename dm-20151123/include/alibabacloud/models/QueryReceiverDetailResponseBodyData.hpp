// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECEIVERDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECEIVERDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryReceiverDetailResponseBodyDataDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryReceiverDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReceiverDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(detail, detail_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReceiverDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(detail, detail_);
    };
    QueryReceiverDetailResponseBodyData() = default ;
    QueryReceiverDetailResponseBodyData(const QueryReceiverDetailResponseBodyData &) = default ;
    QueryReceiverDetailResponseBodyData(QueryReceiverDetailResponseBodyData &&) = default ;
    QueryReceiverDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReceiverDetailResponseBodyData() = default ;
    QueryReceiverDetailResponseBodyData& operator=(const QueryReceiverDetailResponseBodyData &) = default ;
    QueryReceiverDetailResponseBodyData& operator=(QueryReceiverDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->detail_ != nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const vector<Models::QueryReceiverDetailResponseBodyDataDetail> & detail() const { DARABONBA_PTR_GET_CONST(detail_, vector<Models::QueryReceiverDetailResponseBodyDataDetail>) };
    inline vector<Models::QueryReceiverDetailResponseBodyDataDetail> detail() { DARABONBA_PTR_GET(detail_, vector<Models::QueryReceiverDetailResponseBodyDataDetail>) };
    inline QueryReceiverDetailResponseBodyData& setDetail(const vector<Models::QueryReceiverDetailResponseBodyDataDetail> & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline QueryReceiverDetailResponseBodyData& setDetail(vector<Models::QueryReceiverDetailResponseBodyDataDetail> && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


  protected:
    std::shared_ptr<vector<Models::QueryReceiverDetailResponseBodyDataDetail>> detail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
