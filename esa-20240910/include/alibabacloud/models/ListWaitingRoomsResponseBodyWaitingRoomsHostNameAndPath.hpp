// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMSRESPONSEBODYWAITINGROOMSHOSTNAMEANDPATH_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMSRESPONSEBODYWAITINGROOMSHOSTNAMEANDPATH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Subdomain, subdomain_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Subdomain, subdomain_);
    };
    ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath() = default ;
    ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath(const ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath &) = default ;
    ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath(ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath &&) = default ;
    ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath() = default ;
    ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath& operator=(const ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath &) = default ;
    ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath& operator=(ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->path_ != nullptr && this->subdomain_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // subdomain Field Functions 
    bool hasSubdomain() const { return this->subdomain_ != nullptr;};
    void deleteSubdomain() { this->subdomain_ = nullptr;};
    inline string subdomain() const { DARABONBA_PTR_GET_DEFAULT(subdomain_, "") };
    inline ListWaitingRoomsResponseBodyWaitingRoomsHostNameAndPath& setSubdomain(string subdomain) { DARABONBA_PTR_SET_VALUE(subdomain_, subdomain) };


  protected:
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The path.
    std::shared_ptr<string> path_ = nullptr;
    // The subdomain.
    std::shared_ptr<string> subdomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
