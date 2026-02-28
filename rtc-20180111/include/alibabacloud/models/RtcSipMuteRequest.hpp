// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RTCSIPMUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RTCSIPMUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RtcSipMuteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RtcSipMuteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Operations, operations_);
    };
    friend void from_json(const Darabonba::Json& j, RtcSipMuteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Operations, operations_);
    };
    RtcSipMuteRequest() = default ;
    RtcSipMuteRequest(const RtcSipMuteRequest &) = default ;
    RtcSipMuteRequest(RtcSipMuteRequest &&) = default ;
    RtcSipMuteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RtcSipMuteRequest() = default ;
    RtcSipMuteRequest& operator=(const RtcSipMuteRequest &) = default ;
    RtcSipMuteRequest& operator=(RtcSipMuteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Operations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Operations& obj) { 
        DARABONBA_PTR_TO_JSON(Ids, ids_);
        DARABONBA_PTR_TO_JSON(Op, op_);
        DARABONBA_PTR_TO_JSON(OperationId, operationId_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Operations& obj) { 
        DARABONBA_PTR_FROM_JSON(Ids, ids_);
        DARABONBA_PTR_FROM_JSON(Op, op_);
        DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Operations() = default ;
      Operations(const Operations &) = default ;
      Operations(Operations &&) = default ;
      Operations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Operations() = default ;
      Operations& operator=(const Operations &) = default ;
      Operations& operator=(Operations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Value : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Value& obj) { 
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Value& obj) { 
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Value() = default ;
        Value(const Value &) = default ;
        Value(Value &&) = default ;
        Value(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Value() = default ;
        Value& operator=(const Value &) = default ;
        Value& operator=(Value &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->status_ == nullptr; };
        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Value& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // This parameter is required.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->ids_ == nullptr
        && this->op_ == nullptr && this->operationId_ == nullptr && this->path_ == nullptr && this->value_ == nullptr; };
      // ids Field Functions 
      bool hasIds() const { return this->ids_ != nullptr;};
      void deleteIds() { this->ids_ = nullptr;};
      inline const vector<string> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
      inline vector<string> getIds() { DARABONBA_PTR_GET(ids_, vector<string>) };
      inline Operations& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
      inline Operations& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


      // op Field Functions 
      bool hasOp() const { return this->op_ != nullptr;};
      void deleteOp() { this->op_ = nullptr;};
      inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
      inline Operations& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


      // operationId Field Functions 
      bool hasOperationId() const { return this->operationId_ != nullptr;};
      void deleteOperationId() { this->operationId_ = nullptr;};
      inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
      inline Operations& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Operations& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const Operations::Value & getValue() const { DARABONBA_PTR_GET_CONST(value_, Operations::Value) };
      inline Operations::Value getValue() { DARABONBA_PTR_GET(value_, Operations::Value) };
      inline Operations& setValue(const Operations::Value & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Operations& setValue(Operations::Value && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> ids_ {};
      // This parameter is required.
      shared_ptr<string> op_ {};
      // This parameter is required.
      shared_ptr<string> operationId_ {};
      // This parameter is required.
      shared_ptr<string> path_ {};
      // This parameter is required.
      shared_ptr<Operations::Value> value_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->operations_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RtcSipMuteRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline RtcSipMuteRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<RtcSipMuteRequest::Operations> & getOperations() const { DARABONBA_PTR_GET_CONST(operations_, vector<RtcSipMuteRequest::Operations>) };
    inline vector<RtcSipMuteRequest::Operations> getOperations() { DARABONBA_PTR_GET(operations_, vector<RtcSipMuteRequest::Operations>) };
    inline RtcSipMuteRequest& setOperations(const vector<RtcSipMuteRequest::Operations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline RtcSipMuteRequest& setOperations(vector<RtcSipMuteRequest::Operations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // This parameter is required.
    shared_ptr<vector<RtcSipMuteRequest::Operations>> operations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
