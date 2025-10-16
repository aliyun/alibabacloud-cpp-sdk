// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDESKTOPOVERSOLDGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDESKTOPOVERSOLDGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDesktopOversoldGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDesktopOversoldGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(OversoldGroupId, oversoldGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDesktopOversoldGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(OversoldGroupId, oversoldGroupId_);
    };
    ModifyDesktopOversoldGroupResponseBodyData() = default ;
    ModifyDesktopOversoldGroupResponseBodyData(const ModifyDesktopOversoldGroupResponseBodyData &) = default ;
    ModifyDesktopOversoldGroupResponseBodyData(ModifyDesktopOversoldGroupResponseBodyData &&) = default ;
    ModifyDesktopOversoldGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDesktopOversoldGroupResponseBodyData() = default ;
    ModifyDesktopOversoldGroupResponseBodyData& operator=(const ModifyDesktopOversoldGroupResponseBodyData &) = default ;
    ModifyDesktopOversoldGroupResponseBodyData& operator=(ModifyDesktopOversoldGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->oversoldGroupId_ == nullptr; };
    // oversoldGroupId Field Functions 
    bool hasOversoldGroupId() const { return this->oversoldGroupId_ != nullptr;};
    void deleteOversoldGroupId() { this->oversoldGroupId_ = nullptr;};
    inline string oversoldGroupId() const { DARABONBA_PTR_GET_DEFAULT(oversoldGroupId_, "") };
    inline ModifyDesktopOversoldGroupResponseBodyData& setOversoldGroupId(string oversoldGroupId) { DARABONBA_PTR_SET_VALUE(oversoldGroupId_, oversoldGroupId) };


  protected:
    std::shared_ptr<string> oversoldGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
