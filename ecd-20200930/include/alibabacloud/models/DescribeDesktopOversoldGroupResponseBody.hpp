// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPOVERSOLDGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPOVERSOLDGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopOversoldGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopOversoldGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopOversoldGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDesktopOversoldGroupResponseBody() = default ;
    DescribeDesktopOversoldGroupResponseBody(const DescribeDesktopOversoldGroupResponseBody &) = default ;
    DescribeDesktopOversoldGroupResponseBody(DescribeDesktopOversoldGroupResponseBody &&) = default ;
    DescribeDesktopOversoldGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopOversoldGroupResponseBody() = default ;
    DescribeDesktopOversoldGroupResponseBody& operator=(const DescribeDesktopOversoldGroupResponseBody &) = default ;
    DescribeDesktopOversoldGroupResponseBody& operator=(DescribeDesktopOversoldGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConcurrenceCount, concurrenceCount_);
        DARABONBA_PTR_TO_JSON(CurConcurrenceCount, curConcurrenceCount_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
        DARABONBA_PTR_TO_JSON(OversoldUserCount, oversoldUserCount_);
        DARABONBA_PTR_TO_JSON(OversoldWarn, oversoldWarn_);
        DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_TO_JSON(SaleStatus, saleStatus_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StopDuration, stopDuration_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConcurrenceCount, concurrenceCount_);
        DARABONBA_PTR_FROM_JSON(CurConcurrenceCount, curConcurrenceCount_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DesktopType, desktopType_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(IdleDisconnectDuration, idleDisconnectDuration_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
        DARABONBA_PTR_FROM_JSON(OversoldUserCount, oversoldUserCount_);
        DARABONBA_PTR_FROM_JSON(OversoldWarn, oversoldWarn_);
        DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
        DARABONBA_PTR_FROM_JSON(SaleStatus, saleStatus_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StopDuration, stopDuration_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->concurrenceCount_ == nullptr
        && this->curConcurrenceCount_ == nullptr && this->dataDiskSize_ == nullptr && this->description_ == nullptr && this->desktopType_ == nullptr && this->directoryId_ == nullptr
        && this->expireTime_ == nullptr && this->idleDisconnectDuration_ == nullptr && this->imageId_ == nullptr && this->keepDuration_ == nullptr && this->name_ == nullptr
        && this->oversoldGroupId_ == nullptr && this->oversoldUserCount_ == nullptr && this->oversoldWarn_ == nullptr && this->policyGroupId_ == nullptr && this->saleStatus_ == nullptr
        && this->status_ == nullptr && this->stopDuration_ == nullptr && this->systemDiskSize_ == nullptr; };
      // concurrenceCount Field Functions 
      bool hasConcurrenceCount() const { return this->concurrenceCount_ != nullptr;};
      void deleteConcurrenceCount() { this->concurrenceCount_ = nullptr;};
      inline int32_t getConcurrenceCount() const { DARABONBA_PTR_GET_DEFAULT(concurrenceCount_, 0) };
      inline Data& setConcurrenceCount(int32_t concurrenceCount) { DARABONBA_PTR_SET_VALUE(concurrenceCount_, concurrenceCount) };


      // curConcurrenceCount Field Functions 
      bool hasCurConcurrenceCount() const { return this->curConcurrenceCount_ != nullptr;};
      void deleteCurConcurrenceCount() { this->curConcurrenceCount_ = nullptr;};
      inline int32_t getCurConcurrenceCount() const { DARABONBA_PTR_GET_DEFAULT(curConcurrenceCount_, 0) };
      inline Data& setCurConcurrenceCount(int32_t curConcurrenceCount) { DARABONBA_PTR_SET_VALUE(curConcurrenceCount_, curConcurrenceCount) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
      inline Data& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // desktopType Field Functions 
      bool hasDesktopType() const { return this->desktopType_ != nullptr;};
      void deleteDesktopType() { this->desktopType_ = nullptr;};
      inline string getDesktopType() const { DARABONBA_PTR_GET_DEFAULT(desktopType_, "") };
      inline Data& setDesktopType(string desktopType) { DARABONBA_PTR_SET_VALUE(desktopType_, desktopType) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline Data& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // idleDisconnectDuration Field Functions 
      bool hasIdleDisconnectDuration() const { return this->idleDisconnectDuration_ != nullptr;};
      void deleteIdleDisconnectDuration() { this->idleDisconnectDuration_ = nullptr;};
      inline string getIdleDisconnectDuration() const { DARABONBA_PTR_GET_DEFAULT(idleDisconnectDuration_, "") };
      inline Data& setIdleDisconnectDuration(string idleDisconnectDuration) { DARABONBA_PTR_SET_VALUE(idleDisconnectDuration_, idleDisconnectDuration) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline Data& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // keepDuration Field Functions 
      bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
      void deleteKeepDuration() { this->keepDuration_ = nullptr;};
      inline string getKeepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, "") };
      inline Data& setKeepDuration(string keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // oversoldGroupId Field Functions 
      bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
      void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
      inline string getOversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
      inline Data& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


      // oversoldUserCount Field Functions 
      bool hasOversoldUserCount() const { return this->oversoldUserCount_ != nullptr;};
      void deleteOversoldUserCount() { this->oversoldUserCount_ = nullptr;};
      inline int32_t getOversoldUserCount() const { DARABONBA_PTR_GET_DEFAULT(oversoldUserCount_, 0) };
      inline Data& setOversoldUserCount(int32_t oversoldUserCount) { DARABONBA_PTR_SET_VALUE(oversoldUserCount_, oversoldUserCount) };


      // oversoldWarn Field Functions 
      bool hasOversoldWarn() const { return this->oversoldWarn_ != nullptr;};
      void deleteOversoldWarn() { this->oversoldWarn_ = nullptr;};
      inline int32_t getOversoldWarn() const { DARABONBA_PTR_GET_DEFAULT(oversoldWarn_, 0) };
      inline Data& setOversoldWarn(int32_t oversoldWarn) { DARABONBA_PTR_SET_VALUE(oversoldWarn_, oversoldWarn) };


      // policyGroupId Field Functions 
      bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
      void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
      inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
      inline Data& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


      // saleStatus Field Functions 
      bool hasSaleStatus() const { return this->saleStatus_ != nullptr;};
      void deleteSaleStatus() { this->saleStatus_ = nullptr;};
      inline string getSaleStatus() const { DARABONBA_PTR_GET_DEFAULT(saleStatus_, "") };
      inline Data& setSaleStatus(string saleStatus) { DARABONBA_PTR_SET_VALUE(saleStatus_, saleStatus) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // stopDuration Field Functions 
      bool hasStopDuration() const { return this->stopDuration_ != nullptr;};
      void deleteStopDuration() { this->stopDuration_ = nullptr;};
      inline int64_t getStopDuration() const { DARABONBA_PTR_GET_DEFAULT(stopDuration_, 0L) };
      inline Data& setStopDuration(int64_t stopDuration) { DARABONBA_PTR_SET_VALUE(stopDuration_, stopDuration) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline Data& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    protected:
      shared_ptr<int32_t> concurrenceCount_ {};
      shared_ptr<int32_t> curConcurrenceCount_ {};
      shared_ptr<int32_t> dataDiskSize_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> desktopType_ {};
      shared_ptr<string> directoryId_ {};
      shared_ptr<string> expireTime_ {};
      shared_ptr<string> idleDisconnectDuration_ {};
      shared_ptr<string> imageId_ {};
      shared_ptr<string> keepDuration_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> oversoldGroupId_ {};
      shared_ptr<int32_t> oversoldUserCount_ {};
      shared_ptr<int32_t> oversoldWarn_ {};
      shared_ptr<string> policyGroupId_ {};
      shared_ptr<string> saleStatus_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> stopDuration_ {};
      shared_ptr<int32_t> systemDiskSize_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->data_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeDesktopOversoldGroupResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeDesktopOversoldGroupResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeDesktopOversoldGroupResponseBody::Data>) };
    inline vector<DescribeDesktopOversoldGroupResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeDesktopOversoldGroupResponseBody::Data>) };
    inline DescribeDesktopOversoldGroupResponseBody& setData(const vector<DescribeDesktopOversoldGroupResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDesktopOversoldGroupResponseBody& setData(vector<DescribeDesktopOversoldGroupResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopOversoldGroupResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopOversoldGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> count_ {};
    shared_ptr<vector<DescribeDesktopOversoldGroupResponseBody::Data>> data_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
