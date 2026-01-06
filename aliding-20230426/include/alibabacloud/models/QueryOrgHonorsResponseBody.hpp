// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGHONORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGHONORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryOrgHonorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrgHonorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(openHonors, openHonors_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrgHonorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(openHonors, openHonors_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryOrgHonorsResponseBody() = default ;
    QueryOrgHonorsResponseBody(const QueryOrgHonorsResponseBody &) = default ;
    QueryOrgHonorsResponseBody(QueryOrgHonorsResponseBody &&) = default ;
    QueryOrgHonorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrgHonorsResponseBody() = default ;
    QueryOrgHonorsResponseBody& operator=(const QueryOrgHonorsResponseBody &) = default ;
    QueryOrgHonorsResponseBody& operator=(QueryOrgHonorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OpenHonors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenHonors& obj) { 
        DARABONBA_PTR_TO_JSON(honorDesc, honorDesc_);
        DARABONBA_PTR_TO_JSON(honorId, honorId_);
        DARABONBA_PTR_TO_JSON(honorImgUrl, honorImgUrl_);
        DARABONBA_PTR_TO_JSON(honorName, honorName_);
        DARABONBA_PTR_TO_JSON(honorPendantImgUrl, honorPendantImgUrl_);
      };
      friend void from_json(const Darabonba::Json& j, OpenHonors& obj) { 
        DARABONBA_PTR_FROM_JSON(honorDesc, honorDesc_);
        DARABONBA_PTR_FROM_JSON(honorId, honorId_);
        DARABONBA_PTR_FROM_JSON(honorImgUrl, honorImgUrl_);
        DARABONBA_PTR_FROM_JSON(honorName, honorName_);
        DARABONBA_PTR_FROM_JSON(honorPendantImgUrl, honorPendantImgUrl_);
      };
      OpenHonors() = default ;
      OpenHonors(const OpenHonors &) = default ;
      OpenHonors(OpenHonors &&) = default ;
      OpenHonors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenHonors() = default ;
      OpenHonors& operator=(const OpenHonors &) = default ;
      OpenHonors& operator=(OpenHonors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->honorDesc_ == nullptr
        && this->honorId_ == nullptr && this->honorImgUrl_ == nullptr && this->honorName_ == nullptr && this->honorPendantImgUrl_ == nullptr; };
      // honorDesc Field Functions 
      bool hasHonorDesc() const { return this->honorDesc_ != nullptr;};
      void deleteHonorDesc() { this->honorDesc_ = nullptr;};
      inline string getHonorDesc() const { DARABONBA_PTR_GET_DEFAULT(honorDesc_, "") };
      inline OpenHonors& setHonorDesc(string honorDesc) { DARABONBA_PTR_SET_VALUE(honorDesc_, honorDesc) };


      // honorId Field Functions 
      bool hasHonorId() const { return this->honorId_ != nullptr;};
      void deleteHonorId() { this->honorId_ = nullptr;};
      inline int64_t getHonorId() const { DARABONBA_PTR_GET_DEFAULT(honorId_, 0L) };
      inline OpenHonors& setHonorId(int64_t honorId) { DARABONBA_PTR_SET_VALUE(honorId_, honorId) };


      // honorImgUrl Field Functions 
      bool hasHonorImgUrl() const { return this->honorImgUrl_ != nullptr;};
      void deleteHonorImgUrl() { this->honorImgUrl_ = nullptr;};
      inline string getHonorImgUrl() const { DARABONBA_PTR_GET_DEFAULT(honorImgUrl_, "") };
      inline OpenHonors& setHonorImgUrl(string honorImgUrl) { DARABONBA_PTR_SET_VALUE(honorImgUrl_, honorImgUrl) };


      // honorName Field Functions 
      bool hasHonorName() const { return this->honorName_ != nullptr;};
      void deleteHonorName() { this->honorName_ = nullptr;};
      inline string getHonorName() const { DARABONBA_PTR_GET_DEFAULT(honorName_, "") };
      inline OpenHonors& setHonorName(string honorName) { DARABONBA_PTR_SET_VALUE(honorName_, honorName) };


      // honorPendantImgUrl Field Functions 
      bool hasHonorPendantImgUrl() const { return this->honorPendantImgUrl_ != nullptr;};
      void deleteHonorPendantImgUrl() { this->honorPendantImgUrl_ = nullptr;};
      inline string getHonorPendantImgUrl() const { DARABONBA_PTR_GET_DEFAULT(honorPendantImgUrl_, "") };
      inline OpenHonors& setHonorPendantImgUrl(string honorPendantImgUrl) { DARABONBA_PTR_SET_VALUE(honorPendantImgUrl_, honorPendantImgUrl) };


    protected:
      shared_ptr<string> honorDesc_ {};
      shared_ptr<int64_t> honorId_ {};
      shared_ptr<string> honorImgUrl_ {};
      shared_ptr<string> honorName_ {};
      shared_ptr<string> honorPendantImgUrl_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->openHonors_ == nullptr && this->requestId_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryOrgHonorsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // openHonors Field Functions 
    bool hasOpenHonors() const { return this->openHonors_ != nullptr;};
    void deleteOpenHonors() { this->openHonors_ = nullptr;};
    inline const vector<QueryOrgHonorsResponseBody::OpenHonors> & getOpenHonors() const { DARABONBA_PTR_GET_CONST(openHonors_, vector<QueryOrgHonorsResponseBody::OpenHonors>) };
    inline vector<QueryOrgHonorsResponseBody::OpenHonors> getOpenHonors() { DARABONBA_PTR_GET(openHonors_, vector<QueryOrgHonorsResponseBody::OpenHonors>) };
    inline QueryOrgHonorsResponseBody& setOpenHonors(const vector<QueryOrgHonorsResponseBody::OpenHonors> & openHonors) { DARABONBA_PTR_SET_VALUE(openHonors_, openHonors) };
    inline QueryOrgHonorsResponseBody& setOpenHonors(vector<QueryOrgHonorsResponseBody::OpenHonors> && openHonors) { DARABONBA_PTR_SET_RVALUE(openHonors_, openHonors) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryOrgHonorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<QueryOrgHonorsResponseBody::OpenHonors>> openHonors_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
