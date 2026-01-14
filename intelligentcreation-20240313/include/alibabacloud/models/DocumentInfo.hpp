// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class DocumentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(documentType, documentType_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(processStatus, processStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(documentType, documentType_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(processStatus, processStatus_);
    };
    DocumentInfo() = default ;
    DocumentInfo(const DocumentInfo &) = default ;
    DocumentInfo(DocumentInfo &&) = default ;
    DocumentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentInfo() = default ;
    DocumentInfo& operator=(const DocumentInfo &) = default ;
    DocumentInfo& operator=(DocumentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentType_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->processStatus_ == nullptr; };
    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline string getDocumentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
    inline DocumentInfo& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DocumentInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DocumentInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline string getProcessStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, "") };
    inline DocumentInfo& setProcessStatus(string processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


  protected:
    shared_ptr<string> documentType_ {};
    shared_ptr<string> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> processStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
