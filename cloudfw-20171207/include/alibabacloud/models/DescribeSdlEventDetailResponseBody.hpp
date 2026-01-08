// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLEVENTDETAILRESPONSEBODY_HPP_
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
  class DescribeSdlEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdlEventDetailList, sdlEventDetailList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdlEventDetailList, sdlEventDetailList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSdlEventDetailResponseBody() = default ;
    DescribeSdlEventDetailResponseBody(const DescribeSdlEventDetailResponseBody &) = default ;
    DescribeSdlEventDetailResponseBody(DescribeSdlEventDetailResponseBody &&) = default ;
    DescribeSdlEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlEventDetailResponseBody() = default ;
    DescribeSdlEventDetailResponseBody& operator=(const DescribeSdlEventDetailResponseBody &) = default ;
    DescribeSdlEventDetailResponseBody& operator=(DescribeSdlEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SdlEventDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdlEventDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(SensitiveDataCnt, sensitiveDataCnt_);
        DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_TO_JSON(SensitiveType, sensitiveType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, SdlEventDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(SensitiveDataCnt, sensitiveDataCnt_);
        DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_FROM_JSON(SensitiveType, sensitiveType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      SdlEventDetailList() = default ;
      SdlEventDetailList(const SdlEventDetailList &) = default ;
      SdlEventDetailList(SdlEventDetailList &&) = default ;
      SdlEventDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdlEventDetailList() = default ;
      SdlEventDetailList& operator=(const SdlEventDetailList &) = default ;
      SdlEventDetailList& operator=(SdlEventDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventName_ == nullptr
        && this->sensitiveDataCnt_ == nullptr && this->sensitiveLevel_ == nullptr && this->sensitiveType_ == nullptr && this->startTime_ == nullptr; };
      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline SdlEventDetailList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // sensitiveDataCnt Field Functions 
      bool hasSensitiveDataCnt() const { return this->sensitiveDataCnt_ != nullptr;};
      void deleteSensitiveDataCnt() { this->sensitiveDataCnt_ = nullptr;};
      inline int64_t getSensitiveDataCnt() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataCnt_, 0L) };
      inline SdlEventDetailList& setSensitiveDataCnt(int64_t sensitiveDataCnt) { DARABONBA_PTR_SET_VALUE(sensitiveDataCnt_, sensitiveDataCnt) };


      // sensitiveLevel Field Functions 
      bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
      void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
      inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
      inline SdlEventDetailList& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


      // sensitiveType Field Functions 
      bool hasSensitiveType() const { return this->sensitiveType_ != nullptr;};
      void deleteSensitiveType() { this->sensitiveType_ = nullptr;};
      inline string getSensitiveType() const { DARABONBA_PTR_GET_DEFAULT(sensitiveType_, "") };
      inline SdlEventDetailList& setSensitiveType(string sensitiveType) { DARABONBA_PTR_SET_VALUE(sensitiveType_, sensitiveType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline SdlEventDetailList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      shared_ptr<string> eventName_ {};
      shared_ptr<int64_t> sensitiveDataCnt_ {};
      shared_ptr<string> sensitiveLevel_ {};
      shared_ptr<string> sensitiveType_ {};
      shared_ptr<int64_t> startTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sdlEventDetailList_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSdlEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdlEventDetailList Field Functions 
    bool hasSdlEventDetailList() const { return this->sdlEventDetailList_ != nullptr;};
    void deleteSdlEventDetailList() { this->sdlEventDetailList_ = nullptr;};
    inline const vector<DescribeSdlEventDetailResponseBody::SdlEventDetailList> & getSdlEventDetailList() const { DARABONBA_PTR_GET_CONST(sdlEventDetailList_, vector<DescribeSdlEventDetailResponseBody::SdlEventDetailList>) };
    inline vector<DescribeSdlEventDetailResponseBody::SdlEventDetailList> getSdlEventDetailList() { DARABONBA_PTR_GET(sdlEventDetailList_, vector<DescribeSdlEventDetailResponseBody::SdlEventDetailList>) };
    inline DescribeSdlEventDetailResponseBody& setSdlEventDetailList(const vector<DescribeSdlEventDetailResponseBody::SdlEventDetailList> & sdlEventDetailList) { DARABONBA_PTR_SET_VALUE(sdlEventDetailList_, sdlEventDetailList) };
    inline DescribeSdlEventDetailResponseBody& setSdlEventDetailList(vector<DescribeSdlEventDetailResponseBody::SdlEventDetailList> && sdlEventDetailList) { DARABONBA_PTR_SET_RVALUE(sdlEventDetailList_, sdlEventDetailList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSdlEventDetailResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeSdlEventDetailResponseBody::SdlEventDetailList>> sdlEventDetailList_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
