// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHDMLASTALIYUNRESOURCESYNCRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHDMLASTALIYUNRESOURCESYNCRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetHDMLastAliyunResourceSyncResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHDMLastAliyunResourceSyncResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(SubResults, subResults_);
      DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetHDMLastAliyunResourceSyncResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(SubResults, subResults_);
      DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
    };
    GetHDMLastAliyunResourceSyncResultResponseBodyData() = default ;
    GetHDMLastAliyunResourceSyncResultResponseBodyData(const GetHDMLastAliyunResourceSyncResultResponseBodyData &) = default ;
    GetHDMLastAliyunResourceSyncResultResponseBodyData(GetHDMLastAliyunResourceSyncResultResponseBodyData &&) = default ;
    GetHDMLastAliyunResourceSyncResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHDMLastAliyunResourceSyncResultResponseBodyData() = default ;
    GetHDMLastAliyunResourceSyncResultResponseBodyData& operator=(const GetHDMLastAliyunResourceSyncResultResponseBodyData &) = default ;
    GetHDMLastAliyunResourceSyncResultResponseBodyData& operator=(GetHDMLastAliyunResourceSyncResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMsg_ == nullptr
        && return this->results_ == nullptr && return this->subResults_ == nullptr && return this->syncStatus_ == nullptr; };
    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetHDMLastAliyunResourceSyncResultResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline string results() const { DARABONBA_PTR_GET_DEFAULT(results_, "") };
    inline GetHDMLastAliyunResourceSyncResultResponseBodyData& setResults(string results) { DARABONBA_PTR_SET_VALUE(results_, results) };


    // subResults Field Functions 
    bool hasSubResults() const { return this->subResults_ != nullptr;};
    void deleteSubResults() { this->subResults_ = nullptr;};
    inline const Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults & subResults() const { DARABONBA_PTR_GET_CONST(subResults_, Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults) };
    inline Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults subResults() { DARABONBA_PTR_GET(subResults_, Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults) };
    inline GetHDMLastAliyunResourceSyncResultResponseBodyData& setSubResults(const Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults & subResults) { DARABONBA_PTR_SET_VALUE(subResults_, subResults) };
    inline GetHDMLastAliyunResourceSyncResultResponseBodyData& setSubResults(Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults && subResults) { DARABONBA_PTR_SET_RVALUE(subResults_, subResults) };


    // syncStatus Field Functions 
    bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
    void deleteSyncStatus() { this->syncStatus_ = nullptr;};
    inline string syncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
    inline GetHDMLastAliyunResourceSyncResultResponseBodyData& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


  protected:
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<string> results_ = nullptr;
    std::shared_ptr<Models::GetHDMLastAliyunResourceSyncResultResponseBodyDataSubResults> subResults_ = nullptr;
    std::shared_ptr<string> syncStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
