// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYSYNCGROUPSCONFIGSYNCGROUPRESOURCEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYSYNCGROUPSCONFIGSYNCGROUPRESOURCEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds() = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds(const DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds &) = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds(DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds &&) = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds() = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds& operator=(const DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds &) = default ;
    DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds& operator=(DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline const vector<string> & resourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
    inline vector<string> resourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
    inline DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
    inline DescribeCasterConfigResponseBodySyncGroupsConfigSyncGroupResourceIds& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


  protected:
    std::shared_ptr<vector<string>> resourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
