// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTLESSTASKCOUNTBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTLESSTASKCOUNTBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAgentlessTaskCountBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentlessTaskCountBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(UuidList, uuidList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentlessTaskCountBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(UuidList, uuidList_);
    };
    GetAgentlessTaskCountBatchRequest() = default ;
    GetAgentlessTaskCountBatchRequest(const GetAgentlessTaskCountBatchRequest &) = default ;
    GetAgentlessTaskCountBatchRequest(GetAgentlessTaskCountBatchRequest &&) = default ;
    GetAgentlessTaskCountBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentlessTaskCountBatchRequest() = default ;
    GetAgentlessTaskCountBatchRequest& operator=(const GetAgentlessTaskCountBatchRequest &) = default ;
    GetAgentlessTaskCountBatchRequest& operator=(GetAgentlessTaskCountBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetType_ == nullptr
        && this->uuidList_ == nullptr; };
    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline GetAgentlessTaskCountBatchRequest& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // uuidList Field Functions 
    bool hasUuidList() const { return this->uuidList_ != nullptr;};
    void deleteUuidList() { this->uuidList_ = nullptr;};
    inline const vector<string> & getUuidList() const { DARABONBA_PTR_GET_CONST(uuidList_, vector<string>) };
    inline vector<string> getUuidList() { DARABONBA_PTR_GET(uuidList_, vector<string>) };
    inline GetAgentlessTaskCountBatchRequest& setUuidList(const vector<string> & uuidList) { DARABONBA_PTR_SET_VALUE(uuidList_, uuidList) };
    inline GetAgentlessTaskCountBatchRequest& setUuidList(vector<string> && uuidList) { DARABONBA_PTR_SET_RVALUE(uuidList_, uuidList) };


  protected:
    // The detection object type. Valid values:
    // 
    // - **1**: host snapshot
    // - **2**: host image
    // - **3**: user snapshot
    // - **4**: user image
    // - **5**: NAS file system
    // - **6**: parallel sandbox
    // - **7**: security fix
    shared_ptr<int32_t> targetType_ {};
    // The list of resource UUIDs to query. The list can contain 1 to 100 elements.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> uuidList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
