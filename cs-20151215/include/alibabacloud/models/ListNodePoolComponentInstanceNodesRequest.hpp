// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTINSTANCENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTINSTANCENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListNodePoolComponentInstanceNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodePoolComponentInstanceNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(config_revision, configRevision_);
      DARABONBA_PTR_TO_JSON(max_results, maxResults_);
      DARABONBA_PTR_TO_JSON(next_token, nextToken_);
      DARABONBA_PTR_TO_JSON(node_names, nodeNames_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodePoolComponentInstanceNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(config_revision, configRevision_);
      DARABONBA_PTR_FROM_JSON(max_results, maxResults_);
      DARABONBA_PTR_FROM_JSON(next_token, nextToken_);
      DARABONBA_PTR_FROM_JSON(node_names, nodeNames_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListNodePoolComponentInstanceNodesRequest() = default ;
    ListNodePoolComponentInstanceNodesRequest(const ListNodePoolComponentInstanceNodesRequest &) = default ;
    ListNodePoolComponentInstanceNodesRequest(ListNodePoolComponentInstanceNodesRequest &&) = default ;
    ListNodePoolComponentInstanceNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodePoolComponentInstanceNodesRequest() = default ;
    ListNodePoolComponentInstanceNodesRequest& operator=(const ListNodePoolComponentInstanceNodesRequest &) = default ;
    ListNodePoolComponentInstanceNodesRequest& operator=(ListNodePoolComponentInstanceNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRevision_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->nodeNames_ == nullptr && this->version_ == nullptr; };
    // configRevision Field Functions 
    bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
    void deleteConfigRevision() { this->configRevision_ = nullptr;};
    inline string getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, "") };
    inline ListNodePoolComponentInstanceNodesRequest& setConfigRevision(string configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodePoolComponentInstanceNodesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodePoolComponentInstanceNodesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & getNodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> getNodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline ListNodePoolComponentInstanceNodesRequest& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline ListNodePoolComponentInstanceNodesRequest& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListNodePoolComponentInstanceNodesRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Filters nodes by the specified configuration version number of the node component.
    shared_ptr<string> configRevision_ {};
    // The maximum number of records to return in a single response for pagination. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination cursor. Do not specify this parameter for the first request. For subsequent requests, specify the token returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // Specifies the list of node names to query.
    shared_ptr<vector<string>> nodeNames_ {};
    // Filters nodes by the specified node component version.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
