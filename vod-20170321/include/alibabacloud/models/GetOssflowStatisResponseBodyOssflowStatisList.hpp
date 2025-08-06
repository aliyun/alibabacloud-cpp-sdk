// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOSSFLOWSTATISRESPONSEBODYOSSFLOWSTATISLIST_HPP_
#define ALIBABACLOUD_MODELS_GETOSSFLOWSTATISRESPONSEBODYOSSFLOWSTATISLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetOSSFlowStatisResponseBodyOSSFlowStatisList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOSSFlowStatisResponseBodyOSSFlowStatisList& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkOut, networkOut_);
      DARABONBA_PTR_TO_JSON(StatTime, statTime_);
      DARABONBA_PTR_TO_JSON(StatTimeUTC, statTimeUTC_);
    };
    friend void from_json(const Darabonba::Json& j, GetOSSFlowStatisResponseBodyOSSFlowStatisList& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkOut, networkOut_);
      DARABONBA_PTR_FROM_JSON(StatTime, statTime_);
      DARABONBA_PTR_FROM_JSON(StatTimeUTC, statTimeUTC_);
    };
    GetOSSFlowStatisResponseBodyOSSFlowStatisList() = default ;
    GetOSSFlowStatisResponseBodyOSSFlowStatisList(const GetOSSFlowStatisResponseBodyOSSFlowStatisList &) = default ;
    GetOSSFlowStatisResponseBodyOSSFlowStatisList(GetOSSFlowStatisResponseBodyOSSFlowStatisList &&) = default ;
    GetOSSFlowStatisResponseBodyOSSFlowStatisList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOSSFlowStatisResponseBodyOSSFlowStatisList() = default ;
    GetOSSFlowStatisResponseBodyOSSFlowStatisList& operator=(const GetOSSFlowStatisResponseBodyOSSFlowStatisList &) = default ;
    GetOSSFlowStatisResponseBodyOSSFlowStatisList& operator=(GetOSSFlowStatisResponseBodyOSSFlowStatisList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkOut_ != nullptr
        && this->statTime_ != nullptr && this->statTimeUTC_ != nullptr; };
    // networkOut Field Functions 
    bool hasNetworkOut() const { return this->networkOut_ != nullptr;};
    void deleteNetworkOut() { this->networkOut_ = nullptr;};
    inline int64_t networkOut() const { DARABONBA_PTR_GET_DEFAULT(networkOut_, 0L) };
    inline GetOSSFlowStatisResponseBodyOSSFlowStatisList& setNetworkOut(int64_t networkOut) { DARABONBA_PTR_SET_VALUE(networkOut_, networkOut) };


    // statTime Field Functions 
    bool hasStatTime() const { return this->statTime_ != nullptr;};
    void deleteStatTime() { this->statTime_ = nullptr;};
    inline string statTime() const { DARABONBA_PTR_GET_DEFAULT(statTime_, "") };
    inline GetOSSFlowStatisResponseBodyOSSFlowStatisList& setStatTime(string statTime) { DARABONBA_PTR_SET_VALUE(statTime_, statTime) };


    // statTimeUTC Field Functions 
    bool hasStatTimeUTC() const { return this->statTimeUTC_ != nullptr;};
    void deleteStatTimeUTC() { this->statTimeUTC_ = nullptr;};
    inline string statTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(statTimeUTC_, "") };
    inline GetOSSFlowStatisResponseBodyOSSFlowStatisList& setStatTimeUTC(string statTimeUTC) { DARABONBA_PTR_SET_VALUE(statTimeUTC_, statTimeUTC) };


  protected:
    std::shared_ptr<int64_t> networkOut_ = nullptr;
    std::shared_ptr<string> statTime_ = nullptr;
    std::shared_ptr<string> statTimeUTC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
