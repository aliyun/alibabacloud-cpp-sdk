// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCINSTRUCTION_HPP_
#define ALIBABACLOUD_MODELS_PBCINSTRUCTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcInstruction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcInstruction& obj) { 
      DARABONBA_PTR_TO_JSON(document, document_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(pbcVersionId, pbcVersionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, PbcInstruction& obj) { 
      DARABONBA_PTR_FROM_JSON(document, document_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(pbcVersionId, pbcVersionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    PbcInstruction() = default ;
    PbcInstruction(const PbcInstruction &) = default ;
    PbcInstruction(PbcInstruction &&) = default ;
    PbcInstruction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcInstruction() = default ;
    PbcInstruction& operator=(const PbcInstruction &) = default ;
    PbcInstruction& operator=(PbcInstruction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->document_ == nullptr
        && this->id_ == nullptr && this->pbcVersionId_ == nullptr && this->requestId_ == nullptr; };
    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline PbcInstruction& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PbcInstruction& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pbcVersionId Field Functions 
    bool hasPbcVersionId() const { return this->pbcVersionId_ != nullptr;};
    void deletePbcVersionId() { this->pbcVersionId_ = nullptr;};
    inline int64_t getPbcVersionId() const { DARABONBA_PTR_GET_DEFAULT(pbcVersionId_, 0L) };
    inline PbcInstruction& setPbcVersionId(int64_t pbcVersionId) { DARABONBA_PTR_SET_VALUE(pbcVersionId_, pbcVersionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PbcInstruction& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // This parameter is required.
    shared_ptr<string> document_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> pbcVersionId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
