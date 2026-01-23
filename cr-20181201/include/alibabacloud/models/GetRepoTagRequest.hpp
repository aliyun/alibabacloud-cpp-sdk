// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOTAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREPOTAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoTagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoTagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoTagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    GetRepoTagRequest() = default ;
    GetRepoTagRequest(const GetRepoTagRequest &) = default ;
    GetRepoTagRequest(GetRepoTagRequest &&) = default ;
    GetRepoTagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoTagRequest() = default ;
    GetRepoTagRequest& operator=(const GetRepoTagRequest &) = default ;
    GetRepoTagRequest& operator=(GetRepoTagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->repoId_ == nullptr && this->tag_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRepoTagRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline GetRepoTagRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline GetRepoTagRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The return value of status code.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The operation that you want to perform. Set the value to **GetRepoTag**.
    // 
    // This parameter is required.
    shared_ptr<string> repoId_ {};
    // The number of milliseconds that have elapsed since the image was created.
    // 
    // This parameter is required.
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
