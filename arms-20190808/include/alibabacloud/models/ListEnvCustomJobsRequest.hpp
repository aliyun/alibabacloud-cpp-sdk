// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVCUSTOMJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENVCUSTOMJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvCustomJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvCustomJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptYaml, encryptYaml_);
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvCustomJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptYaml, encryptYaml_);
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListEnvCustomJobsRequest() = default ;
    ListEnvCustomJobsRequest(const ListEnvCustomJobsRequest &) = default ;
    ListEnvCustomJobsRequest(ListEnvCustomJobsRequest &&) = default ;
    ListEnvCustomJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvCustomJobsRequest() = default ;
    ListEnvCustomJobsRequest& operator=(const ListEnvCustomJobsRequest &) = default ;
    ListEnvCustomJobsRequest& operator=(ListEnvCustomJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->encryptYaml_ != nullptr
        && this->environmentId_ != nullptr && this->regionId_ != nullptr; };
    // encryptYaml Field Functions 
    bool hasEncryptYaml() const { return this->encryptYaml_ != nullptr;};
    void deleteEncryptYaml() { this->encryptYaml_ = nullptr;};
    inline bool encryptYaml() const { DARABONBA_PTR_GET_DEFAULT(encryptYaml_, false) };
    inline ListEnvCustomJobsRequest& setEncryptYaml(bool encryptYaml) { DARABONBA_PTR_SET_VALUE(encryptYaml_, encryptYaml) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListEnvCustomJobsRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvCustomJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to return the encrypted YAML string.
    std::shared_ptr<bool> encryptYaml_ = nullptr;
    // The ID of the environment instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
