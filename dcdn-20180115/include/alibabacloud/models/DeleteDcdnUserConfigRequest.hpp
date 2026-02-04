// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDCDNUSERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDCDNUSERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DeleteDcdnUserConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDcdnUserConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDcdnUserConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
    };
    DeleteDcdnUserConfigRequest() = default ;
    DeleteDcdnUserConfigRequest(const DeleteDcdnUserConfigRequest &) = default ;
    DeleteDcdnUserConfigRequest(DeleteDcdnUserConfigRequest &&) = default ;
    DeleteDcdnUserConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDcdnUserConfigRequest() = default ;
    DeleteDcdnUserConfigRequest& operator=(const DeleteDcdnUserConfigRequest &) = default ;
    DeleteDcdnUserConfigRequest& operator=(DeleteDcdnUserConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->functionName_ == nullptr; };
    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline DeleteDcdnUserConfigRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


  protected:
    // The name of the user feature that you want to delete. Currently, only DCDN Web Application Firewall (WAF) can be deleted. Default value: waf.
    shared_ptr<string> functionName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
