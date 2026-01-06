// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERHONORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERHONORSRESPONSEBODY_HPP_
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
  class QueryUserHonorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserHonorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(honors, honors_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserHonorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(honors, honors_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryUserHonorsResponseBody() = default ;
    QueryUserHonorsResponseBody(const QueryUserHonorsResponseBody &) = default ;
    QueryUserHonorsResponseBody(QueryUserHonorsResponseBody &&) = default ;
    QueryUserHonorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserHonorsResponseBody() = default ;
    QueryUserHonorsResponseBody& operator=(const QueryUserHonorsResponseBody &) = default ;
    QueryUserHonorsResponseBody& operator=(QueryUserHonorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Honors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Honors& obj) { 
        DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(grantHistory, grantHistory_);
        DARABONBA_PTR_TO_JSON(honorDesc, honorDesc_);
        DARABONBA_PTR_TO_JSON(honorId, honorId_);
        DARABONBA_PTR_TO_JSON(honorName, honorName_);
      };
      friend void from_json(const Darabonba::Json& j, Honors& obj) { 
        DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(grantHistory, grantHistory_);
        DARABONBA_PTR_FROM_JSON(honorDesc, honorDesc_);
        DARABONBA_PTR_FROM_JSON(honorId, honorId_);
        DARABONBA_PTR_FROM_JSON(honorName, honorName_);
      };
      Honors() = default ;
      Honors(const Honors &) = default ;
      Honors(Honors &&) = default ;
      Honors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Honors() = default ;
      Honors& operator=(const Honors &) = default ;
      Honors& operator=(Honors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GrantHistory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GrantHistory& obj) { 
          DARABONBA_PTR_TO_JSON(grantTime, grantTime_);
          DARABONBA_PTR_TO_JSON(senderUserid, senderUserid_);
        };
        friend void from_json(const Darabonba::Json& j, GrantHistory& obj) { 
          DARABONBA_PTR_FROM_JSON(grantTime, grantTime_);
          DARABONBA_PTR_FROM_JSON(senderUserid, senderUserid_);
        };
        GrantHistory() = default ;
        GrantHistory(const GrantHistory &) = default ;
        GrantHistory(GrantHistory &&) = default ;
        GrantHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GrantHistory() = default ;
        GrantHistory& operator=(const GrantHistory &) = default ;
        GrantHistory& operator=(GrantHistory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->grantTime_ == nullptr
        && this->senderUserid_ == nullptr; };
        // grantTime Field Functions 
        bool hasGrantTime() const { return this->grantTime_ != nullptr;};
        void deleteGrantTime() { this->grantTime_ = nullptr;};
        inline int64_t getGrantTime() const { DARABONBA_PTR_GET_DEFAULT(grantTime_, 0L) };
        inline GrantHistory& setGrantTime(int64_t grantTime) { DARABONBA_PTR_SET_VALUE(grantTime_, grantTime) };


        // senderUserid Field Functions 
        bool hasSenderUserid() const { return this->senderUserid_ != nullptr;};
        void deleteSenderUserid() { this->senderUserid_ = nullptr;};
        inline string getSenderUserid() const { DARABONBA_PTR_GET_DEFAULT(senderUserid_, "") };
        inline GrantHistory& setSenderUserid(string senderUserid) { DARABONBA_PTR_SET_VALUE(senderUserid_, senderUserid) };


      protected:
        shared_ptr<int64_t> grantTime_ {};
        shared_ptr<string> senderUserid_ {};
      };

      virtual bool empty() const override { return this->expirationTime_ == nullptr
        && this->grantHistory_ == nullptr && this->honorDesc_ == nullptr && this->honorId_ == nullptr && this->honorName_ == nullptr; };
      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline int64_t getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, 0L) };
      inline Honors& setExpirationTime(int64_t expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // grantHistory Field Functions 
      bool hasGrantHistory() const { return this->grantHistory_ != nullptr;};
      void deleteGrantHistory() { this->grantHistory_ = nullptr;};
      inline const vector<Honors::GrantHistory> & getGrantHistory() const { DARABONBA_PTR_GET_CONST(grantHistory_, vector<Honors::GrantHistory>) };
      inline vector<Honors::GrantHistory> getGrantHistory() { DARABONBA_PTR_GET(grantHistory_, vector<Honors::GrantHistory>) };
      inline Honors& setGrantHistory(const vector<Honors::GrantHistory> & grantHistory) { DARABONBA_PTR_SET_VALUE(grantHistory_, grantHistory) };
      inline Honors& setGrantHistory(vector<Honors::GrantHistory> && grantHistory) { DARABONBA_PTR_SET_RVALUE(grantHistory_, grantHistory) };


      // honorDesc Field Functions 
      bool hasHonorDesc() const { return this->honorDesc_ != nullptr;};
      void deleteHonorDesc() { this->honorDesc_ = nullptr;};
      inline string getHonorDesc() const { DARABONBA_PTR_GET_DEFAULT(honorDesc_, "") };
      inline Honors& setHonorDesc(string honorDesc) { DARABONBA_PTR_SET_VALUE(honorDesc_, honorDesc) };


      // honorId Field Functions 
      bool hasHonorId() const { return this->honorId_ != nullptr;};
      void deleteHonorId() { this->honorId_ = nullptr;};
      inline string getHonorId() const { DARABONBA_PTR_GET_DEFAULT(honorId_, "") };
      inline Honors& setHonorId(string honorId) { DARABONBA_PTR_SET_VALUE(honorId_, honorId) };


      // honorName Field Functions 
      bool hasHonorName() const { return this->honorName_ != nullptr;};
      void deleteHonorName() { this->honorName_ = nullptr;};
      inline string getHonorName() const { DARABONBA_PTR_GET_DEFAULT(honorName_, "") };
      inline Honors& setHonorName(string honorName) { DARABONBA_PTR_SET_VALUE(honorName_, honorName) };


    protected:
      shared_ptr<int64_t> expirationTime_ {};
      shared_ptr<vector<Honors::GrantHistory>> grantHistory_ {};
      shared_ptr<string> honorDesc_ {};
      shared_ptr<string> honorId_ {};
      shared_ptr<string> honorName_ {};
    };

    virtual bool empty() const override { return this->honors_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // honors Field Functions 
    bool hasHonors() const { return this->honors_ != nullptr;};
    void deleteHonors() { this->honors_ = nullptr;};
    inline const vector<QueryUserHonorsResponseBody::Honors> & getHonors() const { DARABONBA_PTR_GET_CONST(honors_, vector<QueryUserHonorsResponseBody::Honors>) };
    inline vector<QueryUserHonorsResponseBody::Honors> getHonors() { DARABONBA_PTR_GET(honors_, vector<QueryUserHonorsResponseBody::Honors>) };
    inline QueryUserHonorsResponseBody& setHonors(const vector<QueryUserHonorsResponseBody::Honors> & honors) { DARABONBA_PTR_SET_VALUE(honors_, honors) };
    inline QueryUserHonorsResponseBody& setHonors(vector<QueryUserHonorsResponseBody::Honors> && honors) { DARABONBA_PTR_SET_RVALUE(honors_, honors) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryUserHonorsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserHonorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<QueryUserHonorsResponseBody::Honors>> honors_ {};
    shared_ptr<string> nextToken_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
