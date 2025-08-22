// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListIntegrationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_TO_JSON(IntegrationProductType, integrationProductType_);
      DARABONBA_PTR_TO_JSON(IsDetail, isDetail_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IntegrationName, integrationName_);
      DARABONBA_PTR_FROM_JSON(IntegrationProductType, integrationProductType_);
      DARABONBA_PTR_FROM_JSON(IsDetail, isDetail_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListIntegrationRequest() = default ;
    ListIntegrationRequest(const ListIntegrationRequest &) = default ;
    ListIntegrationRequest(ListIntegrationRequest &&) = default ;
    ListIntegrationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationRequest() = default ;
    ListIntegrationRequest& operator=(const ListIntegrationRequest &) = default ;
    ListIntegrationRequest& operator=(ListIntegrationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->integrationName_ != nullptr
        && this->integrationProductType_ != nullptr && this->isDetail_ != nullptr && this->page_ != nullptr && this->size_ != nullptr; };
    // integrationName Field Functions 
    bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
    void deleteIntegrationName() { this->integrationName_ = nullptr;};
    inline string integrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
    inline ListIntegrationRequest& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


    // integrationProductType Field Functions 
    bool hasIntegrationProductType() const { return this->integrationProductType_ != nullptr;};
    void deleteIntegrationProductType() { this->integrationProductType_ = nullptr;};
    inline string integrationProductType() const { DARABONBA_PTR_GET_DEFAULT(integrationProductType_, "") };
    inline ListIntegrationRequest& setIntegrationProductType(string integrationProductType) { DARABONBA_PTR_SET_VALUE(integrationProductType_, integrationProductType) };


    // isDetail Field Functions 
    bool hasIsDetail() const { return this->isDetail_ != nullptr;};
    void deleteIsDetail() { this->isDetail_ = nullptr;};
    inline bool isDetail() const { DARABONBA_PTR_GET_DEFAULT(isDetail_, false) };
    inline ListIntegrationRequest& setIsDetail(bool isDetail) { DARABONBA_PTR_SET_VALUE(isDetail_, isDetail) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListIntegrationRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListIntegrationRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The name of the alert integration.
    std::shared_ptr<string> integrationName_ = nullptr;
    // The type of the alert integration. Valid values:
    // 
    // *   CLOUD_MONITOR: CloudMonitor
    // *   LOG_SERVICE: Log Service
    // 
    // This parameter is required.
    std::shared_ptr<string> integrationProductType_ = nullptr;
    // Specifies whether to display the details of each alert integration:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isDetail_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The number of alert integrations to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
