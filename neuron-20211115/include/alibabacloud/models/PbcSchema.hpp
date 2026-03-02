// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBCSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_PBCSCHEMA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PbcSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PbcSchema& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(pbcVersionId, pbcVersionId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, PbcSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(pbcVersionId, pbcVersionId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    PbcSchema() = default ;
    PbcSchema(const PbcSchema &) = default ;
    PbcSchema(PbcSchema &&) = default ;
    PbcSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PbcSchema() = default ;
    PbcSchema& operator=(const PbcSchema &) = default ;
    PbcSchema& operator=(PbcSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->pbcVersionId_ == nullptr && this->requestId_ == nullptr && this->schema_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PbcSchema& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pbcVersionId Field Functions 
    bool hasPbcVersionId() const { return this->pbcVersionId_ != nullptr;};
    void deletePbcVersionId() { this->pbcVersionId_ = nullptr;};
    inline int64_t getPbcVersionId() const { DARABONBA_PTR_GET_DEFAULT(pbcVersionId_, 0L) };
    inline PbcSchema& setPbcVersionId(int64_t pbcVersionId) { DARABONBA_PTR_SET_VALUE(pbcVersionId_, pbcVersionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PbcSchema& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline PbcSchema& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    shared_ptr<int64_t> id_ {};
    shared_ptr<int64_t> pbcVersionId_ {};
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<string> schema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
