// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETJOBTEMPLATEDEFAULTVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETJOBTEMPLATEDEFAULTVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class SetJobTemplateDefaultVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetJobTemplateDefaultVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetJobTemplateDefaultVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetJobTemplateDefaultVersionResponseBody() = default ;
    SetJobTemplateDefaultVersionResponseBody(const SetJobTemplateDefaultVersionResponseBody &) = default ;
    SetJobTemplateDefaultVersionResponseBody(SetJobTemplateDefaultVersionResponseBody &&) = default ;
    SetJobTemplateDefaultVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetJobTemplateDefaultVersionResponseBody() = default ;
    SetJobTemplateDefaultVersionResponseBody& operator=(const SetJobTemplateDefaultVersionResponseBody &) = default ;
    SetJobTemplateDefaultVersionResponseBody& operator=(SetJobTemplateDefaultVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultVersion_ == nullptr
        && this->gmtModifyTime_ == nullptr && this->requestId_ == nullptr; };
    // defaultVersion Field Functions 
    bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
    void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
    inline int32_t getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, 0) };
    inline SetJobTemplateDefaultVersionResponseBody& setDefaultVersion(int32_t defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string getGmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline SetJobTemplateDefaultVersionResponseBody& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetJobTemplateDefaultVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 设置后的默认版本号
    shared_ptr<int32_t> defaultVersion_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> gmtModifyTime_ {};
    // 本次请求的 ID，用于诊断和答疑。
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
