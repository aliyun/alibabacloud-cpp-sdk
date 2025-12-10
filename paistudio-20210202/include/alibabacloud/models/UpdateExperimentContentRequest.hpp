// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXPERIMENTCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXPERIMENTCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class UpdateExperimentContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExperimentContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExperimentContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    UpdateExperimentContentRequest() = default ;
    UpdateExperimentContentRequest(const UpdateExperimentContentRequest &) = default ;
    UpdateExperimentContentRequest(UpdateExperimentContentRequest &&) = default ;
    UpdateExperimentContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExperimentContentRequest() = default ;
    UpdateExperimentContentRequest& operator=(const UpdateExperimentContentRequest &) = default ;
    UpdateExperimentContentRequest& operator=(UpdateExperimentContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->version_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateExperimentContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline UpdateExperimentContentRequest& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
