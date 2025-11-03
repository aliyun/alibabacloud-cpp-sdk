// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESECSINFOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESECSINFOLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesEcsInfoListResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListInstancesEcsInfoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesEcsInfoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesEcsInfoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    ListInstancesEcsInfoListResponseBody() = default ;
    ListInstancesEcsInfoListResponseBody(const ListInstancesEcsInfoListResponseBody &) = default ;
    ListInstancesEcsInfoListResponseBody(ListInstancesEcsInfoListResponseBody &&) = default ;
    ListInstancesEcsInfoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesEcsInfoListResponseBody() = default ;
    ListInstancesEcsInfoListResponseBody& operator=(const ListInstancesEcsInfoListResponseBody &) = default ;
    ListInstancesEcsInfoListResponseBody& operator=(ListInstancesEcsInfoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListInstancesEcsInfoListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListInstancesEcsInfoListResponseBodyData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<ListInstancesEcsInfoListResponseBodyData>) };
    inline vector<ListInstancesEcsInfoListResponseBodyData> data() { DARABONBA_PTR_GET(data_, vector<ListInstancesEcsInfoListResponseBodyData>) };
    inline ListInstancesEcsInfoListResponseBody& setData(const vector<ListInstancesEcsInfoListResponseBodyData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListInstancesEcsInfoListResponseBody& setData(vector<ListInstancesEcsInfoListResponseBodyData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListInstancesEcsInfoListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<vector<ListInstancesEcsInfoListResponseBodyData>> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
