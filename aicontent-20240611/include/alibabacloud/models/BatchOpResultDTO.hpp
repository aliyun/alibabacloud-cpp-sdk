// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHOPRESULTDTO_HPP_
#define ALIBABACLOUD_MODELS_BATCHOPRESULTDTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchFailedItemDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class BatchOpResultDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchOpResultDTO& obj) { 
      DARABONBA_PTR_TO_JSON(failed, failed_);
      DARABONBA_PTR_TO_JSON(succeeded, succeeded_);
    };
    friend void from_json(const Darabonba::Json& j, BatchOpResultDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(failed, failed_);
      DARABONBA_PTR_FROM_JSON(succeeded, succeeded_);
    };
    BatchOpResultDTO() = default ;
    BatchOpResultDTO(const BatchOpResultDTO &) = default ;
    BatchOpResultDTO(BatchOpResultDTO &&) = default ;
    BatchOpResultDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchOpResultDTO() = default ;
    BatchOpResultDTO& operator=(const BatchOpResultDTO &) = default ;
    BatchOpResultDTO& operator=(BatchOpResultDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failed_ == nullptr
        && this->succeeded_ == nullptr; };
    // failed Field Functions 
    bool hasFailed() const { return this->failed_ != nullptr;};
    void deleteFailed() { this->failed_ = nullptr;};
    inline const vector<BatchFailedItemDTO> & getFailed() const { DARABONBA_PTR_GET_CONST(failed_, vector<BatchFailedItemDTO>) };
    inline vector<BatchFailedItemDTO> getFailed() { DARABONBA_PTR_GET(failed_, vector<BatchFailedItemDTO>) };
    inline BatchOpResultDTO& setFailed(const vector<BatchFailedItemDTO> & failed) { DARABONBA_PTR_SET_VALUE(failed_, failed) };
    inline BatchOpResultDTO& setFailed(vector<BatchFailedItemDTO> && failed) { DARABONBA_PTR_SET_RVALUE(failed_, failed) };


    // succeeded Field Functions 
    bool hasSucceeded() const { return this->succeeded_ != nullptr;};
    void deleteSucceeded() { this->succeeded_ = nullptr;};
    inline const vector<int64_t> & getSucceeded() const { DARABONBA_PTR_GET_CONST(succeeded_, vector<int64_t>) };
    inline vector<int64_t> getSucceeded() { DARABONBA_PTR_GET(succeeded_, vector<int64_t>) };
    inline BatchOpResultDTO& setSucceeded(const vector<int64_t> & succeeded) { DARABONBA_PTR_SET_VALUE(succeeded_, succeeded) };
    inline BatchOpResultDTO& setSucceeded(vector<int64_t> && succeeded) { DARABONBA_PTR_SET_RVALUE(succeeded_, succeeded) };


  protected:
    shared_ptr<vector<BatchFailedItemDTO>> failed_ {};
    shared_ptr<vector<int64_t>> succeeded_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
