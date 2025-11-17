// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEADBATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEADBATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ListInstanceAdbAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceAdbAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceAdbAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListInstanceAdbAttributesRequest() = default ;
    ListInstanceAdbAttributesRequest(const ListInstanceAdbAttributesRequest &) = default ;
    ListInstanceAdbAttributesRequest(ListInstanceAdbAttributesRequest &&) = default ;
    ListInstanceAdbAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceAdbAttributesRequest() = default ;
    ListInstanceAdbAttributesRequest& operator=(const ListInstanceAdbAttributesRequest &) = default ;
    ListInstanceAdbAttributesRequest& operator=(ListInstanceAdbAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalIp_ == nullptr
        && return this->instanceIds_ == nullptr && return this->internalIp_ == nullptr && return this->internalPort_ == nullptr && return this->ipProtocol_ == nullptr && return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr; };
    // externalIp Field Functions 
    bool hasExternalIp() const { return this->externalIp_ != nullptr;};
    void deleteExternalIp() { this->externalIp_ = nullptr;};
    inline string externalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
    inline ListInstanceAdbAttributesRequest& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ListInstanceAdbAttributesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ListInstanceAdbAttributesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string internalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline ListInstanceAdbAttributesRequest& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // internalPort Field Functions 
    bool hasInternalPort() const { return this->internalPort_ != nullptr;};
    void deleteInternalPort() { this->internalPort_ = nullptr;};
    inline string internalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
    inline ListInstanceAdbAttributesRequest& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline ListInstanceAdbAttributesRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInstanceAdbAttributesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstanceAdbAttributesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    std::shared_ptr<string> externalIp_ = nullptr;
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<string> internalIp_ = nullptr;
    std::shared_ptr<string> internalPort_ = nullptr;
    std::shared_ptr<string> ipProtocol_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
