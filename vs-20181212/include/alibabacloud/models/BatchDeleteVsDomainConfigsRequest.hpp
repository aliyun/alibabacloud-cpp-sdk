// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEVSDOMAINCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEVSDOMAINCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchDeleteVsDomainConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteVsDomainConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_TO_JSON(FunctionNames, functionNames_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteVsDomainConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
      DARABONBA_PTR_FROM_JSON(FunctionNames, functionNames_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    BatchDeleteVsDomainConfigsRequest() = default ;
    BatchDeleteVsDomainConfigsRequest(const BatchDeleteVsDomainConfigsRequest &) = default ;
    BatchDeleteVsDomainConfigsRequest(BatchDeleteVsDomainConfigsRequest &&) = default ;
    BatchDeleteVsDomainConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteVsDomainConfigsRequest() = default ;
    BatchDeleteVsDomainConfigsRequest& operator=(const BatchDeleteVsDomainConfigsRequest &) = default ;
    BatchDeleteVsDomainConfigsRequest& operator=(BatchDeleteVsDomainConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainNames_ != nullptr
        && this->functionNames_ != nullptr && this->ownerId_ != nullptr; };
    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string domainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline BatchDeleteVsDomainConfigsRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


    // functionNames Field Functions 
    bool hasFunctionNames() const { return this->functionNames_ != nullptr;};
    void deleteFunctionNames() { this->functionNames_ = nullptr;};
    inline string functionNames() const { DARABONBA_PTR_GET_DEFAULT(functionNames_, "") };
    inline BatchDeleteVsDomainConfigsRequest& setFunctionNames(string functionNames) { DARABONBA_PTR_SET_VALUE(functionNames_, functionNames) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline BatchDeleteVsDomainConfigsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domainNames_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> functionNames_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
