// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANNELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANNELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChannelAssemblyChannel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListChannelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChannelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelList, channelList_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChannelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelList, channelList_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChannelsResponseBody() = default ;
    ListChannelsResponseBody(const ListChannelsResponseBody &) = default ;
    ListChannelsResponseBody(ListChannelsResponseBody &&) = default ;
    ListChannelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChannelsResponseBody() = default ;
    ListChannelsResponseBody& operator=(const ListChannelsResponseBody &) = default ;
    ListChannelsResponseBody& operator=(ListChannelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelList_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // channelList Field Functions 
    bool hasChannelList() const { return this->channelList_ != nullptr;};
    void deleteChannelList() { this->channelList_ = nullptr;};
    inline const vector<ChannelAssemblyChannel> & getChannelList() const { DARABONBA_PTR_GET_CONST(channelList_, vector<ChannelAssemblyChannel>) };
    inline vector<ChannelAssemblyChannel> getChannelList() { DARABONBA_PTR_GET(channelList_, vector<ChannelAssemblyChannel>) };
    inline ListChannelsResponseBody& setChannelList(const vector<ChannelAssemblyChannel> & channelList) { DARABONBA_PTR_SET_VALUE(channelList_, channelList) };
    inline ListChannelsResponseBody& setChannelList(vector<ChannelAssemblyChannel> && channelList) { DARABONBA_PTR_SET_RVALUE(channelList_, channelList) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChannelsResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChannelsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChannelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListChannelsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The channels.
    shared_ptr<vector<ChannelAssemblyChannel>> channelList_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // **Request ID**
    shared_ptr<string> requestId_ {};
    // The total number of channels returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
