// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHINTRUDEDOMAINSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BATCHINTRUDEDOMAINSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchIntrudeDomainsResponseBodyDataFailureList.hpp>
#include <alibabacloud/models/BatchIntrudeDomainsResponseBodyDataSuccessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchIntrudeDomainsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchIntrudeDomainsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FailureCount, failureCount_);
      DARABONBA_PTR_TO_JSON(FailureList, failureList_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(SuccessList, successList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchIntrudeDomainsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureCount, failureCount_);
      DARABONBA_PTR_FROM_JSON(FailureList, failureList_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(SuccessList, successList_);
    };
    BatchIntrudeDomainsResponseBodyData() = default ;
    BatchIntrudeDomainsResponseBodyData(const BatchIntrudeDomainsResponseBodyData &) = default ;
    BatchIntrudeDomainsResponseBodyData(BatchIntrudeDomainsResponseBodyData &&) = default ;
    BatchIntrudeDomainsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchIntrudeDomainsResponseBodyData() = default ;
    BatchIntrudeDomainsResponseBodyData& operator=(const BatchIntrudeDomainsResponseBodyData &) = default ;
    BatchIntrudeDomainsResponseBodyData& operator=(BatchIntrudeDomainsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failureCount_ == nullptr
        && return this->failureList_ == nullptr && return this->successCount_ == nullptr && return this->successList_ == nullptr; };
    // failureCount Field Functions 
    bool hasFailureCount() const { return this->failureCount_ != nullptr;};
    void deleteFailureCount() { this->failureCount_ = nullptr;};
    inline int32_t failureCount() const { DARABONBA_PTR_GET_DEFAULT(failureCount_, 0) };
    inline BatchIntrudeDomainsResponseBodyData& setFailureCount(int32_t failureCount) { DARABONBA_PTR_SET_VALUE(failureCount_, failureCount) };


    // failureList Field Functions 
    bool hasFailureList() const { return this->failureList_ != nullptr;};
    void deleteFailureList() { this->failureList_ = nullptr;};
    inline const vector<Models::BatchIntrudeDomainsResponseBodyDataFailureList> & failureList() const { DARABONBA_PTR_GET_CONST(failureList_, vector<Models::BatchIntrudeDomainsResponseBodyDataFailureList>) };
    inline vector<Models::BatchIntrudeDomainsResponseBodyDataFailureList> failureList() { DARABONBA_PTR_GET(failureList_, vector<Models::BatchIntrudeDomainsResponseBodyDataFailureList>) };
    inline BatchIntrudeDomainsResponseBodyData& setFailureList(const vector<Models::BatchIntrudeDomainsResponseBodyDataFailureList> & failureList) { DARABONBA_PTR_SET_VALUE(failureList_, failureList) };
    inline BatchIntrudeDomainsResponseBodyData& setFailureList(vector<Models::BatchIntrudeDomainsResponseBodyDataFailureList> && failureList) { DARABONBA_PTR_SET_RVALUE(failureList_, failureList) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline BatchIntrudeDomainsResponseBodyData& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // successList Field Functions 
    bool hasSuccessList() const { return this->successList_ != nullptr;};
    void deleteSuccessList() { this->successList_ = nullptr;};
    inline const vector<Models::BatchIntrudeDomainsResponseBodyDataSuccessList> & successList() const { DARABONBA_PTR_GET_CONST(successList_, vector<Models::BatchIntrudeDomainsResponseBodyDataSuccessList>) };
    inline vector<Models::BatchIntrudeDomainsResponseBodyDataSuccessList> successList() { DARABONBA_PTR_GET(successList_, vector<Models::BatchIntrudeDomainsResponseBodyDataSuccessList>) };
    inline BatchIntrudeDomainsResponseBodyData& setSuccessList(const vector<Models::BatchIntrudeDomainsResponseBodyDataSuccessList> & successList) { DARABONBA_PTR_SET_VALUE(successList_, successList) };
    inline BatchIntrudeDomainsResponseBodyData& setSuccessList(vector<Models::BatchIntrudeDomainsResponseBodyDataSuccessList> && successList) { DARABONBA_PTR_SET_RVALUE(successList_, successList) };


  protected:
    std::shared_ptr<int32_t> failureCount_ = nullptr;
    std::shared_ptr<vector<Models::BatchIntrudeDomainsResponseBodyDataFailureList>> failureList_ = nullptr;
    std::shared_ptr<int32_t> successCount_ = nullptr;
    std::shared_ptr<vector<Models::BatchIntrudeDomainsResponseBodyDataSuccessList>> successList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
