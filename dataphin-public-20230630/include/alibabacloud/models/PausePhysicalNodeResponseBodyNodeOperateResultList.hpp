// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAUSEPHYSICALNODERESPONSEBODYNODEOPERATERESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_PAUSEPHYSICALNODERESPONSEBODYNODEOPERATERESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PausePhysicalNodeResponseBodyNodeOperateResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PausePhysicalNodeResponseBodyNodeOperateResultList& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, PausePhysicalNodeResponseBodyNodeOperateResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    PausePhysicalNodeResponseBodyNodeOperateResultList() = default ;
    PausePhysicalNodeResponseBodyNodeOperateResultList(const PausePhysicalNodeResponseBodyNodeOperateResultList &) = default ;
    PausePhysicalNodeResponseBodyNodeOperateResultList(PausePhysicalNodeResponseBodyNodeOperateResultList &&) = default ;
    PausePhysicalNodeResponseBodyNodeOperateResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PausePhysicalNodeResponseBodyNodeOperateResultList() = default ;
    PausePhysicalNodeResponseBodyNodeOperateResultList& operator=(const PausePhysicalNodeResponseBodyNodeOperateResultList &) = default ;
    PausePhysicalNodeResponseBodyNodeOperateResultList& operator=(PausePhysicalNodeResponseBodyNodeOperateResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->nodeId_ == nullptr && return this->status_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline PausePhysicalNodeResponseBodyNodeOperateResultList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline PausePhysicalNodeResponseBodyNodeOperateResultList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PausePhysicalNodeResponseBodyNodeOperateResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
