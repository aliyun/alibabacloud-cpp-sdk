// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGENODETYPESRESPONSEBODYNODERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CHANGENODETYPESRESPONSEBODYNODERESPONSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ChangeNodeTypesResponseBodyNodeResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeNodeTypesResponseBodyNodeResponse& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeNodeTypesResponseBodyNodeResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ChangeNodeTypesResponseBodyNodeResponse() = default ;
    ChangeNodeTypesResponseBodyNodeResponse(const ChangeNodeTypesResponseBodyNodeResponse &) = default ;
    ChangeNodeTypesResponseBodyNodeResponse(ChangeNodeTypesResponseBodyNodeResponse &&) = default ;
    ChangeNodeTypesResponseBodyNodeResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeNodeTypesResponseBodyNodeResponse() = default ;
    ChangeNodeTypesResponseBodyNodeResponse& operator=(const ChangeNodeTypesResponseBodyNodeResponse &) = default ;
    ChangeNodeTypesResponseBodyNodeResponse& operator=(ChangeNodeTypesResponseBodyNodeResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->nodeId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ChangeNodeTypesResponseBodyNodeResponse& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChangeNodeTypesResponseBodyNodeResponse& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ChangeNodeTypesResponseBodyNodeResponse& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
