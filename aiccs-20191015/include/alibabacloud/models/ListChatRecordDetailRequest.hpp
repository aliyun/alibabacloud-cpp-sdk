// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATRECORDDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATRECORDDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListChatRecordDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatRecordDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloseTimeEnd, closeTimeEnd_);
      DARABONBA_PTR_TO_JSON(CloseTimeStart, closeTimeStart_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatRecordDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloseTimeEnd, closeTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CloseTimeStart, closeTimeStart_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListChatRecordDetailRequest() = default ;
    ListChatRecordDetailRequest(const ListChatRecordDetailRequest &) = default ;
    ListChatRecordDetailRequest(ListChatRecordDetailRequest &&) = default ;
    ListChatRecordDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatRecordDetailRequest() = default ;
    ListChatRecordDetailRequest& operator=(const ListChatRecordDetailRequest &) = default ;
    ListChatRecordDetailRequest& operator=(ListChatRecordDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->closeTimeEnd_ == nullptr && return this->closeTimeStart_ == nullptr && return this->currentPage_ == nullptr && return this->instanceId_ == nullptr && return this->pageSize_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListChatRecordDetailRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // closeTimeEnd Field Functions 
    bool hasCloseTimeEnd() const { return this->closeTimeEnd_ != nullptr;};
    void deleteCloseTimeEnd() { this->closeTimeEnd_ = nullptr;};
    inline int64_t closeTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(closeTimeEnd_, 0L) };
    inline ListChatRecordDetailRequest& setCloseTimeEnd(int64_t closeTimeEnd) { DARABONBA_PTR_SET_VALUE(closeTimeEnd_, closeTimeEnd) };


    // closeTimeStart Field Functions 
    bool hasCloseTimeStart() const { return this->closeTimeStart_ != nullptr;};
    void deleteCloseTimeStart() { this->closeTimeStart_ = nullptr;};
    inline int64_t closeTimeStart() const { DARABONBA_PTR_GET_DEFAULT(closeTimeStart_, 0L) };
    inline ListChatRecordDetailRequest& setCloseTimeStart(int64_t closeTimeStart) { DARABONBA_PTR_SET_VALUE(closeTimeStart_, closeTimeStart) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListChatRecordDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListChatRecordDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChatRecordDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<int64_t> closeTimeEnd_ = nullptr;
    std::shared_ptr<int64_t> closeTimeStart_ = nullptr;
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
