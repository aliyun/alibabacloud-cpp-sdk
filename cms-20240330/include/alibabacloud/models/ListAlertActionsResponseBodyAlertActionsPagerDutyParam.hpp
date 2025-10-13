// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSPAGERDUTYPARAM_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSPAGERDUTYPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBodyAlertActionsPagerDutyParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBodyAlertActionsPagerDutyParam& obj) { 
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBodyAlertActionsPagerDutyParam& obj) { 
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ListAlertActionsResponseBodyAlertActionsPagerDutyParam() = default ;
    ListAlertActionsResponseBodyAlertActionsPagerDutyParam(const ListAlertActionsResponseBodyAlertActionsPagerDutyParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsPagerDutyParam(ListAlertActionsResponseBodyAlertActionsPagerDutyParam &&) = default ;
    ListAlertActionsResponseBodyAlertActionsPagerDutyParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBodyAlertActionsPagerDutyParam() = default ;
    ListAlertActionsResponseBodyAlertActionsPagerDutyParam& operator=(const ListAlertActionsResponseBodyAlertActionsPagerDutyParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsPagerDutyParam& operator=(ListAlertActionsResponseBodyAlertActionsPagerDutyParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->url_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListAlertActionsResponseBodyAlertActionsPagerDutyParam& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListAlertActionsResponseBodyAlertActionsPagerDutyParam& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
