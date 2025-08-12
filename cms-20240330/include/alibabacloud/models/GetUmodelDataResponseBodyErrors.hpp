// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUMODELDATARESPONSEBODYERRORS_HPP_
#define ALIBABACLOUD_MODELS_GETUMODELDATARESPONSEBODYERRORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetUmodelDataResponseBodyErrors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUmodelDataResponseBodyErrors& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetUmodelDataResponseBodyErrors& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetUmodelDataResponseBodyErrors() = default ;
    GetUmodelDataResponseBodyErrors(const GetUmodelDataResponseBodyErrors &) = default ;
    GetUmodelDataResponseBodyErrors(GetUmodelDataResponseBodyErrors &&) = default ;
    GetUmodelDataResponseBodyErrors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUmodelDataResponseBodyErrors() = default ;
    GetUmodelDataResponseBodyErrors& operator=(const GetUmodelDataResponseBodyErrors &) = default ;
    GetUmodelDataResponseBodyErrors& operator=(GetUmodelDataResponseBodyErrors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->type_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUmodelDataResponseBodyErrors& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetUmodelDataResponseBodyErrors& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
