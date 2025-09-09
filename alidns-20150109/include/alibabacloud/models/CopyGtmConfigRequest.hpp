// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYGTMCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYGTMCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class CopyGtmConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyGtmConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CopyType, copyType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyGtmConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CopyType, copyType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
    };
    CopyGtmConfigRequest() = default ;
    CopyGtmConfigRequest(const CopyGtmConfigRequest &) = default ;
    CopyGtmConfigRequest(CopyGtmConfigRequest &&) = default ;
    CopyGtmConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyGtmConfigRequest() = default ;
    CopyGtmConfigRequest& operator=(const CopyGtmConfigRequest &) = default ;
    CopyGtmConfigRequest& operator=(CopyGtmConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->copyType_ != nullptr
        && this->lang_ != nullptr && this->sourceId_ != nullptr && this->targetId_ != nullptr; };
    // copyType Field Functions 
    bool hasCopyType() const { return this->copyType_ != nullptr;};
    void deleteCopyType() { this->copyType_ = nullptr;};
    inline string copyType() const { DARABONBA_PTR_GET_DEFAULT(copyType_, "") };
    inline CopyGtmConfigRequest& setCopyType(string copyType) { DARABONBA_PTR_SET_VALUE(copyType_, copyType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CopyGtmConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CopyGtmConfigRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline CopyGtmConfigRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


  protected:
    // The type of the object that is copied. Only the INSTANCE type is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> copyType_ = nullptr;
    // The language.
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the source object. Only instance IDs are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The ID of the target object. Only instance IDs are supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
