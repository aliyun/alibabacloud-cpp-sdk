// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListAsyncTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataId, dataId_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataId, dataId_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
    };
    ListAsyncTasksRequest() = default ;
    ListAsyncTasksRequest(const ListAsyncTasksRequest &) = default ;
    ListAsyncTasksRequest(ListAsyncTasksRequest &&) = default ;
    ListAsyncTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTasksRequest() = default ;
    ListAsyncTasksRequest& operator=(const ListAsyncTasksRequest &) = default ;
    ListAsyncTasksRequest& operator=(ListAsyncTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr
        && this->dryRun_ == nullptr && this->serviceType_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline int32_t getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, 0) };
    inline ListAsyncTasksRequest& setDataId(int32_t dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ListAsyncTasksRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListAsyncTasksRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    // The trial data ID.
    shared_ptr<int32_t> dataId_ {};
    // Specifies whether to validate the request parameters without performing the actual operation. Default value: false.
    // 
    // Valid values:
    // 
    // - **true**
    // 
    // - **false**.
    shared_ptr<bool> dryRun_ {};
    // The service type.
    // 
    // - document-analyze.
    shared_ptr<string> serviceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
