// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPDNSAPPKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPDNSAPPKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CreatePdnsAppKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePdnsAppKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePdnsAppKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    CreatePdnsAppKeyRequest() = default ;
    CreatePdnsAppKeyRequest(const CreatePdnsAppKeyRequest &) = default ;
    CreatePdnsAppKeyRequest(CreatePdnsAppKeyRequest &&) = default ;
    CreatePdnsAppKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePdnsAppKeyRequest() = default ;
    CreatePdnsAppKeyRequest& operator=(const CreatePdnsAppKeyRequest &) = default ;
    CreatePdnsAppKeyRequest& operator=(CreatePdnsAppKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->remark_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreatePdnsAppKeyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreatePdnsAppKeyRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
