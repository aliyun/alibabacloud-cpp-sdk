// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOINSIGHTSCAPTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_VIDEOINSIGHTSCAPTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PersonReferenceConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class VideoInsightsCaptionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoInsightsCaptionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(PersonReference, personReference_);
    };
    friend void from_json(const Darabonba::Json& j, VideoInsightsCaptionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(PersonReference, personReference_);
    };
    VideoInsightsCaptionConfig() = default ;
    VideoInsightsCaptionConfig(const VideoInsightsCaptionConfig &) = default ;
    VideoInsightsCaptionConfig(VideoInsightsCaptionConfig &&) = default ;
    VideoInsightsCaptionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoInsightsCaptionConfig() = default ;
    VideoInsightsCaptionConfig& operator=(const VideoInsightsCaptionConfig &) = default ;
    VideoInsightsCaptionConfig& operator=(VideoInsightsCaptionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->personReference_ == nullptr; };
    // personReference Field Functions 
    bool hasPersonReference() const { return this->personReference_ != nullptr;};
    void deletePersonReference() { this->personReference_ = nullptr;};
    inline const PersonReferenceConfig & getPersonReference() const { DARABONBA_PTR_GET_CONST(personReference_, PersonReferenceConfig) };
    inline PersonReferenceConfig getPersonReference() { DARABONBA_PTR_GET(personReference_, PersonReferenceConfig) };
    inline VideoInsightsCaptionConfig& setPersonReference(const PersonReferenceConfig & personReference) { DARABONBA_PTR_SET_VALUE(personReference_, personReference) };
    inline VideoInsightsCaptionConfig& setPersonReference(PersonReferenceConfig && personReference) { DARABONBA_PTR_SET_RVALUE(personReference_, personReference) };


  protected:
    shared_ptr<PersonReferenceConfig> personReference_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
