// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLEVENTSDLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLEVENTSDLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlEventSdListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlEventSdListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdlEventSensitiveDataList, sdlEventSensitiveDataList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlEventSdListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdlEventSensitiveDataList, sdlEventSensitiveDataList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSdlEventSdListResponseBody() = default ;
    DescribeSdlEventSdListResponseBody(const DescribeSdlEventSdListResponseBody &) = default ;
    DescribeSdlEventSdListResponseBody(DescribeSdlEventSdListResponseBody &&) = default ;
    DescribeSdlEventSdListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlEventSdListResponseBody() = default ;
    DescribeSdlEventSdListResponseBody& operator=(const DescribeSdlEventSdListResponseBody &) = default ;
    DescribeSdlEventSdListResponseBody& operator=(DescribeSdlEventSdListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SdlEventSensitiveDataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdlEventSensitiveDataList& obj) { 
        DARABONBA_PTR_TO_JSON(SensitiveData, sensitiveData_);
        DARABONBA_PTR_TO_JSON(SensitiveDataCnt, sensitiveDataCnt_);
        DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_TO_JSON(SensitiveType, sensitiveType_);
        DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, SdlEventSensitiveDataList& obj) { 
        DARABONBA_PTR_FROM_JSON(SensitiveData, sensitiveData_);
        DARABONBA_PTR_FROM_JSON(SensitiveDataCnt, sensitiveDataCnt_);
        DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_FROM_JSON(SensitiveType, sensitiveType_);
        DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      SdlEventSensitiveDataList() = default ;
      SdlEventSensitiveDataList(const SdlEventSensitiveDataList &) = default ;
      SdlEventSensitiveDataList(SdlEventSensitiveDataList &&) = default ;
      SdlEventSensitiveDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdlEventSensitiveDataList() = default ;
      SdlEventSensitiveDataList& operator=(const SdlEventSensitiveDataList &) = default ;
      SdlEventSensitiveDataList& operator=(SdlEventSensitiveDataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sensitiveData_ == nullptr
        && this->sensitiveDataCnt_ == nullptr && this->sensitiveLevel_ == nullptr && this->sensitiveType_ == nullptr && this->srcIp_ == nullptr && this->startTime_ == nullptr; };
      // sensitiveData Field Functions 
      bool hasSensitiveData() const { return this->sensitiveData_ != nullptr;};
      void deleteSensitiveData() { this->sensitiveData_ = nullptr;};
      inline string getSensitiveData() const { DARABONBA_PTR_GET_DEFAULT(sensitiveData_, "") };
      inline SdlEventSensitiveDataList& setSensitiveData(string sensitiveData) { DARABONBA_PTR_SET_VALUE(sensitiveData_, sensitiveData) };


      // sensitiveDataCnt Field Functions 
      bool hasSensitiveDataCnt() const { return this->sensitiveDataCnt_ != nullptr;};
      void deleteSensitiveDataCnt() { this->sensitiveDataCnt_ = nullptr;};
      inline int64_t getSensitiveDataCnt() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataCnt_, 0L) };
      inline SdlEventSensitiveDataList& setSensitiveDataCnt(int64_t sensitiveDataCnt) { DARABONBA_PTR_SET_VALUE(sensitiveDataCnt_, sensitiveDataCnt) };


      // sensitiveLevel Field Functions 
      bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
      void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
      inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
      inline SdlEventSensitiveDataList& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


      // sensitiveType Field Functions 
      bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
      void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
      inline string getSensitiveType() const { DARABONBA_PTR_GET_DEFAULT(sensitiveType_, "") };
      inline SdlEventSensitiveDataList& setSensitiveType(string sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };


      // srcIp Field Functions 
      bool hasSrcIp() const { return this->srcIp_ != nullptr;};
      void deleteSrcIp() { this->srcIp_ = nullptr;};
      inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
      inline SdlEventSensitiveDataList& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline SdlEventSensitiveDataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> sensitiveData_ {};
      shared_ptr<int64_t> sensitiveDataCnt_ {};
      shared_ptr<string> sensitiveLevel_ {};
      shared_ptr<string> sensitiveType_ {};
      shared_ptr<string> srcIp_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sdlEventSensitiveDataList_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSdlEventSdListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdlEventSensitiveDataList Field Functions 
    bool hasSdlEventSensitiveDataList() const { return this->sdlEventSensitiveDataList_ != nullptr;};
    void deleteSdlEventSensitiveDataList() { this->sdlEventSensitiveDataList_ = nullptr;};
    inline const vector<DescribeSdlEventSdListResponseBody::SdlEventSensitiveDataList> & getSdlEventSensitiveDataList() const { DARABONBA_PTR_GET_CONST(sdlEventSensitiveDataList_, vector<DescribeSdlEventSdListResponseBody::SdlEventSensitiveDataList>) };
    inline vector<DescribeSdlEventSdListResponseBody::SdlEventSensitiveDataList> getSdlEventSensitiveDataList() { DARABONBA_PTR_GET(sdlEventSensitiveDataList_, vector<DescribeSdlEventSdListResponseBody::SdlEventSensitiveDataList>) };
    inline DescribeSdlEventSdListResponseBody& setSdlEventSensitiveDataList(const vector<DescribeSdlEventSdListResponseBody::SdlEventSensitiveDataList> & sdlEventSensitiveDataList) { DARABONBA_PTR_SET_VALUE(sdlEventSensitiveDataList_, sdlEventSensitiveDataList) };
    inline DescribeSdlEventSdListResponseBody& setSdlEventSensitiveDataList(vector<DescribeSdlEventSdListResponseBody::SdlEventSensitiveDataList> && sdlEventSensitiveDataList) { DARABONBA_PTR_SET_RVALUE(sdlEventSensitiveDataList_, sdlEventSensitiveDataList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSdlEventSdListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeSdlEventSdListResponseBody::SdlEventSensitiveDataList>> sdlEventSensitiveDataList_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
