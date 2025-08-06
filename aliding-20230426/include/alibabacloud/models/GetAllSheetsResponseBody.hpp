// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALLSHEETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALLSHEETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAllSheetsResponseBodyValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAllSheetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAllSheetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAllSheetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetAllSheetsResponseBody() = default ;
    GetAllSheetsResponseBody(const GetAllSheetsResponseBody &) = default ;
    GetAllSheetsResponseBody(GetAllSheetsResponseBody &&) = default ;
    GetAllSheetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAllSheetsResponseBody() = default ;
    GetAllSheetsResponseBody& operator=(const GetAllSheetsResponseBody &) = default ;
    GetAllSheetsResponseBody& operator=(GetAllSheetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->value_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAllSheetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const vector<GetAllSheetsResponseBodyValue> & value() const { DARABONBA_PTR_GET_CONST(value_, vector<GetAllSheetsResponseBodyValue>) };
    inline vector<GetAllSheetsResponseBodyValue> value() { DARABONBA_PTR_GET(value_, vector<GetAllSheetsResponseBodyValue>) };
    inline GetAllSheetsResponseBody& setValue(const vector<GetAllSheetsResponseBodyValue> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline GetAllSheetsResponseBody& setValue(vector<GetAllSheetsResponseBodyValue> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


  protected:
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<GetAllSheetsResponseBodyValue>> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
