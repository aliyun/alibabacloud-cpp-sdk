// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINITIALIZATIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINITIALIZATIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInitializationStatusResponseBodyDataInitializationDetails.hpp>
#include <alibabacloud/models/DescribeInitializationStatusResponseBodyDataSynchronizationDetails.hpp>
#include <alibabacloud/models/DescribeInitializationStatusResponseBodyStructureInitializationDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeInitializationStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInitializationStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInitializationDetails, dataInitializationDetails_);
      DARABONBA_PTR_TO_JSON(DataSynchronizationDetails, dataSynchronizationDetails_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructureInitializationDetails, structureInitializationDetails_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInitializationStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInitializationDetails, dataInitializationDetails_);
      DARABONBA_PTR_FROM_JSON(DataSynchronizationDetails, dataSynchronizationDetails_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructureInitializationDetails, structureInitializationDetails_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeInitializationStatusResponseBody() = default ;
    DescribeInitializationStatusResponseBody(const DescribeInitializationStatusResponseBody &) = default ;
    DescribeInitializationStatusResponseBody(DescribeInitializationStatusResponseBody &&) = default ;
    DescribeInitializationStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInitializationStatusResponseBody() = default ;
    DescribeInitializationStatusResponseBody& operator=(const DescribeInitializationStatusResponseBody &) = default ;
    DescribeInitializationStatusResponseBody& operator=(DescribeInitializationStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataInitializationDetails_ != nullptr
        && this->dataSynchronizationDetails_ != nullptr && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->requestId_ != nullptr && this->structureInitializationDetails_ != nullptr
        && this->success_ != nullptr; };
    // dataInitializationDetails Field Functions 
    bool hasDataInitializationDetails() const { return this->dataInitializationDetails_ != nullptr;};
    void deleteDataInitializationDetails() { this->dataInitializationDetails_ = nullptr;};
    inline const vector<DescribeInitializationStatusResponseBodyDataInitializationDetails> & dataInitializationDetails() const { DARABONBA_PTR_GET_CONST(dataInitializationDetails_, vector<DescribeInitializationStatusResponseBodyDataInitializationDetails>) };
    inline vector<DescribeInitializationStatusResponseBodyDataInitializationDetails> dataInitializationDetails() { DARABONBA_PTR_GET(dataInitializationDetails_, vector<DescribeInitializationStatusResponseBodyDataInitializationDetails>) };
    inline DescribeInitializationStatusResponseBody& setDataInitializationDetails(const vector<DescribeInitializationStatusResponseBodyDataInitializationDetails> & dataInitializationDetails) { DARABONBA_PTR_SET_VALUE(dataInitializationDetails_, dataInitializationDetails) };
    inline DescribeInitializationStatusResponseBody& setDataInitializationDetails(vector<DescribeInitializationStatusResponseBodyDataInitializationDetails> && dataInitializationDetails) { DARABONBA_PTR_SET_RVALUE(dataInitializationDetails_, dataInitializationDetails) };


    // dataSynchronizationDetails Field Functions 
    bool hasDataSynchronizationDetails() const { return this->dataSynchronizationDetails_ != nullptr;};
    void deleteDataSynchronizationDetails() { this->dataSynchronizationDetails_ = nullptr;};
    inline const vector<DescribeInitializationStatusResponseBodyDataSynchronizationDetails> & dataSynchronizationDetails() const { DARABONBA_PTR_GET_CONST(dataSynchronizationDetails_, vector<DescribeInitializationStatusResponseBodyDataSynchronizationDetails>) };
    inline vector<DescribeInitializationStatusResponseBodyDataSynchronizationDetails> dataSynchronizationDetails() { DARABONBA_PTR_GET(dataSynchronizationDetails_, vector<DescribeInitializationStatusResponseBodyDataSynchronizationDetails>) };
    inline DescribeInitializationStatusResponseBody& setDataSynchronizationDetails(const vector<DescribeInitializationStatusResponseBodyDataSynchronizationDetails> & dataSynchronizationDetails) { DARABONBA_PTR_SET_VALUE(dataSynchronizationDetails_, dataSynchronizationDetails) };
    inline DescribeInitializationStatusResponseBody& setDataSynchronizationDetails(vector<DescribeInitializationStatusResponseBodyDataSynchronizationDetails> && dataSynchronizationDetails) { DARABONBA_PTR_SET_RVALUE(dataSynchronizationDetails_, dataSynchronizationDetails) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeInitializationStatusResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeInitializationStatusResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInitializationStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structureInitializationDetails Field Functions 
    bool hasStructureInitializationDetails() const { return this->structureInitializationDetails_ != nullptr;};
    void deleteStructureInitializationDetails() { this->structureInitializationDetails_ = nullptr;};
    inline const vector<DescribeInitializationStatusResponseBodyStructureInitializationDetails> & structureInitializationDetails() const { DARABONBA_PTR_GET_CONST(structureInitializationDetails_, vector<DescribeInitializationStatusResponseBodyStructureInitializationDetails>) };
    inline vector<DescribeInitializationStatusResponseBodyStructureInitializationDetails> structureInitializationDetails() { DARABONBA_PTR_GET(structureInitializationDetails_, vector<DescribeInitializationStatusResponseBodyStructureInitializationDetails>) };
    inline DescribeInitializationStatusResponseBody& setStructureInitializationDetails(const vector<DescribeInitializationStatusResponseBodyStructureInitializationDetails> & structureInitializationDetails) { DARABONBA_PTR_SET_VALUE(structureInitializationDetails_, structureInitializationDetails) };
    inline DescribeInitializationStatusResponseBody& setStructureInitializationDetails(vector<DescribeInitializationStatusResponseBodyStructureInitializationDetails> && structureInitializationDetails) { DARABONBA_PTR_SET_RVALUE(structureInitializationDetails_, structureInitializationDetails) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeInitializationStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of initial full data synchronization.
    std::shared_ptr<vector<DescribeInitializationStatusResponseBodyDataInitializationDetails>> dataInitializationDetails_ = nullptr;
    // The details of incremental data synchronization.
    // 
    // >  This parameter and the parameters it contains will be removed in the future.
    std::shared_ptr<vector<DescribeInitializationStatusResponseBodyDataSynchronizationDetails>> dataSynchronizationDetails_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of initial schema synchronization.
    std::shared_ptr<vector<DescribeInitializationStatusResponseBodyStructureInitializationDetails>> structureInitializationDetails_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
