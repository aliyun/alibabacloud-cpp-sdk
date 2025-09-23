// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAINODEPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAINODEPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAINodePoolsResponseBodyAINodePoolInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListAINodePoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAINodePoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AINodePoolInfos, AINodePoolInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAINodePoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AINodePoolInfos, AINodePoolInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAINodePoolsResponseBody() = default ;
    ListAINodePoolsResponseBody(const ListAINodePoolsResponseBody &) = default ;
    ListAINodePoolsResponseBody(ListAINodePoolsResponseBody &&) = default ;
    ListAINodePoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAINodePoolsResponseBody() = default ;
    ListAINodePoolsResponseBody& operator=(const ListAINodePoolsResponseBody &) = default ;
    ListAINodePoolsResponseBody& operator=(ListAINodePoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AINodePoolInfos_ != nullptr
        && this->requestId_ != nullptr; };
    // AINodePoolInfos Field Functions 
    bool hasAINodePoolInfos() const { return this->AINodePoolInfos_ != nullptr;};
    void deleteAINodePoolInfos() { this->AINodePoolInfos_ = nullptr;};
    inline const vector<ListAINodePoolsResponseBodyAINodePoolInfos> & AINodePoolInfos() const { DARABONBA_PTR_GET_CONST(AINodePoolInfos_, vector<ListAINodePoolsResponseBodyAINodePoolInfos>) };
    inline vector<ListAINodePoolsResponseBodyAINodePoolInfos> AINodePoolInfos() { DARABONBA_PTR_GET(AINodePoolInfos_, vector<ListAINodePoolsResponseBodyAINodePoolInfos>) };
    inline ListAINodePoolsResponseBody& setAINodePoolInfos(const vector<ListAINodePoolsResponseBodyAINodePoolInfos> & AINodePoolInfos) { DARABONBA_PTR_SET_VALUE(AINodePoolInfos_, AINodePoolInfos) };
    inline ListAINodePoolsResponseBody& setAINodePoolInfos(vector<ListAINodePoolsResponseBodyAINodePoolInfos> && AINodePoolInfos) { DARABONBA_PTR_SET_RVALUE(AINodePoolInfos_, AINodePoolInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAINodePoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListAINodePoolsResponseBodyAINodePoolInfos>> AINodePoolInfos_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
