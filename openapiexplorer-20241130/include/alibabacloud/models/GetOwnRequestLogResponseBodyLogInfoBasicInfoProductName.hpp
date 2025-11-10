// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNREQUESTLOGRESPONSEBODYLOGINFOBASICINFOPRODUCTNAME_HPP_
#define ALIBABACLOUD_MODELS_GETOWNREQUESTLOGRESPONSEBODYLOGINFOBASICINFOPRODUCTNAME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName& obj) { 
      DARABONBA_PTR_TO_JSON(cnName, cnName_);
      DARABONBA_PTR_TO_JSON(enName, enName_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName& obj) { 
      DARABONBA_PTR_FROM_JSON(cnName, cnName_);
      DARABONBA_PTR_FROM_JSON(enName, enName_);
    };
    GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName() = default ;
    GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName(const GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName &) = default ;
    GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName(GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName &&) = default ;
    GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName() = default ;
    GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName& operator=(const GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName &) = default ;
    GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName& operator=(GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnName_ == nullptr
        && return this->enName_ == nullptr; };
    // cnName Field Functions 
    bool hasCnName() const { return this->cnName_ != nullptr;};
    void deleteCnName() { this->cnName_ = nullptr;};
    inline string cnName() const { DARABONBA_PTR_GET_DEFAULT(cnName_, "") };
    inline GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName& setCnName(string cnName) { DARABONBA_PTR_SET_VALUE(cnName_, cnName) };


    // enName Field Functions 
    bool hasEnName() const { return this->enName_ != nullptr;};
    void deleteEnName() { this->enName_ = nullptr;};
    inline string enName() const { DARABONBA_PTR_GET_DEFAULT(enName_, "") };
    inline GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName& setEnName(string enName) { DARABONBA_PTR_SET_VALUE(enName_, enName) };


  protected:
    // The product name in Chinese.
    std::shared_ptr<string> cnName_ = nullptr;
    // The product name in English.
    std::shared_ptr<string> enName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
