// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEMPOSSURLINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TEMPOSSURLINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class TempOssUrlIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TempOssUrlIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
    };
    friend void from_json(const Darabonba::Json& j, TempOssUrlIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
    };
    TempOssUrlIntlRequest() = default ;
    TempOssUrlIntlRequest(const TempOssUrlIntlRequest &) = default ;
    TempOssUrlIntlRequest(TempOssUrlIntlRequest &&) = default ;
    TempOssUrlIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TempOssUrlIntlRequest() = default ;
    TempOssUrlIntlRequest& operator=(const TempOssUrlIntlRequest &) = default ;
    TempOssUrlIntlRequest& operator=(TempOssUrlIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->objectName_ != nullptr; };
    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline TempOssUrlIntlRequest& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> objectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
