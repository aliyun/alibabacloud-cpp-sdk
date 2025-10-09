// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodesResponseBodyPagingInfoNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNodesResponseBodyPagingInfo() = default ;
    ListNodesResponseBodyPagingInfo(const ListNodesResponseBodyPagingInfo &) = default ;
    ListNodesResponseBodyPagingInfo(ListNodesResponseBodyPagingInfo &&) = default ;
    ListNodesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPagingInfo() = default ;
    ListNodesResponseBodyPagingInfo& operator=(const ListNodesResponseBodyPagingInfo &) = default ;
    ListNodesResponseBodyPagingInfo& operator=(ListNodesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodes_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyPagingInfoNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::ListNodesResponseBodyPagingInfoNodes>) };
    inline vector<Models::ListNodesResponseBodyPagingInfoNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::ListNodesResponseBodyPagingInfoNodes>) };
    inline ListNodesResponseBodyPagingInfo& setNodes(const vector<Models::ListNodesResponseBodyPagingInfoNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListNodesResponseBodyPagingInfo& setNodes(vector<Models::ListNodesResponseBodyPagingInfoNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListNodesResponseBodyPagingInfo& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListNodesResponseBodyPagingInfo& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListNodesResponseBodyPagingInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of nodes in DataStudio.
    std::shared_ptr<vector<Models::ListNodesResponseBodyPagingInfoNodes>> nodes_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
