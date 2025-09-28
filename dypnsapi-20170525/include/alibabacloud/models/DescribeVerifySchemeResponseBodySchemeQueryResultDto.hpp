// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYSCHEMERESPONSEBODYSCHEMEQUERYRESULTDTO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYSCHEMERESPONSEBODYSCHEMEQUERYRESULTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class DescribeVerifySchemeResponseBodySchemeQueryResultDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifySchemeResponseBodySchemeQueryResultDTO& obj) { 
      DARABONBA_PTR_TO_JSON(AppEncryptInfo, appEncryptInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifySchemeResponseBodySchemeQueryResultDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(AppEncryptInfo, appEncryptInfo_);
    };
    DescribeVerifySchemeResponseBodySchemeQueryResultDTO() = default ;
    DescribeVerifySchemeResponseBodySchemeQueryResultDTO(const DescribeVerifySchemeResponseBodySchemeQueryResultDTO &) = default ;
    DescribeVerifySchemeResponseBodySchemeQueryResultDTO(DescribeVerifySchemeResponseBodySchemeQueryResultDTO &&) = default ;
    DescribeVerifySchemeResponseBodySchemeQueryResultDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifySchemeResponseBodySchemeQueryResultDTO() = default ;
    DescribeVerifySchemeResponseBodySchemeQueryResultDTO& operator=(const DescribeVerifySchemeResponseBodySchemeQueryResultDTO &) = default ;
    DescribeVerifySchemeResponseBodySchemeQueryResultDTO& operator=(DescribeVerifySchemeResponseBodySchemeQueryResultDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appEncryptInfo_ != nullptr; };
    // appEncryptInfo Field Functions 
    bool hasAppEncryptInfo() const { return this->appEncryptInfo_ != nullptr;};
    void deleteAppEncryptInfo() { this->appEncryptInfo_ = nullptr;};
    inline string appEncryptInfo() const { DARABONBA_PTR_GET_DEFAULT(appEncryptInfo_, "") };
    inline DescribeVerifySchemeResponseBodySchemeQueryResultDTO& setAppEncryptInfo(string appEncryptInfo) { DARABONBA_PTR_SET_VALUE(appEncryptInfo_, appEncryptInfo) };


  protected:
    // The key generated when you create a service in the console.
    std::shared_ptr<string> appEncryptInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
