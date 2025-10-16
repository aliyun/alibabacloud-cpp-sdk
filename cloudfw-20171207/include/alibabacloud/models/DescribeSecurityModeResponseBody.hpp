// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYMODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYMODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSecurityModeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityModeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityMode, securityMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityModeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityMode, securityMode_);
    };
    DescribeSecurityModeResponseBody() = default ;
    DescribeSecurityModeResponseBody(const DescribeSecurityModeResponseBody &) = default ;
    DescribeSecurityModeResponseBody(DescribeSecurityModeResponseBody &&) = default ;
    DescribeSecurityModeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityModeResponseBody() = default ;
    DescribeSecurityModeResponseBody& operator=(const DescribeSecurityModeResponseBody &) = default ;
    DescribeSecurityModeResponseBody& operator=(DescribeSecurityModeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->module_ == nullptr
        && return this->requestId_ == nullptr && return this->securityMode_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline DescribeSecurityModeResponseBody& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityModeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityMode Field Functions 
    bool hasSecurityMode() const { return this->securityMode_ != nullptr;};
    void deleteSecurityMode() { this->securityMode_ = nullptr;};
    inline int32_t securityMode() const { DARABONBA_PTR_GET_DEFAULT(securityMode_, 0) };
    inline DescribeSecurityModeResponseBody& setSecurityMode(int32_t securityMode) { DARABONBA_PTR_SET_VALUE(securityMode_, securityMode) };


  protected:
    std::shared_ptr<string> module_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> securityMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
