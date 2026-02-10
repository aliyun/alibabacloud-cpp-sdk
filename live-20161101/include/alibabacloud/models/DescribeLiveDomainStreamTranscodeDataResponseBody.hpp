// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTREAMTRANSCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINSTREAMTRANSCODEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainStreamTranscodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainStreamTranscodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeDataList, transcodeDataList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainStreamTranscodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeDataList, transcodeDataList_);
    };
    DescribeLiveDomainStreamTranscodeDataResponseBody() = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBody(const DescribeLiveDomainStreamTranscodeDataResponseBody &) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBody(DescribeLiveDomainStreamTranscodeDataResponseBody &&) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainStreamTranscodeDataResponseBody() = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBody& operator=(const DescribeLiveDomainStreamTranscodeDataResponseBody &) = default ;
    DescribeLiveDomainStreamTranscodeDataResponseBody& operator=(DescribeLiveDomainStreamTranscodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeDataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeDataList& obj) { 
        DARABONBA_PTR_TO_JSON(TranscodeData, transcodeData_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeDataList& obj) { 
        DARABONBA_PTR_FROM_JSON(TranscodeData, transcodeData_);
      };
      TranscodeDataList() = default ;
      TranscodeDataList(const TranscodeDataList &) = default ;
      TranscodeDataList(TranscodeDataList &&) = default ;
      TranscodeDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeDataList() = default ;
      TranscodeDataList& operator=(const TranscodeDataList &) = default ;
      TranscodeDataList& operator=(TranscodeDataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TranscodeData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TranscodeData& obj) { 
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Fps, fps_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Resolution, resolution_);
          DARABONBA_PTR_TO_JSON(TanscodeType, tanscodeType_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, TranscodeData& obj) { 
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Fps, fps_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
          DARABONBA_PTR_FROM_JSON(TanscodeType, tanscodeType_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        TranscodeData() = default ;
        TranscodeData(const TranscodeData &) = default ;
        TranscodeData(TranscodeData &&) = default ;
        TranscodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TranscodeData() = default ;
        TranscodeData& operator=(const TranscodeData &) = default ;
        TranscodeData& operator=(TranscodeData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domain_ == nullptr
        && this->duration_ == nullptr && this->fps_ == nullptr && this->region_ == nullptr && this->resolution_ == nullptr && this->tanscodeType_ == nullptr
        && this->timeStamp_ == nullptr; };
        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline TranscodeData& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline TranscodeData& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // fps Field Functions 
        bool hasFps() const { return this->fps_ != nullptr;};
        void deleteFps() { this->fps_ = nullptr;};
        inline string getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
        inline TranscodeData& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline TranscodeData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // resolution Field Functions 
        bool hasResolution() const { return this->resolution_ != nullptr;};
        void deleteResolution() { this->resolution_ = nullptr;};
        inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
        inline TranscodeData& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


        // tanscodeType Field Functions 
        bool hasTanscodeType() const { return this->tanscodeType_ != nullptr;};
        void deleteTanscodeType() { this->tanscodeType_ = nullptr;};
        inline string getTanscodeType() const { DARABONBA_PTR_GET_DEFAULT(tanscodeType_, "") };
        inline TranscodeData& setTanscodeType(string tanscodeType) { DARABONBA_PTR_SET_VALUE(tanscodeType_, tanscodeType) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline TranscodeData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<string> domain_ {};
        shared_ptr<int32_t> duration_ {};
        shared_ptr<string> fps_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> resolution_ {};
        shared_ptr<string> tanscodeType_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->transcodeData_ == nullptr; };
      // transcodeData Field Functions 
      bool hasTranscodeData() const { return this->transcodeData_ != nullptr;};
      void deleteTranscodeData() { this->transcodeData_ = nullptr;};
      inline const vector<TranscodeDataList::TranscodeData> & getTranscodeData() const { DARABONBA_PTR_GET_CONST(transcodeData_, vector<TranscodeDataList::TranscodeData>) };
      inline vector<TranscodeDataList::TranscodeData> getTranscodeData() { DARABONBA_PTR_GET(transcodeData_, vector<TranscodeDataList::TranscodeData>) };
      inline TranscodeDataList& setTranscodeData(const vector<TranscodeDataList::TranscodeData> & transcodeData) { DARABONBA_PTR_SET_VALUE(transcodeData_, transcodeData) };
      inline TranscodeDataList& setTranscodeData(vector<TranscodeDataList::TranscodeData> && transcodeData) { DARABONBA_PTR_SET_RVALUE(transcodeData_, transcodeData) };


    protected:
      shared_ptr<vector<TranscodeDataList::TranscodeData>> transcodeData_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->transcodeDataList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainStreamTranscodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeDataList Field Functions 
    bool hasTranscodeDataList() const { return this->transcodeDataList_ != nullptr;};
    void deleteTranscodeDataList() { this->transcodeDataList_ = nullptr;};
    inline const DescribeLiveDomainStreamTranscodeDataResponseBody::TranscodeDataList & getTranscodeDataList() const { DARABONBA_PTR_GET_CONST(transcodeDataList_, DescribeLiveDomainStreamTranscodeDataResponseBody::TranscodeDataList) };
    inline DescribeLiveDomainStreamTranscodeDataResponseBody::TranscodeDataList getTranscodeDataList() { DARABONBA_PTR_GET(transcodeDataList_, DescribeLiveDomainStreamTranscodeDataResponseBody::TranscodeDataList) };
    inline DescribeLiveDomainStreamTranscodeDataResponseBody& setTranscodeDataList(const DescribeLiveDomainStreamTranscodeDataResponseBody::TranscodeDataList & transcodeDataList) { DARABONBA_PTR_SET_VALUE(transcodeDataList_, transcodeDataList) };
    inline DescribeLiveDomainStreamTranscodeDataResponseBody& setTranscodeDataList(DescribeLiveDomainStreamTranscodeDataResponseBody::TranscodeDataList && transcodeDataList) { DARABONBA_PTR_SET_RVALUE(transcodeDataList_, transcodeDataList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeLiveDomainStreamTranscodeDataResponseBody::TranscodeDataList> transcodeDataList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
