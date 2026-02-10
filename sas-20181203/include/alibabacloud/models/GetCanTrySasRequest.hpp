// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCANTRYSASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCANTRYSASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCanTrySasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCanTrySasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FromEcs, fromEcs_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, GetCanTrySasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FromEcs, fromEcs_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    GetCanTrySasRequest() = default ;
    GetCanTrySasRequest(const GetCanTrySasRequest &) = default ;
    GetCanTrySasRequest(GetCanTrySasRequest &&) = default ;
    GetCanTrySasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCanTrySasRequest() = default ;
    GetCanTrySasRequest& operator=(const GetCanTrySasRequest &) = default ;
    GetCanTrySasRequest& operator=(GetCanTrySasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fromEcs_ == nullptr
        && this->lang_ == nullptr; };
    // fromEcs Field Functions 
    bool hasFromEcs() const { return this->fromEcs_ != nullptr;};
    void deleteFromEcs() { this->fromEcs_ = nullptr;};
    inline bool getFromEcs() const { DARABONBA_PTR_GET_DEFAULT(fromEcs_, false) };
    inline GetCanTrySasRequest& setFromEcs(bool fromEcs) { DARABONBA_PTR_SET_VALUE(fromEcs_, fromEcs) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetCanTrySasRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // Specifies whether the request is redirected from the Elastic Compute Service (ECS) console. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> fromEcs_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
