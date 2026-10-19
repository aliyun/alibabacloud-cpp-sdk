// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class ListRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Audited, audited_);
      DARABONBA_PTR_TO_JSON(Identified, identified_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LoadAll, loadAll_);
    };
    friend void from_json(const Darabonba::Json& j, ListRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Audited, audited_);
      DARABONBA_PTR_FROM_JSON(Identified, identified_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LoadAll, loadAll_);
    };
    ListRegionsRequest() = default ;
    ListRegionsRequest(const ListRegionsRequest &) = default ;
    ListRegionsRequest(ListRegionsRequest &&) = default ;
    ListRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRegionsRequest() = default ;
    ListRegionsRequest& operator=(const ListRegionsRequest &) = default ;
    ListRegionsRequest& operator=(ListRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audited_ == nullptr
        && this->identified_ == nullptr && this->lang_ == nullptr && this->loadAll_ == nullptr; };
    // audited Field Functions 
    bool hasAudited() const { return this->audited_ != nullptr;};
    void deleteAudited() { this->audited_ = nullptr;};
    inline bool getAudited() const { DARABONBA_PTR_GET_DEFAULT(audited_, false) };
    inline ListRegionsRequest& setAudited(bool audited) { DARABONBA_PTR_SET_VALUE(audited_, audited) };


    // identified Field Functions 
    bool hasIdentified() const { return this->identified_ != nullptr;};
    void deleteIdentified() { this->identified_ = nullptr;};
    inline bool getIdentified() const { DARABONBA_PTR_GET_DEFAULT(identified_, false) };
    inline ListRegionsRequest& setIdentified(bool identified) { DARABONBA_PTR_SET_VALUE(identified_, identified) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListRegionsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // loadAll Field Functions 
    bool hasLoadAll() const { return this->loadAll_ != nullptr;};
    void deleteLoadAll() { this->loadAll_ = nullptr;};
    inline bool getLoadAll() const { DARABONBA_PTR_GET_DEFAULT(loadAll_, false) };
    inline ListRegionsRequest& setLoadAll(bool loadAll) { DARABONBA_PTR_SET_VALUE(loadAll_, loadAll) };


  protected:
    // Specifies whether to filter regions by assets with auditing enabled. Valid values: true: Enabled. false: Disabled. If you do not specify this parameter, this filter condition is not applied.
    shared_ptr<bool> audited_ {};
    // Specifies whether to filter regions by assets with detection enabled. Valid values: true: Enabled. false: Disabled. If you do not specify this parameter, this filter condition is not applied.
    shared_ptr<bool> identified_ {};
    // The language of the response. Valid values: zh: Chinese. en: English.
    shared_ptr<string> lang_ {};
    // Specifies whether to retrieve all regions.
    shared_ptr<bool> loadAll_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
