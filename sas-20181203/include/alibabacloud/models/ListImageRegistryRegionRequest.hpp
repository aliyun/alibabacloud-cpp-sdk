// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGEREGISTRYREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListImageRegistryRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageRegistryRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageRegistryRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ListImageRegistryRegionRequest() = default ;
    ListImageRegistryRegionRequest(const ListImageRegistryRegionRequest &) = default ;
    ListImageRegistryRegionRequest(ListImageRegistryRegionRequest &&) = default ;
    ListImageRegistryRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageRegistryRegionRequest() = default ;
    ListImageRegistryRegionRequest& operator=(const ListImageRegistryRegionRequest &) = default ;
    ListImageRegistryRegionRequest& operator=(ListImageRegistryRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListImageRegistryRegionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
