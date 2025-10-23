// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPINFORESPONSEBODYINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDEDICATEDIPWARMUPINFORESPONSEBODYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class GetDedicatedIpWarmUpInfoResponseBodyInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDedicatedIpWarmUpInfoResponseBodyInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Esp, esp_);
      DARABONBA_PTR_TO_JSON(Finished, finished_);
    };
    friend void from_json(const Darabonba::Json& j, GetDedicatedIpWarmUpInfoResponseBodyInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Esp, esp_);
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
    };
    GetDedicatedIpWarmUpInfoResponseBodyInfo() = default ;
    GetDedicatedIpWarmUpInfoResponseBodyInfo(const GetDedicatedIpWarmUpInfoResponseBodyInfo &) = default ;
    GetDedicatedIpWarmUpInfoResponseBodyInfo(GetDedicatedIpWarmUpInfoResponseBodyInfo &&) = default ;
    GetDedicatedIpWarmUpInfoResponseBodyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDedicatedIpWarmUpInfoResponseBodyInfo() = default ;
    GetDedicatedIpWarmUpInfoResponseBodyInfo& operator=(const GetDedicatedIpWarmUpInfoResponseBodyInfo &) = default ;
    GetDedicatedIpWarmUpInfoResponseBodyInfo& operator=(GetDedicatedIpWarmUpInfoResponseBodyInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->esp_ == nullptr
        && return this->finished_ == nullptr; };
    // esp Field Functions 
    bool hasEsp() const { return this->esp_ != nullptr;};
    void deleteEsp() { this->esp_ = nullptr;};
    inline string esp() const { DARABONBA_PTR_GET_DEFAULT(esp_, "") };
    inline GetDedicatedIpWarmUpInfoResponseBodyInfo& setEsp(string esp) { DARABONBA_PTR_SET_VALUE(esp_, esp) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline bool finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
    inline GetDedicatedIpWarmUpInfoResponseBodyInfo& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


  protected:
    std::shared_ptr<string> esp_ = nullptr;
    std::shared_ptr<bool> finished_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
