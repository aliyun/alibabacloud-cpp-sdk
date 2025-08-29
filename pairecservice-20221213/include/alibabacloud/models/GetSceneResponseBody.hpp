// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSCENERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSceneResponseBodyFlows.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetSceneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSceneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Flows, flows_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSceneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Flows, flows_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSceneResponseBody() = default ;
    GetSceneResponseBody(const GetSceneResponseBody &) = default ;
    GetSceneResponseBody(GetSceneResponseBody &&) = default ;
    GetSceneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSceneResponseBody() = default ;
    GetSceneResponseBody& operator=(const GetSceneResponseBody &) = default ;
    GetSceneResponseBody& operator=(GetSceneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->flows_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetSceneResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flows Field Functions 
    bool hasFlows() const { return this->flows_ != nullptr;};
    void deleteFlows() { this->flows_ = nullptr;};
    inline const vector<GetSceneResponseBodyFlows> & flows() const { DARABONBA_PTR_GET_CONST(flows_, vector<GetSceneResponseBodyFlows>) };
    inline vector<GetSceneResponseBodyFlows> flows() { DARABONBA_PTR_GET(flows_, vector<GetSceneResponseBodyFlows>) };
    inline GetSceneResponseBody& setFlows(const vector<GetSceneResponseBodyFlows> & flows) { DARABONBA_PTR_SET_VALUE(flows_, flows) };
    inline GetSceneResponseBody& setFlows(vector<GetSceneResponseBodyFlows> && flows) { DARABONBA_PTR_SET_RVALUE(flows_, flows) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSceneResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSceneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<GetSceneResponseBodyFlows>> flows_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
