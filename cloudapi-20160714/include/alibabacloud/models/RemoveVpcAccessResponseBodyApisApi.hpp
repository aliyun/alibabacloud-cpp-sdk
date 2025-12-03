// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEVPCACCESSRESPONSEBODYAPISAPI_HPP_
#define ALIBABACLOUD_MODELS_REMOVEVPCACCESSRESPONSEBODYAPISAPI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class RemoveVpcAccessResponseBodyApisApi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveVpcAccessResponseBodyApisApi& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveVpcAccessResponseBodyApisApi& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
    };
    RemoveVpcAccessResponseBodyApisApi() = default ;
    RemoveVpcAccessResponseBodyApisApi(const RemoveVpcAccessResponseBodyApisApi &) = default ;
    RemoveVpcAccessResponseBodyApisApi(RemoveVpcAccessResponseBodyApisApi &&) = default ;
    RemoveVpcAccessResponseBodyApisApi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveVpcAccessResponseBodyApisApi() = default ;
    RemoveVpcAccessResponseBodyApisApi& operator=(const RemoveVpcAccessResponseBodyApisApi &) = default ;
    RemoveVpcAccessResponseBodyApisApi& operator=(RemoveVpcAccessResponseBodyApisApi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->groupId_ == nullptr && return this->stageId_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline RemoveVpcAccessResponseBodyApisApi& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RemoveVpcAccessResponseBodyApisApi& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline RemoveVpcAccessResponseBodyApisApi& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


  protected:
    // API Id
    std::shared_ptr<string> apiId_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the runtime environment.
    std::shared_ptr<string> stageId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
