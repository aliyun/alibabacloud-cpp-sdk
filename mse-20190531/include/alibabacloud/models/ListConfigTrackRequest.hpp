// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGTRACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGTRACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListConfigTrackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigTrackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(EndTs, endTs_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
      DARABONBA_PTR_TO_JSON(StartTs, startTs_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigTrackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(EndTs, endTs_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestPars, requestPars_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
      DARABONBA_PTR_FROM_JSON(StartTs, startTs_);
    };
    ListConfigTrackRequest() = default ;
    ListConfigTrackRequest(const ListConfigTrackRequest &) = default ;
    ListConfigTrackRequest(ListConfigTrackRequest &&) = default ;
    ListConfigTrackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigTrackRequest() = default ;
    ListConfigTrackRequest& operator=(const ListConfigTrackRequest &) = default ;
    ListConfigTrackRequest& operator=(ListConfigTrackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->dataId_ == nullptr && this->endTs_ == nullptr && this->group_ == nullptr && this->instanceId_ == nullptr && this->ip_ == nullptr
        && this->namespaceId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->requestPars_ == nullptr && this->reverse_ == nullptr
        && this->startTs_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListConfigTrackRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ListConfigTrackRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // endTs Field Functions 
    bool hasEndTs() const { return this->endTs_ != nullptr;};
    void deleteEndTs() { this->endTs_ = nullptr;};
    inline int64_t getEndTs() const { DARABONBA_PTR_GET_DEFAULT(endTs_, 0L) };
    inline ListConfigTrackRequest& setEndTs(int64_t endTs) { DARABONBA_PTR_SET_VALUE(endTs_, endTs) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListConfigTrackRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListConfigTrackRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListConfigTrackRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListConfigTrackRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int64_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0L) };
    inline ListConfigTrackRequest& setPageNum(int64_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListConfigTrackRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestPars Field Functions 
    bool hasRequestPars() const { return this->requestPars_ != nullptr;};
    void deleteRequestPars() { this->requestPars_ = nullptr;};
    inline string getRequestPars() const { DARABONBA_PTR_GET_DEFAULT(requestPars_, "") };
    inline ListConfigTrackRequest& setRequestPars(string requestPars) { DARABONBA_PTR_SET_VALUE(requestPars_, requestPars) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline ListConfigTrackRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


    // startTs Field Functions 
    bool hasStartTs() const { return this->startTs_ != nullptr;};
    void deleteStartTs() { this->startTs_ = nullptr;};
    inline int64_t getStartTs() const { DARABONBA_PTR_GET_DEFAULT(startTs_, 0L) };
    inline ListConfigTrackRequest& setStartTs(int64_t startTs) { DARABONBA_PTR_SET_VALUE(startTs_, startTs) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the configuration.
    shared_ptr<string> dataId_ {};
    // The end timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTs_ {};
    // The name of the configuration group.
    shared_ptr<string> group_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The IP address of the listener.
    shared_ptr<string> ip_ {};
    // The ID of the namespace.
    shared_ptr<string> namespaceId_ {};
    // The number of the page to return.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageNum_ {};
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // The extended request parameters in the JSON format.
    shared_ptr<string> requestPars_ {};
    // Specifies whether to enable reverse ordering. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> reverse_ {};
    // The start timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
