// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATESOURCEGENERATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATESOURCEGENERATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListDateSourceGenerationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDateSourceGenerationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(domainName, domainName_);
      DARABONBA_PTR_TO_JSON(validStatus, validStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListDateSourceGenerationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(domainName, domainName_);
      DARABONBA_PTR_FROM_JSON(validStatus, validStatus_);
    };
    ListDateSourceGenerationsRequest() = default ;
    ListDateSourceGenerationsRequest(const ListDateSourceGenerationsRequest &) = default ;
    ListDateSourceGenerationsRequest(ListDateSourceGenerationsRequest &&) = default ;
    ListDateSourceGenerationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDateSourceGenerationsRequest() = default ;
    ListDateSourceGenerationsRequest& operator=(const ListDateSourceGenerationsRequest &) = default ;
    ListDateSourceGenerationsRequest& operator=(ListDateSourceGenerationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->validStatus_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListDateSourceGenerationsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // validStatus Field Functions 
    bool hasValidStatus() const { return this->validStatus_ != nullptr;};
    void deleteValidStatus() { this->validStatus_ = nullptr;};
    inline bool validStatus() const { DARABONBA_PTR_GET_DEFAULT(validStatus_, false) };
    inline ListDateSourceGenerationsRequest& setValidStatus(bool validStatus) { DARABONBA_PTR_SET_VALUE(validStatus_, validStatus) };


  protected:
    // The data center where the data source is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // Specifies the index versions to be returned. Valid values:
    // 
    // 1.  true (default): returns the index versions that are complete and not expired.
    // 2.  false: returns all index versions.
    std::shared_ptr<bool> validStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
