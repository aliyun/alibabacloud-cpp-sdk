// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPLITVIDEOPARTSADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SPLITVIDEOPARTSADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class SplitVideoPartsAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SplitVideoPartsAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_TO_JSON(MinTime, minTime_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      // videoUrlObject_ is stream
    };
    friend void from_json(const Darabonba::Json& j, SplitVideoPartsAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxTime, maxTime_);
      DARABONBA_PTR_FROM_JSON(MinTime, minTime_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      // videoUrlObject_ is stream
    };
    SplitVideoPartsAdvanceRequest() = default ;
    SplitVideoPartsAdvanceRequest(const SplitVideoPartsAdvanceRequest &) = default ;
    SplitVideoPartsAdvanceRequest(SplitVideoPartsAdvanceRequest &&) = default ;
    SplitVideoPartsAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SplitVideoPartsAdvanceRequest() = default ;
    SplitVideoPartsAdvanceRequest& operator=(const SplitVideoPartsAdvanceRequest &) = default ;
    SplitVideoPartsAdvanceRequest& operator=(SplitVideoPartsAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxTime_ == nullptr
        && this->minTime_ == nullptr && this->template_ == nullptr && this->videoUrlObject_ == nullptr; };
    // maxTime Field Functions 
    bool hasMaxTime() const { return this->maxTime_ != nullptr;};
    void deleteMaxTime() { this->maxTime_ = nullptr;};
    inline int32_t getMaxTime() const { DARABONBA_PTR_GET_DEFAULT(maxTime_, 0) };
    inline SplitVideoPartsAdvanceRequest& setMaxTime(int32_t maxTime) { DARABONBA_PTR_SET_VALUE(maxTime_, maxTime) };


    // minTime Field Functions 
    bool hasMinTime() const { return this->minTime_ != nullptr;};
    void deleteMinTime() { this->minTime_ = nullptr;};
    inline int32_t getMinTime() const { DARABONBA_PTR_GET_DEFAULT(minTime_, 0) };
    inline SplitVideoPartsAdvanceRequest& setMinTime(int32_t minTime) { DARABONBA_PTR_SET_VALUE(minTime_, minTime) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline SplitVideoPartsAdvanceRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getVideoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline SplitVideoPartsAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    shared_ptr<int32_t> maxTime_ {};
    shared_ptr<int32_t> minTime_ {};
    shared_ptr<string> template_ {};
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
