// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATESHRINKNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATESHRINKNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ValidateShrinkNodesRequestBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ValidateShrinkNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateShrinkNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(ignoreStatus, ignoreStatus_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateShrinkNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(ignoreStatus, ignoreStatus_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
    };
    ValidateShrinkNodesRequest() = default ;
    ValidateShrinkNodesRequest(const ValidateShrinkNodesRequest &) = default ;
    ValidateShrinkNodesRequest(ValidateShrinkNodesRequest &&) = default ;
    ValidateShrinkNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateShrinkNodesRequest() = default ;
    ValidateShrinkNodesRequest& operator=(const ValidateShrinkNodesRequest &) = default ;
    ValidateShrinkNodesRequest& operator=(ValidateShrinkNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->count_ != nullptr && this->ignoreStatus_ != nullptr && this->nodeType_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<ValidateShrinkNodesRequestBody> & body() const { DARABONBA_PTR_GET_CONST(body_, vector<ValidateShrinkNodesRequestBody>) };
    inline vector<ValidateShrinkNodesRequestBody> body() { DARABONBA_PTR_GET(body_, vector<ValidateShrinkNodesRequestBody>) };
    inline ValidateShrinkNodesRequest& setBody(const vector<ValidateShrinkNodesRequestBody> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ValidateShrinkNodesRequest& setBody(vector<ValidateShrinkNodesRequestBody> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ValidateShrinkNodesRequest& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ignoreStatus Field Functions 
    bool hasIgnoreStatus() const { return this->ignoreStatus_ != nullptr;};
    void deleteIgnoreStatus() { this->ignoreStatus_ = nullptr;};
    inline bool ignoreStatus() const { DARABONBA_PTR_GET_DEFAULT(ignoreStatus_, false) };
    inline ValidateShrinkNodesRequest& setIgnoreStatus(bool ignoreStatus) { DARABONBA_PTR_SET_VALUE(ignoreStatus_, ignoreStatus) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ValidateShrinkNodesRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    std::shared_ptr<vector<ValidateShrinkNodesRequestBody>> body_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the request.
    std::shared_ptr<bool> ignoreStatus_ = nullptr;
    // Returned results:
    // 
    // *   true: can be scaled in
    // *   false: cannot be scaled in.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
