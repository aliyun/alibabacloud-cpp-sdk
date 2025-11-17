// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFEISHUUSERSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFEISHUUSERSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchAddFeishuUsersResponseBodyResultFailResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class BatchAddFeishuUsersResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFeishuUsersResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(FailResults, failResults_);
      DARABONBA_PTR_TO_JSON(OkCount, okCount_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFeishuUsersResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(FailResults, failResults_);
      DARABONBA_PTR_FROM_JSON(OkCount, okCount_);
    };
    BatchAddFeishuUsersResponseBodyResult() = default ;
    BatchAddFeishuUsersResponseBodyResult(const BatchAddFeishuUsersResponseBodyResult &) = default ;
    BatchAddFeishuUsersResponseBodyResult(BatchAddFeishuUsersResponseBodyResult &&) = default ;
    BatchAddFeishuUsersResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFeishuUsersResponseBodyResult() = default ;
    BatchAddFeishuUsersResponseBodyResult& operator=(const BatchAddFeishuUsersResponseBodyResult &) = default ;
    BatchAddFeishuUsersResponseBodyResult& operator=(BatchAddFeishuUsersResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failCount_ == nullptr
        && return this->failResults_ == nullptr && return this->okCount_ == nullptr; };
    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline BatchAddFeishuUsersResponseBodyResult& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // failResults Field Functions 
    bool hasFailResults() const { return this->failResults_ != nullptr;};
    void deleteFailResults() { this->failResults_ = nullptr;};
    inline const vector<Models::BatchAddFeishuUsersResponseBodyResultFailResults> & failResults() const { DARABONBA_PTR_GET_CONST(failResults_, vector<Models::BatchAddFeishuUsersResponseBodyResultFailResults>) };
    inline vector<Models::BatchAddFeishuUsersResponseBodyResultFailResults> failResults() { DARABONBA_PTR_GET(failResults_, vector<Models::BatchAddFeishuUsersResponseBodyResultFailResults>) };
    inline BatchAddFeishuUsersResponseBodyResult& setFailResults(const vector<Models::BatchAddFeishuUsersResponseBodyResultFailResults> & failResults) { DARABONBA_PTR_SET_VALUE(failResults_, failResults) };
    inline BatchAddFeishuUsersResponseBodyResult& setFailResults(vector<Models::BatchAddFeishuUsersResponseBodyResultFailResults> && failResults) { DARABONBA_PTR_SET_RVALUE(failResults_, failResults) };


    // okCount Field Functions 
    bool hasOkCount() const { return this->okCount_ != nullptr;};
    void deleteOkCount() { this->okCount_ = nullptr;};
    inline int32_t okCount() const { DARABONBA_PTR_GET_DEFAULT(okCount_, 0) };
    inline BatchAddFeishuUsersResponseBodyResult& setOkCount(int32_t okCount) { DARABONBA_PTR_SET_VALUE(okCount_, okCount) };


  protected:
    // Number of failed validations.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // Details of the failures.
    std::shared_ptr<vector<Models::BatchAddFeishuUsersResponseBodyResultFailResults>> failResults_ = nullptr;
    // Count of successes.
    std::shared_ptr<int32_t> okCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
