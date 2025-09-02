// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUBLICMODELENGINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUBLICMODELENGINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class QueryPublicModelEngineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPublicModelEngineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReturnValue, returnValue_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPublicModelEngineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReturnValue, returnValue_);
    };
    QueryPublicModelEngineResponseBody() = default ;
    QueryPublicModelEngineResponseBody(const QueryPublicModelEngineResponseBody &) = default ;
    QueryPublicModelEngineResponseBody(QueryPublicModelEngineResponseBody &&) = default ;
    QueryPublicModelEngineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPublicModelEngineResponseBody() = default ;
    QueryPublicModelEngineResponseBody& operator=(const QueryPublicModelEngineResponseBody &) = default ;
    QueryPublicModelEngineResponseBody& operator=(QueryPublicModelEngineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->returnValue_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPublicModelEngineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // returnValue Field Functions 
    bool hasReturnValue() const { return this->returnValue_ != nullptr;};
    void deleteReturnValue() { this->returnValue_ = nullptr;};
    inline const vector<Darabonba::Json> & returnValue() const { DARABONBA_PTR_GET_CONST(returnValue_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> returnValue() { DARABONBA_PTR_GET(returnValue_, vector<Darabonba::Json>) };
    inline QueryPublicModelEngineResponseBody& setReturnValue(const vector<Darabonba::Json> & returnValue) { DARABONBA_PTR_SET_VALUE(returnValue_, returnValue) };
    inline QueryPublicModelEngineResponseBody& setReturnValue(vector<Darabonba::Json> && returnValue) { DARABONBA_PTR_SET_RVALUE(returnValue_, returnValue) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned information about objects.
    std::shared_ptr<vector<Darabonba::Json>> returnValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
