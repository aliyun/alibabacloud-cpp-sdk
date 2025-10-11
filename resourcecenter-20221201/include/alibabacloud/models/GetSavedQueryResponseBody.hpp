// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVEDQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSAVEDQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSavedQueryResponseBodySavedQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetSavedQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavedQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SavedQuery, savedQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavedQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SavedQuery, savedQuery_);
    };
    GetSavedQueryResponseBody() = default ;
    GetSavedQueryResponseBody(const GetSavedQueryResponseBody &) = default ;
    GetSavedQueryResponseBody(GetSavedQueryResponseBody &&) = default ;
    GetSavedQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavedQueryResponseBody() = default ;
    GetSavedQueryResponseBody& operator=(const GetSavedQueryResponseBody &) = default ;
    GetSavedQueryResponseBody& operator=(GetSavedQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->savedQuery_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSavedQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // savedQuery Field Functions 
    bool hasSavedQuery() const { return this->savedQuery_ != nullptr;};
    void deleteSavedQuery() { this->savedQuery_ = nullptr;};
    inline const GetSavedQueryResponseBodySavedQuery & savedQuery() const { DARABONBA_PTR_GET_CONST(savedQuery_, GetSavedQueryResponseBodySavedQuery) };
    inline GetSavedQueryResponseBodySavedQuery savedQuery() { DARABONBA_PTR_GET(savedQuery_, GetSavedQueryResponseBodySavedQuery) };
    inline GetSavedQueryResponseBody& setSavedQuery(const GetSavedQueryResponseBodySavedQuery & savedQuery) { DARABONBA_PTR_SET_VALUE(savedQuery_, savedQuery) };
    inline GetSavedQueryResponseBody& setSavedQuery(GetSavedQueryResponseBodySavedQuery && savedQuery) { DARABONBA_PTR_SET_RVALUE(savedQuery_, savedQuery) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the template.
    std::shared_ptr<GetSavedQueryResponseBodySavedQuery> savedQuery_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
