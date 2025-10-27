// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPORTEDMODULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPORTEDMODULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSupportedModulesResponseBodySupportedModuleResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSupportedModulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupportedModulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportedModuleResponse, supportedModuleResponse_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupportedModulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportedModuleResponse, supportedModuleResponse_);
    };
    GetSupportedModulesResponseBody() = default ;
    GetSupportedModulesResponseBody(const GetSupportedModulesResponseBody &) = default ;
    GetSupportedModulesResponseBody(GetSupportedModulesResponseBody &&) = default ;
    GetSupportedModulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupportedModulesResponseBody() = default ;
    GetSupportedModulesResponseBody& operator=(const GetSupportedModulesResponseBody &) = default ;
    GetSupportedModulesResponseBody& operator=(GetSupportedModulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->supportedModuleResponse_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupportedModulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportedModuleResponse Field Functions 
    bool hasSupportedModuleResponse() const { return this->supportedModuleResponse_ != nullptr;};
    void deleteSupportedModuleResponse() { this->supportedModuleResponse_ = nullptr;};
    inline const vector<GetSupportedModulesResponseBodySupportedModuleResponse> & supportedModuleResponse() const { DARABONBA_PTR_GET_CONST(supportedModuleResponse_, vector<GetSupportedModulesResponseBodySupportedModuleResponse>) };
    inline vector<GetSupportedModulesResponseBodySupportedModuleResponse> supportedModuleResponse() { DARABONBA_PTR_GET(supportedModuleResponse_, vector<GetSupportedModulesResponseBodySupportedModuleResponse>) };
    inline GetSupportedModulesResponseBody& setSupportedModuleResponse(const vector<GetSupportedModulesResponseBodySupportedModuleResponse> & supportedModuleResponse) { DARABONBA_PTR_SET_VALUE(supportedModuleResponse_, supportedModuleResponse) };
    inline GetSupportedModulesResponseBody& setSupportedModuleResponse(vector<GetSupportedModulesResponseBodySupportedModuleResponse> && supportedModuleResponse) { DARABONBA_PTR_SET_RVALUE(supportedModuleResponse_, supportedModuleResponse) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The supported modules. The module information is classified by cloud service provider.
    std::shared_ptr<vector<GetSupportedModulesResponseBodySupportedModuleResponse>> supportedModuleResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
