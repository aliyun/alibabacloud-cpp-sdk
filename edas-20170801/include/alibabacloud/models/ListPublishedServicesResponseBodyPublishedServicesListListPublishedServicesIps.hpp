// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODYPUBLISHEDSERVICESLISTLISTPUBLISHEDSERVICESIPS_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDSERVICESRESPONSEBODYPUBLISHEDSERVICESLISTLISTPUBLISHEDSERVICESIPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps& obj) { 
      DARABONBA_PTR_TO_JSON(ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps& obj) { 
      DARABONBA_PTR_FROM_JSON(ip, ip_);
    };
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps() = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps(const ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps &) = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps(ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps &&) = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps() = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps& operator=(const ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps &) = default ;
    ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps& operator=(ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline const vector<string> & ip() const { DARABONBA_PTR_GET_CONST(ip_, vector<string>) };
    inline vector<string> ip() { DARABONBA_PTR_GET(ip_, vector<string>) };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps& setIp(const vector<string> & ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };
    inline ListPublishedServicesResponseBodyPublishedServicesListListPublishedServicesIps& setIp(vector<string> && ip) { DARABONBA_PTR_SET_RVALUE(ip_, ip) };


  protected:
    std::shared_ptr<vector<string>> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
