// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALGORITHMDEFSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALGORITHMDEFSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetAlgorithmDefsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlgorithmDefsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Specs, specs_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlgorithmDefsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Specs, specs_);
    };
    GetAlgorithmDefsResponseBody() = default ;
    GetAlgorithmDefsResponseBody(const GetAlgorithmDefsResponseBody &) = default ;
    GetAlgorithmDefsResponseBody(GetAlgorithmDefsResponseBody &&) = default ;
    GetAlgorithmDefsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlgorithmDefsResponseBody() = default ;
    GetAlgorithmDefsResponseBody& operator=(const GetAlgorithmDefsResponseBody &) = default ;
    GetAlgorithmDefsResponseBody& operator=(GetAlgorithmDefsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->specs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlgorithmDefsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specs Field Functions 
    bool hasSpecs() const { return this->specs_ != nullptr;};
    void deleteSpecs() { this->specs_ = nullptr;};
    inline const vector<Darabonba::Json> & specs() const { DARABONBA_PTR_GET_CONST(specs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> specs() { DARABONBA_PTR_GET(specs_, vector<Darabonba::Json>) };
    inline GetAlgorithmDefsResponseBody& setSpecs(const vector<Darabonba::Json> & specs) { DARABONBA_PTR_SET_VALUE(specs_, specs) };
    inline GetAlgorithmDefsResponseBody& setSpecs(vector<Darabonba::Json> && specs) { DARABONBA_PTR_SET_RVALUE(specs_, specs) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> specs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
