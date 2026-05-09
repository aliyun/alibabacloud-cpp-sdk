// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBATCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBATCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeBatchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBatchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBatchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
    };
    DescribeBatchTaskRequest() = default ;
    DescribeBatchTaskRequest(const DescribeBatchTaskRequest &) = default ;
    DescribeBatchTaskRequest(DescribeBatchTaskRequest &&) = default ;
    DescribeBatchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBatchTaskRequest() = default ;
    DescribeBatchTaskRequest& operator=(const DescribeBatchTaskRequest &) = default ;
    DescribeBatchTaskRequest& operator=(DescribeBatchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline DescribeBatchTaskRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


  protected:
    shared_ptr<string> batchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
