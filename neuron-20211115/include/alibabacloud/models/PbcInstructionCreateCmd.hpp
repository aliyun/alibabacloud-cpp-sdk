// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCINSTRUCTIONCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PBCINSTRUCTIONCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcInstructionCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcInstructionCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(document, document_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(pbcVersionId, pbcVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, PbcInstructionCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(document, document_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(pbcVersionId, pbcVersionId_);
    };
    PbcInstructionCreateCmd() = default ;
    PbcInstructionCreateCmd(const PbcInstructionCreateCmd &) = default ;
    PbcInstructionCreateCmd(PbcInstructionCreateCmd &&) = default ;
    PbcInstructionCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcInstructionCreateCmd() = default ;
    PbcInstructionCreateCmd& operator=(const PbcInstructionCreateCmd &) = default ;
    PbcInstructionCreateCmd& operator=(PbcInstructionCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyId_ == nullptr
        && this->document_ == nullptr && this->id_ == nullptr && this->marketId_ == nullptr && this->pbcVersionId_ == nullptr; };
    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PbcInstructionCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline PbcInstructionCreateCmd& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PbcInstructionCreateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline PbcInstructionCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // pbcVersionId Field Functions 
    bool hasPbcVersionId() const { return this->pbcVersionId_ != nullptr;};
    void deletePbcVersionId() { this->pbcVersionId_ = nullptr;};
    inline int64_t getPbcVersionId() const { DARABONBA_PTR_GET_DEFAULT(pbcVersionId_, 0L) };
    inline PbcInstructionCreateCmd& setPbcVersionId(int64_t pbcVersionId) { DARABONBA_PTR_SET_VALUE(pbcVersionId_, pbcVersionId) };


  protected:
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> document_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<int64_t> pbcVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
