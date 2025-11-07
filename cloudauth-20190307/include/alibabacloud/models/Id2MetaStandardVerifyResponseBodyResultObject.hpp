// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METASTANDARDVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_ID2METASTANDARDVERIFYRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id2MetaStandardVerifyResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaStandardVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaStandardVerifyResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
    };
    Id2MetaStandardVerifyResponseBodyResultObject() = default ;
    Id2MetaStandardVerifyResponseBodyResultObject(const Id2MetaStandardVerifyResponseBodyResultObject &) = default ;
    Id2MetaStandardVerifyResponseBodyResultObject(Id2MetaStandardVerifyResponseBodyResultObject &&) = default ;
    Id2MetaStandardVerifyResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaStandardVerifyResponseBodyResultObject() = default ;
    Id2MetaStandardVerifyResponseBodyResultObject& operator=(const Id2MetaStandardVerifyResponseBodyResultObject &) = default ;
    Id2MetaStandardVerifyResponseBodyResultObject& operator=(Id2MetaStandardVerifyResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizCode_ == nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline Id2MetaStandardVerifyResponseBodyResultObject& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


  protected:
    // Verification result code:
    // - **1**: verification matches.
    // - **2**: verification does not match.
    // - **3**: no record found.
    std::shared_ptr<string> bizCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
