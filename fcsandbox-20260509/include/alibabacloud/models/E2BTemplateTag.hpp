// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_E2BTEMPLATETAG_HPP_
#define ALIBABACLOUD_MODELS_E2BTEMPLATETAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class E2BTemplateTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const E2BTemplateTag& obj) { 
      DARABONBA_PTR_TO_JSON(buildID, buildID_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, E2BTemplateTag& obj) { 
      DARABONBA_PTR_FROM_JSON(buildID, buildID_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(tag, tag_);
    };
    E2BTemplateTag() = default ;
    E2BTemplateTag(const E2BTemplateTag &) = default ;
    E2BTemplateTag(E2BTemplateTag &&) = default ;
    E2BTemplateTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~E2BTemplateTag() = default ;
    E2BTemplateTag& operator=(const E2BTemplateTag &) = default ;
    E2BTemplateTag& operator=(E2BTemplateTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildID_ == nullptr
        && this->createdAt_ == nullptr && this->tag_ == nullptr; };
    // buildID Field Functions 
    bool hasBuildID() const { return this->buildID_ != nullptr;};
    void deleteBuildID() { this->buildID_ = nullptr;};
    inline string getBuildID() const { DARABONBA_PTR_GET_DEFAULT(buildID_, "") };
    inline E2BTemplateTag& setBuildID(string buildID) { DARABONBA_PTR_SET_VALUE(buildID_, buildID) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline E2BTemplateTag& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline E2BTemplateTag& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    shared_ptr<string> buildID_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
