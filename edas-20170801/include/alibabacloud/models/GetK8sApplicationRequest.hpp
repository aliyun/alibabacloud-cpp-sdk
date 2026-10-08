// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(From, from_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(From, from_);
    };
    GetK8sApplicationRequest() = default ;
    GetK8sApplicationRequest(const GetK8sApplicationRequest &) = default ;
    GetK8sApplicationRequest(GetK8sApplicationRequest &&) = default ;
    GetK8sApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationRequest() = default ;
    GetK8sApplicationRequest& operator=(const GetK8sApplicationRequest &) = default ;
    GetK8sApplicationRequest& operator=(GetK8sApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->from_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetK8sApplicationRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline GetK8sApplicationRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


  protected:
    // The ID of the application. You can call the [ListApplication](https://help.aliyun.com/document_detail/149390.html) operation to obtain the application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The source of the query.
    // 
    // - If this parameter is empty, a regular query is performed.
    // 
    // - deploy: The query is initiated from the deployment page.
    shared_ptr<string> from_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
