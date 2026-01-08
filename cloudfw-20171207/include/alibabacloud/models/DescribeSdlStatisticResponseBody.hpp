// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLSTATISTICRESPONSEBODY_HPP_
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
  class DescribeSdlStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SdlStatisticResp, sdlStatisticResp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SdlStatisticResp, sdlStatisticResp_);
    };
    DescribeSdlStatisticResponseBody() = default ;
    DescribeSdlStatisticResponseBody(const DescribeSdlStatisticResponseBody &) = default ;
    DescribeSdlStatisticResponseBody(DescribeSdlStatisticResponseBody &&) = default ;
    DescribeSdlStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlStatisticResponseBody() = default ;
    DescribeSdlStatisticResponseBody& operator=(const DescribeSdlStatisticResponseBody &) = default ;
    DescribeSdlStatisticResponseBody& operator=(DescribeSdlStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SdlStatisticResp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SdlStatisticResp& obj) { 
        DARABONBA_PTR_TO_JSON(SdlAssetTopList, sdlAssetTopList_);
        DARABONBA_PTR_TO_JSON(SdlDstTopList, sdlDstTopList_);
        DARABONBA_PTR_TO_JSON(SdlEventTypeCountList, sdlEventTypeCountList_);
      };
      friend void from_json(const Darabonba::Json& j, SdlStatisticResp& obj) { 
        DARABONBA_PTR_FROM_JSON(SdlAssetTopList, sdlAssetTopList_);
        DARABONBA_PTR_FROM_JSON(SdlDstTopList, sdlDstTopList_);
        DARABONBA_PTR_FROM_JSON(SdlEventTypeCountList, sdlEventTypeCountList_);
      };
      SdlStatisticResp() = default ;
      SdlStatisticResp(const SdlStatisticResp &) = default ;
      SdlStatisticResp(SdlStatisticResp &&) = default ;
      SdlStatisticResp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SdlStatisticResp() = default ;
      SdlStatisticResp& operator=(const SdlStatisticResp &) = default ;
      SdlStatisticResp& operator=(SdlStatisticResp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SdlEventTypeCountList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SdlEventTypeCountList& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
        };
        friend void from_json(const Darabonba::Json& j, SdlEventTypeCountList& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        };
        SdlEventTypeCountList() = default ;
        SdlEventTypeCountList(const SdlEventTypeCountList &) = default ;
        SdlEventTypeCountList(SdlEventTypeCountList &&) = default ;
        SdlEventTypeCountList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SdlEventTypeCountList() = default ;
        SdlEventTypeCountList& operator=(const SdlEventTypeCountList &) = default ;
        SdlEventTypeCountList& operator=(SdlEventTypeCountList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->eventType_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
        inline SdlEventTypeCountList& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline SdlEventTypeCountList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      protected:
        shared_ptr<string> count_ {};
        shared_ptr<string> eventType_ {};
      };

      class SdlDstTopList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SdlDstTopList& obj) { 
          DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
          DARABONBA_PTR_TO_JSON(TrafficBytes, trafficBytes_);
        };
        friend void from_json(const Darabonba::Json& j, SdlDstTopList& obj) { 
          DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
          DARABONBA_PTR_FROM_JSON(TrafficBytes, trafficBytes_);
        };
        SdlDstTopList() = default ;
        SdlDstTopList(const SdlDstTopList &) = default ;
        SdlDstTopList(SdlDstTopList &&) = default ;
        SdlDstTopList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SdlDstTopList() = default ;
        SdlDstTopList& operator=(const SdlDstTopList &) = default ;
        SdlDstTopList& operator=(SdlDstTopList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->publicIp_ == nullptr
        && this->trafficBytes_ == nullptr; };
        // publicIp Field Functions 
        bool hasPublicIp() const { return this->publicIp_ != nullptr;};
        void deletePublicIp() { this->publicIp_ = nullptr;};
        inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
        inline SdlDstTopList& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


        // trafficBytes Field Functions 
        bool hasTrafficBytes() const { return this->trafficBytes_ != nullptr;};
        void deleteTrafficBytes() { this->trafficBytes_ = nullptr;};
        inline int64_t getTrafficBytes() const { DARABONBA_PTR_GET_DEFAULT(trafficBytes_, 0L) };
        inline SdlDstTopList& setTrafficBytes(int64_t trafficBytes) { DARABONBA_PTR_SET_VALUE(trafficBytes_, trafficBytes) };


      protected:
        shared_ptr<string> publicIp_ {};
        shared_ptr<int64_t> trafficBytes_ {};
      };

      class SdlAssetTopList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SdlAssetTopList& obj) { 
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
          DARABONBA_PTR_TO_JSON(TrafficBytes, trafficBytes_);
        };
        friend void from_json(const Darabonba::Json& j, SdlAssetTopList& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
          DARABONBA_PTR_FROM_JSON(TrafficBytes, trafficBytes_);
        };
        SdlAssetTopList() = default ;
        SdlAssetTopList(const SdlAssetTopList &) = default ;
        SdlAssetTopList(SdlAssetTopList &&) = default ;
        SdlAssetTopList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SdlAssetTopList() = default ;
        SdlAssetTopList& operator=(const SdlAssetTopList &) = default ;
        SdlAssetTopList& operator=(SdlAssetTopList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assetType_ == nullptr
        && this->publicIp_ == nullptr && this->trafficBytes_ == nullptr; };
        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
        inline SdlAssetTopList& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // publicIp Field Functions 
        bool hasPublicIp() const { return this->publicIp_ != nullptr;};
        void deletePublicIp() { this->publicIp_ = nullptr;};
        inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
        inline SdlAssetTopList& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


        // trafficBytes Field Functions 
        bool hasTrafficBytes() const { return this->trafficBytes_ != nullptr;};
        void deleteTrafficBytes() { this->trafficBytes_ = nullptr;};
        inline int64_t getTrafficBytes() const { DARABONBA_PTR_GET_DEFAULT(trafficBytes_, 0L) };
        inline SdlAssetTopList& setTrafficBytes(int64_t trafficBytes) { DARABONBA_PTR_SET_VALUE(trafficBytes_, trafficBytes) };


      protected:
        shared_ptr<string> assetType_ {};
        shared_ptr<string> publicIp_ {};
        shared_ptr<int64_t> trafficBytes_ {};
      };

      virtual bool empty() const override { return this->sdlAssetTopList_ == nullptr
        && this->sdlDstTopList_ == nullptr && this->sdlEventTypeCountList_ == nullptr; };
      // sdlAssetTopList Field Functions 
      bool hasSdlAssetTopList() const { return this->sdlAssetTopList_ != nullptr;};
      void deleteSdlAssetTopList() { this->sdlAssetTopList_ = nullptr;};
      inline const vector<SdlStatisticResp::SdlAssetTopList> & getSdlAssetTopList() const { DARABONBA_PTR_GET_CONST(sdlAssetTopList_, vector<SdlStatisticResp::SdlAssetTopList>) };
      inline vector<SdlStatisticResp::SdlAssetTopList> getSdlAssetTopList() { DARABONBA_PTR_GET(sdlAssetTopList_, vector<SdlStatisticResp::SdlAssetTopList>) };
      inline SdlStatisticResp& setSdlAssetTopList(const vector<SdlStatisticResp::SdlAssetTopList> & sdlAssetTopList) { DARABONBA_PTR_SET_VALUE(sdlAssetTopList_, sdlAssetTopList) };
      inline SdlStatisticResp& setSdlAssetTopList(vector<SdlStatisticResp::SdlAssetTopList> && sdlAssetTopList) { DARABONBA_PTR_SET_RVALUE(sdlAssetTopList_, sdlAssetTopList) };


      // sdlDstTopList Field Functions 
      bool hasSdlDstTopList() const { return this->sdlDstTopList_ != nullptr;};
      void deleteSdlDstTopList() { this->sdlDstTopList_ = nullptr;};
      inline const vector<SdlStatisticResp::SdlDstTopList> & getSdlDstTopList() const { DARABONBA_PTR_GET_CONST(sdlDstTopList_, vector<SdlStatisticResp::SdlDstTopList>) };
      inline vector<SdlStatisticResp::SdlDstTopList> getSdlDstTopList() { DARABONBA_PTR_GET(sdlDstTopList_, vector<SdlStatisticResp::SdlDstTopList>) };
      inline SdlStatisticResp& setSdlDstTopList(const vector<SdlStatisticResp::SdlDstTopList> & sdlDstTopList) { DARABONBA_PTR_SET_VALUE(sdlDstTopList_, sdlDstTopList) };
      inline SdlStatisticResp& setSdlDstTopList(vector<SdlStatisticResp::SdlDstTopList> && sdlDstTopList) { DARABONBA_PTR_SET_RVALUE(sdlDstTopList_, sdlDstTopList) };


      // sdlEventTypeCountList Field Functions 
      bool hasSdlEventTypeCountList() const { return this->sdlEventTypeCountList_ != nullptr;};
      void deleteSdlEventTypeCountList() { this->sdlEventTypeCountList_ = nullptr;};
      inline const vector<SdlStatisticResp::SdlEventTypeCountList> & getSdlEventTypeCountList() const { DARABONBA_PTR_GET_CONST(sdlEventTypeCountList_, vector<SdlStatisticResp::SdlEventTypeCountList>) };
      inline vector<SdlStatisticResp::SdlEventTypeCountList> getSdlEventTypeCountList() { DARABONBA_PTR_GET(sdlEventTypeCountList_, vector<SdlStatisticResp::SdlEventTypeCountList>) };
      inline SdlStatisticResp& setSdlEventTypeCountList(const vector<SdlStatisticResp::SdlEventTypeCountList> & sdlEventTypeCountList) { DARABONBA_PTR_SET_VALUE(sdlEventTypeCountList_, sdlEventTypeCountList) };
      inline SdlStatisticResp& setSdlEventTypeCountList(vector<SdlStatisticResp::SdlEventTypeCountList> && sdlEventTypeCountList) { DARABONBA_PTR_SET_RVALUE(sdlEventTypeCountList_, sdlEventTypeCountList) };


    protected:
      shared_ptr<vector<SdlStatisticResp::SdlAssetTopList>> sdlAssetTopList_ {};
      shared_ptr<vector<SdlStatisticResp::SdlDstTopList>> sdlDstTopList_ {};
      shared_ptr<vector<SdlStatisticResp::SdlEventTypeCountList>> sdlEventTypeCountList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sdlStatisticResp_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSdlStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sdlStatisticResp Field Functions 
    bool hasSdlStatisticResp() const { return this->sdlStatisticResp_ != nullptr;};
    void deleteSdlStatisticResp() { this->sdlStatisticResp_ = nullptr;};
    inline const DescribeSdlStatisticResponseBody::SdlStatisticResp & getSdlStatisticResp() const { DARABONBA_PTR_GET_CONST(sdlStatisticResp_, DescribeSdlStatisticResponseBody::SdlStatisticResp) };
    inline DescribeSdlStatisticResponseBody::SdlStatisticResp getSdlStatisticResp() { DARABONBA_PTR_GET(sdlStatisticResp_, DescribeSdlStatisticResponseBody::SdlStatisticResp) };
    inline DescribeSdlStatisticResponseBody& setSdlStatisticResp(const DescribeSdlStatisticResponseBody::SdlStatisticResp & sdlStatisticResp) { DARABONBA_PTR_SET_VALUE(sdlStatisticResp_, sdlStatisticResp) };
    inline DescribeSdlStatisticResponseBody& setSdlStatisticResp(DescribeSdlStatisticResponseBody::SdlStatisticResp && sdlStatisticResp) { DARABONBA_PTR_SET_RVALUE(sdlStatisticResp_, sdlStatisticResp) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeSdlStatisticResponseBody::SdlStatisticResp> sdlStatisticResp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
