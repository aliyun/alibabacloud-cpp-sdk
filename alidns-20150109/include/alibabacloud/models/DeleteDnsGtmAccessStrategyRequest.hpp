// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDNSGTMACCESSSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDNSGTMACCESSSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DeleteDnsGtmAccessStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDnsGtmAccessStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDnsGtmAccessStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    DeleteDnsGtmAccessStrategyRequest() = default ;
    DeleteDnsGtmAccessStrategyRequest(const DeleteDnsGtmAccessStrategyRequest &) = default ;
    DeleteDnsGtmAccessStrategyRequest(DeleteDnsGtmAccessStrategyRequest &&) = default ;
    DeleteDnsGtmAccessStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDnsGtmAccessStrategyRequest() = default ;
    DeleteDnsGtmAccessStrategyRequest& operator=(const DeleteDnsGtmAccessStrategyRequest &) = default ;
    DeleteDnsGtmAccessStrategyRequest& operator=(DeleteDnsGtmAccessStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->strategyId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteDnsGtmAccessStrategyRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline DeleteDnsGtmAccessStrategyRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The language to return some response parameters. Default value: en. Valid values: en, zh, and ja.
    shared_ptr<string> lang_ {};
    // The ID of the access policy.
    // 
    // This parameter is required.
    shared_ptr<string> strategyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
