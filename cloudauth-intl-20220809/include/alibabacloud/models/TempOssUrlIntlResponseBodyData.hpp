// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPOSSURLINTLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TEMPOSSURLINTLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class TempOssUrlIntlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TempOssUrlIntlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, TempOssUrlIntlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    TempOssUrlIntlResponseBodyData() = default ;
    TempOssUrlIntlResponseBodyData(const TempOssUrlIntlResponseBodyData &) = default ;
    TempOssUrlIntlResponseBodyData(TempOssUrlIntlResponseBodyData &&) = default ;
    TempOssUrlIntlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TempOssUrlIntlResponseBodyData() = default ;
    TempOssUrlIntlResponseBodyData& operator=(const TempOssUrlIntlResponseBodyData &) = default ;
    TempOssUrlIntlResponseBodyData& operator=(TempOssUrlIntlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->url_ == nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline TempOssUrlIntlResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // File URL
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
