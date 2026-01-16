// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCINVOKECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCINVOKECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class GetAsyncInvokeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncInvokeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncInvokeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    GetAsyncInvokeConfigRequest() = default ;
    GetAsyncInvokeConfigRequest(const GetAsyncInvokeConfigRequest &) = default ;
    GetAsyncInvokeConfigRequest(GetAsyncInvokeConfigRequest &&) = default ;
    GetAsyncInvokeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncInvokeConfigRequest() = default ;
    GetAsyncInvokeConfigRequest& operator=(const GetAsyncInvokeConfigRequest &) = default ;
    GetAsyncInvokeConfigRequest& operator=(GetAsyncInvokeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->qualifier_ == nullptr; };
    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string getQualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline GetAsyncInvokeConfigRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // The version or alias of the function.
    shared_ptr<string> qualifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
