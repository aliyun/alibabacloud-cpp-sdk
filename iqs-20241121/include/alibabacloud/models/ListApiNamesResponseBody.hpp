// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPINAMESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPINAMESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ListApiNamesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiNamesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(apiNames, apiNames_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiNamesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(apiNames, apiNames_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListApiNamesResponseBody() = default ;
    ListApiNamesResponseBody(const ListApiNamesResponseBody &) = default ;
    ListApiNamesResponseBody(ListApiNamesResponseBody &&) = default ;
    ListApiNamesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiNamesResponseBody() = default ;
    ListApiNamesResponseBody& operator=(const ListApiNamesResponseBody &) = default ;
    ListApiNamesResponseBody& operator=(ListApiNamesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiNames_ == nullptr
        && this->requestId_ == nullptr; };
    // apiNames Field Functions 
    bool hasApiNames() const { return this->apiNames_ != nullptr;};
    void deleteApiNames() { this->apiNames_ = nullptr;};
    inline const vector<string> & getApiNames() const { DARABONBA_PTR_GET_CONST(apiNames_, vector<string>) };
    inline vector<string> getApiNames() { DARABONBA_PTR_GET(apiNames_, vector<string>) };
    inline ListApiNamesResponseBody& setApiNames(const vector<string> & apiNames) { DARABONBA_PTR_SET_VALUE(apiNames_, apiNames) };
    inline ListApiNamesResponseBody& setApiNames(vector<string> && apiNames) { DARABONBA_PTR_SET_RVALUE(apiNames_, apiNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiNamesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> apiNames_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
