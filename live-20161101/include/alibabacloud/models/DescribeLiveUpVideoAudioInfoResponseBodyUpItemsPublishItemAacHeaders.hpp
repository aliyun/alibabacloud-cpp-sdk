// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAACHEADERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAACHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeadersAacHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(AacHeaders, aacHeaders_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(AacHeaders, aacHeaders_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aacHeaders_ != nullptr; };
    // aacHeaders Field Functions 
    bool hasAacHeaders() const { return this->aacHeaders_ != nullptr;};
    void deleteAacHeaders() { this->aacHeaders_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeadersAacHeaders> & aacHeaders() const { DARABONBA_PTR_GET_CONST(aacHeaders_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeadersAacHeaders>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeadersAacHeaders> aacHeaders() { DARABONBA_PTR_GET(aacHeaders_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeadersAacHeaders>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders& setAacHeaders(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeadersAacHeaders> & aacHeaders) { DARABONBA_PTR_SET_VALUE(aacHeaders_, aacHeaders) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeaders& setAacHeaders(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeadersAacHeaders> && aacHeaders) { DARABONBA_PTR_SET_RVALUE(aacHeaders_, aacHeaders) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAacHeadersAacHeaders>> aacHeaders_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
