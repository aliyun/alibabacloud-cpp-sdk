// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKEVENTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKEVENTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAttackEventDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackEventDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackEventDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    GetAttackEventDetailRequest() = default ;
    GetAttackEventDetailRequest(const GetAttackEventDetailRequest &) = default ;
    GetAttackEventDetailRequest(GetAttackEventDetailRequest &&) = default ;
    GetAttackEventDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackEventDetailRequest() = default ;
    GetAttackEventDetailRequest& operator=(const GetAttackEventDetailRequest &) = default ;
    GetAttackEventDetailRequest& operator=(GetAttackEventDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->lang_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetAttackEventDetailRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAttackEventDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The unique identifier ID for the alert event.
    shared_ptr<string> id_ {};
    // The language type for requesting and receiving messages. Values:
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
