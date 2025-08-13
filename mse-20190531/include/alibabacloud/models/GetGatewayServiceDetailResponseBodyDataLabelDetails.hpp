// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATALABELDETAILS_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYSERVICEDETAILRESPONSEBODYDATALABELDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetGatewayServiceDetailResponseBodyDataLabelDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayServiceDetailResponseBodyDataLabelDetails& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayServiceDetailResponseBodyDataLabelDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    GetGatewayServiceDetailResponseBodyDataLabelDetails() = default ;
    GetGatewayServiceDetailResponseBodyDataLabelDetails(const GetGatewayServiceDetailResponseBodyDataLabelDetails &) = default ;
    GetGatewayServiceDetailResponseBodyDataLabelDetails(GetGatewayServiceDetailResponseBodyDataLabelDetails &&) = default ;
    GetGatewayServiceDetailResponseBodyDataLabelDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayServiceDetailResponseBodyDataLabelDetails() = default ;
    GetGatewayServiceDetailResponseBodyDataLabelDetails& operator=(const GetGatewayServiceDetailResponseBodyDataLabelDetails &) = default ;
    GetGatewayServiceDetailResponseBodyDataLabelDetails& operator=(GetGatewayServiceDetailResponseBodyDataLabelDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->values_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetGatewayServiceDetailResponseBodyDataLabelDetails& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline GetGatewayServiceDetailResponseBodyDataLabelDetails& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline GetGatewayServiceDetailResponseBodyDataLabelDetails& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The tag.
    std::shared_ptr<string> key_ = nullptr;
    // The tag value.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
