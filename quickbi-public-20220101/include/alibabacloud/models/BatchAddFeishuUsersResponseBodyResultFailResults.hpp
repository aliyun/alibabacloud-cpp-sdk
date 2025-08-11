// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHADDFEISHUUSERSRESPONSEBODYRESULTFAILRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHADDFEISHUUSERSRESPONSEBODYRESULTFAILRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class BatchAddFeishuUsersResponseBodyResultFailResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAddFeishuUsersResponseBodyResultFailResults& obj) { 
      DARABONBA_PTR_TO_JSON(FailInfos, failInfos_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAddFeishuUsersResponseBodyResultFailResults& obj) { 
      DARABONBA_PTR_FROM_JSON(FailInfos, failInfos_);
    };
    BatchAddFeishuUsersResponseBodyResultFailResults() = default ;
    BatchAddFeishuUsersResponseBodyResultFailResults(const BatchAddFeishuUsersResponseBodyResultFailResults &) = default ;
    BatchAddFeishuUsersResponseBodyResultFailResults(BatchAddFeishuUsersResponseBodyResultFailResults &&) = default ;
    BatchAddFeishuUsersResponseBodyResultFailResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAddFeishuUsersResponseBodyResultFailResults() = default ;
    BatchAddFeishuUsersResponseBodyResultFailResults& operator=(const BatchAddFeishuUsersResponseBodyResultFailResults &) = default ;
    BatchAddFeishuUsersResponseBodyResultFailResults& operator=(BatchAddFeishuUsersResponseBodyResultFailResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failInfos_ != nullptr; };
    // failInfos Field Functions 
    bool hasFailInfos() const { return this->failInfos_ != nullptr;};
    void deleteFailInfos() { this->failInfos_ = nullptr;};
    inline const vector<Models::BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos> & failInfos() const { DARABONBA_PTR_GET_CONST(failInfos_, vector<Models::BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos>) };
    inline vector<Models::BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos> failInfos() { DARABONBA_PTR_GET(failInfos_, vector<Models::BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos>) };
    inline BatchAddFeishuUsersResponseBodyResultFailResults& setFailInfos(const vector<Models::BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos> & failInfos) { DARABONBA_PTR_SET_VALUE(failInfos_, failInfos) };
    inline BatchAddFeishuUsersResponseBodyResultFailResults& setFailInfos(vector<Models::BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos> && failInfos) { DARABONBA_PTR_SET_RVALUE(failInfos_, failInfos) };


  protected:
    std::shared_ptr<vector<Models::BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos>> failInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
