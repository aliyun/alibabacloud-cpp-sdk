// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCBINDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCBINDINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListVpcBindingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcBindingsRequest& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, ListVpcBindingsRequest& obj) { 
      (void)j; (void)obj; 
    };
    ListVpcBindingsRequest() = default ;
    ListVpcBindingsRequest(const ListVpcBindingsRequest &) = default ;
    ListVpcBindingsRequest(ListVpcBindingsRequest &&) = default ;
    ListVpcBindingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcBindingsRequest() = default ;
    ListVpcBindingsRequest& operator=(const ListVpcBindingsRequest &) = default ;
    ListVpcBindingsRequest& operator=(ListVpcBindingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
