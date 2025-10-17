// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMIGRATIONJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMigrationJobDetailResponseBodyDataInitializationDetailList.hpp>
#include <alibabacloud/models/DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList.hpp>
#include <alibabacloud/models/DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeMigrationJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMigrationJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitializationDetailList, dataInitializationDetailList_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationDetailList, dataSynchronizationDetailList_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructureInitializationDetailList, structureInitializationDetailList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMigrationJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitializationDetailList, dataInitializationDetailList_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationDetailList, dataSynchronizationDetailList_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationDetailList, structureInitializationDetailList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeMigrationJobDetailResponseBody() = default ;
    DescribeMigrationJobDetailResponseBody(const DescribeMigrationJobDetailResponseBody &) = default ;
    DescribeMigrationJobDetailResponseBody(DescribeMigrationJobDetailResponseBody &&) = default ;
    DescribeMigrationJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMigrationJobDetailResponseBody() = default ;
    DescribeMigrationJobDetailResponseBody& operator=(const DescribeMigrationJobDetailResponseBody &) = default ;
    DescribeMigrationJobDetailResponseBody& operator=(DescribeMigrationJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataInitializationDetailList_ == nullptr
        && return this->dataSynchronizationDetailList_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->pageNumber_ == nullptr && return this->pageRecordCount_ == nullptr
        && return this->requestId_ == nullptr && return this->structureInitializationDetailList_ == nullptr && return this->success_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // dataInitializationDetailList Field Functions 
    bool hasDataInitializationDetailList() const { return this->dataInitializationDetailList_ != nullptr;};
    void deleteDataInitializationDetailList() { this->dataInitializationDetailList_ = nullptr;};
    inline const DescribeMigrationJobDetailResponseBodyDataInitializationDetailList & dataInitializationDetailList() const { DARABONBA_PTR_GET_CONST(dataInitializationDetailList_, DescribeMigrationJobDetailResponseBodyDataInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBodyDataInitializationDetailList dataInitializationDetailList() { DARABONBA_PTR_GET(dataInitializationDetailList_, DescribeMigrationJobDetailResponseBodyDataInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setDataInitializationDetailList(const DescribeMigrationJobDetailResponseBodyDataInitializationDetailList & dataInitializationDetailList) { DARABONBA_PTR_SET_VALUE(dataInitializationDetailList_, dataInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setDataInitializationDetailList(DescribeMigrationJobDetailResponseBodyDataInitializationDetailList && dataInitializationDetailList) { DARABONBA_PTR_SET_RVALUE(dataInitializationDetailList_, dataInitializationDetailList) };


    // dataSynchronizationDetailList Field Functions 
    bool hasDataSynchronizationDetailList() const { return this->dataSynchronizationDetailList_ != nullptr;};
    void deleteDataSynchronizationDetailList() { this->dataSynchronizationDetailList_ = nullptr;};
    inline const DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList & dataSynchronizationDetailList() const { DARABONBA_PTR_GET_CONST(dataSynchronizationDetailList_, DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList) };
    inline DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList dataSynchronizationDetailList() { DARABONBA_PTR_GET(dataSynchronizationDetailList_, DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setDataSynchronizationDetailList(const DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList & dataSynchronizationDetailList) { DARABONBA_PTR_SET_VALUE(dataSynchronizationDetailList_, dataSynchronizationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setDataSynchronizationDetailList(DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList && dataSynchronizationDetailList) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationDetailList_, dataSynchronizationDetailList) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeMigrationJobDetailResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeMigrationJobDetailResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMigrationJobDetailResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeMigrationJobDetailResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMigrationJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structureInitializationDetailList Field Functions 
    bool hasStructureInitializationDetailList() const { return this->structureInitializationDetailList_ != nullptr;};
    void deleteStructureInitializationDetailList() { this->structureInitializationDetailList_ = nullptr;};
    inline const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList & structureInitializationDetailList() const { DARABONBA_PTR_GET_CONST(structureInitializationDetailList_, DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList structureInitializationDetailList() { DARABONBA_PTR_GET(structureInitializationDetailList_, DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setStructureInitializationDetailList(const DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList & structureInitializationDetailList) { DARABONBA_PTR_SET_VALUE(structureInitializationDetailList_, structureInitializationDetailList) };
    inline DescribeMigrationJobDetailResponseBody& setStructureInitializationDetailList(DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList && structureInitializationDetailList) { DARABONBA_PTR_SET_RVALUE(structureInitializationDetailList_, structureInitializationDetailList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeMigrationJobDetailResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeMigrationJobDetailResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The maximum number of data migration instances that can be displayed on one page.
    std::shared_ptr<DescribeMigrationJobDetailResponseBodyDataInitializationDetailList> dataInitializationDetailList_ = nullptr;
    // The error message returned if full data migration failed.
    std::shared_ptr<DescribeMigrationJobDetailResponseBodyDataSynchronizationDetailList> dataSynchronizationDetailList_ = nullptr;
    // Specifies whether to query the details of incremental data migration. Valid values:
    // 
    // *   **true**: yes
    // 
    // *   **false**: no
    // 
    // > Default value: **false**
    std::shared_ptr<string> errCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that the value is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    // Specifies whether to query the details of full data migration. Valid values:
    // 
    // *   **true**: yes
    // 
    // *   **false**: no
    // 
    // > Default value: **false**
    std::shared_ptr<string> requestId_ = nullptr;
    // The name of the database to which the migration object in the source instance belongs.
    std::shared_ptr<DescribeMigrationJobDetailResponseBodyStructureInitializationDetailList> structureInitializationDetailList_ = nullptr;
    // The ID of the Alibaba Cloud account. You do not need to specify this parameter because this parameter will be removed in the future.
    std::shared_ptr<string> success_ = nullptr;
    // Resource group ID.
    std::shared_ptr<int64_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
