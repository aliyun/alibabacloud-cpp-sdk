// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILETYPERESPONSEBODYNODETYPEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILETYPERESPONSEBODYNODETYPEINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListFileTypeResponseBodyNodeTypeInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileTypeResponseBodyNodeTypeInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(NodeTypeInfo, nodeTypeInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileTypeResponseBodyNodeTypeInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeTypeInfo, nodeTypeInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListFileTypeResponseBodyNodeTypeInfoList() = default ;
    ListFileTypeResponseBodyNodeTypeInfoList(const ListFileTypeResponseBodyNodeTypeInfoList &) = default ;
    ListFileTypeResponseBodyNodeTypeInfoList(ListFileTypeResponseBodyNodeTypeInfoList &&) = default ;
    ListFileTypeResponseBodyNodeTypeInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileTypeResponseBodyNodeTypeInfoList() = default ;
    ListFileTypeResponseBodyNodeTypeInfoList& operator=(const ListFileTypeResponseBodyNodeTypeInfoList &) = default ;
    ListFileTypeResponseBodyNodeTypeInfoList& operator=(ListFileTypeResponseBodyNodeTypeInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeTypeInfo_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // nodeTypeInfo Field Functions 
    bool hasNodeTypeInfo() const { return this->nodeTypeInfo_ != nullptr;};
    void deleteNodeTypeInfo() { this->nodeTypeInfo_ = nullptr;};
    inline const vector<Models::ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo> & nodeTypeInfo() const { DARABONBA_PTR_GET_CONST(nodeTypeInfo_, vector<Models::ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo>) };
    inline vector<Models::ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo> nodeTypeInfo() { DARABONBA_PTR_GET(nodeTypeInfo_, vector<Models::ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo>) };
    inline ListFileTypeResponseBodyNodeTypeInfoList& setNodeTypeInfo(const vector<Models::ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo> & nodeTypeInfo) { DARABONBA_PTR_SET_VALUE(nodeTypeInfo_, nodeTypeInfo) };
    inline ListFileTypeResponseBodyNodeTypeInfoList& setNodeTypeInfo(vector<Models::ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo> && nodeTypeInfo) { DARABONBA_PTR_SET_RVALUE(nodeTypeInfo_, nodeTypeInfo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListFileTypeResponseBodyNodeTypeInfoList& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListFileTypeResponseBodyNodeTypeInfoList& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListFileTypeResponseBodyNodeTypeInfoList& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the node type.
    std::shared_ptr<vector<Models::ListFileTypeResponseBodyNodeTypeInfoListNodeTypeInfo>> nodeTypeInfo_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
