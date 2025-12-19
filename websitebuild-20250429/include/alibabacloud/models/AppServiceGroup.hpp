// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPSERVICEGROUP_HPP_
#define ALIBABACLOUD_MODELS_APPSERVICEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppServiceGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppServiceGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(QrCode, qrCode_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, AppServiceGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(QrCode, qrCode_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    AppServiceGroup() = default ;
    AppServiceGroup(const AppServiceGroup &) = default ;
    AppServiceGroup(AppServiceGroup &&) = default ;
    AppServiceGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppServiceGroup() = default ;
    AppServiceGroup& operator=(const AppServiceGroup &) = default ;
    AppServiceGroup& operator=(AppServiceGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->qrCode_ == nullptr && return this->type_ == nullptr && return this->url_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AppServiceGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // qrCode Field Functions 
    bool hasQrCode() const { return this->qrCode_ != nullptr;};
    void deleteQrCode() { this->qrCode_ = nullptr;};
    inline string qrCode() const { DARABONBA_PTR_GET_DEFAULT(qrCode_, "") };
    inline AppServiceGroup& setQrCode(string qrCode) { DARABONBA_PTR_SET_VALUE(qrCode_, qrCode) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AppServiceGroup& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline AppServiceGroup& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> qrCode_ = nullptr;
    // 例如：dingtalk、wx 等
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
