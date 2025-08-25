// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMSMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSMSMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListSmsMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmsMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScenarioListJson, scenarioListJson_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmsMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScenarioListJson, scenarioListJson_);
    };
    ListSmsMetadataRequest() = default ;
    ListSmsMetadataRequest(const ListSmsMetadataRequest &) = default ;
    ListSmsMetadataRequest(ListSmsMetadataRequest &&) = default ;
    ListSmsMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmsMetadataRequest() = default ;
    ListSmsMetadataRequest& operator=(const ListSmsMetadataRequest &) = default ;
    ListSmsMetadataRequest& operator=(ListSmsMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->scenarioListJson_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListSmsMetadataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSmsMetadataRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSmsMetadataRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scenarioListJson Field Functions 
    bool hasScenarioListJson() const { return this->scenarioListJson_ != nullptr;};
    void deleteScenarioListJson() { this->scenarioListJson_ = nullptr;};
    inline string scenarioListJson() const { DARABONBA_PTR_GET_DEFAULT(scenarioListJson_, "") };
    inline ListSmsMetadataRequest& setScenarioListJson(string scenarioListJson) { DARABONBA_PTR_SET_VALUE(scenarioListJson_, scenarioListJson) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> scenarioListJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
