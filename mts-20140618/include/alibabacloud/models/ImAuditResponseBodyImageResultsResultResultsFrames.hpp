// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSFRAMES_HPP_
#define ALIBABACLOUD_MODELS_IMAUDITRESPONSEBODYIMAGERESULTSRESULTRESULTSFRAMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class ImAuditResponseBodyImageResultsResultResultsFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImAuditResponseBodyImageResultsResultResultsFrames& obj) { 
      DARABONBA_PTR_TO_JSON(rate, rate_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ImAuditResponseBodyImageResultsResultResultsFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(rate, rate_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ImAuditResponseBodyImageResultsResultResultsFrames() = default ;
    ImAuditResponseBodyImageResultsResultResultsFrames(const ImAuditResponseBodyImageResultsResultResultsFrames &) = default ;
    ImAuditResponseBodyImageResultsResultResultsFrames(ImAuditResponseBodyImageResultsResultResultsFrames &&) = default ;
    ImAuditResponseBodyImageResultsResultResultsFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImAuditResponseBodyImageResultsResultResultsFrames() = default ;
    ImAuditResponseBodyImageResultsResultResultsFrames& operator=(const ImAuditResponseBodyImageResultsResultResultsFrames &) = default ;
    ImAuditResponseBodyImageResultsResultResultsFrames& operator=(ImAuditResponseBodyImageResultsResultResultsFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rate_ == nullptr
        && return this->url_ == nullptr; };
    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline float rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline ImAuditResponseBodyImageResultsResultResultsFrames& setRate(float rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ImAuditResponseBodyImageResultsResultResultsFrames& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The score of the confidence level. Valid values: 0 to 100. A higher confidence level indicates higher reliability of the moderation result. We recommend that you do not use this score in your business.
    std::shared_ptr<float> rate_ = nullptr;
    // The temporary access URL of the truncated frame. The URL is valid for 5 minutes.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
