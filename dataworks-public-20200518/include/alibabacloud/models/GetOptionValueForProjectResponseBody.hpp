// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPTIONVALUEFORPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOPTIONVALUEFORPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetOptionValueForProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOptionValueForProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OptionValue, optionValue_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOptionValueForProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OptionValue, optionValue_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetOptionValueForProjectResponseBody() = default ;
    GetOptionValueForProjectResponseBody(const GetOptionValueForProjectResponseBody &) = default ;
    GetOptionValueForProjectResponseBody(GetOptionValueForProjectResponseBody &&) = default ;
    GetOptionValueForProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOptionValueForProjectResponseBody() = default ;
    GetOptionValueForProjectResponseBody& operator=(const GetOptionValueForProjectResponseBody &) = default ;
    GetOptionValueForProjectResponseBody& operator=(GetOptionValueForProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->optionValue_ != nullptr
        && this->requestId_ != nullptr; };
    // optionValue Field Functions 
    bool hasOptionValue() const { return this->optionValue_ != nullptr;};
    void deleteOptionValue() { this->optionValue_ = nullptr;};
    inline string optionValue() const { DARABONBA_PTR_GET_DEFAULT(optionValue_, "") };
    inline GetOptionValueForProjectResponseBody& setOptionValue(string optionValue) { DARABONBA_PTR_SET_VALUE(optionValue_, optionValue) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOptionValueForProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned In the example, cuNumber is a custom key.
    std::shared_ptr<string> optionValue_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
