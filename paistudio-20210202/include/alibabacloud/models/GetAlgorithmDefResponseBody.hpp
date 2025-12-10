// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALGORITHMDEFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALGORITHMDEFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetAlgorithmDefResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlgorithmDefResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlgorithmDefResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(Spec, spec_);
    };
    GetAlgorithmDefResponseBody() = default ;
    GetAlgorithmDefResponseBody(const GetAlgorithmDefResponseBody &) = default ;
    GetAlgorithmDefResponseBody(GetAlgorithmDefResponseBody &&) = default ;
    GetAlgorithmDefResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlgorithmDefResponseBody() = default ;
    GetAlgorithmDefResponseBody& operator=(const GetAlgorithmDefResponseBody &) = default ;
    GetAlgorithmDefResponseBody& operator=(GetAlgorithmDefResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->spec_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlgorithmDefResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline     const Darabonba::Json & spec() const { DARABONBA_GET(spec_) };
    Darabonba::Json & spec() { DARABONBA_GET(spec_) };
    inline GetAlgorithmDefResponseBody& setSpec(const Darabonba::Json & spec) { DARABONBA_SET_VALUE(spec_, spec) };
    inline GetAlgorithmDefResponseBody& setSpec(Darabonba::Json & spec) { DARABONBA_SET_RVALUE(spec_, spec) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    Darabonba::Json spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
