// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCAPISCHEMACREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PBCAPISCHEMACREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcApiSchemaCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcApiSchemaCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(apiSchema, apiSchema_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(pbcVersionId, pbcVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, PbcApiSchemaCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(apiSchema, apiSchema_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(pbcVersionId, pbcVersionId_);
    };
    PbcApiSchemaCreateCmd() = default ;
    PbcApiSchemaCreateCmd(const PbcApiSchemaCreateCmd &) = default ;
    PbcApiSchemaCreateCmd(PbcApiSchemaCreateCmd &&) = default ;
    PbcApiSchemaCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcApiSchemaCreateCmd() = default ;
    PbcApiSchemaCreateCmd& operator=(const PbcApiSchemaCreateCmd &) = default ;
    PbcApiSchemaCreateCmd& operator=(PbcApiSchemaCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiSchema_ == nullptr
        && this->companyId_ == nullptr && this->marketId_ == nullptr && this->pbcVersionId_ == nullptr; };
    // apiSchema Field Functions 
    bool hasApiSchema() const { return this->apiSchema_ != nullptr;};
    void deleteApiSchema() { this->apiSchema_ = nullptr;};
    inline string getApiSchema() const { DARABONBA_PTR_GET_DEFAULT(apiSchema_, "") };
    inline PbcApiSchemaCreateCmd& setApiSchema(string apiSchema) { DARABONBA_PTR_SET_VALUE(apiSchema_, apiSchema) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PbcApiSchemaCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline PbcApiSchemaCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // pbcVersionId Field Functions 
    bool hasPbcVersionId() const { return this->pbcVersionId_ != nullptr;};
    void deletePbcVersionId() { this->pbcVersionId_ = nullptr;};
    inline int64_t getPbcVersionId() const { DARABONBA_PTR_GET_DEFAULT(pbcVersionId_, 0L) };
    inline PbcApiSchemaCreateCmd& setPbcVersionId(int64_t pbcVersionId) { DARABONBA_PTR_SET_VALUE(pbcVersionId_, pbcVersionId) };


  protected:
    shared_ptr<string> apiSchema_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<int64_t> pbcVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
