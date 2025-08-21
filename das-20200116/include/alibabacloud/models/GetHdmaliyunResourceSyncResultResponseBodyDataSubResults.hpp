// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHDMALIYUNRESOURCESYNCRESULTRESPONSEBODYDATASUBRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETHDMALIYUNRESOURCESYNCRESULTRESPONSEBODYDATASUBRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetHDMAliyunResourceSyncResultResponseBodyDataSubResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHDMAliyunResourceSyncResultResponseBodyDataSubResults& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceSyncSubResult, resourceSyncSubResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetHDMAliyunResourceSyncResultResponseBodyDataSubResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceSyncSubResult, resourceSyncSubResult_);
    };
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResults() = default ;
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResults(const GetHDMAliyunResourceSyncResultResponseBodyDataSubResults &) = default ;
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResults(GetHDMAliyunResourceSyncResultResponseBodyDataSubResults &&) = default ;
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHDMAliyunResourceSyncResultResponseBodyDataSubResults() = default ;
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResults& operator=(const GetHDMAliyunResourceSyncResultResponseBodyDataSubResults &) = default ;
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResults& operator=(GetHDMAliyunResourceSyncResultResponseBodyDataSubResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceSyncSubResult_ != nullptr; };
    // resourceSyncSubResult Field Functions 
    bool hasResourceSyncSubResult() const { return this->resourceSyncSubResult_ != nullptr;};
    void deleteResourceSyncSubResult() { this->resourceSyncSubResult_ = nullptr;};
    inline const vector<Models::GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult> & resourceSyncSubResult() const { DARABONBA_PTR_GET_CONST(resourceSyncSubResult_, vector<Models::GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult>) };
    inline vector<Models::GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult> resourceSyncSubResult() { DARABONBA_PTR_GET(resourceSyncSubResult_, vector<Models::GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult>) };
    inline GetHDMAliyunResourceSyncResultResponseBodyDataSubResults& setResourceSyncSubResult(const vector<Models::GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult> & resourceSyncSubResult) { DARABONBA_PTR_SET_VALUE(resourceSyncSubResult_, resourceSyncSubResult) };
    inline GetHDMAliyunResourceSyncResultResponseBodyDataSubResults& setResourceSyncSubResult(vector<Models::GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult> && resourceSyncSubResult) { DARABONBA_PTR_SET_RVALUE(resourceSyncSubResult_, resourceSyncSubResult) };


  protected:
    std::shared_ptr<vector<Models::GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult>> resourceSyncSubResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
