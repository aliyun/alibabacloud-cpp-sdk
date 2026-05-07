// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAVAILABLELLMMODELSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAVAILABLELLMMODELSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetAvailableLLMModelsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAvailableLLMModelsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Models, models_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAvailableLLMModelsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Models, models_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAvailableLLMModelsResponseBody() = default ;
    GetAvailableLLMModelsResponseBody(const GetAvailableLLMModelsResponseBody &) = default ;
    GetAvailableLLMModelsResponseBody(GetAvailableLLMModelsResponseBody &&) = default ;
    GetAvailableLLMModelsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAvailableLLMModelsResponseBody() = default ;
    GetAvailableLLMModelsResponseBody& operator=(const GetAvailableLLMModelsResponseBody &) = default ;
    GetAvailableLLMModelsResponseBody& operator=(GetAvailableLLMModelsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->models_ == nullptr
        && this->requestId_ == nullptr; };
    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<string> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<string>) };
    inline vector<string> getModels() { DARABONBA_PTR_GET(models_, vector<string>) };
    inline GetAvailableLLMModelsResponseBody& setModels(const vector<string> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline GetAvailableLLMModelsResponseBody& setModels(vector<string> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAvailableLLMModelsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<string>> models_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
