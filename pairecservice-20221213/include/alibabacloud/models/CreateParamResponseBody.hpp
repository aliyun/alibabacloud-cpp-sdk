// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPARAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEPARAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateParamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateParamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ParamId, paramId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateParamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamId, paramId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateParamResponseBody() = default ;
    CreateParamResponseBody(const CreateParamResponseBody &) = default ;
    CreateParamResponseBody(CreateParamResponseBody &&) = default ;
    CreateParamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateParamResponseBody() = default ;
    CreateParamResponseBody& operator=(const CreateParamResponseBody &) = default ;
    CreateParamResponseBody& operator=(CreateParamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paramId_ != nullptr
        && this->requestId_ != nullptr; };
    // paramId Field Functions 
    bool hasParamId() const { return this->paramId_ != nullptr;};
    void deleteParamId() { this->paramId_ = nullptr;};
    inline int64_t paramId() const { DARABONBA_PTR_GET_DEFAULT(paramId_, 0L) };
    inline CreateParamResponseBody& setParamId(int64_t paramId) { DARABONBA_PTR_SET_VALUE(paramId_, paramId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateParamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> paramId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
