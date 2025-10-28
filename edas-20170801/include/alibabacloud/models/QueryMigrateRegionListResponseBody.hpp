// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMIGRATEREGIONLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMIGRATEREGIONLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMigrateRegionListResponseBodyRegionEntityList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryMigrateRegionListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMigrateRegionListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionEntityList, regionEntityList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMigrateRegionListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionEntityList, regionEntityList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMigrateRegionListResponseBody() = default ;
    QueryMigrateRegionListResponseBody(const QueryMigrateRegionListResponseBody &) = default ;
    QueryMigrateRegionListResponseBody(QueryMigrateRegionListResponseBody &&) = default ;
    QueryMigrateRegionListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMigrateRegionListResponseBody() = default ;
    QueryMigrateRegionListResponseBody& operator=(const QueryMigrateRegionListResponseBody &) = default ;
    QueryMigrateRegionListResponseBody& operator=(QueryMigrateRegionListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->regionEntityList_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryMigrateRegionListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMigrateRegionListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionEntityList Field Functions 
    bool hasRegionEntityList() const { return this->regionEntityList_ != nullptr;};
    void deleteRegionEntityList() { this->regionEntityList_ = nullptr;};
    inline const QueryMigrateRegionListResponseBodyRegionEntityList & regionEntityList() const { DARABONBA_PTR_GET_CONST(regionEntityList_, QueryMigrateRegionListResponseBodyRegionEntityList) };
    inline QueryMigrateRegionListResponseBodyRegionEntityList regionEntityList() { DARABONBA_PTR_GET(regionEntityList_, QueryMigrateRegionListResponseBodyRegionEntityList) };
    inline QueryMigrateRegionListResponseBody& setRegionEntityList(const QueryMigrateRegionListResponseBodyRegionEntityList & regionEntityList) { DARABONBA_PTR_SET_VALUE(regionEntityList_, regionEntityList) };
    inline QueryMigrateRegionListResponseBody& setRegionEntityList(QueryMigrateRegionListResponseBodyRegionEntityList && regionEntityList) { DARABONBA_PTR_SET_RVALUE(regionEntityList_, regionEntityList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMigrateRegionListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The message that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The namespaces.
    std::shared_ptr<QueryMigrateRegionListResponseBodyRegionEntityList> regionEntityList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
