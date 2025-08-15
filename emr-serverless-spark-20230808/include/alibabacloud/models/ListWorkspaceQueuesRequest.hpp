// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEQUEUESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEQUEUESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListWorkspaceQueuesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceQueuesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(environment, environment_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceQueuesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(environment, environment_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ListWorkspaceQueuesRequest() = default ;
    ListWorkspaceQueuesRequest(const ListWorkspaceQueuesRequest &) = default ;
    ListWorkspaceQueuesRequest(ListWorkspaceQueuesRequest &&) = default ;
    ListWorkspaceQueuesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceQueuesRequest() = default ;
    ListWorkspaceQueuesRequest& operator=(const ListWorkspaceQueuesRequest &) = default ;
    ListWorkspaceQueuesRequest& operator=(ListWorkspaceQueuesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environment_ != nullptr
        && this->regionId_ != nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline ListWorkspaceQueuesRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListWorkspaceQueuesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The environment type.
    // 
    // Valid values:
    // 
    // *   dev
    // *   production
    std::shared_ptr<string> environment_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
