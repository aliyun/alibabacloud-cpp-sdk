// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeModelApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_TO_JSON(ModelApiIds, modelApiIds_);
      DARABONBA_PTR_TO_JSON(ModelCategory, modelCategory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PathPrefix, pathPrefix_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GwClusterId, gwClusterId_);
      DARABONBA_PTR_FROM_JSON(ModelApiIds, modelApiIds_);
      DARABONBA_PTR_FROM_JSON(ModelCategory, modelCategory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PathPrefix, pathPrefix_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeModelApisRequest() = default ;
    DescribeModelApisRequest(const DescribeModelApisRequest &) = default ;
    DescribeModelApisRequest(DescribeModelApisRequest &&) = default ;
    DescribeModelApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelApisRequest() = default ;
    DescribeModelApisRequest& operator=(const DescribeModelApisRequest &) = default ;
    DescribeModelApisRequest& operator=(DescribeModelApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gwClusterId_ == nullptr
        && this->modelApiIds_ == nullptr && this->modelCategory_ == nullptr && this->name_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->pathPrefix_ == nullptr && this->protocol_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
    // gwClusterId Field Functions 
    bool hasGwClusterId() const { return this->gwClusterId_ != nullptr;};
    void deleteGwClusterId() { this->gwClusterId_ = nullptr;};
    inline string getGwClusterId() const { DARABONBA_PTR_GET_DEFAULT(gwClusterId_, "") };
    inline DescribeModelApisRequest& setGwClusterId(string gwClusterId) { DARABONBA_PTR_SET_VALUE(gwClusterId_, gwClusterId) };


    // modelApiIds Field Functions 
    bool hasModelApiIds() const { return this->modelApiIds_ != nullptr;};
    void deleteModelApiIds() { this->modelApiIds_ = nullptr;};
    inline string getModelApiIds() const { DARABONBA_PTR_GET_DEFAULT(modelApiIds_, "") };
    inline DescribeModelApisRequest& setModelApiIds(string modelApiIds) { DARABONBA_PTR_SET_VALUE(modelApiIds_, modelApiIds) };


    // modelCategory Field Functions 
    bool hasModelCategory() const { return this->modelCategory_ != nullptr;};
    void deleteModelCategory() { this->modelCategory_ = nullptr;};
    inline string getModelCategory() const { DARABONBA_PTR_GET_DEFAULT(modelCategory_, "") };
    inline DescribeModelApisRequest& setModelCategory(string modelCategory) { DARABONBA_PTR_SET_VALUE(modelCategory_, modelCategory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeModelApisRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeModelApisRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeModelApisRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pathPrefix Field Functions 
    bool hasPathPrefix() const { return this->pathPrefix_ != nullptr;};
    void deletePathPrefix() { this->pathPrefix_ = nullptr;};
    inline string getPathPrefix() const { DARABONBA_PTR_GET_DEFAULT(pathPrefix_, "") };
    inline DescribeModelApisRequest& setPathPrefix(string pathPrefix) { DARABONBA_PTR_SET_VALUE(pathPrefix_, pathPrefix) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeModelApisRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeModelApisRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeModelApisRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // This parameter is required.
    shared_ptr<string> gwClusterId_ {};
    shared_ptr<string> modelApiIds_ {};
    shared_ptr<string> modelCategory_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> pathPrefix_ {};
    shared_ptr<string> protocol_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
