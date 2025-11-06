// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMGSAPIRESPONSEBODYRESULTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTMGSAPIRESPONSEBODYRESULTCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMgsApiResponseBodyResultContentValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMgsApiResponseBodyResultContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMgsApiResponseBodyResultContent& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListMgsApiResponseBodyResultContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListMgsApiResponseBodyResultContent() = default ;
    ListMgsApiResponseBodyResultContent(const ListMgsApiResponseBodyResultContent &) = default ;
    ListMgsApiResponseBodyResultContent(ListMgsApiResponseBodyResultContent &&) = default ;
    ListMgsApiResponseBodyResultContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMgsApiResponseBodyResultContent() = default ;
    ListMgsApiResponseBodyResultContent& operator=(const ListMgsApiResponseBodyResultContent &) = default ;
    ListMgsApiResponseBodyResultContent& operator=(ListMgsApiResponseBodyResultContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorMessage_ == nullptr
        && return this->success_ == nullptr && return this->value_ == nullptr; };
    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListMgsApiResponseBodyResultContent& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMgsApiResponseBodyResultContent& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<Models::ListMgsApiResponseBodyResultContentValue> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<Models::ListMgsApiResponseBodyResultContentValue>) };
    inline vector<Models::ListMgsApiResponseBodyResultContentValue> value() { DARABONBA_PTR_GET(value_, vector<Models::ListMgsApiResponseBodyResultContentValue>) };
    inline ListMgsApiResponseBodyResultContent& setValue(const vector<Models::ListMgsApiResponseBodyResultContentValue> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline ListMgsApiResponseBodyResultContent& setValue(vector<Models::ListMgsApiResponseBodyResultContentValue> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<Models::ListMgsApiResponseBodyResultContentValue>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
