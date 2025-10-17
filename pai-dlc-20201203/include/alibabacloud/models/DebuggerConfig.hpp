// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGGERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEBUGGERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class DebuggerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebuggerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DebuggerConfigId, debuggerConfigId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
    };
    friend void from_json(const Darabonba::Json& j, DebuggerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DebuggerConfigId, debuggerConfigId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
    };
    DebuggerConfig() = default ;
    DebuggerConfig(const DebuggerConfig &) = default ;
    DebuggerConfig(DebuggerConfig &&) = default ;
    DebuggerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebuggerConfig() = default ;
    DebuggerConfig& operator=(const DebuggerConfig &) = default ;
    DebuggerConfig& operator=(DebuggerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->debuggerConfigId_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifyTime_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DebuggerConfig& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // debuggerConfigId Field Functions 
    bool hasDebuggerConfigId() const { return this->debuggerConfigId_ != nullptr;};
    void deleteDebuggerConfigId() { this->debuggerConfigId_ = nullptr;};
    inline string debuggerConfigId() const { DARABONBA_PTR_GET_DEFAULT(debuggerConfigId_, "") };
    inline DebuggerConfig& setDebuggerConfigId(string debuggerConfigId) { DARABONBA_PTR_SET_VALUE(debuggerConfigId_, debuggerConfigId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DebuggerConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DebuggerConfig& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline DebuggerConfig& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string gmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline DebuggerConfig& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> debuggerConfigId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifyTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
