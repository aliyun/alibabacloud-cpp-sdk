// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ATTACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class AttachWhitelistTemplateToInstanceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachWhitelistTemplateToInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, AttachWhitelistTemplateToInstanceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    AttachWhitelistTemplateToInstanceResponseBodyData() = default ;
    AttachWhitelistTemplateToInstanceResponseBodyData(const AttachWhitelistTemplateToInstanceResponseBodyData &) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyData(AttachWhitelistTemplateToInstanceResponseBodyData &&) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachWhitelistTemplateToInstanceResponseBodyData() = default ;
    AttachWhitelistTemplateToInstanceResponseBodyData& operator=(const AttachWhitelistTemplateToInstanceResponseBodyData &) = default ;
    AttachWhitelistTemplateToInstanceResponseBodyData& operator=(AttachWhitelistTemplateToInstanceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->status_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AttachWhitelistTemplateToInstanceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The status code returned. Valid values:
    // 
    // *   **ok**: The request is successful.
    // *   **error**: The request fails.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
