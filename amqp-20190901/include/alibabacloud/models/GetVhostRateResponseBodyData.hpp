// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVHOSTRATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETVHOSTRATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetVhostRateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVhostRateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelNum, channelNum_);
      DARABONBA_PTR_TO_JSON(ConnectionNum, connectionNum_);
      DARABONBA_PTR_TO_JSON(InQps, inQps_);
      DARABONBA_PTR_TO_JSON(OutQps, outQps_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, GetVhostRateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelNum, channelNum_);
      DARABONBA_PTR_FROM_JSON(ConnectionNum, connectionNum_);
      DARABONBA_PTR_FROM_JSON(InQps, inQps_);
      DARABONBA_PTR_FROM_JSON(OutQps, outQps_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    GetVhostRateResponseBodyData() = default ;
    GetVhostRateResponseBodyData(const GetVhostRateResponseBodyData &) = default ;
    GetVhostRateResponseBodyData(GetVhostRateResponseBodyData &&) = default ;
    GetVhostRateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVhostRateResponseBodyData() = default ;
    GetVhostRateResponseBodyData& operator=(const GetVhostRateResponseBodyData &) = default ;
    GetVhostRateResponseBodyData& operator=(GetVhostRateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelNum_ == nullptr
        && return this->connectionNum_ == nullptr && return this->inQps_ == nullptr && return this->outQps_ == nullptr && return this->vhostName_ == nullptr; };
    // channelNum Field Functions 
    bool hasChannelNum() const { return this->channelNum_ != nullptr;};
    void deleteChannelNum() { this->channelNum_ = nullptr;};
    inline int32_t channelNum() const { DARABONBA_PTR_GET_DEFAULT(channelNum_, 0) };
    inline GetVhostRateResponseBodyData& setChannelNum(int32_t channelNum) { DARABONBA_PTR_SET_VALUE(channelNum_, channelNum) };


    // connectionNum Field Functions 
    bool hasConnectionNum() const { return this->connectionNum_ != nullptr;};
    void deleteConnectionNum() { this->connectionNum_ = nullptr;};
    inline int32_t connectionNum() const { DARABONBA_PTR_GET_DEFAULT(connectionNum_, 0) };
    inline GetVhostRateResponseBodyData& setConnectionNum(int32_t connectionNum) { DARABONBA_PTR_SET_VALUE(connectionNum_, connectionNum) };


    // inQps Field Functions 
    bool hasInQps() const { return this->inQps_ != nullptr;};
    void deleteInQps() { this->inQps_ = nullptr;};
    inline int64_t inQps() const { DARABONBA_PTR_GET_DEFAULT(inQps_, 0L) };
    inline GetVhostRateResponseBodyData& setInQps(int64_t inQps) { DARABONBA_PTR_SET_VALUE(inQps_, inQps) };


    // outQps Field Functions 
    bool hasOutQps() const { return this->outQps_ != nullptr;};
    void deleteOutQps() { this->outQps_ = nullptr;};
    inline int64_t outQps() const { DARABONBA_PTR_GET_DEFAULT(outQps_, 0L) };
    inline GetVhostRateResponseBodyData& setOutQps(int64_t outQps) { DARABONBA_PTR_SET_VALUE(outQps_, outQps) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetVhostRateResponseBodyData& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<int32_t> channelNum_ = nullptr;
    std::shared_ptr<int32_t> connectionNum_ = nullptr;
    std::shared_ptr<int64_t> inQps_ = nullptr;
    std::shared_ptr<int64_t> outQps_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
