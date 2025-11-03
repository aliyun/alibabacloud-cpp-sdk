// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALHOSTSRESPONSEBODYDATAVIRTUALHOSTS_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALHOSTSRESPONSEBODYDATAVIRTUALHOSTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListVirtualHostsResponseBodyDataVirtualHosts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualHostsResponseBodyDataVirtualHosts& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualHostsResponseBodyDataVirtualHosts& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListVirtualHostsResponseBodyDataVirtualHosts() = default ;
    ListVirtualHostsResponseBodyDataVirtualHosts(const ListVirtualHostsResponseBodyDataVirtualHosts &) = default ;
    ListVirtualHostsResponseBodyDataVirtualHosts(ListVirtualHostsResponseBodyDataVirtualHosts &&) = default ;
    ListVirtualHostsResponseBodyDataVirtualHosts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualHostsResponseBodyDataVirtualHosts() = default ;
    ListVirtualHostsResponseBodyDataVirtualHosts& operator=(const ListVirtualHostsResponseBodyDataVirtualHosts &) = default ;
    ListVirtualHostsResponseBodyDataVirtualHosts& operator=(ListVirtualHostsResponseBodyDataVirtualHosts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListVirtualHostsResponseBodyDataVirtualHosts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The vhost name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
