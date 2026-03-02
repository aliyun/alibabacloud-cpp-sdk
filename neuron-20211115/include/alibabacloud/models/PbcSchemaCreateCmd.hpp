// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCSCHEMACREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PBCSCHEMACREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcSchemaCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcSchemaCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(pbcName, pbcName_);
      DARABONBA_PTR_TO_JSON(pbcVersion, pbcVersion_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, PbcSchemaCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(pbcName, pbcName_);
      DARABONBA_PTR_FROM_JSON(pbcVersion, pbcVersion_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    PbcSchemaCreateCmd() = default ;
    PbcSchemaCreateCmd(const PbcSchemaCreateCmd &) = default ;
    PbcSchemaCreateCmd(PbcSchemaCreateCmd &&) = default ;
    PbcSchemaCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcSchemaCreateCmd() = default ;
    PbcSchemaCreateCmd& operator=(const PbcSchemaCreateCmd &) = default ;
    PbcSchemaCreateCmd& operator=(PbcSchemaCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->id_ == nullptr && this->marketId_ == nullptr && this->pbcName_ == nullptr && this->pbcVersion_ == nullptr && this->schema_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PbcSchemaCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PbcSchemaCreateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline PbcSchemaCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // pbcName Field Functions 
    bool hasPbcName() const { return this->pbcName_ != nullptr;};
    void deletePbcName() { this->pbcName_ = nullptr;};
    inline string getPbcName() const { DARABONBA_PTR_GET_DEFAULT(pbcName_, "") };
    inline PbcSchemaCreateCmd& setPbcName(string pbcName) { DARABONBA_PTR_SET_VALUE(pbcName_, pbcName) };


    // pbcVersion Field Functions 
    bool hasPbcVersion() const { return this->pbcVersion_ != nullptr;};
    void deletePbcVersion() { this->pbcVersion_ = nullptr;};
    inline string getPbcVersion() const { DARABONBA_PTR_GET_DEFAULT(pbcVersion_, "") };
    inline PbcSchemaCreateCmd& setPbcVersion(string pbcVersion) { DARABONBA_PTR_SET_VALUE(pbcVersion_, pbcVersion) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline PbcSchemaCreateCmd& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<string> pbcName_ {};
    shared_ptr<string> pbcVersion_ {};
    shared_ptr<string> schema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
