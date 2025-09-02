// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASERVICEAPIREQUESTBODYPARAMS_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASERVICEAPIREQUESTBODYPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TestDataServiceApiRequestBodyParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestDataServiceApiRequestBodyParams& obj) { 
      DARABONBA_PTR_TO_JSON(ParamKey, paramKey_);
      DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
    };
    friend void from_json(const Darabonba::Json& j, TestDataServiceApiRequestBodyParams& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamKey, paramKey_);
      DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
    };
    TestDataServiceApiRequestBodyParams() = default ;
    TestDataServiceApiRequestBodyParams(const TestDataServiceApiRequestBodyParams &) = default ;
    TestDataServiceApiRequestBodyParams(TestDataServiceApiRequestBodyParams &&) = default ;
    TestDataServiceApiRequestBodyParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestDataServiceApiRequestBodyParams() = default ;
    TestDataServiceApiRequestBodyParams& operator=(const TestDataServiceApiRequestBodyParams &) = default ;
    TestDataServiceApiRequestBodyParams& operator=(TestDataServiceApiRequestBodyParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->paramKey_ != nullptr
        && this->paramValue_ != nullptr; };
    // paramKey Field Functions 
    bool hasParamKey() const { return this->paramKey_ != nullptr;};
    void deleteParamKey() { this->paramKey_ = nullptr;};
    inline string paramKey() const { DARABONBA_PTR_GET_DEFAULT(paramKey_, "") };
    inline TestDataServiceApiRequestBodyParams& setParamKey(string paramKey) { DARABONBA_PTR_SET_VALUE(paramKey_, paramKey) };


    // paramValue Field Functions 
    bool hasParamValue() const { return this->paramValue_ != nullptr;};
    void deleteParamValue() { this->paramValue_ = nullptr;};
    inline string paramValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
    inline TestDataServiceApiRequestBodyParams& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


  protected:
    // The name of the parameter.
    std::shared_ptr<string> paramKey_ = nullptr;
    // The value of the parameter.
    std::shared_ptr<string> paramValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
