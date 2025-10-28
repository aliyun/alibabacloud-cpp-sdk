// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODYPUBLISHEDSERVICESLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODYPUBLISHEDSERVICESLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListPublishedServicesResponseBodyPublishedServicesList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedServicesResponseBodyPublishedServicesList& obj) { 
      DARABONBA_PTR_TO_JSON(ListPublishedServices, listPublishedServices_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedServicesResponseBodyPublishedServicesList& obj) { 
      DARABONBA_PTR_FROM_JSON(ListPublishedServices, listPublishedServices_);
    };
    ListPublishedServicesResponseBodyPublishedServicesList() = default ;
    ListPublishedServicesResponseBodyPublishedServicesList(const ListPublishedServicesResponseBodyPublishedServicesList &) = default ;
    ListPublishedServicesResponseBodyPublishedServicesList(ListPublishedServicesResponseBodyPublishedServicesList &&) = default ;
    ListPublishedServicesResponseBodyPublishedServicesList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedServicesResponseBodyPublishedServicesList() = default ;
    ListPublishedServicesResponseBodyPublishedServicesList& operator=(const ListPublishedServicesResponseBodyPublishedServicesList &) = default ;
    ListPublishedServicesResponseBodyPublishedServicesList& operator=(ListPublishedServicesResponseBodyPublishedServicesList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->listPublishedServices_ == nullptr; };
    // listPublishedServices Field Functions 
    bool hasListPublishedServices() const { return this->listPublishedServices_ != nullptr;};
    void deleteListPublishedServices() { this->listPublishedServices_ = nullptr;};
    inline const vector<Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices> & listPublishedServices() const { DARABONBA_PTR_GET_CONST(listPublishedServices_, vector<Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices>) };
    inline vector<Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices> listPublishedServices() { DARABONBA_PTR_GET(listPublishedServices_, vector<Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices>) };
    inline ListPublishedServicesResponseBodyPublishedServicesList& setListPublishedServices(const vector<Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices> & listPublishedServices) { DARABONBA_PTR_SET_VALUE(listPublishedServices_, listPublishedServices) };
    inline ListPublishedServicesResponseBodyPublishedServicesList& setListPublishedServices(vector<Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices> && listPublishedServices) { DARABONBA_PTR_SET_RVALUE(listPublishedServices_, listPublishedServices) };


  protected:
    std::shared_ptr<vector<Models::ListPublishedServicesResponseBodyPublishedServicesListListPublishedServices>> listPublishedServices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
