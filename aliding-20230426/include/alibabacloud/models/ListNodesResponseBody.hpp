// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListNodesResponseBody() = default ;
    ListNodesResponseBody(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody(ListNodesResponseBody &&) = default ;
    ListNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesResponseBody() = default ;
    ListNodesResponseBody& operator=(const ListNodesResponseBody &) = default ;
    ListNodesResponseBody& operator=(ListNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(HasChildren, hasChildren_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(PermissionRole, permissionRole_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(StatisticalInfo, statisticalInfo_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Url, url_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(HasChildren, hasChildren_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ModifierId, modifierId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(PermissionRole, permissionRole_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(StatisticalInfo, statisticalInfo_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      };
      Nodes() = default ;
      Nodes(const Nodes &) = default ;
      Nodes(Nodes &&) = default ;
      Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Nodes() = default ;
      Nodes& operator=(const Nodes &) = default ;
      Nodes& operator=(Nodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StatisticalInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StatisticalInfo& obj) { 
          DARABONBA_PTR_TO_JSON(WordCount, wordCount_);
        };
        friend void from_json(const Darabonba::Json& j, StatisticalInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(WordCount, wordCount_);
        };
        StatisticalInfo() = default ;
        StatisticalInfo(const StatisticalInfo &) = default ;
        StatisticalInfo(StatisticalInfo &&) = default ;
        StatisticalInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StatisticalInfo() = default ;
        StatisticalInfo& operator=(const StatisticalInfo &) = default ;
        StatisticalInfo& operator=(StatisticalInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->wordCount_ == nullptr; };
        // wordCount Field Functions 
        bool hasWordCount() const { return this->wordCount_ != nullptr;};
        void deleteWordCount() { this->wordCount_ = nullptr;};
        inline int64_t getWordCount() const { DARABONBA_PTR_GET_DEFAULT(wordCount_, 0L) };
        inline StatisticalInfo& setWordCount(int64_t wordCount) { DARABONBA_PTR_SET_VALUE(wordCount_, wordCount) };


      protected:
        shared_ptr<int64_t> wordCount_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->createTime_ == nullptr && this->creatorId_ == nullptr && this->extension_ == nullptr && this->hasChildren_ == nullptr && this->modifiedTime_ == nullptr
        && this->modifierId_ == nullptr && this->name_ == nullptr && this->nodeId_ == nullptr && this->permissionRole_ == nullptr && this->size_ == nullptr
        && this->statisticalInfo_ == nullptr && this->type_ == nullptr && this->url_ == nullptr && this->workspaceId_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Nodes& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Nodes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creatorId Field Functions 
      bool hasCreatorId() const { return this->creatorId_ != nullptr;};
      void deleteCreatorId() { this->creatorId_ = nullptr;};
      inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
      inline Nodes& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
      inline Nodes& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


      // hasChildren Field Functions 
      bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
      void deleteHasChildren() { this->hasChildren_ = nullptr;};
      inline bool getHasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
      inline Nodes& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Nodes& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // modifierId Field Functions 
      bool hasModifierId() const { return this->modifierId_ != nullptr;};
      void deleteModifierId() { this->modifierId_ = nullptr;};
      inline string getModifierId() const { DARABONBA_PTR_GET_DEFAULT(modifierId_, "") };
      inline Nodes& setModifierId(string modifierId) { DARABONBA_PTR_SET_VALUE(modifierId_, modifierId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Nodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Nodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // permissionRole Field Functions 
      bool hasPermissionRole() const { return this->permissionRole_ != nullptr;};
      void deletePermissionRole() { this->permissionRole_ = nullptr;};
      inline string getPermissionRole() const { DARABONBA_PTR_GET_DEFAULT(permissionRole_, "") };
      inline Nodes& setPermissionRole(string permissionRole) { DARABONBA_PTR_SET_VALUE(permissionRole_, permissionRole) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Nodes& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // statisticalInfo Field Functions 
      bool hasStatisticalInfo() const { return this->statisticalInfo_ != nullptr;};
      void deleteStatisticalInfo() { this->statisticalInfo_ = nullptr;};
      inline const Nodes::StatisticalInfo & getStatisticalInfo() const { DARABONBA_PTR_GET_CONST(statisticalInfo_, Nodes::StatisticalInfo) };
      inline Nodes::StatisticalInfo getStatisticalInfo() { DARABONBA_PTR_GET(statisticalInfo_, Nodes::StatisticalInfo) };
      inline Nodes& setStatisticalInfo(const Nodes::StatisticalInfo & statisticalInfo) { DARABONBA_PTR_SET_VALUE(statisticalInfo_, statisticalInfo) };
      inline Nodes& setStatisticalInfo(Nodes::StatisticalInfo && statisticalInfo) { DARABONBA_PTR_SET_RVALUE(statisticalInfo_, statisticalInfo) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Nodes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Nodes& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Nodes& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> category_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> creatorId_ {};
      shared_ptr<string> extension_ {};
      shared_ptr<bool> hasChildren_ {};
      shared_ptr<string> modifiedTime_ {};
      shared_ptr<string> modifierId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<string> permissionRole_ {};
      shared_ptr<int64_t> size_ {};
      shared_ptr<Nodes::StatisticalInfo> statisticalInfo_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> url_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->nodes_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNodesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<ListNodesResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<ListNodesResponseBody::Nodes>) };
    inline vector<ListNodesResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<ListNodesResponseBody::Nodes>) };
    inline ListNodesResponseBody& setNodes(const vector<ListNodesResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline ListNodesResponseBody& setNodes(vector<ListNodesResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListNodesResponseBody::Nodes>> nodes_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
