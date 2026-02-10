// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTODELCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTODELCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyAutoDelConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoDelConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Days, days_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoDelConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Days, days_);
    };
    ModifyAutoDelConfigRequest() = default ;
    ModifyAutoDelConfigRequest(const ModifyAutoDelConfigRequest &) = default ;
    ModifyAutoDelConfigRequest(ModifyAutoDelConfigRequest &&) = default ;
    ModifyAutoDelConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoDelConfigRequest() = default ;
    ModifyAutoDelConfigRequest& operator=(const ModifyAutoDelConfigRequest &) = default ;
    ModifyAutoDelConfigRequest& operator=(ModifyAutoDelConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->days_ == nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline int32_t getDays() const { DARABONBA_PTR_GET_DEFAULT(days_, 0) };
    inline ModifyAutoDelConfigRequest& setDays(int32_t days) { DARABONBA_PTR_SET_VALUE(days_, days) };


  protected:
    // The number of days after which a detected vulnerability is automatically deleted. Unit: days. Valid values:
    // 
    // *   7
    // *   30
    // *   90
    shared_ptr<int32_t> days_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
