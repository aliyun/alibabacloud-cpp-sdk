// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGROUP_HPP_
#define ALIBABACLOUD_MODELS_BATCHGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExperimentRecord.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class BatchGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGroup& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
      DARABONBA_PTR_TO_JSON(records, records_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
      DARABONBA_PTR_FROM_JSON(records, records_);
    };
    BatchGroup() = default ;
    BatchGroup(const BatchGroup &) = default ;
    BatchGroup(BatchGroup &&) = default ;
    BatchGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGroup() = default ;
    BatchGroup& operator=(const BatchGroup &) = default ;
    BatchGroup& operator=(BatchGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->records_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline BatchGroup& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // records Field Functions 
    bool hasRecords() const { return this->records_ != nullptr;};
    void deleteRecords() { this->records_ = nullptr;};
    inline const vector<ExperimentRecord> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<ExperimentRecord>) };
    inline vector<ExperimentRecord> getRecords() { DARABONBA_PTR_GET(records_, vector<ExperimentRecord>) };
    inline BatchGroup& setRecords(const vector<ExperimentRecord> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
    inline BatchGroup& setRecords(vector<ExperimentRecord> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


  protected:
    shared_ptr<string> batchId_ {};
    shared_ptr<vector<ExperimentRecord>> records_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
