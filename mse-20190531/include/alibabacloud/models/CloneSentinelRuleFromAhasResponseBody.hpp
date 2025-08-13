// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONESENTINELRULEFROMAHASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLONESENTINELRULEFROMAHASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CloneSentinelRuleFromAhasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneSentinelRuleFromAhasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneSentinelRuleFromAhasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloneSentinelRuleFromAhasResponseBody() = default ;
    CloneSentinelRuleFromAhasResponseBody(const CloneSentinelRuleFromAhasResponseBody &) = default ;
    CloneSentinelRuleFromAhasResponseBody(CloneSentinelRuleFromAhasResponseBody &&) = default ;
    CloneSentinelRuleFromAhasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneSentinelRuleFromAhasResponseBody() = default ;
    CloneSentinelRuleFromAhasResponseBody& operator=(const CloneSentinelRuleFromAhasResponseBody &) = default ;
    CloneSentinelRuleFromAhasResponseBody& operator=(CloneSentinelRuleFromAhasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const map<string, vector<string>> & data() const { DARABONBA_PTR_GET_CONST(data_, map<string, vector<string>>) };
    inline map<string, vector<string>> data() { DARABONBA_PTR_GET(data_, map<string, vector<string>>) };
    inline CloneSentinelRuleFromAhasResponseBody& setData(const map<string, vector<string>> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloneSentinelRuleFromAhasResponseBody& setData(map<string, vector<string>> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloneSentinelRuleFromAhasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    std::shared_ptr<map<string, vector<string>>> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
