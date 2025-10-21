// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STREAMINGRESOURCESETTING_HPP_
#define ALIBABACLOUD_MODELS_STREAMINGRESOURCESETTING_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BasicResourceSetting.hpp>
#include <alibabacloud/models/ExpertResourceSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class StreamingResourceSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StreamingResourceSetting& obj) { 
      DARABONBA_PTR_TO_JSON(basicResourceSetting, basicResourceSetting_);
      DARABONBA_PTR_TO_JSON(expertResourceSetting, expertResourceSetting_);
      DARABONBA_PTR_TO_JSON(resourceSettingMode, resourceSettingMode_);
    };
    friend void from_json(const Darabonba::Json& j, StreamingResourceSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(basicResourceSetting, basicResourceSetting_);
      DARABONBA_PTR_FROM_JSON(expertResourceSetting, expertResourceSetting_);
      DARABONBA_PTR_FROM_JSON(resourceSettingMode, resourceSettingMode_);
    };
    StreamingResourceSetting() = default ;
    StreamingResourceSetting(const StreamingResourceSetting &) = default ;
    StreamingResourceSetting(StreamingResourceSetting &&) = default ;
    StreamingResourceSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StreamingResourceSetting() = default ;
    StreamingResourceSetting& operator=(const StreamingResourceSetting &) = default ;
    StreamingResourceSetting& operator=(StreamingResourceSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicResourceSetting_ == nullptr
        && return this->expertResourceSetting_ == nullptr && return this->resourceSettingMode_ == nullptr; };
    // basicResourceSetting Field Functions 
    bool hasBasicResourceSetting() const { return this->basicResourceSetting_ != nullptr;};
    void deleteBasicResourceSetting() { this->basicResourceSetting_ = nullptr;};
    inline const BasicResourceSetting & basicResourceSetting() const { DARABONBA_PTR_GET_CONST(basicResourceSetting_, BasicResourceSetting) };
    inline BasicResourceSetting basicResourceSetting() { DARABONBA_PTR_GET(basicResourceSetting_, BasicResourceSetting) };
    inline StreamingResourceSetting& setBasicResourceSetting(const BasicResourceSetting & basicResourceSetting) { DARABONBA_PTR_SET_VALUE(basicResourceSetting_, basicResourceSetting) };
    inline StreamingResourceSetting& setBasicResourceSetting(BasicResourceSetting && basicResourceSetting) { DARABONBA_PTR_SET_RVALUE(basicResourceSetting_, basicResourceSetting) };


    // expertResourceSetting Field Functions 
    bool hasExpertResourceSetting() const { return this->expertResourceSetting_ != nullptr;};
    void deleteExpertResourceSetting() { this->expertResourceSetting_ = nullptr;};
    inline const ExpertResourceSetting & expertResourceSetting() const { DARABONBA_PTR_GET_CONST(expertResourceSetting_, ExpertResourceSetting) };
    inline ExpertResourceSetting expertResourceSetting() { DARABONBA_PTR_GET(expertResourceSetting_, ExpertResourceSetting) };
    inline StreamingResourceSetting& setExpertResourceSetting(const ExpertResourceSetting & expertResourceSetting) { DARABONBA_PTR_SET_VALUE(expertResourceSetting_, expertResourceSetting) };
    inline StreamingResourceSetting& setExpertResourceSetting(ExpertResourceSetting && expertResourceSetting) { DARABONBA_PTR_SET_RVALUE(expertResourceSetting_, expertResourceSetting) };


    // resourceSettingMode Field Functions 
    bool hasResourceSettingMode() const { return this->resourceSettingMode_ != nullptr;};
    void deleteResourceSettingMode() { this->resourceSettingMode_ = nullptr;};
    inline string resourceSettingMode() const { DARABONBA_PTR_GET_DEFAULT(resourceSettingMode_, "") };
    inline StreamingResourceSetting& setResourceSettingMode(string resourceSettingMode) { DARABONBA_PTR_SET_VALUE(resourceSettingMode_, resourceSettingMode) };


  protected:
    std::shared_ptr<BasicResourceSetting> basicResourceSetting_ = nullptr;
    std::shared_ptr<ExpertResourceSetting> expertResourceSetting_ = nullptr;
    std::shared_ptr<string> resourceSettingMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
