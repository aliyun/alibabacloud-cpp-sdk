// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetJobTemplateRequest() = default ;
    GetJobTemplateRequest(const GetJobTemplateRequest &) = default ;
    GetJobTemplateRequest(GetJobTemplateRequest &&) = default ;
    GetJobTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobTemplateRequest() = default ;
    GetJobTemplateRequest& operator=(const GetJobTemplateRequest &) = default ;
    GetJobTemplateRequest& operator=(GetJobTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetJobTemplateRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // 不传返回默认版本；传具体数字返回该版本；传 all 返回全部版本
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
