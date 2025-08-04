// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTAUTOCHAPTERS_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTAUTOCHAPTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteRequestAutoChapters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteRequestAutoChapters& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteRequestAutoChapters& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
    };
    StartCloudNoteRequestAutoChapters() = default ;
    StartCloudNoteRequestAutoChapters(const StartCloudNoteRequestAutoChapters &) = default ;
    StartCloudNoteRequestAutoChapters(StartCloudNoteRequestAutoChapters &&) = default ;
    StartCloudNoteRequestAutoChapters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteRequestAutoChapters() = default ;
    StartCloudNoteRequestAutoChapters& operator=(const StartCloudNoteRequestAutoChapters &) = default ;
    StartCloudNoteRequestAutoChapters& operator=(StartCloudNoteRequestAutoChapters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline StartCloudNoteRequestAutoChapters& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
