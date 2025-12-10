// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHEXPERIMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHEXPERIMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class PublishExperimentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishExperimentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
    };
    friend void from_json(const Darabonba::Json& j, PublishExperimentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
    };
    PublishExperimentRequest() = default ;
    PublishExperimentRequest(const PublishExperimentRequest &) = default ;
    PublishExperimentRequest(PublishExperimentRequest &&) = default ;
    PublishExperimentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishExperimentRequest() = default ;
    PublishExperimentRequest& operator=(const PublishExperimentRequest &) = default ;
    PublishExperimentRequest& operator=(PublishExperimentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->folderId_ == nullptr; };
    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline PublishExperimentRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> folderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
