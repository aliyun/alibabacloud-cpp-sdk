// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTSRESPONSEBODYITEMSDOCUMENTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTSRESPONSEBODYITEMSDOCUMENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListDocumentsResponseBodyItemsDocumentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentsResponseBodyItemsDocumentList& obj) { 
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentsResponseBodyItemsDocumentList& obj) { 
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    ListDocumentsResponseBodyItemsDocumentList() = default ;
    ListDocumentsResponseBodyItemsDocumentList(const ListDocumentsResponseBodyItemsDocumentList &) = default ;
    ListDocumentsResponseBodyItemsDocumentList(ListDocumentsResponseBodyItemsDocumentList &&) = default ;
    ListDocumentsResponseBodyItemsDocumentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentsResponseBodyItemsDocumentList() = default ;
    ListDocumentsResponseBodyItemsDocumentList& operator=(const ListDocumentsResponseBodyItemsDocumentList &) = default ;
    ListDocumentsResponseBodyItemsDocumentList& operator=(ListDocumentsResponseBodyItemsDocumentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fileName_ != nullptr
        && this->source_ != nullptr; };
    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListDocumentsResponseBodyItemsDocumentList& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListDocumentsResponseBodyItemsDocumentList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The name of the document.
    std::shared_ptr<string> fileName_ = nullptr;
    // The source of the document.
    std::shared_ptr<string> source_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
