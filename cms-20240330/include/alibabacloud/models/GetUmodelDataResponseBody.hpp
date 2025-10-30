// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUMODELDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUMODELDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUmodelDataResponseBodyErrors.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetUmodelDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUmodelDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(errors, errors_);
      DARABONBA_PTR_TO_JSON(links, links_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalLinksCount, totalLinksCount_);
      DARABONBA_PTR_TO_JSON(totalNodesCount, totalNodesCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetUmodelDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(errors, errors_);
      DARABONBA_PTR_FROM_JSON(links, links_);
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalLinksCount, totalLinksCount_);
      DARABONBA_PTR_FROM_JSON(totalNodesCount, totalNodesCount_);
    };
    GetUmodelDataResponseBody() = default ;
    GetUmodelDataResponseBody(const GetUmodelDataResponseBody &) = default ;
    GetUmodelDataResponseBody(GetUmodelDataResponseBody &&) = default ;
    GetUmodelDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUmodelDataResponseBody() = default ;
    GetUmodelDataResponseBody& operator=(const GetUmodelDataResponseBody &) = default ;
    GetUmodelDataResponseBody& operator=(GetUmodelDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errors_ == nullptr
        && return this->links_ == nullptr && return this->nodes_ == nullptr && return this->requestId_ == nullptr && return this->totalLinksCount_ == nullptr && return this->totalNodesCount_ == nullptr; };
    // errors Field Functions 
    bool hasErrors() const { return this->errors_ != nullptr;};
    void deleteErrors() { this->errors_ = nullptr;};
    inline const vector<GetUmodelDataResponseBodyErrors> & errors() const { DARABONBA_PTR_GET_CONST(errors_, vector<GetUmodelDataResponseBodyErrors>) };
    inline vector<GetUmodelDataResponseBodyErrors> errors() { DARABONBA_PTR_GET(errors_, vector<GetUmodelDataResponseBodyErrors>) };
    inline GetUmodelDataResponseBody& setErrors(const vector<GetUmodelDataResponseBodyErrors> & errors) { DARABONBA_PTR_SET_VALUE(errors_, errors) };
    inline GetUmodelDataResponseBody& setErrors(vector<GetUmodelDataResponseBodyErrors> && errors) { DARABONBA_PTR_SET_RVALUE(errors_, errors) };


    // links Field Functions 
    bool hasLinks() const { return this->links_ != nullptr;};
    void deleteLinks() { this->links_ = nullptr;};
    inline const vector<Darabonba::Json> & links() const { DARABONBA_PTR_GET_CONST(links_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> links() { DARABONBA_PTR_GET(links_, vector<Darabonba::Json>) };
    inline GetUmodelDataResponseBody& setLinks(const vector<Darabonba::Json> & links) { DARABONBA_PTR_SET_VALUE(links_, links) };
    inline GetUmodelDataResponseBody& setLinks(vector<Darabonba::Json> && links) { DARABONBA_PTR_SET_RVALUE(links_, links) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Darabonba::Json> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> nodes() { DARABONBA_PTR_GET(nodes_, vector<Darabonba::Json>) };
    inline GetUmodelDataResponseBody& setNodes(const vector<Darabonba::Json> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetUmodelDataResponseBody& setNodes(vector<Darabonba::Json> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUmodelDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalLinksCount Field Functions 
    bool hasTotalLinksCount() const { return this->totalLinksCount_ != nullptr;};
    void deleteTotalLinksCount() { this->totalLinksCount_ = nullptr;};
    inline int32_t totalLinksCount() const { DARABONBA_PTR_GET_DEFAULT(totalLinksCount_, 0) };
    inline GetUmodelDataResponseBody& setTotalLinksCount(int32_t totalLinksCount) { DARABONBA_PTR_SET_VALUE(totalLinksCount_, totalLinksCount) };


    // totalNodesCount Field Functions 
    bool hasTotalNodesCount() const { return this->totalNodesCount_ != nullptr;};
    void deleteTotalNodesCount() { this->totalNodesCount_ = nullptr;};
    inline int32_t totalNodesCount() const { DARABONBA_PTR_GET_DEFAULT(totalNodesCount_, 0) };
    inline GetUmodelDataResponseBody& setTotalNodesCount(int32_t totalNodesCount) { DARABONBA_PTR_SET_VALUE(totalNodesCount_, totalNodesCount) };


  protected:
    // Error information
    std::shared_ptr<vector<GetUmodelDataResponseBodyErrors>> errors_ = nullptr;
    // List of node link relationships
    std::shared_ptr<vector<Darabonba::Json>> links_ = nullptr;
    // List of nodes
    std::shared_ptr<vector<Darabonba::Json>> nodes_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // Total number of node links
    std::shared_ptr<int32_t> totalLinksCount_ = nullptr;
    // Total number of nodes
    std::shared_ptr<int32_t> totalNodesCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
