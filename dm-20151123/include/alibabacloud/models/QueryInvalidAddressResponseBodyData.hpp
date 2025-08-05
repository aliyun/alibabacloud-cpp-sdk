// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINVALIDADDRESSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYINVALIDADDRESSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryInvalidAddressResponseBodyDataMailDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryInvalidAddressResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInvalidAddressResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(mailDetail, mailDetail_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInvalidAddressResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(mailDetail, mailDetail_);
    };
    QueryInvalidAddressResponseBodyData() = default ;
    QueryInvalidAddressResponseBodyData(const QueryInvalidAddressResponseBodyData &) = default ;
    QueryInvalidAddressResponseBodyData(QueryInvalidAddressResponseBodyData &&) = default ;
    QueryInvalidAddressResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInvalidAddressResponseBodyData() = default ;
    QueryInvalidAddressResponseBodyData& operator=(const QueryInvalidAddressResponseBodyData &) = default ;
    QueryInvalidAddressResponseBodyData& operator=(QueryInvalidAddressResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mailDetail_ != nullptr; };
    // mailDetail Field Functions 
    bool hasMailDetail() const { return this->mailDetail_ != nullptr;};
    void deleteMailDetail() { this->mailDetail_ = nullptr;};
    inline const vector<Models::QueryInvalidAddressResponseBodyDataMailDetail> & mailDetail() const { DARABONBA_PTR_GET_CONST(mailDetail_, vector<Models::QueryInvalidAddressResponseBodyDataMailDetail>) };
    inline vector<Models::QueryInvalidAddressResponseBodyDataMailDetail> mailDetail() { DARABONBA_PTR_GET(mailDetail_, vector<Models::QueryInvalidAddressResponseBodyDataMailDetail>) };
    inline QueryInvalidAddressResponseBodyData& setMailDetail(const vector<Models::QueryInvalidAddressResponseBodyDataMailDetail> & mailDetail) { DARABONBA_PTR_SET_VALUE(mailDetail_, mailDetail) };
    inline QueryInvalidAddressResponseBodyData& setMailDetail(vector<Models::QueryInvalidAddressResponseBodyDataMailDetail> && mailDetail) { DARABONBA_PTR_SET_RVALUE(mailDetail_, mailDetail) };


  protected:
    std::shared_ptr<vector<Models::QueryInvalidAddressResponseBodyDataMailDetail>> mailDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
