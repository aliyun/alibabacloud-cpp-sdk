// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHDMLASTALIYUNRESOURCESYNCRESULTRESPONSEBODYDATASUBRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETHDMLASTALIYUNRESOURCESYNCRESULTRESPONSEBODYDATASUBRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceSyncSubResult, resourceSyncSubResult_);
    };
    friend void from_json(const Darabonba::Json& j, GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceSyncSubResult, resourceSyncSubResult_);
    };
    GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults() = default ;
    GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults(const GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults &) = default ;
    GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults(GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults &&) = default ;
    GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults() = default ;
    GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults& operator=(const GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults &) = default ;
    GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults& operator=(GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceSyncSubResult_ == nullptr; };
    // resourceSyncSubResult Field Functions 
    bool hasResourceSyncSubResult() const { return this->resourceSyncSubResult_ != nullptr;};
    void deleteResourceSyncSubResult() { this->resourceSyncSubResult_ = nullptr;};
    inline const vector<Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult> & resourceSyncSubResult() const { DARABONBA_PTR_GET_CONST(resourceSyncSubResult_, vector<Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult>) };
    inline vector<Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult> resourceSyncSubResult() { DARABONBA_PTR_GET(resourceSyncSubResult_, vector<Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult>) };
    inline GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults& setResourceSyncSubResult(const vector<Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult> & resourceSyncSubResult) { DARABONBA_PTR_SET_VALUE(resourceSyncSubResult_, resourceSyncSubResult) };
    inline GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults& setResourceSyncSubResult(vector<Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult> && resourceSyncSubResult) { DARABONBA_PTR_SET_RVALUE(resourceSyncSubResult_, resourceSyncSubResult) };


  protected:
    std::shared_ptr<vector<Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult>> resourceSyncSubResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
