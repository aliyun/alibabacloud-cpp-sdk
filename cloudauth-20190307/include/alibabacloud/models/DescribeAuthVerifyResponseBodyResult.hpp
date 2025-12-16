// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTHVERIFYRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTHVERIFYRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeAuthVerifyResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuthVerifyResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_TO_JSON(SpoofBackInfo, spoofBackInfo_);
      DARABONBA_PTR_TO_JSON(SpoofInfo, spoofInfo_);
      DARABONBA_PTR_TO_JSON(SubCode, subCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuthVerifyResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_FROM_JSON(SpoofBackInfo, spoofBackInfo_);
      DARABONBA_PTR_FROM_JSON(SpoofInfo, spoofInfo_);
      DARABONBA_PTR_FROM_JSON(SubCode, subCode_);
    };
    DescribeAuthVerifyResponseBodyResult() = default ;
    DescribeAuthVerifyResponseBodyResult(const DescribeAuthVerifyResponseBodyResult &) = default ;
    DescribeAuthVerifyResponseBodyResult(DescribeAuthVerifyResponseBodyResult &&) = default ;
    DescribeAuthVerifyResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuthVerifyResponseBodyResult() = default ;
    DescribeAuthVerifyResponseBodyResult& operator=(const DescribeAuthVerifyResponseBodyResult &) = default ;
    DescribeAuthVerifyResponseBodyResult& operator=(DescribeAuthVerifyResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->materialInfo_ == nullptr
        && return this->spoofBackInfo_ == nullptr && return this->spoofInfo_ == nullptr && return this->subCode_ == nullptr; };
    // materialInfo Field Functions 
    bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
    void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
    inline string materialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
    inline DescribeAuthVerifyResponseBodyResult& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


    // spoofBackInfo Field Functions 
    bool hasSpoofBackInfo() const { return this->spoofBackInfo_ != nullptr;};
    void deleteSpoofBackInfo() { this->spoofBackInfo_ = nullptr;};
    inline string spoofBackInfo() const { DARABONBA_PTR_GET_DEFAULT(spoofBackInfo_, "") };
    inline DescribeAuthVerifyResponseBodyResult& setSpoofBackInfo(string spoofBackInfo) { DARABONBA_PTR_SET_VALUE(spoofBackInfo_, spoofBackInfo) };


    // spoofInfo Field Functions 
    bool hasSpoofInfo() const { return this->spoofInfo_ != nullptr;};
    void deleteSpoofInfo() { this->spoofInfo_ = nullptr;};
    inline string spoofInfo() const { DARABONBA_PTR_GET_DEFAULT(spoofInfo_, "") };
    inline DescribeAuthVerifyResponseBodyResult& setSpoofInfo(string spoofInfo) { DARABONBA_PTR_SET_VALUE(spoofInfo_, spoofInfo) };


    // subCode Field Functions 
    bool hasSubCode() const { return this->subCode_ != nullptr;};
    void deleteSubCode() { this->subCode_ = nullptr;};
    inline string subCode() const { DARABONBA_PTR_GET_DEFAULT(subCode_, "") };
    inline DescribeAuthVerifyResponseBodyResult& setSubCode(string subCode) { DARABONBA_PTR_SET_VALUE(subCode_, subCode) };


  protected:
    std::shared_ptr<string> materialInfo_ = nullptr;
    std::shared_ptr<string> spoofBackInfo_ = nullptr;
    std::shared_ptr<string> spoofInfo_ = nullptr;
    std::shared_ptr<string> subCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
