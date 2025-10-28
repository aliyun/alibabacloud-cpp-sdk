// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEADLOCKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEADLOCKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDeadLockDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeadLockDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TextId, textId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeadLockDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TextId, textId_);
    };
    GetDeadLockDetailRequest() = default ;
    GetDeadLockDetailRequest(const GetDeadLockDetailRequest &) = default ;
    GetDeadLockDetailRequest(GetDeadLockDetailRequest &&) = default ;
    GetDeadLockDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeadLockDetailRequest() = default ;
    GetDeadLockDetailRequest& operator=(const GetDeadLockDetailRequest &) = default ;
    GetDeadLockDetailRequest& operator=(GetDeadLockDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->nodeId_ == nullptr && return this->source_ == nullptr && return this->textId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDeadLockDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetDeadLockDetailRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetDeadLockDetailRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // textId Field Functions 
    bool hasTextId() const { return this->textId_ != nullptr;};
    void deleteTextId() { this->textId_ = nullptr;};
    inline string textId() const { DARABONBA_PTR_GET_DEFAULT(textId_, "") };
    inline GetDeadLockDetailRequest& setTextId(string textId) { DARABONBA_PTR_SET_VALUE(textId_, textId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> textId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
