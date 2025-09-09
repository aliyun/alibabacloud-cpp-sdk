// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSSQLAUDITSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSSQLAUDITSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDrdsSqlAuditStatusResponseBodyDataData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsSqlAuditStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsSqlAuditStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsSqlAuditStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    DescribeDrdsSqlAuditStatusResponseBodyData() = default ;
    DescribeDrdsSqlAuditStatusResponseBodyData(const DescribeDrdsSqlAuditStatusResponseBodyData &) = default ;
    DescribeDrdsSqlAuditStatusResponseBodyData(DescribeDrdsSqlAuditStatusResponseBodyData &&) = default ;
    DescribeDrdsSqlAuditStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsSqlAuditStatusResponseBodyData() = default ;
    DescribeDrdsSqlAuditStatusResponseBodyData& operator=(const DescribeDrdsSqlAuditStatusResponseBodyData &) = default ;
    DescribeDrdsSqlAuditStatusResponseBodyData& operator=(DescribeDrdsSqlAuditStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::DescribeDrdsSqlAuditStatusResponseBodyDataData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::DescribeDrdsSqlAuditStatusResponseBodyDataData>) };
    inline vector<Models::DescribeDrdsSqlAuditStatusResponseBodyDataData> data() { DARABONBA_PTR_GET(data_, vector<Models::DescribeDrdsSqlAuditStatusResponseBodyDataData>) };
    inline DescribeDrdsSqlAuditStatusResponseBodyData& setData(const vector<Models::DescribeDrdsSqlAuditStatusResponseBodyDataData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDrdsSqlAuditStatusResponseBodyData& setData(vector<Models::DescribeDrdsSqlAuditStatusResponseBodyDataData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


  protected:
    std::shared_ptr<vector<Models::DescribeDrdsSqlAuditStatusResponseBodyDataData>> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
