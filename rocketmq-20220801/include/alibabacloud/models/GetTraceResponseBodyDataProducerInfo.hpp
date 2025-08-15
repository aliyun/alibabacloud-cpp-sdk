// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATAPRODUCERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATAPRODUCERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTraceResponseBodyDataProducerInfoRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTraceResponseBodyDataProducerInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodyDataProducerInfo& obj) { 
      DARABONBA_PTR_TO_JSON(records, records_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodyDataProducerInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(records, records_);
    };
    GetTraceResponseBodyDataProducerInfo() = default ;
    GetTraceResponseBodyDataProducerInfo(const GetTraceResponseBodyDataProducerInfo &) = default ;
    GetTraceResponseBodyDataProducerInfo(GetTraceResponseBodyDataProducerInfo &&) = default ;
    GetTraceResponseBodyDataProducerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodyDataProducerInfo() = default ;
    GetTraceResponseBodyDataProducerInfo& operator=(const GetTraceResponseBodyDataProducerInfo &) = default ;
    GetTraceResponseBodyDataProducerInfo& operator=(GetTraceResponseBodyDataProducerInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->records_ != nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<Models::GetTraceResponseBodyDataProducerInfoRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<Models::GetTraceResponseBodyDataProducerInfoRecords>) };
    inline vector<Models::GetTraceResponseBodyDataProducerInfoRecords> records() { DARABONBA_PTR_GET(records_, vector<Models::GetTraceResponseBodyDataProducerInfoRecords>) };
    inline GetTraceResponseBodyDataProducerInfo& setRecords(const vector<Models::GetTraceResponseBodyDataProducerInfoRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetTraceResponseBodyDataProducerInfo& setRecords(vector<Models::GetTraceResponseBodyDataProducerInfoRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    // The production records.
    std::shared_ptr<vector<Models::GetTraceResponseBodyDataProducerInfoRecords>> records_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
