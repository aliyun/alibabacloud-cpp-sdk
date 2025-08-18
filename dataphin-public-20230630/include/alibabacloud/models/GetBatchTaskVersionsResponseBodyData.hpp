// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKVERSIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKVERSIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskVersionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BatchTaskVersionList, batchTaskVersionList_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskVersionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchTaskVersionList, batchTaskVersionList_);
    };
    GetBatchTaskVersionsResponseBodyData() = default ;
    GetBatchTaskVersionsResponseBodyData(const GetBatchTaskVersionsResponseBodyData &) = default ;
    GetBatchTaskVersionsResponseBodyData(GetBatchTaskVersionsResponseBodyData &&) = default ;
    GetBatchTaskVersionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskVersionsResponseBodyData() = default ;
    GetBatchTaskVersionsResponseBodyData& operator=(const GetBatchTaskVersionsResponseBodyData &) = default ;
    GetBatchTaskVersionsResponseBodyData& operator=(GetBatchTaskVersionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchTaskVersionList_ != nullptr; };
    // batchTaskVersionList Field Functions 
    bool hasBatchTaskVersionList() const { return this->batchTaskVersionList_ != nullptr;};
    void deleteBatchTaskVersionList() { this->batchTaskVersionList_ = nullptr;};
    inline const vector<Models::GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList> & batchTaskVersionList() const { DARABONBA_PTR_GET_CONST(batchTaskVersionList_, vector<Models::GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList>) };
    inline vector<Models::GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList> batchTaskVersionList() { DARABONBA_PTR_GET(batchTaskVersionList_, vector<Models::GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList>) };
    inline GetBatchTaskVersionsResponseBodyData& setBatchTaskVersionList(const vector<Models::GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList> & batchTaskVersionList) { DARABONBA_PTR_SET_VALUE(batchTaskVersionList_, batchTaskVersionList) };
    inline GetBatchTaskVersionsResponseBodyData& setBatchTaskVersionList(vector<Models::GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList> && batchTaskVersionList) { DARABONBA_PTR_SET_RVALUE(batchTaskVersionList_, batchTaskVersionList) };


  protected:
    std::shared_ptr<vector<Models::GetBatchTaskVersionsResponseBodyDataBatchTaskVersionList>> batchTaskVersionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
