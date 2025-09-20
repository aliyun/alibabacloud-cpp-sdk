// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEPARSESETTINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANGEPARSESETTINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ChangeParseSettingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeParseSettingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeResult, changeResult_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeParseSettingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeResult, changeResult_);
    };
    ChangeParseSettingResponseBodyData() = default ;
    ChangeParseSettingResponseBodyData(const ChangeParseSettingResponseBodyData &) = default ;
    ChangeParseSettingResponseBodyData(ChangeParseSettingResponseBodyData &&) = default ;
    ChangeParseSettingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeParseSettingResponseBodyData() = default ;
    ChangeParseSettingResponseBodyData& operator=(const ChangeParseSettingResponseBodyData &) = default ;
    ChangeParseSettingResponseBodyData& operator=(ChangeParseSettingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeResult_ != nullptr; };
    // changeResult Field Functions 
    bool hasChangeResult() const { return this->changeResult_ != nullptr;};
    void deleteChangeResult() { this->changeResult_ = nullptr;};
    inline bool changeResult() const { DARABONBA_PTR_GET_DEFAULT(changeResult_, false) };
    inline ChangeParseSettingResponseBodyData& setChangeResult(bool changeResult) { DARABONBA_PTR_SET_VALUE(changeResult_, changeResult) };


  protected:
    std::shared_ptr<bool> changeResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
