// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKERLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETWORKERLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkerListResponseBodyDataWorkerInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetWorkerListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkerListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(WorkerInfos, workerInfos_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkerListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(WorkerInfos, workerInfos_);
    };
    GetWorkerListResponseBodyData() = default ;
    GetWorkerListResponseBodyData(const GetWorkerListResponseBodyData &) = default ;
    GetWorkerListResponseBodyData(GetWorkerListResponseBodyData &&) = default ;
    GetWorkerListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkerListResponseBodyData() = default ;
    GetWorkerListResponseBodyData& operator=(const GetWorkerListResponseBodyData &) = default ;
    GetWorkerListResponseBodyData& operator=(GetWorkerListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workerInfos_ == nullptr; };
    // workerInfos Field Functions 
    bool hasWorkerInfos() const { return this->workerInfos_ != nullptr;};
    void deleteWorkerInfos() { this->workerInfos_ = nullptr;};
    inline const vector<Models::GetWorkerListResponseBodyDataWorkerInfos> & workerInfos() const { DARABONBA_PTR_GET_CONST(workerInfos_, vector<Models::GetWorkerListResponseBodyDataWorkerInfos>) };
    inline vector<Models::GetWorkerListResponseBodyDataWorkerInfos> workerInfos() { DARABONBA_PTR_GET(workerInfos_, vector<Models::GetWorkerListResponseBodyDataWorkerInfos>) };
    inline GetWorkerListResponseBodyData& setWorkerInfos(const vector<Models::GetWorkerListResponseBodyDataWorkerInfos> & workerInfos) { DARABONBA_PTR_SET_VALUE(workerInfos_, workerInfos) };
    inline GetWorkerListResponseBodyData& setWorkerInfos(vector<Models::GetWorkerListResponseBodyDataWorkerInfos> && workerInfos) { DARABONBA_PTR_SET_RVALUE(workerInfos_, workerInfos) };


  protected:
    // The worker information.
    std::shared_ptr<vector<Models::GetWorkerListResponseBodyDataWorkerInfos>> workerInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
