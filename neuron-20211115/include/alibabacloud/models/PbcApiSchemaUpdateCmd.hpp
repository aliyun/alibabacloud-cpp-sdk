// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCAPISCHEMAUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_PBCAPISCHEMAUPDATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcApiSchemaUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcApiSchemaUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(apiSchema, apiSchema_);
      DARABONBA_PTR_TO_JSON(pbcVersionId, pbcVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, PbcApiSchemaUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(apiSchema, apiSchema_);
      DARABONBA_PTR_FROM_JSON(pbcVersionId, pbcVersionId_);
    };
    PbcApiSchemaUpdateCmd() = default ;
    PbcApiSchemaUpdateCmd(const PbcApiSchemaUpdateCmd &) = default ;
    PbcApiSchemaUpdateCmd(PbcApiSchemaUpdateCmd &&) = default ;
    PbcApiSchemaUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcApiSchemaUpdateCmd() = default ;
    PbcApiSchemaUpdateCmd& operator=(const PbcApiSchemaUpdateCmd &) = default ;
    PbcApiSchemaUpdateCmd& operator=(PbcApiSchemaUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiSchema_ == nullptr
        && this->pbcVersionId_ == nullptr; };
    // apiSchema Field Functions 
    bool hasApiSchema() const { return this->apiSchema_ != nullptr;};
    void deleteApiSchema() { this->apiSchema_ = nullptr;};
    inline string getApiSchema() const { DARABONBA_PTR_GET_DEFAULT(apiSchema_, "") };
    inline PbcApiSchemaUpdateCmd& setApiSchema(string apiSchema) { DARABONBA_PTR_SET_VALUE(apiSchema_, apiSchema) };


    // pbcVersionId Field Functions 
    bool hasPbcVersionId() const { return this->pbcVersionId_ != nullptr;};
    void deletePbcVersionId() { this->pbcVersionId_ = nullptr;};
    inline int64_t getPbcVersionId() const { DARABONBA_PTR_GET_DEFAULT(pbcVersionId_, 0L) };
    inline PbcApiSchemaUpdateCmd& setPbcVersionId(int64_t pbcVersionId) { DARABONBA_PTR_SET_VALUE(pbcVersionId_, pbcVersionId) };


  protected:
    shared_ptr<string> apiSchema_ {};
    shared_ptr<int64_t> pbcVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
