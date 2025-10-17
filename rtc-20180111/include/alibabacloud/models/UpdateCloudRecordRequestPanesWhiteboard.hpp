// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDRECORDREQUESTPANESWHITEBOARD_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDRECORDREQUESTPANESWHITEBOARD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateCloudRecordRequestPanesWhiteboard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudRecordRequestPanesWhiteboard& obj) { 
      DARABONBA_PTR_TO_JSON(WhiteboardId, whiteboardId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudRecordRequestPanesWhiteboard& obj) { 
      DARABONBA_PTR_FROM_JSON(WhiteboardId, whiteboardId_);
    };
    UpdateCloudRecordRequestPanesWhiteboard() = default ;
    UpdateCloudRecordRequestPanesWhiteboard(const UpdateCloudRecordRequestPanesWhiteboard &) = default ;
    UpdateCloudRecordRequestPanesWhiteboard(UpdateCloudRecordRequestPanesWhiteboard &&) = default ;
    UpdateCloudRecordRequestPanesWhiteboard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudRecordRequestPanesWhiteboard() = default ;
    UpdateCloudRecordRequestPanesWhiteboard& operator=(const UpdateCloudRecordRequestPanesWhiteboard &) = default ;
    UpdateCloudRecordRequestPanesWhiteboard& operator=(UpdateCloudRecordRequestPanesWhiteboard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->whiteboardId_ == nullptr; };
    // whiteboardId Field Functions 
    bool hasWhiteboardId() const { return this->whiteboardId_ != nullptr;};
    void deleteWhiteboardId() { this->whiteboardId_ = nullptr;};
    inline string whiteboardId() const { DARABONBA_PTR_GET_DEFAULT(whiteboardId_, "") };
    inline UpdateCloudRecordRequestPanesWhiteboard& setWhiteboardId(string whiteboardId) { DARABONBA_PTR_SET_VALUE(whiteboardId_, whiteboardId) };


  protected:
    std::shared_ptr<string> whiteboardId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
