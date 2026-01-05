// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMULTISTREAMCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINMULTISTREAMCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainMultiStreamConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainMultiStreamConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainMultiStreamConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    DescribeLiveDomainMultiStreamConfigRequest() = default ;
    DescribeLiveDomainMultiStreamConfigRequest(const DescribeLiveDomainMultiStreamConfigRequest &) = default ;
    DescribeLiveDomainMultiStreamConfigRequest(DescribeLiveDomainMultiStreamConfigRequest &&) = default ;
    DescribeLiveDomainMultiStreamConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainMultiStreamConfigRequest() = default ;
    DescribeLiveDomainMultiStreamConfigRequest& operator=(const DescribeLiveDomainMultiStreamConfigRequest &) = default ;
    DescribeLiveDomainMultiStreamConfigRequest& operator=(DescribeLiveDomainMultiStreamConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->ownerId_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLiveDomainMultiStreamConfigRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveDomainMultiStreamConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // The main streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    shared_ptr<int64_t> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
