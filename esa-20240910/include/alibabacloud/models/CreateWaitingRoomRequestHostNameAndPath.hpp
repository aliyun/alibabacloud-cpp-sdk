// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWAITINGROOMREQUESTHOSTNAMEANDPATH_HPP_
#define ALIBABACLOUD_MODELS_CREATEWAITINGROOMREQUESTHOSTNAMEANDPATH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateWaitingRoomRequestHostNameAndPath : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWaitingRoomRequestHostNameAndPath& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Subdomain, subdomain_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWaitingRoomRequestHostNameAndPath& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Subdomain, subdomain_);
    };
    CreateWaitingRoomRequestHostNameAndPath() = default ;
    CreateWaitingRoomRequestHostNameAndPath(const CreateWaitingRoomRequestHostNameAndPath &) = default ;
    CreateWaitingRoomRequestHostNameAndPath(CreateWaitingRoomRequestHostNameAndPath &&) = default ;
    CreateWaitingRoomRequestHostNameAndPath(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWaitingRoomRequestHostNameAndPath() = default ;
    CreateWaitingRoomRequestHostNameAndPath& operator=(const CreateWaitingRoomRequestHostNameAndPath &) = default ;
    CreateWaitingRoomRequestHostNameAndPath& operator=(CreateWaitingRoomRequestHostNameAndPath &&) = default ;
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
    inline CreateWaitingRoomRequestHostNameAndPath& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateWaitingRoomRequestHostNameAndPath& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // subdomain Field Functions 
    bool hasSubdomain() const { return this->subdomain_ != nullptr;};
    void deleteSubdomain() { this->subdomain_ = nullptr;};
    inline string subdomain() const { DARABONBA_PTR_GET_DEFAULT(subdomain_, "") };
    inline CreateWaitingRoomRequestHostNameAndPath& setSubdomain(string subdomain) { DARABONBA_PTR_SET_VALUE(subdomain_, subdomain) };


  protected:
    // The domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The path.
    // 
    // This parameter is required.
    std::shared_ptr<string> path_ = nullptr;
    // The subdomain.
    // 
    // This parameter is required.
    std::shared_ptr<string> subdomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
