// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTNACOSCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_EXPORTNACOSCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ExportNacosConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportNacosConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ExportNacosConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ExportNacosConfigResponseBodyData() = default ;
    ExportNacosConfigResponseBodyData(const ExportNacosConfigResponseBodyData &) = default ;
    ExportNacosConfigResponseBodyData(ExportNacosConfigResponseBodyData &&) = default ;
    ExportNacosConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportNacosConfigResponseBodyData() = default ;
    ExportNacosConfigResponseBodyData& operator=(const ExportNacosConfigResponseBodyData &) = default ;
    ExportNacosConfigResponseBodyData& operator=(ExportNacosConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->url_ == nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ExportNacosConfigResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The URL that is used to download the exported configurations.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
