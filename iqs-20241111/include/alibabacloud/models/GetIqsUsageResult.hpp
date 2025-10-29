// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIQSUSAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_GETIQSUSAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIqsUsageResultRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class GetIqsUsageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIqsUsageResult& obj) { 
      DARABONBA_PTR_TO_JSON(records, records_);
    };
    friend void from_json(const Darabonba::Json& j, GetIqsUsageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(records, records_);
    };
    GetIqsUsageResult() = default ;
    GetIqsUsageResult(const GetIqsUsageResult &) = default ;
    GetIqsUsageResult(GetIqsUsageResult &&) = default ;
    GetIqsUsageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIqsUsageResult() = default ;
    GetIqsUsageResult& operator=(const GetIqsUsageResult &) = default ;
    GetIqsUsageResult& operator=(GetIqsUsageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->records_ == nullptr; };
    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<GetIqsUsageResultRecords> & records() const { DARABONBA_PTR_GET_CONST(records_, vector<GetIqsUsageResultRecords>) };
    inline vector<GetIqsUsageResultRecords> records() { DARABONBA_PTR_GET(records_, vector<GetIqsUsageResultRecords>) };
    inline GetIqsUsageResult& setRecords(const vector<GetIqsUsageResultRecords> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline GetIqsUsageResult& setRecords(vector<GetIqsUsageResultRecords> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    std::shared_ptr<vector<GetIqsUsageResultRecords>> records_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
