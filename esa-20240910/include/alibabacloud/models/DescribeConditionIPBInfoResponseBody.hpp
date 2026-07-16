// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONDITIONIPBINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONDITIONIPBINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeConditionIPBInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConditionIPBInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Datas, datas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConditionIPBInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Datas, datas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeConditionIPBInfoResponseBody() = default ;
    DescribeConditionIPBInfoResponseBody(const DescribeConditionIPBInfoResponseBody &) = default ;
    DescribeConditionIPBInfoResponseBody(DescribeConditionIPBInfoResponseBody &&) = default ;
    DescribeConditionIPBInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConditionIPBInfoResponseBody() = default ;
    DescribeConditionIPBInfoResponseBody& operator=(const DescribeConditionIPBInfoResponseBody &) = default ;
    DescribeConditionIPBInfoResponseBody& operator=(DescribeConditionIPBInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Datas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Datas& obj) { 
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Datas& obj) { 
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Datas() = default ;
      Datas(const Datas &) = default ;
      Datas(Datas &&) = default ;
      Datas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Datas() = default ;
      Datas& operator=(const Datas &) = default ;
      Datas& operator=(Datas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->value_ == nullptr; };
      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Datas& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The returned data details, including the name of the country, ISP, or region and the corresponding identifier code.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->datas_ == nullptr
        && this->requestId_ == nullptr; };
    // datas Field Functions 
    bool hasDatas() const { return this->datas_ != nullptr;};
    void deleteDatas() { this->datas_ = nullptr;};
    inline const vector<DescribeConditionIPBInfoResponseBody::Datas> & getDatas() const { DARABONBA_PTR_GET_CONST(datas_, vector<DescribeConditionIPBInfoResponseBody::Datas>) };
    inline vector<DescribeConditionIPBInfoResponseBody::Datas> getDatas() { DARABONBA_PTR_GET(datas_, vector<DescribeConditionIPBInfoResponseBody::Datas>) };
    inline DescribeConditionIPBInfoResponseBody& setDatas(const vector<DescribeConditionIPBInfoResponseBody::Datas> & datas) { DARABONBA_PTR_SET_VALUE(datas_, datas) };
    inline DescribeConditionIPBInfoResponseBody& setDatas(vector<DescribeConditionIPBInfoResponseBody::Datas> && datas) { DARABONBA_PTR_SET_RVALUE(datas_, datas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConditionIPBInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data details.
    shared_ptr<vector<DescribeConditionIPBInfoResponseBody::Datas>> datas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
