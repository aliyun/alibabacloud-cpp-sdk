// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETJOBTEMPLATEDEFAULTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETJOBTEMPLATEDEFAULTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class SetJobTemplateDefaultVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetJobTemplateDefaultVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, SetJobTemplateDefaultVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    SetJobTemplateDefaultVersionRequest() = default ;
    SetJobTemplateDefaultVersionRequest(const SetJobTemplateDefaultVersionRequest &) = default ;
    SetJobTemplateDefaultVersionRequest(SetJobTemplateDefaultVersionRequest &&) = default ;
    SetJobTemplateDefaultVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetJobTemplateDefaultVersionRequest() = default ;
    SetJobTemplateDefaultVersionRequest& operator=(const SetJobTemplateDefaultVersionRequest &) = default ;
    SetJobTemplateDefaultVersionRequest& operator=(SetJobTemplateDefaultVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline SetJobTemplateDefaultVersionRequest& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The version number to set as the default.
    // 
    // This parameter is required.
    shared_ptr<int32_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
