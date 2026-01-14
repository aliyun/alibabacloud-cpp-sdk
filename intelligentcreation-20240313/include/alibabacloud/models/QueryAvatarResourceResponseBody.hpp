// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAVATARRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAVATARRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryAvatarResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAvatarResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(queryResourceInfoList, queryResourceInfoList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAvatarResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(queryResourceInfoList, queryResourceInfoList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryAvatarResourceResponseBody() = default ;
    QueryAvatarResourceResponseBody(const QueryAvatarResourceResponseBody &) = default ;
    QueryAvatarResourceResponseBody(QueryAvatarResourceResponseBody &&) = default ;
    QueryAvatarResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAvatarResourceResponseBody() = default ;
    QueryAvatarResourceResponseBody& operator=(const QueryAvatarResourceResponseBody &) = default ;
    QueryAvatarResourceResponseBody& operator=(QueryAvatarResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryResourceInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryResourceInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(validPeriodTime, validPeriodTime_);
      };
      friend void from_json(const Darabonba::Json& j, QueryResourceInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(validPeriodTime, validPeriodTime_);
      };
      QueryResourceInfoList() = default ;
      QueryResourceInfoList(const QueryResourceInfoList &) = default ;
      QueryResourceInfoList(QueryResourceInfoList &&) = default ;
      QueryResourceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryResourceInfoList() = default ;
      QueryResourceInfoList& operator=(const QueryResourceInfoList &) = default ;
      QueryResourceInfoList& operator=(QueryResourceInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->type_ == nullptr && this->validPeriodTime_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline QueryResourceInfoList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline QueryResourceInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // validPeriodTime Field Functions 
      bool hasValidPeriodTime() const { return this->validPeriodTime_ != nullptr;};
      void deleteValidPeriodTime() { this->validPeriodTime_ = nullptr;};
      inline string getValidPeriodTime() const { DARABONBA_PTR_GET_DEFAULT(validPeriodTime_, "") };
      inline QueryResourceInfoList& setValidPeriodTime(string validPeriodTime) { DARABONBA_PTR_SET_VALUE(validPeriodTime_, validPeriodTime) };


    protected:
      shared_ptr<string> resourceId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> validPeriodTime_ {};
    };

    virtual bool empty() const override { return this->queryResourceInfoList_ == nullptr
        && this->requestId_ == nullptr; };
    // queryResourceInfoList Field Functions 
    bool hasQueryResourceInfoList() const { return this->queryResourceInfoList_ != nullptr;};
    void deleteQueryResourceInfoList() { this->queryResourceInfoList_ = nullptr;};
    inline const vector<QueryAvatarResourceResponseBody::QueryResourceInfoList> & getQueryResourceInfoList() const { DARABONBA_PTR_GET_CONST(queryResourceInfoList_, vector<QueryAvatarResourceResponseBody::QueryResourceInfoList>) };
    inline vector<QueryAvatarResourceResponseBody::QueryResourceInfoList> getQueryResourceInfoList() { DARABONBA_PTR_GET(queryResourceInfoList_, vector<QueryAvatarResourceResponseBody::QueryResourceInfoList>) };
    inline QueryAvatarResourceResponseBody& setQueryResourceInfoList(const vector<QueryAvatarResourceResponseBody::QueryResourceInfoList> & queryResourceInfoList) { DARABONBA_PTR_SET_VALUE(queryResourceInfoList_, queryResourceInfoList) };
    inline QueryAvatarResourceResponseBody& setQueryResourceInfoList(vector<QueryAvatarResourceResponseBody::QueryResourceInfoList> && queryResourceInfoList) { DARABONBA_PTR_SET_RVALUE(queryResourceInfoList_, queryResourceInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAvatarResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<QueryAvatarResourceResponseBody::QueryResourceInfoList>> queryResourceInfoList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
