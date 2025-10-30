// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNodesResponseBodyPageResultNodeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListNodesResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNodesResponseBodyPageResult() = default ;
    ListNodesResponseBodyPageResult(const ListNodesResponseBodyPageResult &) = default ;
    ListNodesResponseBodyPageResult(ListNodesResponseBodyPageResult &&) = default ;
    ListNodesResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBodyPageResult() = default ;
    ListNodesResponseBodyPageResult& operator=(const ListNodesResponseBodyPageResult &) = default ;
    ListNodesResponseBodyPageResult& operator=(ListNodesResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // nodeList Field Functions 
    bool hasNodeList() const { return this->nodeList_ != nullptr;};
    void deleteNodeList() { this->nodeList_ = nullptr;};
    inline const vector<Models::ListNodesResponseBodyPageResultNodeList> & nodeList() const { DARABONBA_PTR_GET_CONST(nodeList_, vector<Models::ListNodesResponseBodyPageResultNodeList>) };
    inline vector<Models::ListNodesResponseBodyPageResultNodeList> nodeList() { DARABONBA_PTR_GET(nodeList_, vector<Models::ListNodesResponseBodyPageResultNodeList>) };
    inline ListNodesResponseBodyPageResult& setNodeList(const vector<Models::ListNodesResponseBodyPageResultNodeList> & nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };
    inline ListNodesResponseBodyPageResult& setNodeList(vector<Models::ListNodesResponseBodyPageResultNodeList> && nodeList) { DARABONBA_PTR_SET_RVALUE(nodeList_, nodeList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNodesResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListNodesResponseBodyPageResultNodeList>> nodeList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
