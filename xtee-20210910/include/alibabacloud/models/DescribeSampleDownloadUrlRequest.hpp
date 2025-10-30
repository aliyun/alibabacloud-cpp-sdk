// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAMPLEDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAMPLEDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSampleDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSampleDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(sampleId, sampleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSampleDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(sampleId, sampleId_);
    };
    DescribeSampleDownloadUrlRequest() = default ;
    DescribeSampleDownloadUrlRequest(const DescribeSampleDownloadUrlRequest &) = default ;
    DescribeSampleDownloadUrlRequest(DescribeSampleDownloadUrlRequest &&) = default ;
    DescribeSampleDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSampleDownloadUrlRequest() = default ;
    DescribeSampleDownloadUrlRequest& operator=(const DescribeSampleDownloadUrlRequest &) = default ;
    DescribeSampleDownloadUrlRequest& operator=(DescribeSampleDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->regId_ == nullptr && return this->sampleId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSampleDownloadUrlRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeSampleDownloadUrlRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // sampleId Field Functions 
    bool hasSampleId() const { return this->sampleId_ != nullptr;};
    void deleteSampleId() { this->sampleId_ = nullptr;};
    inline int64_t sampleId() const { DARABONBA_PTR_GET_DEFAULT(sampleId_, 0L) };
    inline DescribeSampleDownloadUrlRequest& setSampleId(int64_t sampleId) { DARABONBA_PTR_SET_VALUE(sampleId_, sampleId) };


  protected:
    // Set the language type for request and response, default value is **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
    // Sample ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> sampleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
