// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSREGIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSREGIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsRegionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsRegionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsRegionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsRegionListResponseBody() = default ;
    OnsRegionListResponseBody(const OnsRegionListResponseBody &) = default ;
    OnsRegionListResponseBody(OnsRegionListResponseBody &&) = default ;
    OnsRegionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsRegionListResponseBody() = default ;
    OnsRegionListResponseBody& operator=(const OnsRegionListResponseBody &) = default ;
    OnsRegionListResponseBody& operator=(OnsRegionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RegionDo, regionDo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RegionDo, regionDo_);
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
      class RegionDo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegionDo& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(OnsRegionId, onsRegionId_);
          DARABONBA_PTR_TO_JSON(RegionName, regionName_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, RegionDo& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(OnsRegionId, onsRegionId_);
          DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        RegionDo() = default ;
        RegionDo(const RegionDo &) = default ;
        RegionDo(RegionDo &&) = default ;
        RegionDo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RegionDo() = default ;
        RegionDo& operator=(const RegionDo &) = default ;
        RegionDo& operator=(RegionDo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelName_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->onsRegionId_ == nullptr && this->regionName_ == nullptr && this->updateTime_ == nullptr; };
        // channelName Field Functions 
        bool hasChannelName() const { return this->channelName_ != nullptr;};
        void deleteChannelName() { this->channelName_ = nullptr;};
        inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
        inline RegionDo& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline RegionDo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline RegionDo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // onsRegionId Field Functions 
        bool hasOnsRegionId() const { return this->onsRegionId_ != nullptr;};
        void deleteOnsRegionId() { this->onsRegionId_ = nullptr;};
        inline string getOnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(onsRegionId_, "") };
        inline RegionDo& setOnsRegionId(string onsRegionId) { DARABONBA_PTR_SET_VALUE(onsRegionId_, onsRegionId) };


        // regionName Field Functions 
        bool hasRegionName() const { return this->regionName_ != nullptr;};
        void deleteRegionName() { this->regionName_ = nullptr;};
        inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
        inline RegionDo& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline RegionDo& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> channelName_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> onsRegionId_ {};
        shared_ptr<string> regionName_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->regionDo_ == nullptr; };
      // regionDo Field Functions 
      bool hasRegionDo() const { return this->regionDo_ != nullptr;};
      void deleteRegionDo() { this->regionDo_ = nullptr;};
      inline const vector<Data::RegionDo> & getRegionDo() const { DARABONBA_PTR_GET_CONST(regionDo_, vector<Data::RegionDo>) };
      inline vector<Data::RegionDo> getRegionDo() { DARABONBA_PTR_GET(regionDo_, vector<Data::RegionDo>) };
      inline Data& setRegionDo(const vector<Data::RegionDo> & regionDo) { DARABONBA_PTR_SET_VALUE(regionDo_, regionDo) };
      inline Data& setRegionDo(vector<Data::RegionDo> && regionDo) { DARABONBA_PTR_SET_RVALUE(regionDo_, regionDo) };


    protected:
      shared_ptr<vector<Data::RegionDo>> regionDo_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsRegionListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsRegionListResponseBody::Data) };
    inline OnsRegionListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsRegionListResponseBody::Data) };
    inline OnsRegionListResponseBody& setData(const OnsRegionListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsRegionListResponseBody& setData(OnsRegionListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsRegionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<OnsRegionListResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
