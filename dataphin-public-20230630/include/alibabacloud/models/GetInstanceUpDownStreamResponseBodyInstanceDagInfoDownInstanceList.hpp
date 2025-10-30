// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEUPDOWNSTREAMRESPONSEBODYINSTANCEDAGINFODOWNINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEUPDOWNSTREAMRESPONSEBODYINSTANCEDAGINFODOWNINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList() = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList(const GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList &) = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList(GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList &&) = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList() = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList& operator=(const GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList &) = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList& operator=(GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldInstanceIdList_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->nodeId_ == nullptr && return this->nodeType_ == nullptr; };
    // fieldInstanceIdList Field Functions 
    bool hasFieldInstanceIdList() const { return this->fieldInstanceIdList_ != nullptr;};
    void deleteFieldInstanceIdList() { this->fieldInstanceIdList_ = nullptr;};
    inline const vector<string> & fieldInstanceIdList() const { DARABONBA_PTR_GET_CONST(fieldInstanceIdList_, vector<string>) };
    inline vector<string> fieldInstanceIdList() { DARABONBA_PTR_GET(fieldInstanceIdList_, vector<string>) };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    std::shared_ptr<vector<string>> fieldInstanceIdList_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
