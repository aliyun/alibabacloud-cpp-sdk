// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECPFSACCESSPOINTMOUNTEDCLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECPFSACCESSPOINTMOUNTEDCLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeCpfsAccessPointMountedClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCpfsAccessPointMountedClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountedClient, mountedClient_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCpfsAccessPointMountedClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountedClient, mountedClient_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCpfsAccessPointMountedClientsResponseBody() = default ;
    DescribeCpfsAccessPointMountedClientsResponseBody(const DescribeCpfsAccessPointMountedClientsResponseBody &) = default ;
    DescribeCpfsAccessPointMountedClientsResponseBody(DescribeCpfsAccessPointMountedClientsResponseBody &&) = default ;
    DescribeCpfsAccessPointMountedClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCpfsAccessPointMountedClientsResponseBody() = default ;
    DescribeCpfsAccessPointMountedClientsResponseBody& operator=(const DescribeCpfsAccessPointMountedClientsResponseBody &) = default ;
    DescribeCpfsAccessPointMountedClientsResponseBody& operator=(DescribeCpfsAccessPointMountedClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MountedClient : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MountedClient& obj) { 
        DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      };
      friend void from_json(const Darabonba::Json& j, MountedClient& obj) { 
        DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      };
      MountedClient() = default ;
      MountedClient(const MountedClient &) = default ;
      MountedClient(MountedClient &&) = default ;
      MountedClient(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MountedClient() = default ;
      MountedClient& operator=(const MountedClient &) = default ;
      MountedClient& operator=(MountedClient &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channelType_ == nullptr
        && this->clientId_ == nullptr && this->clientIp_ == nullptr; };
      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
      inline MountedClient& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline MountedClient& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline MountedClient& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    protected:
      shared_ptr<string> channelType_ {};
      shared_ptr<string> clientId_ {};
      shared_ptr<string> clientIp_ {};
    };

    virtual bool empty() const override { return this->mountedClient_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // mountedClient Field Functions 
    bool hasMountedClient() const { return this->mountedClient_ != nullptr;};
    void deleteMountedClient() { this->mountedClient_ = nullptr;};
    inline const vector<DescribeCpfsAccessPointMountedClientsResponseBody::MountedClient> & getMountedClient() const { DARABONBA_PTR_GET_CONST(mountedClient_, vector<DescribeCpfsAccessPointMountedClientsResponseBody::MountedClient>) };
    inline vector<DescribeCpfsAccessPointMountedClientsResponseBody::MountedClient> getMountedClient() { DARABONBA_PTR_GET(mountedClient_, vector<DescribeCpfsAccessPointMountedClientsResponseBody::MountedClient>) };
    inline DescribeCpfsAccessPointMountedClientsResponseBody& setMountedClient(const vector<DescribeCpfsAccessPointMountedClientsResponseBody::MountedClient> & mountedClient) { DARABONBA_PTR_SET_VALUE(mountedClient_, mountedClient) };
    inline DescribeCpfsAccessPointMountedClientsResponseBody& setMountedClient(vector<DescribeCpfsAccessPointMountedClientsResponseBody::MountedClient> && mountedClient) { DARABONBA_PTR_SET_RVALUE(mountedClient_, mountedClient) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCpfsAccessPointMountedClientsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCpfsAccessPointMountedClientsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCpfsAccessPointMountedClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCpfsAccessPointMountedClientsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeCpfsAccessPointMountedClientsResponseBody::MountedClient>> mountedClient_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
