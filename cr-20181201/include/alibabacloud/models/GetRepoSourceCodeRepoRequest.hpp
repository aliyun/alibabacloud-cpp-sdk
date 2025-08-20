// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOSOURCECODEREPOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPOSOURCECODEREPOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoSourceCodeRepoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoSourceCodeRepoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoSourceCodeRepoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    GetRepoSourceCodeRepoRequest() = default ;
    GetRepoSourceCodeRepoRequest(const GetRepoSourceCodeRepoRequest &) = default ;
    GetRepoSourceCodeRepoRequest(GetRepoSourceCodeRepoRequest &&) = default ;
    GetRepoSourceCodeRepoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoSourceCodeRepoRequest() = default ;
    GetRepoSourceCodeRepoRequest& operator=(const GetRepoSourceCodeRepoRequest &) = default ;
    GetRepoSourceCodeRepoRequest& operator=(GetRepoSourceCodeRepoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->repoId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRepoSourceCodeRepoRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline GetRepoSourceCodeRepoRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // The ID of the Container Registry instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
