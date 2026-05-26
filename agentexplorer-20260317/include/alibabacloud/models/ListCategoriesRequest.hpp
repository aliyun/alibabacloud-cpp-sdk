// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentExplorer20260317
{
namespace Models
{
  class ListCategoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoriesRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ListCategoriesRequest& obj) { 
      (void)j; (void)obj; 
    };
    ListCategoriesRequest() = default ;
    ListCategoriesRequest(const ListCategoriesRequest &) = default ;
    ListCategoriesRequest(ListCategoriesRequest &&) = default ;
    ListCategoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoriesRequest() = default ;
    ListCategoriesRequest& operator=(const ListCategoriesRequest &) = default ;
    ListCategoriesRequest& operator=(ListCategoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentExplorer20260317
#endif
