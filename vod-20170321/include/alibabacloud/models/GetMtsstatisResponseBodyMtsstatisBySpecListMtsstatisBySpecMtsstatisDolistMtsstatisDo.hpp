// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMTSSTATISRESPONSEBODYMTSSTATISBYSPECLISTMTSSTATISBYSPECMTSSTATISDOLISTMTSSTATISDO_HPP_
#define ALIBABACLOUD_MODELS_GETMTSSTATISRESPONSEBODYMTSSTATISBYSPECLISTMTSSTATISBYSPECMTSSTATISDOLISTMTSSTATISDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(StatTime, statTime_);
      DARABONBA_PTR_TO_JSON(StatTimeUTC, statTimeUTC_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(StatTime, statTime_);
      DARABONBA_PTR_FROM_JSON(StatTimeUTC, statTimeUTC_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO() = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO(const GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO &) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO(GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO &&) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO() = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO& operator=(const GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO &) = default ;
    GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO& operator=(GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->specification_ != nullptr && this->statTime_ != nullptr && this->statTimeUTC_ != nullptr && this->userId_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // statTime Field Functions 
    bool hasStatTime() const { return this->statTime_ != nullptr;};
    void deleteStatTime() { this->statTime_ = nullptr;};
    inline string statTime() const { DARABONBA_PTR_GET_DEFAULT(statTime_, "") };
    inline GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO& setStatTime(string statTime) { DARABONBA_PTR_SET_VALUE(statTime_, statTime) };


    // statTimeUTC Field Functions 
    bool hasStatTimeUTC() const { return this->statTimeUTC_ != nullptr;};
    void deleteStatTimeUTC() { this->statTimeUTC_ = nullptr;};
    inline string statTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(statTimeUTC_, "") };
    inline GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO& setStatTimeUTC(string statTimeUTC) { DARABONBA_PTR_SET_VALUE(statTimeUTC_, statTimeUTC) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetMTSStatisResponseBodyMTSStatisBySpecListMTSStatisBySpecMTSStatisDOListMTSStatisDO& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> specification_ = nullptr;
    std::shared_ptr<string> statTime_ = nullptr;
    std::shared_ptr<string> statTimeUTC_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
