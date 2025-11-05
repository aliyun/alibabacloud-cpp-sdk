// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAYDOMAINFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGRAYDOMAINFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class GetGrayDomainFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGrayDomainFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FunctionNames, functionNames_);
    };
    friend void from_json(const Darabonba::Json& j, GetGrayDomainFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FunctionNames, functionNames_);
    };
    GetGrayDomainFunctionRequest() = default ;
    GetGrayDomainFunctionRequest(const GetGrayDomainFunctionRequest &) = default ;
    GetGrayDomainFunctionRequest(GetGrayDomainFunctionRequest &&) = default ;
    GetGrayDomainFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGrayDomainFunctionRequest() = default ;
    GetGrayDomainFunctionRequest& operator=(const GetGrayDomainFunctionRequest &) = default ;
    GetGrayDomainFunctionRequest& operator=(GetGrayDomainFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->functionNames_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetGrayDomainFunctionRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // functionNames Field Functions 
    bool hasFunctionNames() const { return this->functionNames_ != nullptr;};
    void deleteFunctionNames() { this->functionNames_ = nullptr;};
    inline string functionNames() const { DARABONBA_PTR_GET_DEFAULT(functionNames_, "") };
    inline GetGrayDomainFunctionRequest& setFunctionNames(string functionNames) { DARABONBA_PTR_SET_VALUE(functionNames_, functionNames) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> functionNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
