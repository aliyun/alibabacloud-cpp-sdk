// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEDIAMARKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEDIAMARKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AddMediaMarksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMediaMarksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaMarks, mediaMarks_);
    };
    friend void from_json(const Darabonba::Json& j, AddMediaMarksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaMarks, mediaMarks_);
    };
    AddMediaMarksRequest() = default ;
    AddMediaMarksRequest(const AddMediaMarksRequest &) = default ;
    AddMediaMarksRequest(AddMediaMarksRequest &&) = default ;
    AddMediaMarksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMediaMarksRequest() = default ;
    AddMediaMarksRequest& operator=(const AddMediaMarksRequest &) = default ;
    AddMediaMarksRequest& operator=(AddMediaMarksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaId_ == nullptr
        && return this->mediaMarks_ == nullptr; };
    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline AddMediaMarksRequest& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaMarks Field Functions 
    bool hasMediaMarks() const { return this->mediaMarks_ != nullptr;};
    void deleteMediaMarks() { this->mediaMarks_ = nullptr;};
    inline string mediaMarks() const { DARABONBA_PTR_GET_DEFAULT(mediaMarks_, "") };
    inline AddMediaMarksRequest& setMediaMarks(string mediaMarks) { DARABONBA_PTR_SET_VALUE(mediaMarks_, mediaMarks) };


  protected:
    // The ID of the media asset.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The mark information. The value must be a JSONArray.
    // 
    // This parameter is required.
    std::shared_ptr<string> mediaMarks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
