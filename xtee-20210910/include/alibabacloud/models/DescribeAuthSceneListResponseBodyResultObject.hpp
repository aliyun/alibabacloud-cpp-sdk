// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHSCENELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHSCENELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAuthSceneListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthSceneListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(serviceCode, serviceCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthSceneListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(serviceCode, serviceCode_);
    };
    DescribeAuthSceneListResponseBodyResultObject() = default ;
    DescribeAuthSceneListResponseBodyResultObject(const DescribeAuthSceneListResponseBodyResultObject &) = default ;
    DescribeAuthSceneListResponseBodyResultObject(DescribeAuthSceneListResponseBodyResultObject &&) = default ;
    DescribeAuthSceneListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthSceneListResponseBodyResultObject() = default ;
    DescribeAuthSceneListResponseBodyResultObject& operator=(const DescribeAuthSceneListResponseBodyResultObject &) = default ;
    DescribeAuthSceneListResponseBodyResultObject& operator=(DescribeAuthSceneListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serviceCode_ != nullptr; };
    // serviceCode Field Functions 
    bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
    void deleteServiceCode() { this->serviceCode_ = nullptr;};
    inline string serviceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
    inline DescribeAuthSceneListResponseBodyResultObject& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


  protected:
    // Service code
    std::shared_ptr<string> serviceCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
