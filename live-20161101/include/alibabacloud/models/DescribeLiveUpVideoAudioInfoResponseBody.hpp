// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveUpVideoAudioInfoResponseBodyUpItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveUpVideoAudioInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpItems, upItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpItems, upItems_);
    };
    DescribeLiveUpVideoAudioInfoResponseBody() = default ;
    DescribeLiveUpVideoAudioInfoResponseBody(const DescribeLiveUpVideoAudioInfoResponseBody &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBody(DescribeLiveUpVideoAudioInfoResponseBody &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBody() = default ;
    DescribeLiveUpVideoAudioInfoResponseBody& operator=(const DescribeLiveUpVideoAudioInfoResponseBody &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBody& operator=(DescribeLiveUpVideoAudioInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->upItems_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // upItems Field Functions 
    bool hasUpItems() const { return this->upItems_ != nullptr;};
    void deleteUpItems() { this->upItems_ = nullptr;};
    inline const DescribeLiveUpVideoAudioInfoResponseBodyUpItems & upItems() const { DARABONBA_PTR_GET_CONST(upItems_, DescribeLiveUpVideoAudioInfoResponseBodyUpItems) };
    inline DescribeLiveUpVideoAudioInfoResponseBodyUpItems upItems() { DARABONBA_PTR_GET(upItems_, DescribeLiveUpVideoAudioInfoResponseBodyUpItems) };
    inline DescribeLiveUpVideoAudioInfoResponseBody& setUpItems(const DescribeLiveUpVideoAudioInfoResponseBodyUpItems & upItems) { DARABONBA_PTR_SET_VALUE(upItems_, upItems) };
    inline DescribeLiveUpVideoAudioInfoResponseBody& setUpItems(DescribeLiveUpVideoAudioInfoResponseBodyUpItems && upItems) { DARABONBA_PTR_SET_RVALUE(upItems_, upItems) };


  protected:
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> requestId_ = nullptr;
    // The request ID.
    std::shared_ptr<DescribeLiveUpVideoAudioInfoResponseBodyUpItems> upItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
