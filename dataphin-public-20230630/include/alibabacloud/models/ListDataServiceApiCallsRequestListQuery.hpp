// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSREQUESTLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSREQUESTLISTQUERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiCallsRequestListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiCallsRequestListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Successful, successful_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiCallsRequestListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Successful, successful_);
    };
    ListDataServiceApiCallsRequestListQuery() = default ;
    ListDataServiceApiCallsRequestListQuery(const ListDataServiceApiCallsRequestListQuery &) = default ;
    ListDataServiceApiCallsRequestListQuery(ListDataServiceApiCallsRequestListQuery &&) = default ;
    ListDataServiceApiCallsRequestListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiCallsRequestListQuery() = default ;
    ListDataServiceApiCallsRequestListQuery& operator=(const ListDataServiceApiCallsRequestListQuery &) = default ;
    ListDataServiceApiCallsRequestListQuery& operator=(ListDataServiceApiCallsRequestListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->apiName_ == nullptr && return this->appKey_ == nullptr && return this->clientIp_ == nullptr && return this->endTime_ == nullptr && return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->startTime_ == nullptr && return this->successful_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline int64_t apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
    inline ListDataServiceApiCallsRequestListQuery& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline ListDataServiceApiCallsRequestListQuery& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline ListDataServiceApiCallsRequestListQuery& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline ListDataServiceApiCallsRequestListQuery& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListDataServiceApiCallsRequestListQuery& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListDataServiceApiCallsRequestListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataServiceApiCallsRequestListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListDataServiceApiCallsRequestListQuery& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // successful Field Functions 
    bool hasSuccessful() const { return this->successful_ != nullptr;};
    void deleteSuccessful() { this->successful_ = nullptr;};
    inline bool successful() const { DARABONBA_PTR_GET_DEFAULT(successful_, false) };
    inline ListDataServiceApiCallsRequestListQuery& setSuccessful(bool successful) { DARABONBA_PTR_SET_VALUE(successful_, successful) };


  protected:
    std::shared_ptr<int64_t> apiId_ = nullptr;
    std::shared_ptr<string> apiName_ = nullptr;
    // appKey
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> clientIp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<bool> successful_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
