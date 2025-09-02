// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTDATASERVICEAPIREQUESTPATHPARAMS_HPP_
#define ALIBABACLOUD_MODELS_TESTDATASERVICEAPIREQUESTPATHPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TestDataServiceApiRequestPathParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestDataServiceApiRequestPathParams& obj) { 
      DARABONBA_PTR_TO_JSON(ParamKey, paramKey_);
      DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
    };
    friend void from_json(const Darabonba::Json& j, TestDataServiceApiRequestPathParams& obj) { 
      DARABONBA_PTR_FROM_JSON(ParamKey, paramKey_);
      DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
    };
    TestDataServiceApiRequestPathParams() = default ;
    TestDataServiceApiRequestPathParams(const TestDataServiceApiRequestPathParams &) = default ;
    TestDataServiceApiRequestPathParams(TestDataServiceApiRequestPathParams &&) = default ;
    TestDataServiceApiRequestPathParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestDataServiceApiRequestPathParams() = default ;
    TestDataServiceApiRequestPathParams& operator=(const TestDataServiceApiRequestPathParams &) = default ;
    TestDataServiceApiRequestPathParams& operator=(TestDataServiceApiRequestPathParams &&) = default ;
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
    inline TestDataServiceApiRequestPathParams& setParamKey(string paramKey) { DARABONBA_PTR_SET_VALUE(paramKey_, paramKey) };


    // paramValue Field Functions 
    bool hasParamValue() const { return this->paramValue_ != nullptr;};
    void deleteParamValue() { this->paramValue_ = nullptr;};
    inline string paramValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
    inline TestDataServiceApiRequestPathParams& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


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
