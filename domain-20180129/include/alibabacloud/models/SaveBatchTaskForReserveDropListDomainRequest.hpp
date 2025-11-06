// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEBATCHTASKFORRESERVEDROPLISTDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEBATCHTASKFORRESERVEDROPLISTDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveBatchTaskForReserveDropListDomainRequestDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveBatchTaskForReserveDropListDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveBatchTaskForReserveDropListDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_TO_JSON(Domains, domains_);
    };
    friend void from_json(const Darabonba::Json& j, SaveBatchTaskForReserveDropListDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactTemplateId, contactTemplateId_);
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
    };
    SaveBatchTaskForReserveDropListDomainRequest() = default ;
    SaveBatchTaskForReserveDropListDomainRequest(const SaveBatchTaskForReserveDropListDomainRequest &) = default ;
    SaveBatchTaskForReserveDropListDomainRequest(SaveBatchTaskForReserveDropListDomainRequest &&) = default ;
    SaveBatchTaskForReserveDropListDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveBatchTaskForReserveDropListDomainRequest() = default ;
    SaveBatchTaskForReserveDropListDomainRequest& operator=(const SaveBatchTaskForReserveDropListDomainRequest &) = default ;
    SaveBatchTaskForReserveDropListDomainRequest& operator=(SaveBatchTaskForReserveDropListDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactTemplateId_ == nullptr
        && return this->domains_ == nullptr; };
    // contactTemplateId Field Functions 
    bool hasContactTemplateId() const { return this->contactTemplateId_ != nullptr;};
    void deleteContactTemplateId() { this->contactTemplateId_ = nullptr;};
    inline string contactTemplateId() const { DARABONBA_PTR_GET_DEFAULT(contactTemplateId_, "") };
    inline SaveBatchTaskForReserveDropListDomainRequest& setContactTemplateId(string contactTemplateId) { DARABONBA_PTR_SET_VALUE(contactTemplateId_, contactTemplateId) };


    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<SaveBatchTaskForReserveDropListDomainRequestDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<SaveBatchTaskForReserveDropListDomainRequestDomains>) };
    inline vector<SaveBatchTaskForReserveDropListDomainRequestDomains> domains() { DARABONBA_PTR_GET(domains_, vector<SaveBatchTaskForReserveDropListDomainRequestDomains>) };
    inline SaveBatchTaskForReserveDropListDomainRequest& setDomains(const vector<SaveBatchTaskForReserveDropListDomainRequestDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline SaveBatchTaskForReserveDropListDomainRequest& setDomains(vector<SaveBatchTaskForReserveDropListDomainRequestDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contactTemplateId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<SaveBatchTaskForReserveDropListDomainRequestDomains>> domains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
