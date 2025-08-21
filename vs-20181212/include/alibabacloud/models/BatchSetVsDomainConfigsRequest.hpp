// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETVSDOMAINCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETVSDOMAINCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchSetVsDomainConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetVsDomainConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(Functions, functions_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetVsDomainConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(Functions, functions_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    BatchSetVsDomainConfigsRequest() = default ;
    BatchSetVsDomainConfigsRequest(const BatchSetVsDomainConfigsRequest &) = default ;
    BatchSetVsDomainConfigsRequest(BatchSetVsDomainConfigsRequest &&) = default ;
    BatchSetVsDomainConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetVsDomainConfigsRequest() = default ;
    BatchSetVsDomainConfigsRequest& operator=(const BatchSetVsDomainConfigsRequest &) = default ;
    BatchSetVsDomainConfigsRequest& operator=(BatchSetVsDomainConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainNames_ != nullptr
        && this->functions_ != nullptr && this->ownerId_ != nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string domainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline BatchSetVsDomainConfigsRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // functions Field Functions 
    bool hasFunctions() const { return this->functions_ != nullptr;};
    void deleteFunctions() { this->functions_ = nullptr;};
    inline string functions() const { DARABONBA_PTR_GET_DEFAULT(functions_, "") };
    inline BatchSetVsDomainConfigsRequest& setFunctions(string functions) { DARABONBA_PTR_SET_VALUE(functions_, functions) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchSetVsDomainConfigsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domainNames_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> functions_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
