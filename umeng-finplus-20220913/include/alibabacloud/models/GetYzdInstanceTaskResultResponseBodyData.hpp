// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetYzdInstanceTaskResultResponseBodyDataDownloadUrls.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetYzdInstanceTaskResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYzdInstanceTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(appid, appid_);
      DARABONBA_PTR_TO_JSON(bcid, bcid_);
      DARABONBA_PTR_TO_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_TO_JSON(downloadUrls, downloadUrls_);
      DARABONBA_PTR_TO_JSON(resultCnt, resultCnt_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(timeDuration, timeDuration_);
    };
    friend void from_json(const Darabonba::Json& j, GetYzdInstanceTaskResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(appid, appid_);
      DARABONBA_PTR_FROM_JSON(bcid, bcid_);
      DARABONBA_PTR_FROM_JSON(datasetIds, datasetIds_);
      DARABONBA_PTR_FROM_JSON(downloadUrls, downloadUrls_);
      DARABONBA_PTR_FROM_JSON(resultCnt, resultCnt_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(timeDuration, timeDuration_);
    };
    GetYzdInstanceTaskResultResponseBodyData() = default ;
    GetYzdInstanceTaskResultResponseBodyData(const GetYzdInstanceTaskResultResponseBodyData &) = default ;
    GetYzdInstanceTaskResultResponseBodyData(GetYzdInstanceTaskResultResponseBodyData &&) = default ;
    GetYzdInstanceTaskResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYzdInstanceTaskResultResponseBodyData() = default ;
    GetYzdInstanceTaskResultResponseBodyData& operator=(const GetYzdInstanceTaskResultResponseBodyData &) = default ;
    GetYzdInstanceTaskResultResponseBodyData& operator=(GetYzdInstanceTaskResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appid_ != nullptr
        && this->bcid_ != nullptr && this->datasetIds_ != nullptr && this->downloadUrls_ != nullptr && this->resultCnt_ != nullptr && this->status_ != nullptr
        && this->timeDuration_ != nullptr; };
    // appid Field Functions 
    bool hasAppid() const { return this->appid_ != nullptr;};
    void deleteAppid() { this->appid_ = nullptr;};
    inline string appid() const { DARABONBA_PTR_GET_DEFAULT(appid_, "") };
    inline GetYzdInstanceTaskResultResponseBodyData& setAppid(string appid) { DARABONBA_PTR_SET_VALUE(appid_, appid) };


    // bcid Field Functions 
    bool hasBcid() const { return this->bcid_ != nullptr;};
    void deleteBcid() { this->bcid_ = nullptr;};
    inline string bcid() const { DARABONBA_PTR_GET_DEFAULT(bcid_, "") };
    inline GetYzdInstanceTaskResultResponseBodyData& setBcid(string bcid) { DARABONBA_PTR_SET_VALUE(bcid_, bcid) };


    // datasetIds Field Functions 
    bool hasDatasetIds() const { return this->datasetIds_ != nullptr;};
    void deleteDatasetIds() { this->datasetIds_ = nullptr;};
    inline string datasetIds() const { DARABONBA_PTR_GET_DEFAULT(datasetIds_, "") };
    inline GetYzdInstanceTaskResultResponseBodyData& setDatasetIds(string datasetIds) { DARABONBA_PTR_SET_VALUE(datasetIds_, datasetIds) };


    // downloadUrls Field Functions 
    bool hasDownloadUrls() const { return this->downloadUrls_ != nullptr;};
    void deleteDownloadUrls() { this->downloadUrls_ = nullptr;};
    inline const vector<Models::GetYzdInstanceTaskResultResponseBodyDataDownloadUrls> & downloadUrls() const { DARABONBA_PTR_GET_CONST(downloadUrls_, vector<Models::GetYzdInstanceTaskResultResponseBodyDataDownloadUrls>) };
    inline vector<Models::GetYzdInstanceTaskResultResponseBodyDataDownloadUrls> downloadUrls() { DARABONBA_PTR_GET(downloadUrls_, vector<Models::GetYzdInstanceTaskResultResponseBodyDataDownloadUrls>) };
    inline GetYzdInstanceTaskResultResponseBodyData& setDownloadUrls(const vector<Models::GetYzdInstanceTaskResultResponseBodyDataDownloadUrls> & downloadUrls) { DARABONBA_PTR_SET_VALUE(downloadUrls_, downloadUrls) };
    inline GetYzdInstanceTaskResultResponseBodyData& setDownloadUrls(vector<Models::GetYzdInstanceTaskResultResponseBodyDataDownloadUrls> && downloadUrls) { DARABONBA_PTR_SET_RVALUE(downloadUrls_, downloadUrls) };


    // resultCnt Field Functions 
    bool hasResultCnt() const { return this->resultCnt_ != nullptr;};
    void deleteResultCnt() { this->resultCnt_ = nullptr;};
    inline string resultCnt() const { DARABONBA_PTR_GET_DEFAULT(resultCnt_, "") };
    inline GetYzdInstanceTaskResultResponseBodyData& setResultCnt(string resultCnt) { DARABONBA_PTR_SET_VALUE(resultCnt_, resultCnt) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetYzdInstanceTaskResultResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeDuration Field Functions 
    bool hasTimeDuration() const { return this->timeDuration_ != nullptr;};
    void deleteTimeDuration() { this->timeDuration_ = nullptr;};
    inline string timeDuration() const { DARABONBA_PTR_GET_DEFAULT(timeDuration_, "") };
    inline GetYzdInstanceTaskResultResponseBodyData& setTimeDuration(string timeDuration) { DARABONBA_PTR_SET_VALUE(timeDuration_, timeDuration) };


  protected:
    std::shared_ptr<string> appid_ = nullptr;
    std::shared_ptr<string> bcid_ = nullptr;
    std::shared_ptr<string> datasetIds_ = nullptr;
    std::shared_ptr<vector<Models::GetYzdInstanceTaskResultResponseBodyDataDownloadUrls>> downloadUrls_ = nullptr;
    std::shared_ptr<string> resultCnt_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> timeDuration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
