// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENCALLBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENCALLBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bss20140714
{
namespace Models
{
  class OpenCallbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenCallbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(paramStr, paramStr_);
    };
    friend void from_json(const Darabonba::Json& j, OpenCallbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(paramStr, paramStr_);
    };
    OpenCallbackRequest() = default ;
    OpenCallbackRequest(const OpenCallbackRequest &) = default ;
    OpenCallbackRequest(OpenCallbackRequest &&) = default ;
    OpenCallbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenCallbackRequest() = default ;
    OpenCallbackRequest& operator=(const OpenCallbackRequest &) = default ;
    OpenCallbackRequest& operator=(OpenCallbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paramStr_ == nullptr; };
    // paramStr Field Functions 
    bool hasParamStr() const { return this->paramStr_ != nullptr;};
    void deleteParamStr() { this->paramStr_ = nullptr;};
    inline string paramStr() const { DARABONBA_PTR_GET_DEFAULT(paramStr_, "") };
    inline OpenCallbackRequest& setParamStr(string paramStr) { DARABONBA_PTR_SET_VALUE(paramStr_, paramStr) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> paramStr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bss20140714
#endif
