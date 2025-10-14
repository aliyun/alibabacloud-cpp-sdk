// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANTARGETSHTTPREQUESTTARGET_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANTARGETSHTTPREQUESTTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanTargetsHttpRequestTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanTargetsHttpRequestTarget& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanTargetsHttpRequestTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    MigrationJobPlanTargetsHttpRequestTarget() = default ;
    MigrationJobPlanTargetsHttpRequestTarget(const MigrationJobPlanTargetsHttpRequestTarget &) = default ;
    MigrationJobPlanTargetsHttpRequestTarget(MigrationJobPlanTargetsHttpRequestTarget &&) = default ;
    MigrationJobPlanTargetsHttpRequestTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanTargetsHttpRequestTarget() = default ;
    MigrationJobPlanTargetsHttpRequestTarget& operator=(const MigrationJobPlanTargetsHttpRequestTarget &) = default ;
    MigrationJobPlanTargetsHttpRequestTarget& operator=(MigrationJobPlanTargetsHttpRequestTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && return this->method_ == nullptr && return this->url_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline MigrationJobPlanTargetsHttpRequestTarget& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline MigrationJobPlanTargetsHttpRequestTarget& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline MigrationJobPlanTargetsHttpRequestTarget& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
