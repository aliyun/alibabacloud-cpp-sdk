// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAVCHEADERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODYUPITEMSPUBLISHITEMAVCHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeadersAvcHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(AvcHeaders, avcHeaders_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(AvcHeaders, avcHeaders_);
    };
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders() = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders& operator=(const DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders& operator=(DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avcHeaders_ == nullptr; };
    // avcHeaders Field Functions 
    bool hasAvcHeaders() const { return this->avcHeaders_ != nullptr;};
    void deleteAvcHeaders() { this->avcHeaders_ = nullptr;};
    inline const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeadersAvcHeaders> & avcHeaders() const { DARABONBA_PTR_GET_CONST(avcHeaders_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeadersAvcHeaders>) };
    inline vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeadersAvcHeaders> avcHeaders() { DARABONBA_PTR_GET(avcHeaders_, vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeadersAvcHeaders>) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders& setAvcHeaders(const vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeadersAvcHeaders> & avcHeaders) { DARABONBA_PTR_SET_VALUE(avcHeaders_, avcHeaders) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeaders& setAvcHeaders(vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeadersAvcHeaders> && avcHeaders) { DARABONBA_PTR_SET_RVALUE(avcHeaders_, avcHeaders) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveUpVideoAudioInfoResponseBodyUpItemsPublishItemAvcHeadersAvcHeaders>> avcHeaders_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
