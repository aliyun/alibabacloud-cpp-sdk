// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFILETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFileTypeResponseBodyNodeTypeInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListFileTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NodeTypeInfoList, nodeTypeInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeTypeInfoList, nodeTypeInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListFileTypeResponseBody() = default ;
    ListFileTypeResponseBody(const ListFileTypeResponseBody &) = default ;
    ListFileTypeResponseBody(ListFileTypeResponseBody &&) = default ;
    ListFileTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileTypeResponseBody() = default ;
    ListFileTypeResponseBody& operator=(const ListFileTypeResponseBody &) = default ;
    ListFileTypeResponseBody& operator=(ListFileTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeTypeInfoList_ != nullptr
        && this->requestId_ != nullptr; };
    // nodeTypeInfoList Field Functions 
    bool hasNodeTypeInfoList() const { return this->nodeTypeInfoList_ != nullptr;};
    void deleteNodeTypeInfoList() { this->nodeTypeInfoList_ = nullptr;};
    inline const ListFileTypeResponseBodyNodeTypeInfoList & nodeTypeInfoList() const { DARABONBA_PTR_GET_CONST(nodeTypeInfoList_, ListFileTypeResponseBodyNodeTypeInfoList) };
    inline ListFileTypeResponseBodyNodeTypeInfoList nodeTypeInfoList() { DARABONBA_PTR_GET(nodeTypeInfoList_, ListFileTypeResponseBodyNodeTypeInfoList) };
    inline ListFileTypeResponseBody& setNodeTypeInfoList(const ListFileTypeResponseBodyNodeTypeInfoList & nodeTypeInfoList) { DARABONBA_PTR_SET_VALUE(nodeTypeInfoList_, nodeTypeInfoList) };
    inline ListFileTypeResponseBody& setNodeTypeInfoList(ListFileTypeResponseBodyNodeTypeInfoList && nodeTypeInfoList) { DARABONBA_PTR_SET_RVALUE(nodeTypeInfoList_, nodeTypeInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFileTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about node types.
    std::shared_ptr<ListFileTypeResponseBodyNodeTypeInfoList> nodeTypeInfoList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
