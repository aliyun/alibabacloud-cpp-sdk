// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYAPPPLUGINCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYAPPPLUGINCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CopyAppPluginConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyAppPluginConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceBizId, sourceBizId_);
      DARABONBA_PTR_TO_JSON(TargetBizId, targetBizId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyAppPluginConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceBizId, sourceBizId_);
      DARABONBA_PTR_FROM_JSON(TargetBizId, targetBizId_);
    };
    CopyAppPluginConfigRequest() = default ;
    CopyAppPluginConfigRequest(const CopyAppPluginConfigRequest &) = default ;
    CopyAppPluginConfigRequest(CopyAppPluginConfigRequest &&) = default ;
    CopyAppPluginConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyAppPluginConfigRequest() = default ;
    CopyAppPluginConfigRequest& operator=(const CopyAppPluginConfigRequest &) = default ;
    CopyAppPluginConfigRequest& operator=(CopyAppPluginConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceBizId_ == nullptr
        && this->targetBizId_ == nullptr; };
    // sourceBizId Field Functions 
    bool hasSourceBizId() const { return this->sourceBizId_ != nullptr;};
    void deleteSourceBizId() { this->sourceBizId_ = nullptr;};
    inline string getSourceBizId() const { DARABONBA_PTR_GET_DEFAULT(sourceBizId_, "") };
    inline CopyAppPluginConfigRequest& setSourceBizId(string sourceBizId) { DARABONBA_PTR_SET_VALUE(sourceBizId_, sourceBizId) };


    // targetBizId Field Functions 
    bool hasTargetBizId() const { return this->targetBizId_ != nullptr;};
    void deleteTargetBizId() { this->targetBizId_ = nullptr;};
    inline string getTargetBizId() const { DARABONBA_PTR_GET_DEFAULT(targetBizId_, "") };
    inline CopyAppPluginConfigRequest& setTargetBizId(string targetBizId) { DARABONBA_PTR_SET_VALUE(targetBizId_, targetBizId) };


  protected:
    shared_ptr<string> sourceBizId_ {};
    shared_ptr<string> targetBizId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
