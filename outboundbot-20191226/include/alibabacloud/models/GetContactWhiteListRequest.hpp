// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONTACTWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCONTACTWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetContactWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetContactWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CountTotalRow, countTotalRow_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetContactWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CountTotalRow, countTotalRow_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GetContactWhiteListRequest() = default ;
    GetContactWhiteListRequest(const GetContactWhiteListRequest &) = default ;
    GetContactWhiteListRequest(GetContactWhiteListRequest &&) = default ;
    GetContactWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetContactWhiteListRequest() = default ;
    GetContactWhiteListRequest& operator=(const GetContactWhiteListRequest &) = default ;
    GetContactWhiteListRequest& operator=(GetContactWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->countTotalRow_ == nullptr
        && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // countTotalRow Field Functions 
    bool hasCountTotalRow() const { return this->countTotalRow_ != nullptr;};
    void deleteCountTotalRow() { this->countTotalRow_ = nullptr;};
    inline bool getCountTotalRow() const { DARABONBA_PTR_GET_DEFAULT(countTotalRow_, false) };
    inline GetContactWhiteListRequest& setCountTotalRow(bool countTotalRow) { DARABONBA_PTR_SET_VALUE(countTotalRow_, countTotalRow) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetContactWhiteListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetContactWhiteListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetContactWhiteListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<bool> countTotalRow_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
