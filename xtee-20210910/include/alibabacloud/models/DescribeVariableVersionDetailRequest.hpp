// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLEVERSIONDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLEVERSIONDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableVersionDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableVersionDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(objectCode, objectCode_);
      DARABONBA_PTR_TO_JSON(objectId, objectId_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableVersionDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(objectCode, objectCode_);
      DARABONBA_PTR_FROM_JSON(objectId, objectId_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeVariableVersionDetailRequest() = default ;
    DescribeVariableVersionDetailRequest(const DescribeVariableVersionDetailRequest &) = default ;
    DescribeVariableVersionDetailRequest(DescribeVariableVersionDetailRequest &&) = default ;
    DescribeVariableVersionDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableVersionDetailRequest() = default ;
    DescribeVariableVersionDetailRequest& operator=(const DescribeVariableVersionDetailRequest &) = default ;
    DescribeVariableVersionDetailRequest& operator=(DescribeVariableVersionDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->objectCode_ == nullptr && return this->objectId_ == nullptr && return this->regId_ == nullptr && return this->type_ == nullptr && return this->version_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeVariableVersionDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // objectCode Field Functions 
    bool hasObjectCode() const { return this->objectCode_ != nullptr;};
    void deleteObjectCode() { this->objectCode_ = nullptr;};
    inline string objectCode() const { DARABONBA_PTR_GET_DEFAULT(objectCode_, "") };
    inline DescribeVariableVersionDetailRequest& setObjectCode(string objectCode) { DARABONBA_PTR_SET_VALUE(objectCode_, objectCode) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline int64_t objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, 0L) };
    inline DescribeVariableVersionDetailRequest& setObjectId(int64_t objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeVariableVersionDetailRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVariableVersionDetailRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline DescribeVariableVersionDetailRequest& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Sets the language type for requests and received messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Associated variable name.
    std::shared_ptr<string> objectCode_ = nullptr;
    // Associated variable ID.
    std::shared_ptr<int64_t> objectId_ = nullptr;
    // Region code.
    std::shared_ptr<string> regId_ = nullptr;
    // Type.
    std::shared_ptr<string> type_ = nullptr;
    // Version.
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
