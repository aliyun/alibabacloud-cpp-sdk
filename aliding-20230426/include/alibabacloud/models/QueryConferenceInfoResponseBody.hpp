// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONFERENCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONFERENCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryConferenceInfoResponseBodyConfInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryConferenceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryConferenceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(confInfo, confInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryConferenceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(confInfo, confInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryConferenceInfoResponseBody() = default ;
    QueryConferenceInfoResponseBody(const QueryConferenceInfoResponseBody &) = default ;
    QueryConferenceInfoResponseBody(QueryConferenceInfoResponseBody &&) = default ;
    QueryConferenceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryConferenceInfoResponseBody() = default ;
    QueryConferenceInfoResponseBody& operator=(const QueryConferenceInfoResponseBody &) = default ;
    QueryConferenceInfoResponseBody& operator=(QueryConferenceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // confInfo Field Functions 
    bool hasConfInfo() const { return this->confInfo_ != nullptr;};
    void deleteConfInfo() { this->confInfo_ = nullptr;};
    inline const QueryConferenceInfoResponseBodyConfInfo & confInfo() const { DARABONBA_PTR_GET_CONST(confInfo_, QueryConferenceInfoResponseBodyConfInfo) };
    inline QueryConferenceInfoResponseBodyConfInfo confInfo() { DARABONBA_PTR_GET(confInfo_, QueryConferenceInfoResponseBodyConfInfo) };
    inline QueryConferenceInfoResponseBody& setConfInfo(const QueryConferenceInfoResponseBodyConfInfo & confInfo) { DARABONBA_PTR_SET_VALUE(confInfo_, confInfo) };
    inline QueryConferenceInfoResponseBody& setConfInfo(QueryConferenceInfoResponseBodyConfInfo && confInfo) { DARABONBA_PTR_SET_RVALUE(confInfo_, confInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryConferenceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryConferenceInfoResponseBodyConfInfo> confInfo_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
