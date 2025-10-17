// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_NLURESPONSEBODYMESSAGES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NluResponseBodyMessagesDialogHubNluInfo.hpp>
#include <alibabacloud/models/NluResponseBodyMessagesDsNluInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class NluResponseBodyMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NluResponseBodyMessages& obj) { 
      DARABONBA_PTR_TO_JSON(DialogHubNluInfo, dialogHubNluInfo_);
      DARABONBA_PTR_TO_JSON(DsNluInfo, dsNluInfo_);
    };
    friend void from_json(const Darabonba::Json& j, NluResponseBodyMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(DialogHubNluInfo, dialogHubNluInfo_);
      DARABONBA_PTR_FROM_JSON(DsNluInfo, dsNluInfo_);
    };
    NluResponseBodyMessages() = default ;
    NluResponseBodyMessages(const NluResponseBodyMessages &) = default ;
    NluResponseBodyMessages(NluResponseBodyMessages &&) = default ;
    NluResponseBodyMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NluResponseBodyMessages() = default ;
    NluResponseBodyMessages& operator=(const NluResponseBodyMessages &) = default ;
    NluResponseBodyMessages& operator=(NluResponseBodyMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogHubNluInfo_ == nullptr
        && return this->dsNluInfo_ == nullptr; };
    // dialogHubNluInfo Field Functions 
    bool hasDialogHubNluInfo() const { return this->dialogHubNluInfo_ != nullptr;};
    void deleteDialogHubNluInfo() { this->dialogHubNluInfo_ = nullptr;};
    inline const Models::NluResponseBodyMessagesDialogHubNluInfo & dialogHubNluInfo() const { DARABONBA_PTR_GET_CONST(dialogHubNluInfo_, Models::NluResponseBodyMessagesDialogHubNluInfo) };
    inline Models::NluResponseBodyMessagesDialogHubNluInfo dialogHubNluInfo() { DARABONBA_PTR_GET(dialogHubNluInfo_, Models::NluResponseBodyMessagesDialogHubNluInfo) };
    inline NluResponseBodyMessages& setDialogHubNluInfo(const Models::NluResponseBodyMessagesDialogHubNluInfo & dialogHubNluInfo) { DARABONBA_PTR_SET_VALUE(dialogHubNluInfo_, dialogHubNluInfo) };
    inline NluResponseBodyMessages& setDialogHubNluInfo(Models::NluResponseBodyMessagesDialogHubNluInfo && dialogHubNluInfo) { DARABONBA_PTR_SET_RVALUE(dialogHubNluInfo_, dialogHubNluInfo) };


    // dsNluInfo Field Functions 
    bool hasDsNluInfo() const { return this->dsNluInfo_ != nullptr;};
    void deleteDsNluInfo() { this->dsNluInfo_ = nullptr;};
    inline const Models::NluResponseBodyMessagesDsNluInfo & dsNluInfo() const { DARABONBA_PTR_GET_CONST(dsNluInfo_, Models::NluResponseBodyMessagesDsNluInfo) };
    inline Models::NluResponseBodyMessagesDsNluInfo dsNluInfo() { DARABONBA_PTR_GET(dsNluInfo_, Models::NluResponseBodyMessagesDsNluInfo) };
    inline NluResponseBodyMessages& setDsNluInfo(const Models::NluResponseBodyMessagesDsNluInfo & dsNluInfo) { DARABONBA_PTR_SET_VALUE(dsNluInfo_, dsNluInfo) };
    inline NluResponseBodyMessages& setDsNluInfo(Models::NluResponseBodyMessagesDsNluInfo && dsNluInfo) { DARABONBA_PTR_SET_RVALUE(dsNluInfo_, dsNluInfo) };


  protected:
    std::shared_ptr<Models::NluResponseBodyMessagesDialogHubNluInfo> dialogHubNluInfo_ = nullptr;
    std::shared_ptr<Models::NluResponseBodyMessagesDsNluInfo> dsNluInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
