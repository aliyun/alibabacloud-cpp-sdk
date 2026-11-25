// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBELONGIDENTIFIERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBELONGIDENTIFIERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDeviceBelongIdentifiersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceBelongIdentifiersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Identifiers, identifiers_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceBelongIdentifiersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Identifiers, identifiers_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDeviceBelongIdentifiersResponseBody() = default ;
    ListDeviceBelongIdentifiersResponseBody(const ListDeviceBelongIdentifiersResponseBody &) = default ;
    ListDeviceBelongIdentifiersResponseBody(ListDeviceBelongIdentifiersResponseBody &&) = default ;
    ListDeviceBelongIdentifiersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceBelongIdentifiersResponseBody() = default ;
    ListDeviceBelongIdentifiersResponseBody& operator=(const ListDeviceBelongIdentifiersResponseBody &) = default ;
    ListDeviceBelongIdentifiersResponseBody& operator=(ListDeviceBelongIdentifiersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Identifiers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Identifiers& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(IdentifierId, identifierId_);
        DARABONBA_PTR_TO_JSON(IdentifierType, identifierType_);
        DARABONBA_PTR_TO_JSON(IdentifierValue, identifierValue_);
      };
      friend void from_json(const Darabonba::Json& j, Identifiers& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(IdentifierId, identifierId_);
        DARABONBA_PTR_FROM_JSON(IdentifierType, identifierType_);
        DARABONBA_PTR_FROM_JSON(IdentifierValue, identifierValue_);
      };
      Identifiers() = default ;
      Identifiers(const Identifiers &) = default ;
      Identifiers(Identifiers &&) = default ;
      Identifiers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Identifiers() = default ;
      Identifiers& operator=(const Identifiers &) = default ;
      Identifiers& operator=(Identifiers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->identifierId_ == nullptr && this->identifierType_ == nullptr && this->identifierValue_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Identifiers& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // identifierId Field Functions 
      bool hasIdentifierId() const { return this->identifierId_ != nullptr;};
      void deleteIdentifierId() { this->identifierId_ = nullptr;};
      inline string getIdentifierId() const { DARABONBA_PTR_GET_DEFAULT(identifierId_, "") };
      inline Identifiers& setIdentifierId(string identifierId) { DARABONBA_PTR_SET_VALUE(identifierId_, identifierId) };


      // identifierType Field Functions 
      bool hasIdentifierType() const { return this->identifierType_ != nullptr;};
      void deleteIdentifierType() { this->identifierType_ = nullptr;};
      inline string getIdentifierType() const { DARABONBA_PTR_GET_DEFAULT(identifierType_, "") };
      inline Identifiers& setIdentifierType(string identifierType) { DARABONBA_PTR_SET_VALUE(identifierType_, identifierType) };


      // identifierValue Field Functions 
      bool hasIdentifierValue() const { return this->identifierValue_ != nullptr;};
      void deleteIdentifierValue() { this->identifierValue_ = nullptr;};
      inline string getIdentifierValue() const { DARABONBA_PTR_GET_DEFAULT(identifierValue_, "") };
      inline Identifiers& setIdentifierValue(string identifierValue) { DARABONBA_PTR_SET_VALUE(identifierValue_, identifierValue) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> identifierId_ {};
      shared_ptr<string> identifierType_ {};
      shared_ptr<string> identifierValue_ {};
    };

    virtual bool empty() const override { return this->identifiers_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // identifiers Field Functions 
    bool hasIdentifiers() const { return this->identifiers_ != nullptr;};
    void deleteIdentifiers() { this->identifiers_ = nullptr;};
    inline const vector<ListDeviceBelongIdentifiersResponseBody::Identifiers> & getIdentifiers() const { DARABONBA_PTR_GET_CONST(identifiers_, vector<ListDeviceBelongIdentifiersResponseBody::Identifiers>) };
    inline vector<ListDeviceBelongIdentifiersResponseBody::Identifiers> getIdentifiers() { DARABONBA_PTR_GET(identifiers_, vector<ListDeviceBelongIdentifiersResponseBody::Identifiers>) };
    inline ListDeviceBelongIdentifiersResponseBody& setIdentifiers(const vector<ListDeviceBelongIdentifiersResponseBody::Identifiers> & identifiers) { DARABONBA_PTR_SET_VALUE(identifiers_, identifiers) };
    inline ListDeviceBelongIdentifiersResponseBody& setIdentifiers(vector<ListDeviceBelongIdentifiersResponseBody::Identifiers> && identifiers) { DARABONBA_PTR_SET_RVALUE(identifiers_, identifiers) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDeviceBelongIdentifiersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDeviceBelongIdentifiersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeviceBelongIdentifiersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDeviceBelongIdentifiersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListDeviceBelongIdentifiersResponseBody::Identifiers>> identifiers_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
