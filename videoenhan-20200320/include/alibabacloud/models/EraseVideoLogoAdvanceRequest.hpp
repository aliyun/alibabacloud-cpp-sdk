// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ERASEVIDEOLOGOADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ERASEVIDEOLOGOADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EraseVideoLogoAdvanceRequestBoxes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class EraseVideoLogoAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EraseVideoLogoAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Boxes, boxes_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, EraseVideoLogoAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Boxes, boxes_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    EraseVideoLogoAdvanceRequest() = default ;
    EraseVideoLogoAdvanceRequest(const EraseVideoLogoAdvanceRequest &) = default ;
    EraseVideoLogoAdvanceRequest(EraseVideoLogoAdvanceRequest &&) = default ;
    EraseVideoLogoAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EraseVideoLogoAdvanceRequest() = default ;
    EraseVideoLogoAdvanceRequest& operator=(const EraseVideoLogoAdvanceRequest &) = default ;
    EraseVideoLogoAdvanceRequest& operator=(EraseVideoLogoAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->boxes_ != nullptr
        && this->videoUrlObject_ != nullptr; };
    // boxes Field Functions 
    bool hasBoxes() const { return this->boxes_ != nullptr;};
    void deleteBoxes() { this->boxes_ = nullptr;};
    inline const vector<EraseVideoLogoAdvanceRequestBoxes> & boxes() const { DARABONBA_PTR_GET_CONST(boxes_, vector<EraseVideoLogoAdvanceRequestBoxes>) };
    inline vector<EraseVideoLogoAdvanceRequestBoxes> boxes() { DARABONBA_PTR_GET(boxes_, vector<EraseVideoLogoAdvanceRequestBoxes>) };
    inline EraseVideoLogoAdvanceRequest& setBoxes(const vector<EraseVideoLogoAdvanceRequestBoxes> & boxes) { DARABONBA_PTR_SET_VALUE(boxes_, boxes) };
    inline EraseVideoLogoAdvanceRequest& setBoxes(vector<EraseVideoLogoAdvanceRequestBoxes> && boxes) { DARABONBA_PTR_SET_RVALUE(boxes_, boxes) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline EraseVideoLogoAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    std::shared_ptr<vector<EraseVideoLogoAdvanceRequestBoxes>> boxes_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
