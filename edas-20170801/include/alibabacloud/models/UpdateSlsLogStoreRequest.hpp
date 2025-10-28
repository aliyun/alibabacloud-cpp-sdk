// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESLSLOGSTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESLSLOGSTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateSlsLogStoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSlsLogStoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Configs, configs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSlsLogStoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
    };
    UpdateSlsLogStoreRequest() = default ;
    UpdateSlsLogStoreRequest(const UpdateSlsLogStoreRequest &) = default ;
    UpdateSlsLogStoreRequest(UpdateSlsLogStoreRequest &&) = default ;
    UpdateSlsLogStoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSlsLogStoreRequest() = default ;
    UpdateSlsLogStoreRequest& operator=(const UpdateSlsLogStoreRequest &) = default ;
    UpdateSlsLogStoreRequest& operator=(UpdateSlsLogStoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->configs_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateSlsLogStoreRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline string configs() const { DARABONBA_PTR_GET_DEFAULT(configs_, "") };
    inline UpdateSlsLogStoreRequest& setConfigs(string configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };


  protected:
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The configurations of the Logstore.
    // 
    // *   The following parameters are included in the configurations:****
    // 
    //     *   **type**: the collection type. Set this parameter to file to specify the file type. Set this parameter to stdout to specify the standard output type.
    // 
    //     *   **logstore**: the name of the Logstore. Make sure that the name of the Logstore is unique in the cluster. The name must comply with the following rules:
    // 
    //         *   The name can contain only lowercase letters, digits, hyphens (-), and underscores (_).
    //         *   The name must start and end with a lowercase letter or a digit.
    //         *   The name must be 3 to 63 characters in length.
    // 
    //         **
    // 
    //         **Note**If you leave this parameter empty, the system automatically generates a name.
    // 
    //     *   **LogDir**: If the standard output type is used, the collection path is stdout.log. If the file type is used, the collection path is the path of the collected file. Wildcards (\\*) are supported. The collection path must match the following regular expression: `^/(.+)/(.*)^/$`.
    // 
    // This parameter is required.
    std::shared_ptr<string> configs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
