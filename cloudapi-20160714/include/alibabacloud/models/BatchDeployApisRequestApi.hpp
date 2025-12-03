// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDEPLOYAPISREQUESTAPI_HPP_
#define ALIBABACLOUD_MODELS_BATCHDEPLOYAPISREQUESTAPI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class BatchDeployApisRequestApi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeployApisRequestApi& obj) { 
      DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeployApisRequestApi& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
    };
    BatchDeployApisRequestApi() = default ;
    BatchDeployApisRequestApi(const BatchDeployApisRequestApi &) = default ;
    BatchDeployApisRequestApi(BatchDeployApisRequestApi &&) = default ;
    BatchDeployApisRequestApi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeployApisRequestApi() = default ;
    BatchDeployApisRequestApi& operator=(const BatchDeployApisRequestApi &) = default ;
    BatchDeployApisRequestApi& operator=(BatchDeployApisRequestApi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiUid_ == nullptr
        && return this->groupId_ == nullptr; };
    // apiUid Field Functions 
    bool hasApiUid() const { return this->apiUid_ != nullptr;};
    void deleteApiUid() { this->apiUid_ = nullptr;};
    inline string apiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
    inline BatchDeployApisRequestApi& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline BatchDeployApisRequestApi& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


  protected:
    // The API ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiUid_ = nullptr;
    // The API group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
