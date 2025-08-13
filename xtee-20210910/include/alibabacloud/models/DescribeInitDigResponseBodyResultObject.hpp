// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINITDIGRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINITDIGRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeInitDigResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInitDigResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(TipInfo, tipInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInitDigResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(TipInfo, tipInfo_);
    };
    DescribeInitDigResponseBodyResultObject() = default ;
    DescribeInitDigResponseBodyResultObject(const DescribeInitDigResponseBodyResultObject &) = default ;
    DescribeInitDigResponseBodyResultObject(DescribeInitDigResponseBodyResultObject &&) = default ;
    DescribeInitDigResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInitDigResponseBodyResultObject() = default ;
    DescribeInitDigResponseBodyResultObject& operator=(const DescribeInitDigResponseBodyResultObject &) = default ;
    DescribeInitDigResponseBodyResultObject& operator=(DescribeInitDigResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tipInfo_ != nullptr; };
    // tipInfo Field Functions 
    bool hasTipInfo() const { return this->tipInfo_ != nullptr;};
    void deleteTipInfo() { this->tipInfo_ = nullptr;};
    inline string tipInfo() const { DARABONBA_PTR_GET_DEFAULT(tipInfo_, "") };
    inline DescribeInitDigResponseBodyResultObject& setTipInfo(string tipInfo) { DARABONBA_PTR_SET_VALUE(tipInfo_, tipInfo) };


  protected:
    // Prompt information
    std::shared_ptr<string> tipInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
