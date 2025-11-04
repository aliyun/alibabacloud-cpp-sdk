// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVESNAPSHOTJOBREQUESTSTREAMINPUT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVESNAPSHOTJOBREQUESTSTREAMINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveSnapshotJobRequestStreamInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveSnapshotJobRequestStreamInput& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveSnapshotJobRequestStreamInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    SubmitLiveSnapshotJobRequestStreamInput() = default ;
    SubmitLiveSnapshotJobRequestStreamInput(const SubmitLiveSnapshotJobRequestStreamInput &) = default ;
    SubmitLiveSnapshotJobRequestStreamInput(SubmitLiveSnapshotJobRequestStreamInput &&) = default ;
    SubmitLiveSnapshotJobRequestStreamInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveSnapshotJobRequestStreamInput() = default ;
    SubmitLiveSnapshotJobRequestStreamInput& operator=(const SubmitLiveSnapshotJobRequestStreamInput &) = default ;
    SubmitLiveSnapshotJobRequestStreamInput& operator=(SubmitLiveSnapshotJobRequestStreamInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && return this->url_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitLiveSnapshotJobRequestStreamInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitLiveSnapshotJobRequestStreamInput& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The type of the input stream. The value can only be rtmp.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The URL of the input stream.
    // 
    // *   It cannot exceed 255 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
