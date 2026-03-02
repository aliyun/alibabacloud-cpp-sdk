// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCVERSIONCMD_HPP_
#define ALIBABACLOUD_MODELS_PBCVERSIONCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcVersionCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcVersionCmd& obj) { 
      DARABONBA_PTR_TO_JSON(apiSchema, apiSchema_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(developerId, developerId_);
      DARABONBA_PTR_TO_JSON(document, document_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, PbcVersionCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(apiSchema, apiSchema_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(developerId, developerId_);
      DARABONBA_PTR_FROM_JSON(document, document_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    PbcVersionCmd() = default ;
    PbcVersionCmd(const PbcVersionCmd &) = default ;
    PbcVersionCmd(PbcVersionCmd &&) = default ;
    PbcVersionCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcVersionCmd() = default ;
    PbcVersionCmd& operator=(const PbcVersionCmd &) = default ;
    PbcVersionCmd& operator=(PbcVersionCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiSchema_ == nullptr
        && this->companyId_ == nullptr && this->developerId_ == nullptr && this->document_ == nullptr && this->marketId_ == nullptr && this->name_ == nullptr
        && this->schema_ == nullptr && this->version_ == nullptr; };
    // apiSchema Field Functions 
    bool hasApiSchema() const { return this->apiSchema_ != nullptr;};
    void deleteApiSchema() { this->apiSchema_ = nullptr;};
    inline string getApiSchema() const { DARABONBA_PTR_GET_DEFAULT(apiSchema_, "") };
    inline PbcVersionCmd& setApiSchema(string apiSchema) { DARABONBA_PTR_SET_VALUE(apiSchema_, apiSchema) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PbcVersionCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // developerId Field Functions 
    bool hasDeveloperId() const { return this->developerId_ != nullptr;};
    void deleteDeveloperId() { this->developerId_ = nullptr;};
    inline int64_t getDeveloperId() const { DARABONBA_PTR_GET_DEFAULT(developerId_, 0L) };
    inline PbcVersionCmd& setDeveloperId(int64_t developerId) { DARABONBA_PTR_SET_VALUE(developerId_, developerId) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline PbcVersionCmd& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline PbcVersionCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PbcVersionCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline PbcVersionCmd& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline PbcVersionCmd& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> apiSchema_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> developerId_ {};
    shared_ptr<string> document_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> schema_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
