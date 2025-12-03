// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHABOLISHAPISREQUESTAPI_HPP_
#define ALIBABACLOUD_MODELS_BATCHABOLISHAPISREQUESTAPI_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class BatchAbolishApisRequestApi : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchAbolishApisRequestApi& obj) { 
      DARABONBA_PTR_TO_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(StageId, stageId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchAbolishApisRequestApi& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiUid, apiUid_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(StageId, stageId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    BatchAbolishApisRequestApi() = default ;
    BatchAbolishApisRequestApi(const BatchAbolishApisRequestApi &) = default ;
    BatchAbolishApisRequestApi(BatchAbolishApisRequestApi &&) = default ;
    BatchAbolishApisRequestApi(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchAbolishApisRequestApi() = default ;
    BatchAbolishApisRequestApi& operator=(const BatchAbolishApisRequestApi &) = default ;
    BatchAbolishApisRequestApi& operator=(BatchAbolishApisRequestApi &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiUid_ == nullptr
        && return this->groupId_ == nullptr && return this->stageId_ == nullptr && return this->stageName_ == nullptr; };
    // apiUid Field Functions 
    bool hasApiUid() const { return this->apiUid_ != nullptr;};
    void deleteApiUid() { this->apiUid_ = nullptr;};
    inline string apiUid() const { DARABONBA_PTR_GET_DEFAULT(apiUid_, "") };
    inline BatchAbolishApisRequestApi& setApiUid(string apiUid) { DARABONBA_PTR_SET_VALUE(apiUid_, apiUid) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline BatchAbolishApisRequestApi& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // stageId Field Functions 
    bool hasStageId() const { return this->stageId_ != nullptr;};
    void deleteStageId() { this->stageId_ = nullptr;};
    inline string stageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, "") };
    inline BatchAbolishApisRequestApi& setStageId(string stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline BatchAbolishApisRequestApi& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The ID of the API.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiUid_ = nullptr;
    // The ID of the API group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the environment.
    std::shared_ptr<string> stageId_ = nullptr;
    // The name of the environment.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
