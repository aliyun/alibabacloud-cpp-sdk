// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKTRAFFICRESPONSEBODYTRAFFICCONTROLTASKTRAFFICINFOTARGETTRAFFICS_HPP_
#define ALIBABACLOUD_MODELS_GETTRAFFICCONTROLTASKTRAFFICRESPONSEBODYTRAFFICCONTROLTASKTRAFFICINFOTARGETTRAFFICS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/TrafficControlTaskTrafficInfoTargetTrafficsDataValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(TrafficContorlTargetId, trafficContorlTargetId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(TrafficContorlTargetId, trafficContorlTargetId_);
    };
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics() = default ;
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics(const GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics &) = default ;
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics(GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics &&) = default ;
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics() = default ;
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics& operator=(const GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics &) = default ;
    GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics& operator=(GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->trafficContorlTargetId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const map<string, Models::TrafficControlTaskTrafficInfoTargetTrafficsDataValue> & data() const { DARABONBA_PTR_GET_CONST(data_, map<string, Models::TrafficControlTaskTrafficInfoTargetTrafficsDataValue>) };
    inline map<string, Models::TrafficControlTaskTrafficInfoTargetTrafficsDataValue> data() { DARABONBA_PTR_GET(data_, map<string, Models::TrafficControlTaskTrafficInfoTargetTrafficsDataValue>) };
    inline GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics& setData(const map<string, Models::TrafficControlTaskTrafficInfoTargetTrafficsDataValue> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics& setData(map<string, Models::TrafficControlTaskTrafficInfoTargetTrafficsDataValue> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // trafficContorlTargetId Field Functions 
    bool hasTrafficContorlTargetId() const { return this->trafficContorlTargetId_ != nullptr;};
    void deleteTrafficContorlTargetId() { this->trafficContorlTargetId_ = nullptr;};
    inline string trafficContorlTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficContorlTargetId_, "") };
    inline GetTrafficControlTaskTrafficResponseBodyTrafficControlTaskTrafficInfoTargetTraffics& setTrafficContorlTargetId(string trafficContorlTargetId) { DARABONBA_PTR_SET_VALUE(trafficContorlTargetId_, trafficContorlTargetId) };


  protected:
    std::shared_ptr<map<string, Models::TrafficControlTaskTrafficInfoTargetTrafficsDataValue>> data_ = nullptr;
    std::shared_ptr<string> trafficContorlTargetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
