// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTERMINALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTERMINALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class ListTerminalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTerminalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(BuildId, buildId_);
      DARABONBA_PTR_TO_JSON(ClientType, clientType_);
      DARABONBA_PTR_TO_JSON(InManage, inManage_);
      DARABONBA_PTR_TO_JSON(Ipv4, ipv4_);
      DARABONBA_PTR_TO_JSON(LocationInfo, locationInfo_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SearchKeyword, searchKeyword_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(TerminalGroupId, terminalGroupId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListTerminalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(BuildId, buildId_);
      DARABONBA_PTR_FROM_JSON(ClientType, clientType_);
      DARABONBA_PTR_FROM_JSON(InManage, inManage_);
      DARABONBA_PTR_FROM_JSON(Ipv4, ipv4_);
      DARABONBA_PTR_FROM_JSON(LocationInfo, locationInfo_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SearchKeyword, searchKeyword_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(TerminalGroupId, terminalGroupId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListTerminalRequest() = default ;
    ListTerminalRequest(const ListTerminalRequest &) = default ;
    ListTerminalRequest(ListTerminalRequest &&) = default ;
    ListTerminalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTerminalRequest() = default ;
    ListTerminalRequest& operator=(const ListTerminalRequest &) = default ;
    ListTerminalRequest& operator=(ListTerminalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->buildId_ == nullptr && this->clientType_ == nullptr && this->inManage_ == nullptr && this->ipv4_ == nullptr && this->locationInfo_ == nullptr
        && this->maxResults_ == nullptr && this->model_ == nullptr && this->nextToken_ == nullptr && this->searchKeyword_ == nullptr && this->serialNumber_ == nullptr
        && this->terminalGroupId_ == nullptr && this->uuid_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ListTerminalRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // buildId Field Functions 
    bool hasBuildId() const { return this->buildId_ != nullptr;};
    void deleteBuildId() { this->buildId_ = nullptr;};
    inline string getBuildId() const { DARABONBA_PTR_GET_DEFAULT(buildId_, "") };
    inline ListTerminalRequest& setBuildId(string buildId) { DARABONBA_PTR_SET_VALUE(buildId_, buildId) };


    // clientType Field Functions 
    bool hasClientType() const { return this->clientType_ != nullptr;};
    void deleteClientType() { this->clientType_ = nullptr;};
    inline int32_t getClientType() const { DARABONBA_PTR_GET_DEFAULT(clientType_, 0) };
    inline ListTerminalRequest& setClientType(int32_t clientType) { DARABONBA_PTR_SET_VALUE(clientType_, clientType) };


    // inManage Field Functions 
    bool hasInManage() const { return this->inManage_ != nullptr;};
    void deleteInManage() { this->inManage_ = nullptr;};
    inline bool getInManage() const { DARABONBA_PTR_GET_DEFAULT(inManage_, false) };
    inline ListTerminalRequest& setInManage(bool inManage) { DARABONBA_PTR_SET_VALUE(inManage_, inManage) };


    // ipv4 Field Functions 
    bool hasIpv4() const { return this->ipv4_ != nullptr;};
    void deleteIpv4() { this->ipv4_ = nullptr;};
    inline string getIpv4() const { DARABONBA_PTR_GET_DEFAULT(ipv4_, "") };
    inline ListTerminalRequest& setIpv4(string ipv4) { DARABONBA_PTR_SET_VALUE(ipv4_, ipv4) };


    // locationInfo Field Functions 
    bool hasLocationInfo() const { return this->locationInfo_ != nullptr;};
    void deleteLocationInfo() { this->locationInfo_ = nullptr;};
    inline string getLocationInfo() const { DARABONBA_PTR_GET_DEFAULT(locationInfo_, "") };
    inline ListTerminalRequest& setLocationInfo(string locationInfo) { DARABONBA_PTR_SET_VALUE(locationInfo_, locationInfo) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTerminalRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ListTerminalRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTerminalRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // searchKeyword Field Functions 
    bool hasSearchKeyword() const { return this->searchKeyword_ != nullptr;};
    void deleteSearchKeyword() { this->searchKeyword_ = nullptr;};
    inline string getSearchKeyword() const { DARABONBA_PTR_GET_DEFAULT(searchKeyword_, "") };
    inline ListTerminalRequest& setSearchKeyword(string searchKeyword) { DARABONBA_PTR_SET_VALUE(searchKeyword_, searchKeyword) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline ListTerminalRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // terminalGroupId Field Functions 
    bool hasTerminalGroupId() const { return this->terminalGroupId_ != nullptr;};
    void deleteTerminalGroupId() { this->terminalGroupId_ = nullptr;};
    inline string getTerminalGroupId() const { DARABONBA_PTR_GET_DEFAULT(terminalGroupId_, "") };
    inline ListTerminalRequest& setTerminalGroupId(string terminalGroupId) { DARABONBA_PTR_SET_VALUE(terminalGroupId_, terminalGroupId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListTerminalRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> buildId_ {};
    shared_ptr<int32_t> clientType_ {};
    shared_ptr<bool> inManage_ {};
    shared_ptr<string> ipv4_ {};
    shared_ptr<string> locationInfo_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> model_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> searchKeyword_ {};
    shared_ptr<string> serialNumber_ {};
    shared_ptr<string> terminalGroupId_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
