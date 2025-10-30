// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOTALPUBLICURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTOTALPUBLICURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetTotalPublicUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTotalPublicUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PhonePublicUrl, phonePublicUrl_);
      DARABONBA_PTR_TO_JSON(RingPublicUrl, ringPublicUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetTotalPublicUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PhonePublicUrl, phonePublicUrl_);
      DARABONBA_PTR_FROM_JSON(RingPublicUrl, ringPublicUrl_);
    };
    GetTotalPublicUrlResponseBodyData() = default ;
    GetTotalPublicUrlResponseBodyData(const GetTotalPublicUrlResponseBodyData &) = default ;
    GetTotalPublicUrlResponseBodyData(GetTotalPublicUrlResponseBodyData &&) = default ;
    GetTotalPublicUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTotalPublicUrlResponseBodyData() = default ;
    GetTotalPublicUrlResponseBodyData& operator=(const GetTotalPublicUrlResponseBodyData &) = default ;
    GetTotalPublicUrlResponseBodyData& operator=(GetTotalPublicUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->phonePublicUrl_ == nullptr
        && return this->ringPublicUrl_ == nullptr; };
    // phonePublicUrl Field Functions 
    bool hasPhonePublicUrl() const { return this->phonePublicUrl_ != nullptr;};
    void deletePhonePublicUrl() { this->phonePublicUrl_ = nullptr;};
    inline string phonePublicUrl() const { DARABONBA_PTR_GET_DEFAULT(phonePublicUrl_, "") };
    inline GetTotalPublicUrlResponseBodyData& setPhonePublicUrl(string phonePublicUrl) { DARABONBA_PTR_SET_VALUE(phonePublicUrl_, phonePublicUrl) };


    // ringPublicUrl Field Functions 
    bool hasRingPublicUrl() const { return this->ringPublicUrl_ != nullptr;};
    void deleteRingPublicUrl() { this->ringPublicUrl_ = nullptr;};
    inline string ringPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(ringPublicUrl_, "") };
    inline GetTotalPublicUrlResponseBodyData& setRingPublicUrl(string ringPublicUrl) { DARABONBA_PTR_SET_VALUE(ringPublicUrl_, ringPublicUrl) };


  protected:
    // The download URL of the recorded call.
    // 
    // >  The download URL of the recorded call is valid for 30 days.
    std::shared_ptr<string> phonePublicUrl_ = nullptr;
    // The download URL of the recorded ringing tone.
    // 
    // >  The download URL of the recorded ringing tone is valid for 30 days.
    std::shared_ptr<string> ringPublicUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
