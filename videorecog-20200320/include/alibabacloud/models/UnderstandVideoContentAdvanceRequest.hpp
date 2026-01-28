// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNDERSTANDVIDEOCONTENTADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNDERSTANDVIDEOCONTENTADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class UnderstandVideoContentAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnderstandVideoContentAdvanceRequest& obj) { 
      // videoURLObject_ is stream
    };
    friend void from_json(const Darabonba::Json& j, UnderstandVideoContentAdvanceRequest& obj) { 
      // videoURLObject_ is stream
    };
    UnderstandVideoContentAdvanceRequest() = default ;
    UnderstandVideoContentAdvanceRequest(const UnderstandVideoContentAdvanceRequest &) = default ;
    UnderstandVideoContentAdvanceRequest(UnderstandVideoContentAdvanceRequest &&) = default ;
    UnderstandVideoContentAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnderstandVideoContentAdvanceRequest() = default ;
    UnderstandVideoContentAdvanceRequest& operator=(const UnderstandVideoContentAdvanceRequest &) = default ;
    UnderstandVideoContentAdvanceRequest& operator=(UnderstandVideoContentAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoURLObject_ == nullptr; };
    // videoURLObject Field Functions 
    bool hasVideoURLObject() const { return this->videoURLObject_ != nullptr;};
    void deleteVideoURLObject() { this->videoURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getVideoURLObject() const { DARABONBA_GET(videoURLObject_) };
    inline UnderstandVideoContentAdvanceRequest& setVideoURLObject(shared_ptr<Darabonba::IStream> videoURLObject) { DARABONBA_SET_VALUE(videoURLObject_, videoURLObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoURLObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
