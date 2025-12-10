// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOVERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MoveResourcesResponseBodyResponses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class MoveResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Responses, responses_);
    };
    friend void from_json(const Darabonba::Json& j, MoveResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Responses, responses_);
    };
    MoveResourcesResponseBody() = default ;
    MoveResourcesResponseBody(const MoveResourcesResponseBody &) = default ;
    MoveResourcesResponseBody(MoveResourcesResponseBody &&) = default ;
    MoveResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveResourcesResponseBody() = default ;
    MoveResourcesResponseBody& operator=(const MoveResourcesResponseBody &) = default ;
    MoveResourcesResponseBody& operator=(MoveResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->responses_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MoveResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responses Field Functions 
    bool hasResponses() const { return this->responses_ != nullptr;};
    void deleteResponses() { this->responses_ = nullptr;};
    inline const vector<MoveResourcesResponseBodyResponses> & responses() const { DARABONBA_PTR_GET_CONST(responses_, vector<MoveResourcesResponseBodyResponses>) };
    inline vector<MoveResourcesResponseBodyResponses> responses() { DARABONBA_PTR_GET(responses_, vector<MoveResourcesResponseBodyResponses>) };
    inline MoveResourcesResponseBody& setResponses(const vector<MoveResourcesResponseBodyResponses> & responses) { DARABONBA_PTR_SET_VALUE(responses_, responses) };
    inline MoveResourcesResponseBody& setResponses(vector<MoveResourcesResponseBodyResponses> && responses) { DARABONBA_PTR_SET_RVALUE(responses_, responses) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned results.
    std::shared_ptr<vector<MoveResourcesResponseBodyResponses>> responses_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
