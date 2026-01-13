// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKTRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKTRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/TrafficControlTaskTrafficInfoTargetTrafficsDataValue.hpp>
#include <vector>
#include <alibabacloud/models/TrafficControlTaskTrafficInfoTaskTrafficsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetTrafficControlTaskTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTaskTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskTrafficInfo, trafficControlTaskTrafficInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTaskTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskTrafficInfo, trafficControlTaskTrafficInfo_);
    };
    GetTrafficControlTaskTrafficResponseBody() = default ;
    GetTrafficControlTaskTrafficResponseBody(const GetTrafficControlTaskTrafficResponseBody &) = default ;
    GetTrafficControlTaskTrafficResponseBody(GetTrafficControlTaskTrafficResponseBody &&) = default ;
    GetTrafficControlTaskTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTaskTrafficResponseBody() = default ;
    GetTrafficControlTaskTrafficResponseBody& operator=(const GetTrafficControlTaskTrafficResponseBody &) = default ;
    GetTrafficControlTaskTrafficResponseBody& operator=(GetTrafficControlTaskTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficControlTaskTrafficInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficControlTaskTrafficInfo& obj) { 
        DARABONBA_PTR_TO_JSON(TargetTraffics, targetTraffics_);
        DARABONBA_PTR_TO_JSON(TaskTraffics, taskTraffics_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficControlTaskTrafficInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetTraffics, targetTraffics_);
        DARABONBA_PTR_FROM_JSON(TaskTraffics, taskTraffics_);
      };
      TrafficControlTaskTrafficInfo() = default ;
      TrafficControlTaskTrafficInfo(const TrafficControlTaskTrafficInfo &) = default ;
      TrafficControlTaskTrafficInfo(TrafficControlTaskTrafficInfo &&) = default ;
      TrafficControlTaskTrafficInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficControlTaskTrafficInfo() = default ;
      TrafficControlTaskTrafficInfo& operator=(const TrafficControlTaskTrafficInfo &) = default ;
      TrafficControlTaskTrafficInfo& operator=(TrafficControlTaskTrafficInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TargetTraffics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TargetTraffics& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(TrafficControlTargetId, trafficControlTargetId_);
        };
        friend void from_json(const Darabonba::Json& j, TargetTraffics& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(TrafficControlTargetId, trafficControlTargetId_);
        };
        TargetTraffics() = default ;
        TargetTraffics(const TargetTraffics &) = default ;
        TargetTraffics(TargetTraffics &&) = default ;
        TargetTraffics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TargetTraffics() = default ;
        TargetTraffics& operator=(const TargetTraffics &) = default ;
        TargetTraffics& operator=(TargetTraffics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->data_ == nullptr
        && this->trafficControlTargetId_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const map<string, TrafficControlTaskTrafficInfoTargetTrafficsDataValue> & getData() const { DARABONBA_PTR_GET_CONST(data_, map<string, TrafficControlTaskTrafficInfoTargetTrafficsDataValue>) };
        inline map<string, TrafficControlTaskTrafficInfoTargetTrafficsDataValue> getData() { DARABONBA_PTR_GET(data_, map<string, TrafficControlTaskTrafficInfoTargetTrafficsDataValue>) };
        inline TargetTraffics& setData(const map<string, TrafficControlTaskTrafficInfoTargetTrafficsDataValue> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline TargetTraffics& setData(map<string, TrafficControlTaskTrafficInfoTargetTrafficsDataValue> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // trafficControlTargetId Field Functions 
        bool hasTrafficControlTargetId() const { return this->trafficControlTargetId_ != nullptr;};
        void deleteTrafficControlTargetId() { this->trafficControlTargetId_ = nullptr;};
        inline string getTrafficControlTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTargetId_, "") };
        inline TargetTraffics& setTrafficControlTargetId(string trafficControlTargetId) { DARABONBA_PTR_SET_VALUE(trafficControlTargetId_, trafficControlTargetId) };


      protected:
        shared_ptr<map<string, TrafficControlTaskTrafficInfoTargetTrafficsDataValue>> data_ {};
        shared_ptr<string> trafficControlTargetId_ {};
      };

      virtual bool empty() const override { return this->targetTraffics_ == nullptr
        && this->taskTraffics_ == nullptr; };
      // targetTraffics Field Functions 
      bool hasTargetTraffics() const { return this->targetTraffics_ != nullptr;};
      void deleteTargetTraffics() { this->targetTraffics_ = nullptr;};
      inline const vector<TrafficControlTaskTrafficInfo::TargetTraffics> & getTargetTraffics() const { DARABONBA_PTR_GET_CONST(targetTraffics_, vector<TrafficControlTaskTrafficInfo::TargetTraffics>) };
      inline vector<TrafficControlTaskTrafficInfo::TargetTraffics> getTargetTraffics() { DARABONBA_PTR_GET(targetTraffics_, vector<TrafficControlTaskTrafficInfo::TargetTraffics>) };
      inline TrafficControlTaskTrafficInfo& setTargetTraffics(const vector<TrafficControlTaskTrafficInfo::TargetTraffics> & targetTraffics) { DARABONBA_PTR_SET_VALUE(targetTraffics_, targetTraffics) };
      inline TrafficControlTaskTrafficInfo& setTargetTraffics(vector<TrafficControlTaskTrafficInfo::TargetTraffics> && targetTraffics) { DARABONBA_PTR_SET_RVALUE(targetTraffics_, targetTraffics) };


      // taskTraffics Field Functions 
      bool hasTaskTraffics() const { return this->taskTraffics_ != nullptr;};
      void deleteTaskTraffics() { this->taskTraffics_ = nullptr;};
      inline const map<string, TrafficControlTaskTrafficInfoTaskTrafficsValue> & getTaskTraffics() const { DARABONBA_PTR_GET_CONST(taskTraffics_, map<string, TrafficControlTaskTrafficInfoTaskTrafficsValue>) };
      inline map<string, TrafficControlTaskTrafficInfoTaskTrafficsValue> getTaskTraffics() { DARABONBA_PTR_GET(taskTraffics_, map<string, TrafficControlTaskTrafficInfoTaskTrafficsValue>) };
      inline TrafficControlTaskTrafficInfo& setTaskTraffics(const map<string, TrafficControlTaskTrafficInfoTaskTrafficsValue> & taskTraffics) { DARABONBA_PTR_SET_VALUE(taskTraffics_, taskTraffics) };
      inline TrafficControlTaskTrafficInfo& setTaskTraffics(map<string, TrafficControlTaskTrafficInfoTaskTrafficsValue> && taskTraffics) { DARABONBA_PTR_SET_RVALUE(taskTraffics_, taskTraffics) };


    protected:
      shared_ptr<vector<TrafficControlTaskTrafficInfo::TargetTraffics>> targetTraffics_ {};
      shared_ptr<map<string, TrafficControlTaskTrafficInfoTaskTrafficsValue>> taskTraffics_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficControlTaskTrafficInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTrafficControlTaskTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficControlTaskTrafficInfo Field Functions 
    bool hasTrafficControlTaskTrafficInfo() const { return this->trafficControlTaskTrafficInfo_ != nullptr;};
    void deleteTrafficControlTaskTrafficInfo() { this->trafficControlTaskTrafficInfo_ = nullptr;};
    inline const GetTrafficControlTaskTrafficResponseBody::TrafficControlTaskTrafficInfo & getTrafficControlTaskTrafficInfo() const { DARABONBA_PTR_GET_CONST(trafficControlTaskTrafficInfo_, GetTrafficControlTaskTrafficResponseBody::TrafficControlTaskTrafficInfo) };
    inline GetTrafficControlTaskTrafficResponseBody::TrafficControlTaskTrafficInfo getTrafficControlTaskTrafficInfo() { DARABONBA_PTR_GET(trafficControlTaskTrafficInfo_, GetTrafficControlTaskTrafficResponseBody::TrafficControlTaskTrafficInfo) };
    inline GetTrafficControlTaskTrafficResponseBody& setTrafficControlTaskTrafficInfo(const GetTrafficControlTaskTrafficResponseBody::TrafficControlTaskTrafficInfo & trafficControlTaskTrafficInfo) { DARABONBA_PTR_SET_VALUE(trafficControlTaskTrafficInfo_, trafficControlTaskTrafficInfo) };
    inline GetTrafficControlTaskTrafficResponseBody& setTrafficControlTaskTrafficInfo(GetTrafficControlTaskTrafficResponseBody::TrafficControlTaskTrafficInfo && trafficControlTaskTrafficInfo) { DARABONBA_PTR_SET_RVALUE(trafficControlTaskTrafficInfo_, trafficControlTaskTrafficInfo) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetTrafficControlTaskTrafficResponseBody::TrafficControlTaskTrafficInfo> trafficControlTaskTrafficInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
