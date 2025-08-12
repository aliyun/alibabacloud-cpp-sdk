// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveAISubtitleResponseBodySubtitleConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAISubtitleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAISubtitleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubtitleConfigs, subtitleConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAISubtitleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubtitleConfigs, subtitleConfigs_);
    };
    DescribeLiveAISubtitleResponseBody() = default ;
    DescribeLiveAISubtitleResponseBody(const DescribeLiveAISubtitleResponseBody &) = default ;
    DescribeLiveAISubtitleResponseBody(DescribeLiveAISubtitleResponseBody &&) = default ;
    DescribeLiveAISubtitleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAISubtitleResponseBody() = default ;
    DescribeLiveAISubtitleResponseBody& operator=(const DescribeLiveAISubtitleResponseBody &) = default ;
    DescribeLiveAISubtitleResponseBody& operator=(DescribeLiveAISubtitleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->subtitleConfigs_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveAISubtitleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subtitleConfigs Field Functions 
    bool hasSubtitleConfigs() const { return this->subtitleConfigs_ != nullptr;};
    void deleteSubtitleConfigs() { this->subtitleConfigs_ = nullptr;};
    inline const DescribeLiveAISubtitleResponseBodySubtitleConfigs & subtitleConfigs() const { DARABONBA_PTR_GET_CONST(subtitleConfigs_, DescribeLiveAISubtitleResponseBodySubtitleConfigs) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigs subtitleConfigs() { DARABONBA_PTR_GET(subtitleConfigs_, DescribeLiveAISubtitleResponseBodySubtitleConfigs) };
    inline DescribeLiveAISubtitleResponseBody& setSubtitleConfigs(const DescribeLiveAISubtitleResponseBodySubtitleConfigs & subtitleConfigs) { DARABONBA_PTR_SET_VALUE(subtitleConfigs_, subtitleConfigs) };
    inline DescribeLiveAISubtitleResponseBody& setSubtitleConfigs(DescribeLiveAISubtitleResponseBodySubtitleConfigs && subtitleConfigs) { DARABONBA_PTR_SET_RVALUE(subtitleConfigs_, subtitleConfigs) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the subtitle templates.
    std::shared_ptr<DescribeLiveAISubtitleResponseBodySubtitleConfigs> subtitleConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
