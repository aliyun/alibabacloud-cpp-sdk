// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHRECALLPUSHRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_BATCHRECALLPUSHRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchRecallPushResponseBodyModuleRecallResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchRecallPushResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRecallPushResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(RecallResults, recallResults_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRecallPushResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(RecallResults, recallResults_);
    };
    BatchRecallPushResponseBodyModule() = default ;
    BatchRecallPushResponseBodyModule(const BatchRecallPushResponseBodyModule &) = default ;
    BatchRecallPushResponseBodyModule(BatchRecallPushResponseBodyModule &&) = default ;
    BatchRecallPushResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRecallPushResponseBodyModule() = default ;
    BatchRecallPushResponseBodyModule& operator=(const BatchRecallPushResponseBodyModule &) = default ;
    BatchRecallPushResponseBodyModule& operator=(BatchRecallPushResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recallResults_ == nullptr; };
    // recallResults Field Functions 
    bool hasRecallResults() const { return this->recallResults_ != nullptr;};
    void deleteRecallResults() { this->recallResults_ = nullptr;};
    inline const vector<Models::BatchRecallPushResponseBodyModuleRecallResults> & recallResults() const { DARABONBA_PTR_GET_CONST(recallResults_, vector<Models::BatchRecallPushResponseBodyModuleRecallResults>) };
    inline vector<Models::BatchRecallPushResponseBodyModuleRecallResults> recallResults() { DARABONBA_PTR_GET(recallResults_, vector<Models::BatchRecallPushResponseBodyModuleRecallResults>) };
    inline BatchRecallPushResponseBodyModule& setRecallResults(const vector<Models::BatchRecallPushResponseBodyModuleRecallResults> & recallResults) { DARABONBA_PTR_SET_VALUE(recallResults_, recallResults) };
    inline BatchRecallPushResponseBodyModule& setRecallResults(vector<Models::BatchRecallPushResponseBodyModuleRecallResults> && recallResults) { DARABONBA_PTR_SET_RVALUE(recallResults_, recallResults) };


  protected:
    std::shared_ptr<vector<Models::BatchRecallPushResponseBodyModuleRecallResults>> recallResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
