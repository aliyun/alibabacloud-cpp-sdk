// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHAPIPRODUCTREQUESTAPIS_HPP_
#define ALIBABACLOUD_MODELS_ATTACHAPIPRODUCTREQUESTAPIS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class AttachApiProductRequestApis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachApiProductRequestApis& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
    };
    friend void from_json(const Darabonba::Json& j, AttachApiProductRequestApis& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
    };
    AttachApiProductRequestApis() = default ;
    AttachApiProductRequestApis(const AttachApiProductRequestApis &) = default ;
    AttachApiProductRequestApis(AttachApiProductRequestApis &&) = default ;
    AttachApiProductRequestApis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachApiProductRequestApis() = default ;
    AttachApiProductRequestApis& operator=(const AttachApiProductRequestApis &) = default ;
    AttachApiProductRequestApis& operator=(AttachApiProductRequestApis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->stageName_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline AttachApiProductRequestApis& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline AttachApiProductRequestApis& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


  protected:
    // The API ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> apiId_ = nullptr;
    // The environment. Valid values:
    // 
    // *   **RELEASE**: the production environment
    // *   **PRE**: the staging environment
    // *   **TEST**: the test environment
    // 
    // This parameter is required.
    std::shared_ptr<string> stageName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
