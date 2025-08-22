// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERETCODEAPPRESPONSEBODYRETCODEAPPDATABEAN_HPP_
#define ALIBABACLOUD_MODELS_CREATERETCODEAPPRESPONSEBODYRETCODEAPPDATABEAN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateRetcodeAppResponseBodyRetcodeAppDataBean : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRetcodeAppResponseBodyRetcodeAppDataBean& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRetcodeAppResponseBodyRetcodeAppDataBean& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateRetcodeAppResponseBodyRetcodeAppDataBean() = default ;
    CreateRetcodeAppResponseBodyRetcodeAppDataBean(const CreateRetcodeAppResponseBodyRetcodeAppDataBean &) = default ;
    CreateRetcodeAppResponseBodyRetcodeAppDataBean(CreateRetcodeAppResponseBodyRetcodeAppDataBean &&) = default ;
    CreateRetcodeAppResponseBodyRetcodeAppDataBean(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRetcodeAppResponseBodyRetcodeAppDataBean() = default ;
    CreateRetcodeAppResponseBodyRetcodeAppDataBean& operator=(const CreateRetcodeAppResponseBodyRetcodeAppDataBean &) = default ;
    CreateRetcodeAppResponseBodyRetcodeAppDataBean& operator=(CreateRetcodeAppResponseBodyRetcodeAppDataBean &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->pid_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline CreateRetcodeAppResponseBodyRetcodeAppDataBean& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline CreateRetcodeAppResponseBodyRetcodeAppDataBean& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateRetcodeAppResponseBodyRetcodeAppDataBean& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags) };
    inline Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags tags() { DARABONBA_PTR_GET(tags_, Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags) };
    inline CreateRetcodeAppResponseBodyRetcodeAppDataBean& setTags(const Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateRetcodeAppResponseBodyRetcodeAppDataBean& setTags(Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The application ID.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The process identifier (PID) of the application.
    std::shared_ptr<string> pid_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the task.
    std::shared_ptr<Models::CreateRetcodeAppResponseBodyRetcodeAppDataBeanTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
