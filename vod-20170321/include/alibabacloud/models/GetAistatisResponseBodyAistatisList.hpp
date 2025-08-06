// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAISTATISRESPONSEBODYAISTATISLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAISTATISRESPONSEBODYAISTATISLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetAIStatisResponseBodyAIStatisList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIStatisResponseBodyAIStatisList& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(StatTime, statTime_);
      DARABONBA_PTR_TO_JSON(StatTimeUTC, statTimeUTC_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIStatisResponseBodyAIStatisList& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(StatTime, statTime_);
      DARABONBA_PTR_FROM_JSON(StatTimeUTC, statTimeUTC_);
    };
    GetAIStatisResponseBodyAIStatisList() = default ;
    GetAIStatisResponseBodyAIStatisList(const GetAIStatisResponseBodyAIStatisList &) = default ;
    GetAIStatisResponseBodyAIStatisList(GetAIStatisResponseBodyAIStatisList &&) = default ;
    GetAIStatisResponseBodyAIStatisList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIStatisResponseBodyAIStatisList() = default ;
    GetAIStatisResponseBodyAIStatisList& operator=(const GetAIStatisResponseBodyAIStatisList &) = default ;
    GetAIStatisResponseBodyAIStatisList& operator=(GetAIStatisResponseBodyAIStatisList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->statTime_ != nullptr && this->statTimeUTC_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetAIStatisResponseBodyAIStatisList& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // statTime Field Functions 
    bool hasStatTime() const { return this->statTime_ != nullptr;};
    void deleteStatTime() { this->statTime_ = nullptr;};
    inline string statTime() const { DARABONBA_PTR_GET_DEFAULT(statTime_, "") };
    inline GetAIStatisResponseBodyAIStatisList& setStatTime(string statTime) { DARABONBA_PTR_SET_VALUE(statTime_, statTime) };


    // statTimeUTC Field Functions 
    bool hasStatTimeUTC() const { return this->statTimeUTC_ != nullptr;};
    void deleteStatTimeUTC() { this->statTimeUTC_ = nullptr;};
    inline string statTimeUTC() const { DARABONBA_PTR_GET_DEFAULT(statTimeUTC_, "") };
    inline GetAIStatisResponseBodyAIStatisList& setStatTimeUTC(string statTimeUTC) { DARABONBA_PTR_SET_VALUE(statTimeUTC_, statTimeUTC) };


  protected:
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<string> statTime_ = nullptr;
    std::shared_ptr<string> statTimeUTC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
