// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIPLUGINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIPLUGINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListApiPluginsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiPluginsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UuidsJson, uuidsJson_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiPluginsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UuidsJson, uuidsJson_);
    };
    ListApiPluginsRequest() = default ;
    ListApiPluginsRequest(const ListApiPluginsRequest &) = default ;
    ListApiPluginsRequest(ListApiPluginsRequest &&) = default ;
    ListApiPluginsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiPluginsRequest() = default ;
    ListApiPluginsRequest& operator=(const ListApiPluginsRequest &) = default ;
    ListApiPluginsRequest& operator=(ListApiPluginsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->uuidsJson_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListApiPluginsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListApiPluginsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApiPluginsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // uuidsJson Field Functions 
    bool hasUuidsJson() const { return this->uuidsJson_ != nullptr;};
    void deleteUuidsJson() { this->uuidsJson_ = nullptr;};
    inline string getUuidsJson() const { DARABONBA_PTR_GET_DEFAULT(uuidsJson_, "") };
    inline ListApiPluginsRequest& setUuidsJson(string uuidsJson) { DARABONBA_PTR_SET_VALUE(uuidsJson_, uuidsJson) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> uuidsJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
