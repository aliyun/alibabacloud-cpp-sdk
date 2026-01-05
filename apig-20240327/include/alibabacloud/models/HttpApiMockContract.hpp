// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIMOCKCONTRACT_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIMOCKCONTRACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiMockContract : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiMockContract& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(responseCode, responseCode_);
      DARABONBA_PTR_TO_JSON(responseContent, responseContent_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiMockContract& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(responseCode, responseCode_);
      DARABONBA_PTR_FROM_JSON(responseContent, responseContent_);
    };
    HttpApiMockContract() = default ;
    HttpApiMockContract(const HttpApiMockContract &) = default ;
    HttpApiMockContract(HttpApiMockContract &&) = default ;
    HttpApiMockContract(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiMockContract() = default ;
    HttpApiMockContract& operator=(const HttpApiMockContract &) = default ;
    HttpApiMockContract& operator=(HttpApiMockContract &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->responseCode_ == nullptr && this->responseContent_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline HttpApiMockContract& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // responseCode Field Functions 
    bool hasResponseCode() const { return this->responseCode_ != nullptr;};
    void deleteResponseCode() { this->responseCode_ = nullptr;};
    inline int32_t getResponseCode() const { DARABONBA_PTR_GET_DEFAULT(responseCode_, 0) };
    inline HttpApiMockContract& setResponseCode(int32_t responseCode) { DARABONBA_PTR_SET_VALUE(responseCode_, responseCode) };


    // responseContent Field Functions 
    bool hasResponseContent() const { return this->responseContent_ != nullptr;};
    void deleteResponseContent() { this->responseContent_ = nullptr;};
    inline string getResponseContent() const { DARABONBA_PTR_GET_DEFAULT(responseContent_, "") };
    inline HttpApiMockContract& setResponseContent(string responseContent) { DARABONBA_PTR_SET_VALUE(responseContent_, responseContent) };


  protected:
    shared_ptr<bool> enable_ {};
    shared_ptr<int32_t> responseCode_ {};
    shared_ptr<string> responseContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
