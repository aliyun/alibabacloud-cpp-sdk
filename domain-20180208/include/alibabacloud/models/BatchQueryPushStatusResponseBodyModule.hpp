// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYPUSHSTATUSRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYPUSHSTATUSRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchQueryPushStatusResponseBodyModulePushResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchQueryPushStatusResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryPushStatusResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(PushResults, pushResults_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryPushStatusResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(PushResults, pushResults_);
    };
    BatchQueryPushStatusResponseBodyModule() = default ;
    BatchQueryPushStatusResponseBodyModule(const BatchQueryPushStatusResponseBodyModule &) = default ;
    BatchQueryPushStatusResponseBodyModule(BatchQueryPushStatusResponseBodyModule &&) = default ;
    BatchQueryPushStatusResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryPushStatusResponseBodyModule() = default ;
    BatchQueryPushStatusResponseBodyModule& operator=(const BatchQueryPushStatusResponseBodyModule &) = default ;
    BatchQueryPushStatusResponseBodyModule& operator=(BatchQueryPushStatusResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pushResults_ == nullptr; };
    // pushResults Field Functions 
    bool hasPushResults() const { return this->pushResults_ != nullptr;};
    void deletePushResults() { this->pushResults_ = nullptr;};
    inline const vector<Models::BatchQueryPushStatusResponseBodyModulePushResults> & pushResults() const { DARABONBA_PTR_GET_CONST(pushResults_, vector<Models::BatchQueryPushStatusResponseBodyModulePushResults>) };
    inline vector<Models::BatchQueryPushStatusResponseBodyModulePushResults> pushResults() { DARABONBA_PTR_GET(pushResults_, vector<Models::BatchQueryPushStatusResponseBodyModulePushResults>) };
    inline BatchQueryPushStatusResponseBodyModule& setPushResults(const vector<Models::BatchQueryPushStatusResponseBodyModulePushResults> & pushResults) { DARABONBA_PTR_SET_VALUE(pushResults_, pushResults) };
    inline BatchQueryPushStatusResponseBodyModule& setPushResults(vector<Models::BatchQueryPushStatusResponseBodyModulePushResults> && pushResults) { DARABONBA_PTR_SET_RVALUE(pushResults_, pushResults) };


  protected:
    std::shared_ptr<vector<Models::BatchQueryPushStatusResponseBodyModulePushResults>> pushResults_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
