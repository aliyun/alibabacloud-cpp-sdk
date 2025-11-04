// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMIZEDVOICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCustomizedVoiceResponseBodyDataCustomizedVoice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetCustomizedVoiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomizedVoiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomizedVoice, customizedVoice_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomizedVoiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomizedVoice, customizedVoice_);
    };
    GetCustomizedVoiceResponseBodyData() = default ;
    GetCustomizedVoiceResponseBodyData(const GetCustomizedVoiceResponseBodyData &) = default ;
    GetCustomizedVoiceResponseBodyData(GetCustomizedVoiceResponseBodyData &&) = default ;
    GetCustomizedVoiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomizedVoiceResponseBodyData() = default ;
    GetCustomizedVoiceResponseBodyData& operator=(const GetCustomizedVoiceResponseBodyData &) = default ;
    GetCustomizedVoiceResponseBodyData& operator=(GetCustomizedVoiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customizedVoice_ == nullptr; };
    // customizedVoice Field Functions 
    bool hasCustomizedVoice() const { return this->customizedVoice_ != nullptr;};
    void deleteCustomizedVoice() { this->customizedVoice_ = nullptr;};
    inline const Models::GetCustomizedVoiceResponseBodyDataCustomizedVoice & customizedVoice() const { DARABONBA_PTR_GET_CONST(customizedVoice_, Models::GetCustomizedVoiceResponseBodyDataCustomizedVoice) };
    inline Models::GetCustomizedVoiceResponseBodyDataCustomizedVoice customizedVoice() { DARABONBA_PTR_GET(customizedVoice_, Models::GetCustomizedVoiceResponseBodyDataCustomizedVoice) };
    inline GetCustomizedVoiceResponseBodyData& setCustomizedVoice(const Models::GetCustomizedVoiceResponseBodyDataCustomizedVoice & customizedVoice) { DARABONBA_PTR_SET_VALUE(customizedVoice_, customizedVoice) };
    inline GetCustomizedVoiceResponseBodyData& setCustomizedVoice(Models::GetCustomizedVoiceResponseBodyDataCustomizedVoice && customizedVoice) { DARABONBA_PTR_SET_RVALUE(customizedVoice_, customizedVoice) };


  protected:
    // The personalized human voice.
    std::shared_ptr<Models::GetCustomizedVoiceResponseBodyDataCustomizedVoice> customizedVoice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
