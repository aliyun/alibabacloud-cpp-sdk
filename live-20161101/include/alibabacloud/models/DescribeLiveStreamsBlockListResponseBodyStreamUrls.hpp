// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSBLOCKLISTRESPONSEBODYSTREAMURLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSBLOCKLISTRESPONSEBODYSTREAMURLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsBlockListResponseBodyStreamUrls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsBlockListResponseBodyStreamUrls& obj) { 
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsBlockListResponseBodyStreamUrls& obj) { 
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
    };
    DescribeLiveStreamsBlockListResponseBodyStreamUrls() = default ;
    DescribeLiveStreamsBlockListResponseBodyStreamUrls(const DescribeLiveStreamsBlockListResponseBodyStreamUrls &) = default ;
    DescribeLiveStreamsBlockListResponseBodyStreamUrls(DescribeLiveStreamsBlockListResponseBodyStreamUrls &&) = default ;
    DescribeLiveStreamsBlockListResponseBodyStreamUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsBlockListResponseBodyStreamUrls() = default ;
    DescribeLiveStreamsBlockListResponseBodyStreamUrls& operator=(const DescribeLiveStreamsBlockListResponseBodyStreamUrls &) = default ;
    DescribeLiveStreamsBlockListResponseBodyStreamUrls& operator=(DescribeLiveStreamsBlockListResponseBodyStreamUrls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamUrl_ == nullptr; };
    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline const vector<string> & streamUrl() const { DARABONBA_PTR_GET_CONST(streamUrl_, vector<string>) };
    inline vector<string> streamUrl() { DARABONBA_PTR_GET(streamUrl_, vector<string>) };
    inline DescribeLiveStreamsBlockListResponseBodyStreamUrls& setStreamUrl(const vector<string> & streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };
    inline DescribeLiveStreamsBlockListResponseBodyStreamUrls& setStreamUrl(vector<string> && streamUrl) { DARABONBA_PTR_SET_RVALUE(streamUrl_, streamUrl) };


  protected:
    std::shared_ptr<vector<string>> streamUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
