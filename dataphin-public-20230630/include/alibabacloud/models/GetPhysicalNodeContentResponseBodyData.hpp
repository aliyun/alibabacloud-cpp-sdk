// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHYSICALNODECONTENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPHYSICALNODECONTENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPhysicalNodeContentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhysicalNodeContentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CodeContent, codeContent_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhysicalNodeContentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CodeContent, codeContent_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
    };
    GetPhysicalNodeContentResponseBodyData() = default ;
    GetPhysicalNodeContentResponseBodyData(const GetPhysicalNodeContentResponseBodyData &) = default ;
    GetPhysicalNodeContentResponseBodyData(GetPhysicalNodeContentResponseBodyData &&) = default ;
    GetPhysicalNodeContentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhysicalNodeContentResponseBodyData() = default ;
    GetPhysicalNodeContentResponseBodyData& operator=(const GetPhysicalNodeContentResponseBodyData &) = default ;
    GetPhysicalNodeContentResponseBodyData& operator=(GetPhysicalNodeContentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codeContent_ != nullptr
        && this->nodeId_ != nullptr && this->nodeName_ != nullptr; };
    // codeContent Field Functions 
    bool hasCodeContent() const { return this->codeContent_ != nullptr;};
    void deleteCodeContent() { this->codeContent_ = nullptr;};
    inline string codeContent() const { DARABONBA_PTR_GET_DEFAULT(codeContent_, "") };
    inline GetPhysicalNodeContentResponseBodyData& setCodeContent(string codeContent) { DARABONBA_PTR_SET_VALUE(codeContent_, codeContent) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetPhysicalNodeContentResponseBodyData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetPhysicalNodeContentResponseBodyData& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


  protected:
    std::shared_ptr<string> codeContent_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
