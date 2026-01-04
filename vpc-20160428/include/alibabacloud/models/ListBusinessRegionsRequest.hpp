// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUSINESSREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBUSINESSREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListBusinessRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBusinessRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, ListBusinessRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
    };
    ListBusinessRegionsRequest() = default ;
    ListBusinessRegionsRequest(const ListBusinessRegionsRequest &) = default ;
    ListBusinessRegionsRequest(ListBusinessRegionsRequest &&) = default ;
    ListBusinessRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBusinessRegionsRequest() = default ;
    ListBusinessRegionsRequest& operator=(const ListBusinessRegionsRequest &) = default ;
    ListBusinessRegionsRequest& operator=(ListBusinessRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListBusinessRegionsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   **zh-CN** (default): Chinese
    // *   **en-US**: English.
    shared_ptr<string> acceptLanguage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
