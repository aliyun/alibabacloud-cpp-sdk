// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListDynamicTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicTagRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicTagRequest& obj) { 
      (void)j; (void)obj; 
    };
    ListDynamicTagRequest() = default ;
    ListDynamicTagRequest(const ListDynamicTagRequest &) = default ;
    ListDynamicTagRequest(ListDynamicTagRequest &&) = default ;
    ListDynamicTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicTagRequest() = default ;
    ListDynamicTagRequest& operator=(const ListDynamicTagRequest &) = default ;
    ListDynamicTagRequest& operator=(ListDynamicTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
