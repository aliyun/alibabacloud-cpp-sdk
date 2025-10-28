// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMEDSERVICESRESPONSEBODYCONSUMEDSERVICESLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMEDSERVICESRESPONSEBODYCONSUMEDSERVICESLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConsumedServicesResponseBodyConsumedServicesListListConsumedServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListConsumedServicesResponseBodyConsumedServicesList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumedServicesResponseBodyConsumedServicesList& obj) { 
      DARABONBA_PTR_TO_JSON(ListConsumedServices, listConsumedServices_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumedServicesResponseBodyConsumedServicesList& obj) { 
      DARABONBA_PTR_FROM_JSON(ListConsumedServices, listConsumedServices_);
    };
    ListConsumedServicesResponseBodyConsumedServicesList() = default ;
    ListConsumedServicesResponseBodyConsumedServicesList(const ListConsumedServicesResponseBodyConsumedServicesList &) = default ;
    ListConsumedServicesResponseBodyConsumedServicesList(ListConsumedServicesResponseBodyConsumedServicesList &&) = default ;
    ListConsumedServicesResponseBodyConsumedServicesList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumedServicesResponseBodyConsumedServicesList() = default ;
    ListConsumedServicesResponseBodyConsumedServicesList& operator=(const ListConsumedServicesResponseBodyConsumedServicesList &) = default ;
    ListConsumedServicesResponseBodyConsumedServicesList& operator=(ListConsumedServicesResponseBodyConsumedServicesList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listConsumedServices_ == nullptr; };
    // listConsumedServices Field Functions 
    bool hasListConsumedServices() const { return this->listConsumedServices_ != nullptr;};
    void deleteListConsumedServices() { this->listConsumedServices_ = nullptr;};
    inline const vector<Models::ListConsumedServicesResponseBodyConsumedServicesListListConsumedServices> & listConsumedServices() const { DARABONBA_PTR_GET_CONST(listConsumedServices_, vector<Models::ListConsumedServicesResponseBodyConsumedServicesListListConsumedServices>) };
    inline vector<Models::ListConsumedServicesResponseBodyConsumedServicesListListConsumedServices> listConsumedServices() { DARABONBA_PTR_GET(listConsumedServices_, vector<Models::ListConsumedServicesResponseBodyConsumedServicesListListConsumedServices>) };
    inline ListConsumedServicesResponseBodyConsumedServicesList& setListConsumedServices(const vector<Models::ListConsumedServicesResponseBodyConsumedServicesListListConsumedServices> & listConsumedServices) { DARABONBA_PTR_SET_VALUE(listConsumedServices_, listConsumedServices) };
    inline ListConsumedServicesResponseBodyConsumedServicesList& setListConsumedServices(vector<Models::ListConsumedServicesResponseBodyConsumedServicesListListConsumedServices> && listConsumedServices) { DARABONBA_PTR_SET_RVALUE(listConsumedServices_, listConsumedServices) };


  protected:
    std::shared_ptr<vector<Models::ListConsumedServicesResponseBodyConsumedServicesListListConsumedServices>> listConsumedServices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
