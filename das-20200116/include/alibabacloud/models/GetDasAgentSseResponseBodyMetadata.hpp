// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASAGENTSSERESPONSEBODYMETADATA_HPP_
#define ALIBABACLOUD_MODELS_GETDASAGENTSSERESPONSEBODYMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDasAgentSSEResponseBodyMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDasAgentSSEResponseBodyMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(CharCount, charCount_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ToolName, toolName_);
      DARABONBA_PTR_TO_JSON(ToolParams, toolParams_);
    };
    friend void from_json(const Darabonba::Json& j, GetDasAgentSSEResponseBodyMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(CharCount, charCount_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
      DARABONBA_PTR_FROM_JSON(ToolParams, toolParams_);
    };
    GetDasAgentSSEResponseBodyMetadata() = default ;
    GetDasAgentSSEResponseBodyMetadata(const GetDasAgentSSEResponseBodyMetadata &) = default ;
    GetDasAgentSSEResponseBodyMetadata(GetDasAgentSSEResponseBodyMetadata &&) = default ;
    GetDasAgentSSEResponseBodyMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDasAgentSSEResponseBodyMetadata() = default ;
    GetDasAgentSSEResponseBodyMetadata& operator=(const GetDasAgentSSEResponseBodyMetadata &) = default ;
    GetDasAgentSSEResponseBodyMetadata& operator=(GetDasAgentSSEResponseBodyMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->charCount_ == nullptr
        && return this->code_ == nullptr && return this->requestId_ == nullptr && return this->toolName_ == nullptr && return this->toolParams_ == nullptr; };
    // charCount Field Functions 
    bool hasCharCount() const { return this->charCount_ != nullptr;};
    void deleteCharCount() { this->charCount_ = nullptr;};
    inline int64_t charCount() const { DARABONBA_PTR_GET_DEFAULT(charCount_, 0L) };
    inline GetDasAgentSSEResponseBodyMetadata& setCharCount(int64_t charCount) { DARABONBA_PTR_SET_VALUE(charCount_, charCount) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetDasAgentSSEResponseBodyMetadata& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDasAgentSSEResponseBodyMetadata& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string toolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline GetDasAgentSSEResponseBodyMetadata& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // toolParams Field Functions 
    bool hasToolParams() const { return this->toolParams_ != nullptr;};
    void deleteToolParams() { this->toolParams_ = nullptr;};
    inline const vector<string> & toolParams() const { DARABONBA_PTR_GET_CONST(toolParams_, vector<string>) };
    inline vector<string> toolParams() { DARABONBA_PTR_GET(toolParams_, vector<string>) };
    inline GetDasAgentSSEResponseBodyMetadata& setToolParams(const vector<string> & toolParams) { DARABONBA_PTR_SET_VALUE(toolParams_, toolParams) };
    inline GetDasAgentSSEResponseBodyMetadata& setToolParams(vector<string> && toolParams) { DARABONBA_PTR_SET_RVALUE(toolParams_, toolParams) };


  protected:
    std::shared_ptr<int64_t> charCount_ = nullptr;
    std::shared_ptr<int32_t> code_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> toolName_ = nullptr;
    std::shared_ptr<vector<string>> toolParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
