// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTUSERAPPASYNCENHANCEINMSARESPONSEBODYRESULTCONTENTDATAENHANCEMAPPING_HPP_
#define ALIBABACLOUD_MODELS_STARTUSERAPPASYNCENHANCEINMSARESPONSEBODYRESULTCONTENTDATAENHANCEMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping& obj) { 
      DARABONBA_PTR_TO_JSON(Info, info_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(Info, info_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping() = default ;
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping(const StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping &) = default ;
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping(StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping &&) = default ;
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping() = default ;
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping& operator=(const StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping &) = default ;
    StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping& operator=(StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->info_ != nullptr
        && this->reason_ != nullptr && this->type_ != nullptr; };
    // info Field Functions 
    bool hasInfo() const { return this->info_ != nullptr;};
    void deleteInfo() { this->info_ = nullptr;};
    inline string info() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline StartUserAppAsyncEnhanceInMsaResponseBodyResultContentDataEnhanceMapping& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> info_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
