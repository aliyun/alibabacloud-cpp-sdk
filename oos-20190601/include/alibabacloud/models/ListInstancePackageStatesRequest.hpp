// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEPACKAGESTATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEPACKAGESTATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListInstancePackageStatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancePackageStatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateNames, templateNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancePackageStatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateNames, templateNames_);
    };
    ListInstancePackageStatesRequest() = default ;
    ListInstancePackageStatesRequest(const ListInstancePackageStatesRequest &) = default ;
    ListInstancePackageStatesRequest(ListInstancePackageStatesRequest &&) = default ;
    ListInstancePackageStatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancePackageStatesRequest() = default ;
    ListInstancePackageStatesRequest& operator=(const ListInstancePackageStatesRequest &) = default ;
    ListInstancePackageStatesRequest& operator=(ListInstancePackageStatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->templateNames_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancePackageStatesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInstancePackageStatesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstancePackageStatesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstancePackageStatesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateNames Field Functions 
    bool hasTemplateNames() const { return this->templateNames_ != nullptr;};
    void deleteTemplateNames() { this->templateNames_ = nullptr;};
    inline string templateNames() const { DARABONBA_PTR_GET_DEFAULT(templateNames_, "") };
    inline ListInstancePackageStatesRequest& setTemplateNames(string templateNames) { DARABONBA_PTR_SET_VALUE(templateNames_, templateNames) };


  protected:
    // ECS instance ID
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Page size.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // List of extension names
    std::shared_ptr<string> templateNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
