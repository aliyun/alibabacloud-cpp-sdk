// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTTEXTPOLISH_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTTEXTPOLISH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteRequestTextPolish : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteRequestTextPolish& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteRequestTextPolish& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    StartCloudNoteRequestTextPolish() = default ;
    StartCloudNoteRequestTextPolish(const StartCloudNoteRequestTextPolish &) = default ;
    StartCloudNoteRequestTextPolish(StartCloudNoteRequestTextPolish &&) = default ;
    StartCloudNoteRequestTextPolish(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteRequestTextPolish() = default ;
    StartCloudNoteRequestTextPolish& operator=(const StartCloudNoteRequestTextPolish &) = default ;
    StartCloudNoteRequestTextPolish& operator=(StartCloudNoteRequestTextPolish &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline StartCloudNoteRequestTextPolish& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
