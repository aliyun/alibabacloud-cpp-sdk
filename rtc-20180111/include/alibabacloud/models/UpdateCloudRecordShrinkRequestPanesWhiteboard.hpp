// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDRECORDSHRINKREQUESTPANESWHITEBOARD_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDRECORDSHRINKREQUESTPANESWHITEBOARD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateCloudRecordShrinkRequestPanesWhiteboard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudRecordShrinkRequestPanesWhiteboard& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteboardId, whiteboardId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudRecordShrinkRequestPanesWhiteboard& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteboardId, whiteboardId_);
    };
    UpdateCloudRecordShrinkRequestPanesWhiteboard() = default ;
    UpdateCloudRecordShrinkRequestPanesWhiteboard(const UpdateCloudRecordShrinkRequestPanesWhiteboard &) = default ;
    UpdateCloudRecordShrinkRequestPanesWhiteboard(UpdateCloudRecordShrinkRequestPanesWhiteboard &&) = default ;
    UpdateCloudRecordShrinkRequestPanesWhiteboard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudRecordShrinkRequestPanesWhiteboard() = default ;
    UpdateCloudRecordShrinkRequestPanesWhiteboard& operator=(const UpdateCloudRecordShrinkRequestPanesWhiteboard &) = default ;
    UpdateCloudRecordShrinkRequestPanesWhiteboard& operator=(UpdateCloudRecordShrinkRequestPanesWhiteboard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->whiteboardId_ != nullptr; };
    // whiteboardId Field Functions 
    bool hasWhiteboardId() const { return this->whiteboardId_ != nullptr;};
    void deleteWhiteboardId() { this->whiteboardId_ = nullptr;};
    inline string whiteboardId() const { DARABONBA_PTR_GET_DEFAULT(whiteboardId_, "") };
    inline UpdateCloudRecordShrinkRequestPanesWhiteboard& setWhiteboardId(string whiteboardId) { DARABONBA_PTR_SET_VALUE(whiteboardId_, whiteboardId) };


  protected:
    std::shared_ptr<string> whiteboardId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
