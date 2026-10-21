// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTINSTANCENODESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEPOOLCOMPONENTINSTANCENODESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListNodePoolComponentInstanceNodesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodePoolComponentInstanceNodesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(config_revision, configRevision_);
      DARABONBA_PTR_TO_JSON(max_results, maxResults_);
      DARABONBA_PTR_TO_JSON(next_token, nextToken_);
      DARABONBA_PTR_TO_JSON(node_names, nodeNamesShrink_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodePoolComponentInstanceNodesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(config_revision, configRevision_);
      DARABONBA_PTR_FROM_JSON(max_results, maxResults_);
      DARABONBA_PTR_FROM_JSON(next_token, nextToken_);
      DARABONBA_PTR_FROM_JSON(node_names, nodeNamesShrink_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListNodePoolComponentInstanceNodesShrinkRequest() = default ;
    ListNodePoolComponentInstanceNodesShrinkRequest(const ListNodePoolComponentInstanceNodesShrinkRequest &) = default ;
    ListNodePoolComponentInstanceNodesShrinkRequest(ListNodePoolComponentInstanceNodesShrinkRequest &&) = default ;
    ListNodePoolComponentInstanceNodesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodePoolComponentInstanceNodesShrinkRequest() = default ;
    ListNodePoolComponentInstanceNodesShrinkRequest& operator=(const ListNodePoolComponentInstanceNodesShrinkRequest &) = default ;
    ListNodePoolComponentInstanceNodesShrinkRequest& operator=(ListNodePoolComponentInstanceNodesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRevision_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->nodeNamesShrink_ == nullptr && this->version_ == nullptr; };
    // configRevision Field Functions 
    bool hasConfigRevision() const { return this->configRevision_ != nullptr;};
    void deleteConfigRevision() { this->configRevision_ = nullptr;};
    inline string getConfigRevision() const { DARABONBA_PTR_GET_DEFAULT(configRevision_, "") };
    inline ListNodePoolComponentInstanceNodesShrinkRequest& setConfigRevision(string configRevision) { DARABONBA_PTR_SET_VALUE(configRevision_, configRevision) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNodePoolComponentInstanceNodesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodePoolComponentInstanceNodesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeNamesShrink Field Functions 
    bool hasNodeNamesShrink() const { return this->nodeNamesShrink_ != nullptr;};
    void deleteNodeNamesShrink() { this->nodeNamesShrink_ = nullptr;};
    inline string getNodeNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeNamesShrink_, "") };
    inline ListNodePoolComponentInstanceNodesShrinkRequest& setNodeNamesShrink(string nodeNamesShrink) { DARABONBA_PTR_SET_VALUE(nodeNamesShrink_, nodeNamesShrink) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListNodePoolComponentInstanceNodesShrinkRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Filters nodes by the specified configuration version number of the node component.
    shared_ptr<string> configRevision_ {};
    // The maximum number of records to return in a single response for pagination. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination cursor. Do not specify this parameter for the first request. For subsequent requests, specify the token returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // Specifies the list of node names to query.
    shared_ptr<string> nodeNamesShrink_ {};
    // Filters nodes by the specified node component version.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
