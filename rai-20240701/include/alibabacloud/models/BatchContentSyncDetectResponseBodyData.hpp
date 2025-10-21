// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCONTENTSYNCDETECTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BATCHCONTENTSYNCDETECTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchContentSyncDetectResponseBodyDataDetectResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class BatchContentSyncDetectResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchContentSyncDetectResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DetectResultList, detectResultList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchContentSyncDetectResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DetectResultList, detectResultList_);
    };
    BatchContentSyncDetectResponseBodyData() = default ;
    BatchContentSyncDetectResponseBodyData(const BatchContentSyncDetectResponseBodyData &) = default ;
    BatchContentSyncDetectResponseBodyData(BatchContentSyncDetectResponseBodyData &&) = default ;
    BatchContentSyncDetectResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchContentSyncDetectResponseBodyData() = default ;
    BatchContentSyncDetectResponseBodyData& operator=(const BatchContentSyncDetectResponseBodyData &) = default ;
    BatchContentSyncDetectResponseBodyData& operator=(BatchContentSyncDetectResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detectResultList_ == nullptr; };
    // detectResultList Field Functions 
    bool hasDetectResultList() const { return this->detectResultList_ != nullptr;};
    void deleteDetectResultList() { this->detectResultList_ = nullptr;};
    inline const vector<Models::BatchContentSyncDetectResponseBodyDataDetectResultList> & detectResultList() const { DARABONBA_PTR_GET_CONST(detectResultList_, vector<Models::BatchContentSyncDetectResponseBodyDataDetectResultList>) };
    inline vector<Models::BatchContentSyncDetectResponseBodyDataDetectResultList> detectResultList() { DARABONBA_PTR_GET(detectResultList_, vector<Models::BatchContentSyncDetectResponseBodyDataDetectResultList>) };
    inline BatchContentSyncDetectResponseBodyData& setDetectResultList(const vector<Models::BatchContentSyncDetectResponseBodyDataDetectResultList> & detectResultList) { DARABONBA_PTR_SET_VALUE(detectResultList_, detectResultList) };
    inline BatchContentSyncDetectResponseBodyData& setDetectResultList(vector<Models::BatchContentSyncDetectResponseBodyDataDetectResultList> && detectResultList) { DARABONBA_PTR_SET_RVALUE(detectResultList_, detectResultList) };


  protected:
    std::shared_ptr<vector<Models::BatchContentSyncDetectResponseBodyDataDetectResultList>> detectResultList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
