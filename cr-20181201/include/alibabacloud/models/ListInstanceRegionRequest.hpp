// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListInstanceRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    ListInstanceRegionRequest() = default ;
    ListInstanceRegionRequest(const ListInstanceRegionRequest &) = default ;
    ListInstanceRegionRequest(ListInstanceRegionRequest &&) = default ;
    ListInstanceRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceRegionRequest() = default ;
    ListInstanceRegionRequest& operator=(const ListInstanceRegionRequest &) = default ;
    ListInstanceRegionRequest& operator=(ListInstanceRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListInstanceRegionRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The language used for response parameters. Set this parameter to `zh-CN`.
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
