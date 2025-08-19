// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_ID2METAVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id2MetaVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
    };
    Id2MetaVerifyResponseBodyResultObject() = default ;
    Id2MetaVerifyResponseBodyResultObject(const Id2MetaVerifyResponseBodyResultObject &) = default ;
    Id2MetaVerifyResponseBodyResultObject(Id2MetaVerifyResponseBodyResultObject &&) = default ;
    Id2MetaVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaVerifyResponseBodyResultObject() = default ;
    Id2MetaVerifyResponseBodyResultObject& operator=(const Id2MetaVerifyResponseBodyResultObject &) = default ;
    Id2MetaVerifyResponseBodyResultObject& operator=(Id2MetaVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizCode_ != nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline Id2MetaVerifyResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


  protected:
    // Verification result code:
    // - **1**: Verification consistent.
    // - **2**: Verification inconsistent.
    // - **3**: No record found.
    std::shared_ptr<string> bizCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
