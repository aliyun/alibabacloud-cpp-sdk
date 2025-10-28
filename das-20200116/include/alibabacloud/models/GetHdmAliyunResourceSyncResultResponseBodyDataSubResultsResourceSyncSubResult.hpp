// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHDMALIYUNRESOURCESYNCRESULTRESPONSEBODYDATASUBRESULTSRESOURCESYNCSUBRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETHDMALIYUNRESOURCESYNCRESULTRESPONSEBODYDATASUBRESULTSRESOURCESYNCSUBRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SyncCount, syncCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SyncCount, syncCount_);
    };
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult() = default ;
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult(const GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult &) = default ;
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult(GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult &&) = default ;
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult() = default ;
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult& operator=(const GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult &) = default ;
    GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult& operator=(GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errMsg_ == nullptr
        && return this->resourceType_ == nullptr && return this->success_ == nullptr && return this->syncCount_ == nullptr; };
    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // syncCount Field Functions 
    bool hasSyncCount() const { return this->syncCount_ != nullptr;};
    void deleteSyncCount() { this->syncCount_ = nullptr;};
    inline int32_t syncCount() const { DARABONBA_PTR_GET_DEFAULT(syncCount_, 0) };
    inline GetHDMAliyunResourceSyncResultResponseBodyDataSubResultsResourceSyncSubResult& setSyncCount(int32_t syncCount) { DARABONBA_PTR_SET_VALUE(syncCount_, syncCount) };


  protected:
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<int32_t> syncCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
