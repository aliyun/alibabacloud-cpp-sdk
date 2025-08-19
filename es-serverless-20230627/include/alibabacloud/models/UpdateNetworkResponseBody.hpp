// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateNetworkResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class UpdateNetworkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    UpdateNetworkResponseBody() = default ;
    UpdateNetworkResponseBody(const UpdateNetworkResponseBody &) = default ;
    UpdateNetworkResponseBody(UpdateNetworkResponseBody &&) = default ;
    UpdateNetworkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkResponseBody() = default ;
    UpdateNetworkResponseBody& operator=(const UpdateNetworkResponseBody &) = default ;
    UpdateNetworkResponseBody& operator=(UpdateNetworkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateNetworkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<UpdateNetworkResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<UpdateNetworkResponseBodyResult>) };
    inline vector<UpdateNetworkResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<UpdateNetworkResponseBodyResult>) };
    inline UpdateNetworkResponseBody& setResult(const vector<UpdateNetworkResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline UpdateNetworkResponseBody& setResult(vector<UpdateNetworkResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<UpdateNetworkResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
