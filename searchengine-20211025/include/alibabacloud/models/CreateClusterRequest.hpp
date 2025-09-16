// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateClusterRequestDataNode.hpp>
#include <alibabacloud/models/CreateClusterRequestQueryNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class CreateClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoLoad, autoLoad_);
      DARABONBA_PTR_TO_JSON(dataNode, dataNode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(queryNode, queryNode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoLoad, autoLoad_);
      DARABONBA_PTR_FROM_JSON(dataNode, dataNode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(queryNode, queryNode_);
    };
    CreateClusterRequest() = default ;
    CreateClusterRequest(const CreateClusterRequest &) = default ;
    CreateClusterRequest(CreateClusterRequest &&) = default ;
    CreateClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequest() = default ;
    CreateClusterRequest& operator=(const CreateClusterRequest &) = default ;
    CreateClusterRequest& operator=(CreateClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoLoad_ != nullptr
        && this->dataNode_ != nullptr && this->description_ != nullptr && this->name_ != nullptr && this->queryNode_ != nullptr; };
    // autoLoad Field Functions 
    bool hasAutoLoad() const { return this->autoLoad_ != nullptr;};
    void deleteAutoLoad() { this->autoLoad_ = nullptr;};
    inline bool autoLoad() const { DARABONBA_PTR_GET_DEFAULT(autoLoad_, false) };
    inline CreateClusterRequest& setAutoLoad(bool autoLoad) { DARABONBA_PTR_SET_VALUE(autoLoad_, autoLoad) };


    // dataNode Field Functions 
    bool hasDataNode() const { return this->dataNode_ != nullptr;};
    void deleteDataNode() { this->dataNode_ = nullptr;};
    inline const CreateClusterRequestDataNode & dataNode() const { DARABONBA_PTR_GET_CONST(dataNode_, CreateClusterRequestDataNode) };
    inline CreateClusterRequestDataNode dataNode() { DARABONBA_PTR_GET(dataNode_, CreateClusterRequestDataNode) };
    inline CreateClusterRequest& setDataNode(const CreateClusterRequestDataNode & dataNode) { DARABONBA_PTR_SET_VALUE(dataNode_, dataNode) };
    inline CreateClusterRequest& setDataNode(CreateClusterRequestDataNode && dataNode) { DARABONBA_PTR_SET_RVALUE(dataNode_, dataNode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateClusterRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateClusterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queryNode Field Functions 
    bool hasQueryNode() const { return this->queryNode_ != nullptr;};
    void deleteQueryNode() { this->queryNode_ = nullptr;};
    inline const CreateClusterRequestQueryNode & queryNode() const { DARABONBA_PTR_GET_CONST(queryNode_, CreateClusterRequestQueryNode) };
    inline CreateClusterRequestQueryNode queryNode() { DARABONBA_PTR_GET(queryNode_, CreateClusterRequestQueryNode) };
    inline CreateClusterRequest& setQueryNode(const CreateClusterRequestQueryNode & queryNode) { DARABONBA_PTR_SET_VALUE(queryNode_, queryNode) };
    inline CreateClusterRequest& setQueryNode(CreateClusterRequestQueryNode && queryNode) { DARABONBA_PTR_SET_RVALUE(queryNode_, queryNode) };


  protected:
    // Specifies whether to enable automatic connection.
    std::shared_ptr<bool> autoLoad_ = nullptr;
    // The details of the Searcher workers.
    std::shared_ptr<CreateClusterRequestDataNode> dataNode_ = nullptr;
    // The description of the cluster.
    std::shared_ptr<string> description_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> name_ = nullptr;
    // The details of the Query Result Searcher (QRS) workers.
    std::shared_ptr<CreateClusterRequestQueryNode> queryNode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
