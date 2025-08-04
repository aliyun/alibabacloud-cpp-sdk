// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDCONFIGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDCONFIGGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UnbindConfigGroupRequestResourceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class UnbindConfigGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindConfigGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceInfos, resourceInfos_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindConfigGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceInfos, resourceInfos_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UnbindConfigGroupRequest() = default ;
    UnbindConfigGroupRequest(const UnbindConfigGroupRequest &) = default ;
    UnbindConfigGroupRequest(UnbindConfigGroupRequest &&) = default ;
    UnbindConfigGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindConfigGroupRequest() = default ;
    UnbindConfigGroupRequest& operator=(const UnbindConfigGroupRequest &) = default ;
    UnbindConfigGroupRequest& operator=(UnbindConfigGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->regionId_ != nullptr
        && this->resourceInfos_ != nullptr && this->type_ != nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UnbindConfigGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceInfos Field Functions 
    bool hasResourceInfos() const { return this->resourceInfos_ != nullptr;};
    void deleteResourceInfos() { this->resourceInfos_ = nullptr;};
    inline const vector<UnbindConfigGroupRequestResourceInfos> & resourceInfos() const { DARABONBA_PTR_GET_CONST(resourceInfos_, vector<UnbindConfigGroupRequestResourceInfos>) };
    inline vector<UnbindConfigGroupRequestResourceInfos> resourceInfos() { DARABONBA_PTR_GET(resourceInfos_, vector<UnbindConfigGroupRequestResourceInfos>) };
    inline UnbindConfigGroupRequest& setResourceInfos(const vector<UnbindConfigGroupRequestResourceInfos> & resourceInfos) { DARABONBA_PTR_SET_VALUE(resourceInfos_, resourceInfos) };
    inline UnbindConfigGroupRequest& setResourceInfos(vector<UnbindConfigGroupRequestResourceInfos> && resourceInfos) { DARABONBA_PTR_SET_RVALUE(resourceInfos_, resourceInfos) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UnbindConfigGroupRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the region. Set the value to `cn-shanghai`.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resources from which you want to unbind the configuration group.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UnbindConfigGroupRequestResourceInfos>> resourceInfos_ = nullptr;
    // The type of the configuration group.
    // 
    // Valid value:
    // 
    // *   Timer: the scheduled task type.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
