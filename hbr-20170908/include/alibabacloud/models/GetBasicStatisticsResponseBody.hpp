// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASICSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASICSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class GetBasicStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBasicStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(GlobalStatistics, globalStatistics_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionStatistics, regionStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBasicStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(GlobalStatistics, globalStatistics_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionStatistics, regionStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBasicStatisticsResponseBody() = default ;
    GetBasicStatisticsResponseBody(const GetBasicStatisticsResponseBody &) = default ;
    GetBasicStatisticsResponseBody(GetBasicStatisticsResponseBody &&) = default ;
    GetBasicStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBasicStatisticsResponseBody() = default ;
    GetBasicStatisticsResponseBody& operator=(const GetBasicStatisticsResponseBody &) = default ;
    GetBasicStatisticsResponseBody& operator=(GetBasicStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(ProtectedDataSize, protectedDataSize_);
        DARABONBA_PTR_TO_JSON(ProtectedResourceCount, protectedResourceCount_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, RegionStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(ProtectedDataSize, protectedDataSize_);
        DARABONBA_PTR_FROM_JSON(ProtectedResourceCount, protectedResourceCount_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      RegionStatistics() = default ;
      RegionStatistics(const RegionStatistics &) = default ;
      RegionStatistics(RegionStatistics &&) = default ;
      RegionStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionStatistics() = default ;
      RegionStatistics& operator=(const RegionStatistics &) = default ;
      RegionStatistics& operator=(RegionStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->protectedDataSize_ == nullptr
        && this->protectedResourceCount_ == nullptr && this->regionId_ == nullptr; };
      // protectedDataSize Field Functions 
      bool hasProtectedDataSize() const { return this->protectedDataSize_ != nullptr;};
      void deleteProtectedDataSize() { this->protectedDataSize_ = nullptr;};
      inline int64_t getProtectedDataSize() const { DARABONBA_PTR_GET_DEFAULT(protectedDataSize_, 0L) };
      inline RegionStatistics& setProtectedDataSize(int64_t protectedDataSize) { DARABONBA_PTR_SET_VALUE(protectedDataSize_, protectedDataSize) };


      // protectedResourceCount Field Functions 
      bool hasProtectedResourceCount() const { return this->protectedResourceCount_ != nullptr;};
      void deleteProtectedResourceCount() { this->protectedResourceCount_ = nullptr;};
      inline int32_t getProtectedResourceCount() const { DARABONBA_PTR_GET_DEFAULT(protectedResourceCount_, 0) };
      inline RegionStatistics& setProtectedResourceCount(int32_t protectedResourceCount) { DARABONBA_PTR_SET_VALUE(protectedResourceCount_, protectedResourceCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline RegionStatistics& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      shared_ptr<int64_t> protectedDataSize_ {};
      shared_ptr<int32_t> protectedResourceCount_ {};
      shared_ptr<string> regionId_ {};
    };

    class GlobalStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GlobalStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(ProtectedDataSize, protectedDataSize_);
        DARABONBA_PTR_TO_JSON(ProtectedResourceCount, protectedResourceCount_);
      };
      friend void from_json(const Darabonba::Json& j, GlobalStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(ProtectedDataSize, protectedDataSize_);
        DARABONBA_PTR_FROM_JSON(ProtectedResourceCount, protectedResourceCount_);
      };
      GlobalStatistics() = default ;
      GlobalStatistics(const GlobalStatistics &) = default ;
      GlobalStatistics(GlobalStatistics &&) = default ;
      GlobalStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GlobalStatistics() = default ;
      GlobalStatistics& operator=(const GlobalStatistics &) = default ;
      GlobalStatistics& operator=(GlobalStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->protectedDataSize_ == nullptr
        && this->protectedResourceCount_ == nullptr; };
      // protectedDataSize Field Functions 
      bool hasProtectedDataSize() const { return this->protectedDataSize_ != nullptr;};
      void deleteProtectedDataSize() { this->protectedDataSize_ = nullptr;};
      inline int64_t getProtectedDataSize() const { DARABONBA_PTR_GET_DEFAULT(protectedDataSize_, 0L) };
      inline GlobalStatistics& setProtectedDataSize(int64_t protectedDataSize) { DARABONBA_PTR_SET_VALUE(protectedDataSize_, protectedDataSize) };


      // protectedResourceCount Field Functions 
      bool hasProtectedResourceCount() const { return this->protectedResourceCount_ != nullptr;};
      void deleteProtectedResourceCount() { this->protectedResourceCount_ = nullptr;};
      inline int32_t getProtectedResourceCount() const { DARABONBA_PTR_GET_DEFAULT(protectedResourceCount_, 0) };
      inline GlobalStatistics& setProtectedResourceCount(int32_t protectedResourceCount) { DARABONBA_PTR_SET_VALUE(protectedResourceCount_, protectedResourceCount) };


    protected:
      shared_ptr<int64_t> protectedDataSize_ {};
      shared_ptr<int32_t> protectedResourceCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->globalStatistics_ == nullptr && this->message_ == nullptr && this->regionStatistics_ == nullptr && this->requestId_ == nullptr && this->sourceType_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetBasicStatisticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // globalStatistics Field Functions 
    bool hasGlobalStatistics() const { return this->globalStatistics_ != nullptr;};
    void deleteGlobalStatistics() { this->globalStatistics_ = nullptr;};
    inline const GetBasicStatisticsResponseBody::GlobalStatistics & getGlobalStatistics() const { DARABONBA_PTR_GET_CONST(globalStatistics_, GetBasicStatisticsResponseBody::GlobalStatistics) };
    inline GetBasicStatisticsResponseBody::GlobalStatistics getGlobalStatistics() { DARABONBA_PTR_GET(globalStatistics_, GetBasicStatisticsResponseBody::GlobalStatistics) };
    inline GetBasicStatisticsResponseBody& setGlobalStatistics(const GetBasicStatisticsResponseBody::GlobalStatistics & globalStatistics) { DARABONBA_PTR_SET_VALUE(globalStatistics_, globalStatistics) };
    inline GetBasicStatisticsResponseBody& setGlobalStatistics(GetBasicStatisticsResponseBody::GlobalStatistics && globalStatistics) { DARABONBA_PTR_SET_RVALUE(globalStatistics_, globalStatistics) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBasicStatisticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionStatistics Field Functions 
    bool hasRegionStatistics() const { return this->regionStatistics_ != nullptr;};
    void deleteRegionStatistics() { this->regionStatistics_ = nullptr;};
    inline const vector<GetBasicStatisticsResponseBody::RegionStatistics> & getRegionStatistics() const { DARABONBA_PTR_GET_CONST(regionStatistics_, vector<GetBasicStatisticsResponseBody::RegionStatistics>) };
    inline vector<GetBasicStatisticsResponseBody::RegionStatistics> getRegionStatistics() { DARABONBA_PTR_GET(regionStatistics_, vector<GetBasicStatisticsResponseBody::RegionStatistics>) };
    inline GetBasicStatisticsResponseBody& setRegionStatistics(const vector<GetBasicStatisticsResponseBody::RegionStatistics> & regionStatistics) { DARABONBA_PTR_SET_VALUE(regionStatistics_, regionStatistics) };
    inline GetBasicStatisticsResponseBody& setRegionStatistics(vector<GetBasicStatisticsResponseBody::RegionStatistics> && regionStatistics) { DARABONBA_PTR_SET_RVALUE(regionStatistics_, regionStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBasicStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetBasicStatisticsResponseBody& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBasicStatisticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetBasicStatisticsResponseBody::GlobalStatistics> globalStatistics_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<GetBasicStatisticsResponseBody::RegionStatistics>> regionStatistics_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
