// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTREAMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTREAMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeStreamsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStreamsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Streams, streams_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStreamsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Streams, streams_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeStreamsResponseBody() = default ;
    DescribeStreamsResponseBody(const DescribeStreamsResponseBody &) = default ;
    DescribeStreamsResponseBody(DescribeStreamsResponseBody &&) = default ;
    DescribeStreamsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStreamsResponseBody() = default ;
    DescribeStreamsResponseBody& operator=(const DescribeStreamsResponseBody &) = default ;
    DescribeStreamsResponseBody& operator=(DescribeStreamsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Streams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Streams& obj) { 
        DARABONBA_PTR_TO_JSON(App, app_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Height, height_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PlayDomain, playDomain_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(PushDomain, pushDomain_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Width, width_);
      };
      friend void from_json(const Darabonba::Json& j, Streams& obj) { 
        DARABONBA_PTR_FROM_JSON(App, app_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Height, height_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PlayDomain, playDomain_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(PushDomain, pushDomain_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Width, width_);
      };
      Streams() = default ;
      Streams(const Streams &) = default ;
      Streams(Streams &&) = default ;
      Streams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Streams() = default ;
      Streams& operator=(const Streams &) = default ;
      Streams& operator=(Streams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->app_ == nullptr
        && this->createdTime_ == nullptr && this->deviceId_ == nullptr && this->enabled_ == nullptr && this->groupId_ == nullptr && this->height_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->playDomain_ == nullptr && this->protocol_ == nullptr && this->pushDomain_ == nullptr
        && this->status_ == nullptr && this->width_ == nullptr; };
      // app Field Functions 
      bool hasApp() const { return this->app_ != nullptr;};
      void deleteApp() { this->app_ = nullptr;};
      inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
      inline Streams& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Streams& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Streams& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Streams& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Streams& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
      inline Streams& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Streams& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Streams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // playDomain Field Functions 
      bool hasPlayDomain() const { return this->playDomain_ != nullptr;};
      void deletePlayDomain() { this->playDomain_ = nullptr;};
      inline string getPlayDomain() const { DARABONBA_PTR_GET_DEFAULT(playDomain_, "") };
      inline Streams& setPlayDomain(string playDomain) { DARABONBA_PTR_SET_VALUE(playDomain_, playDomain) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Streams& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // pushDomain Field Functions 
      bool hasPushDomain() const { return this->pushDomain_ != nullptr;};
      void deletePushDomain() { this->pushDomain_ = nullptr;};
      inline string getPushDomain() const { DARABONBA_PTR_GET_DEFAULT(pushDomain_, "") };
      inline Streams& setPushDomain(string pushDomain) { DARABONBA_PTR_SET_VALUE(pushDomain_, pushDomain) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Streams& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
      inline Streams& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      shared_ptr<string> app_ {};
      shared_ptr<string> createdTime_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> groupId_ {};
      shared_ptr<int32_t> height_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> playDomain_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> pushDomain_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> width_ {};
    };

    virtual bool empty() const override { return this->pageCount_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->streams_ == nullptr && this->totalCount_ == nullptr; };
    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int64_t getPageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
    inline DescribeStreamsResponseBody& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline DescribeStreamsResponseBody& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeStreamsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStreamsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streams Field Functions 
    bool hasStreams() const { return this->streams_ != nullptr;};
    void deleteStreams() { this->streams_ = nullptr;};
    inline const vector<DescribeStreamsResponseBody::Streams> & getStreams() const { DARABONBA_PTR_GET_CONST(streams_, vector<DescribeStreamsResponseBody::Streams>) };
    inline vector<DescribeStreamsResponseBody::Streams> getStreams() { DARABONBA_PTR_GET(streams_, vector<DescribeStreamsResponseBody::Streams>) };
    inline DescribeStreamsResponseBody& setStreams(const vector<DescribeStreamsResponseBody::Streams> & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
    inline DescribeStreamsResponseBody& setStreams(vector<DescribeStreamsResponseBody::Streams> && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeStreamsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int64_t> pageCount_ {};
    shared_ptr<int64_t> pageNum_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeStreamsResponseBody::Streams>> streams_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
