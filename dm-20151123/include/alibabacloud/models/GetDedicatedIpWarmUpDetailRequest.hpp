// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetDedicatedIpWarmUpDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDedicatedIpWarmUpDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedIp, dedicatedIp_);
      DARABONBA_PTR_TO_JSON(EndDayMark, endDayMark_);
      DARABONBA_PTR_TO_JSON(Esp, esp_);
      DARABONBA_PTR_TO_JSON(StartDayMark, startDayMark_);
    };
    friend void from_json(const Darabonba::Json& j, GetDedicatedIpWarmUpDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedIp, dedicatedIp_);
      DARABONBA_PTR_FROM_JSON(EndDayMark, endDayMark_);
      DARABONBA_PTR_FROM_JSON(Esp, esp_);
      DARABONBA_PTR_FROM_JSON(StartDayMark, startDayMark_);
    };
    GetDedicatedIpWarmUpDetailRequest() = default ;
    GetDedicatedIpWarmUpDetailRequest(const GetDedicatedIpWarmUpDetailRequest &) = default ;
    GetDedicatedIpWarmUpDetailRequest(GetDedicatedIpWarmUpDetailRequest &&) = default ;
    GetDedicatedIpWarmUpDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDedicatedIpWarmUpDetailRequest() = default ;
    GetDedicatedIpWarmUpDetailRequest& operator=(const GetDedicatedIpWarmUpDetailRequest &) = default ;
    GetDedicatedIpWarmUpDetailRequest& operator=(GetDedicatedIpWarmUpDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedIp_ != nullptr
        && this->endDayMark_ != nullptr && this->esp_ != nullptr && this->startDayMark_ != nullptr; };
    // dedicatedIp Field Functions 
    bool hasDedicatedIp() const { return this->dedicatedIp_ != nullptr;};
    void deleteDedicatedIp() { this->dedicatedIp_ = nullptr;};
    inline string dedicatedIp() const { DARABONBA_PTR_GET_DEFAULT(dedicatedIp_, "") };
    inline GetDedicatedIpWarmUpDetailRequest& setDedicatedIp(string dedicatedIp) { DARABONBA_PTR_SET_VALUE(dedicatedIp_, dedicatedIp) };


    // endDayMark Field Functions 
    bool hasEndDayMark() const { return this->endDayMark_ != nullptr;};
    void deleteEndDayMark() { this->endDayMark_ = nullptr;};
    inline int64_t endDayMark() const { DARABONBA_PTR_GET_DEFAULT(endDayMark_, 0L) };
    inline GetDedicatedIpWarmUpDetailRequest& setEndDayMark(int64_t endDayMark) { DARABONBA_PTR_SET_VALUE(endDayMark_, endDayMark) };


    // esp Field Functions 
    bool hasEsp() const { return this->esp_ != nullptr;};
    void deleteEsp() { this->esp_ = nullptr;};
    inline string esp() const { DARABONBA_PTR_GET_DEFAULT(esp_, "") };
    inline GetDedicatedIpWarmUpDetailRequest& setEsp(string esp) { DARABONBA_PTR_SET_VALUE(esp_, esp) };


    // startDayMark Field Functions 
    bool hasStartDayMark() const { return this->startDayMark_ != nullptr;};
    void deleteStartDayMark() { this->startDayMark_ = nullptr;};
    inline int64_t startDayMark() const { DARABONBA_PTR_GET_DEFAULT(startDayMark_, 0L) };
    inline GetDedicatedIpWarmUpDetailRequest& setStartDayMark(int64_t startDayMark) { DARABONBA_PTR_SET_VALUE(startDayMark_, startDayMark) };


  protected:
    std::shared_ptr<string> dedicatedIp_ = nullptr;
    std::shared_ptr<int64_t> endDayMark_ = nullptr;
    std::shared_ptr<string> esp_ = nullptr;
    std::shared_ptr<int64_t> startDayMark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
