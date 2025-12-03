// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEDIAGNOSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEDIAGNOSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetImageDiagnoseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageDiagnoseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageDiagnoseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetImageDiagnoseRequest() = default ;
    GetImageDiagnoseRequest(const GetImageDiagnoseRequest &) = default ;
    GetImageDiagnoseRequest(GetImageDiagnoseRequest &&) = default ;
    GetImageDiagnoseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageDiagnoseRequest() = default ;
    GetImageDiagnoseRequest& operator=(const GetImageDiagnoseRequest &) = default ;
    GetImageDiagnoseRequest& operator=(GetImageDiagnoseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extra_ == nullptr
        && return this->url_ == nullptr; };
    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline GetImageDiagnoseRequest& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetImageDiagnoseRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> extra_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
