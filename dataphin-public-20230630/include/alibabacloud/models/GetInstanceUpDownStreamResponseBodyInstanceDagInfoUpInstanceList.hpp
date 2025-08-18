// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEUPDOWNSTREAMRESPONSEBODYINSTANCEDAGINFOUPINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEUPDOWNSTREAMRESPONSEBODYINSTANCEDAGINFOUPINSTANCELIST_HPP_
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
  class GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldInstanceIdList, fieldInstanceIdList_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldInstanceIdList, fieldInstanceIdList_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList() = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList(const GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList &) = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList(GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList &&) = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList() = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList& operator=(const GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList &) = default ;
    GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList& operator=(GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fieldInstanceIdList_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->nodeId_ != nullptr && this->nodeType_ != nullptr; };
    // fieldInstanceIdList Field Functions 
    bool hasFieldInstanceIdList() const { return this->fieldInstanceIdList_ != nullptr;};
    void deleteFieldInstanceIdList() { this->fieldInstanceIdList_ = nullptr;};
    inline const vector<string> & fieldInstanceIdList() const { DARABONBA_PTR_GET_CONST(fieldInstanceIdList_, vector<string>) };
    inline vector<string> fieldInstanceIdList() { DARABONBA_PTR_GET(fieldInstanceIdList_, vector<string>) };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList& setFieldInstanceIdList(const vector<string> & fieldInstanceIdList) { DARABONBA_PTR_SET_VALUE(fieldInstanceIdList_, fieldInstanceIdList) };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList& setFieldInstanceIdList(vector<string> && fieldInstanceIdList) { DARABONBA_PTR_SET_RVALUE(fieldInstanceIdList_, fieldInstanceIdList) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


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
