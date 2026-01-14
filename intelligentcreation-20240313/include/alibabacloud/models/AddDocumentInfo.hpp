// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDOCUMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_ADDDOCUMENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class AddDocumentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDocumentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(documentType, documentType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, AddDocumentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(documentType, documentType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    AddDocumentInfo() = default ;
    AddDocumentInfo(const AddDocumentInfo &) = default ;
    AddDocumentInfo(AddDocumentInfo &&) = default ;
    AddDocumentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDocumentInfo() = default ;
    AddDocumentInfo& operator=(const AddDocumentInfo &) = default ;
    AddDocumentInfo& operator=(AddDocumentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentType_ == nullptr
        && this->name_ == nullptr && this->url_ == nullptr; };
    // documentType Field Functions 
    bool hasDocumentType() const { return this->documentType_ != nullptr;};
    void deleteDocumentType() { this->documentType_ = nullptr;};
    inline string getDocumentType() const { DARABONBA_PTR_GET_DEFAULT(documentType_, "") };
    inline AddDocumentInfo& setDocumentType(string documentType) { DARABONBA_PTR_SET_VALUE(documentType_, documentType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddDocumentInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline AddDocumentInfo& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // This parameter is required.
    shared_ptr<string> documentType_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
