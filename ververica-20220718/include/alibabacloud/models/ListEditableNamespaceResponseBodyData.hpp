// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDITABLENAMESPACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEDITABLENAMESPACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EditableNamespace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class ListEditableNamespaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEditableNamespaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(editableNamespaces, editableNamespaces_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListEditableNamespaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(editableNamespaces, editableNamespaces_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListEditableNamespaceResponseBodyData() = default ;
    ListEditableNamespaceResponseBodyData(const ListEditableNamespaceResponseBodyData &) = default ;
    ListEditableNamespaceResponseBodyData(ListEditableNamespaceResponseBodyData &&) = default ;
    ListEditableNamespaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEditableNamespaceResponseBodyData() = default ;
    ListEditableNamespaceResponseBodyData& operator=(const ListEditableNamespaceResponseBodyData &) = default ;
    ListEditableNamespaceResponseBodyData& operator=(ListEditableNamespaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->editableNamespaces_ == nullptr
        && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr && return this->total_ == nullptr; };
    // editableNamespaces Field Functions 
    bool hasEditableNamespaces() const { return this->editableNamespaces_ != nullptr;};
    void deleteEditableNamespaces() { this->editableNamespaces_ = nullptr;};
    inline const vector<Models::EditableNamespace> & editableNamespaces() const { DARABONBA_PTR_GET_CONST(editableNamespaces_, vector<Models::EditableNamespace>) };
    inline vector<Models::EditableNamespace> editableNamespaces() { DARABONBA_PTR_GET(editableNamespaces_, vector<Models::EditableNamespace>) };
    inline ListEditableNamespaceResponseBodyData& setEditableNamespaces(const vector<Models::EditableNamespace> & editableNamespaces) { DARABONBA_PTR_SET_VALUE(editableNamespaces_, editableNamespaces) };
    inline ListEditableNamespaceResponseBodyData& setEditableNamespaces(vector<Models::EditableNamespace> && editableNamespaces) { DARABONBA_PTR_SET_RVALUE(editableNamespaces_, editableNamespaces) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline string pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, "") };
    inline ListEditableNamespaceResponseBodyData& setPageIndex(string pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListEditableNamespaceResponseBodyData& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline ListEditableNamespaceResponseBodyData& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::EditableNamespace>> editableNamespaces_ = nullptr;
    std::shared_ptr<string> pageIndex_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
