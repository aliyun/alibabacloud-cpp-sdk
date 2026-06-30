// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELOPERATORAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELOPERATORAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeModelOperatorApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelOperatorApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeyId, apiKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelOperatorApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeyId, apiKeyId_);
    };
    DescribeModelOperatorApiKeyRequest() = default ;
    DescribeModelOperatorApiKeyRequest(const DescribeModelOperatorApiKeyRequest &) = default ;
    DescribeModelOperatorApiKeyRequest(DescribeModelOperatorApiKeyRequest &&) = default ;
    DescribeModelOperatorApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelOperatorApiKeyRequest() = default ;
    DescribeModelOperatorApiKeyRequest& operator=(const DescribeModelOperatorApiKeyRequest &) = default ;
    DescribeModelOperatorApiKeyRequest& operator=(DescribeModelOperatorApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKeyId_ == nullptr; };
    // apiKeyId Field Functions 
    bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
    void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
    inline int32_t getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, 0) };
    inline DescribeModelOperatorApiKeyRequest& setApiKeyId(int32_t apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


  protected:
    shared_ptr<int32_t> apiKeyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
