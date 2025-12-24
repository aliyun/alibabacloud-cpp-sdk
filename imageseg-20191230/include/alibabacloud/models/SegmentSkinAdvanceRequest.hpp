// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTSKINADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTSKINADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentSkinAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentSkinAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(URL, URLObject_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentSkinAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(URL, URLObject_);
    };
    SegmentSkinAdvanceRequest() = default ;
    SegmentSkinAdvanceRequest(const SegmentSkinAdvanceRequest &) = default ;
    SegmentSkinAdvanceRequest(SegmentSkinAdvanceRequest &&) = default ;
    SegmentSkinAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentSkinAdvanceRequest() = default ;
    SegmentSkinAdvanceRequest& operator=(const SegmentSkinAdvanceRequest &) = default ;
    SegmentSkinAdvanceRequest& operator=(SegmentSkinAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->URLObject_ == nullptr; };
    // URLObject Field Functions 
    bool hasURLObject() const { return this->URLObject_ != nullptr;};
    void deleteURLObject() { this->URLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> URLObject() const { DARABONBA_GET(URLObject_) };
    inline SegmentSkinAdvanceRequest& setURLObject(shared_ptr<Darabonba::IStream> URLObject) { DARABONBA_SET_VALUE(URLObject_, URLObject) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> URLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
