// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTLOGSTORESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTLOGSTORESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListProjectLogStoresResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectLogStoresResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(MainUserId, mainUserId_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_TO_JSON(SubUserName, subUserName_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectLogStoresResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(MainUserId, mainUserId_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      DARABONBA_PTR_FROM_JSON(SubUserName, subUserName_);
    };
    ListProjectLogStoresResponseBodyData() = default ;
    ListProjectLogStoresResponseBodyData(const ListProjectLogStoresResponseBodyData &) = default ;
    ListProjectLogStoresResponseBodyData(ListProjectLogStoresResponseBodyData &&) = default ;
    ListProjectLogStoresResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectLogStoresResponseBodyData() = default ;
    ListProjectLogStoresResponseBodyData& operator=(const ListProjectLogStoresResponseBodyData &) = default ;
    ListProjectLogStoresResponseBodyData& operator=(ListProjectLogStoresResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endPoint_ != nullptr
        && this->localName_ != nullptr && this->logStore_ != nullptr && this->mainUserId_ != nullptr && this->project_ != nullptr && this->regionId_ != nullptr
        && this->subUserId_ != nullptr && this->subUserName_ != nullptr; };
    // endPoint Field Functions 
    bool hasEndPoint() const { return this->endPoint_ != nullptr;};
    void deleteEndPoint() { this->endPoint_ = nullptr;};
    inline string endPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
    inline ListProjectLogStoresResponseBodyData& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline ListProjectLogStoresResponseBodyData& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline ListProjectLogStoresResponseBodyData& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // mainUserId Field Functions 
    bool hasMainUserId() const { return this->mainUserId_ != nullptr;};
    void deleteMainUserId() { this->mainUserId_ = nullptr;};
    inline int64_t mainUserId() const { DARABONBA_PTR_GET_DEFAULT(mainUserId_, 0L) };
    inline ListProjectLogStoresResponseBodyData& setMainUserId(int64_t mainUserId) { DARABONBA_PTR_SET_VALUE(mainUserId_, mainUserId) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListProjectLogStoresResponseBodyData& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListProjectLogStoresResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subUserId Field Functions 
    bool hasSubUserId() const { return this->subUserId_ != nullptr;};
    void deleteSubUserId() { this->subUserId_ = nullptr;};
    inline int64_t subUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
    inline ListProjectLogStoresResponseBodyData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    // subUserName Field Functions 
    bool hasSubUserName() const { return this->subUserName_ != nullptr;};
    void deleteSubUserName() { this->subUserName_ = nullptr;};
    inline string subUserName() const { DARABONBA_PTR_GET_DEFAULT(subUserName_, "") };
    inline ListProjectLogStoresResponseBodyData& setSubUserName(string subUserName) { DARABONBA_PTR_SET_VALUE(subUserName_, subUserName) };


  protected:
    // The endpoint of the Simple Log Service project.
    std::shared_ptr<string> endPoint_ = nullptr;
    // The name of the region in which the Simple Log Service project resides.
    std::shared_ptr<string> localName_ = nullptr;
    // The name of the Simple Log Service Logstore.
    std::shared_ptr<string> logStore_ = nullptr;
    // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
    std::shared_ptr<int64_t> mainUserId_ = nullptr;
    // The name of the Simple Log Service project.
    std::shared_ptr<string> project_ = nullptr;
    // The ID of the region in which the Simple Log Service project resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the Alibaba Cloud account that can be used to perform operations supported by the threat analysis feature.
    std::shared_ptr<int64_t> subUserId_ = nullptr;
    // The username of the Alibaba Cloud account that can be used to perform operations supported by the threat analysis feature.
    std::shared_ptr<string> subUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
