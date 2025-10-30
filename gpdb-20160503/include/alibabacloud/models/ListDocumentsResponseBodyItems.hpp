// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCUMENTSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCUMENTSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDocumentsResponseBodyItemsDocumentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListDocumentsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDocumentsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentList, documentList_);
    };
    friend void from_json(const Darabonba::Json& j, ListDocumentsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentList, documentList_);
    };
    ListDocumentsResponseBodyItems() = default ;
    ListDocumentsResponseBodyItems(const ListDocumentsResponseBodyItems &) = default ;
    ListDocumentsResponseBodyItems(ListDocumentsResponseBodyItems &&) = default ;
    ListDocumentsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDocumentsResponseBodyItems() = default ;
    ListDocumentsResponseBodyItems& operator=(const ListDocumentsResponseBodyItems &) = default ;
    ListDocumentsResponseBodyItems& operator=(ListDocumentsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentList_ == nullptr; };
    // documentList Field Functions 
    bool hasDocumentList() const { return this->documentList_ != nullptr;};
    void deleteDocumentList() { this->documentList_ = nullptr;};
    inline const vector<Models::ListDocumentsResponseBodyItemsDocumentList> & documentList() const { DARABONBA_PTR_GET_CONST(documentList_, vector<Models::ListDocumentsResponseBodyItemsDocumentList>) };
    inline vector<Models::ListDocumentsResponseBodyItemsDocumentList> documentList() { DARABONBA_PTR_GET(documentList_, vector<Models::ListDocumentsResponseBodyItemsDocumentList>) };
    inline ListDocumentsResponseBodyItems& setDocumentList(const vector<Models::ListDocumentsResponseBodyItemsDocumentList> & documentList) { DARABONBA_PTR_SET_VALUE(documentList_, documentList) };
    inline ListDocumentsResponseBodyItems& setDocumentList(vector<Models::ListDocumentsResponseBodyItemsDocumentList> && documentList) { DARABONBA_PTR_SET_RVALUE(documentList_, documentList) };


  protected:
    std::shared_ptr<vector<Models::ListDocumentsResponseBodyItemsDocumentList>> documentList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
