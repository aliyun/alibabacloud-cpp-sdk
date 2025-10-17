// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSAYREQUESTUSERSAYDEFINITIONSLOTINFOS_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSAYREQUESTUSERSAYDEFINITIONSLOTINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateUserSayRequestUserSayDefinitionSlotInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserSayRequestUserSayDefinitionSlotInfos& obj) { 
      DARABONBA_PTR_TO_JSON(EndIndex, endIndex_);
      DARABONBA_PTR_TO_JSON(SlotId, slotId_);
      DARABONBA_PTR_TO_JSON(StartIndex, startIndex_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserSayRequestUserSayDefinitionSlotInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(EndIndex, endIndex_);
      DARABONBA_PTR_FROM_JSON(SlotId, slotId_);
      DARABONBA_PTR_FROM_JSON(StartIndex, startIndex_);
    };
    CreateUserSayRequestUserSayDefinitionSlotInfos() = default ;
    CreateUserSayRequestUserSayDefinitionSlotInfos(const CreateUserSayRequestUserSayDefinitionSlotInfos &) = default ;
    CreateUserSayRequestUserSayDefinitionSlotInfos(CreateUserSayRequestUserSayDefinitionSlotInfos &&) = default ;
    CreateUserSayRequestUserSayDefinitionSlotInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserSayRequestUserSayDefinitionSlotInfos() = default ;
    CreateUserSayRequestUserSayDefinitionSlotInfos& operator=(const CreateUserSayRequestUserSayDefinitionSlotInfos &) = default ;
    CreateUserSayRequestUserSayDefinitionSlotInfos& operator=(CreateUserSayRequestUserSayDefinitionSlotInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endIndex_ == nullptr
        && return this->slotId_ == nullptr && return this->startIndex_ == nullptr; };
    // endIndex Field Functions 
    bool hasEndIndex() const { return this->endIndex_ != nullptr;};
    void deleteEndIndex() { this->endIndex_ = nullptr;};
    inline int32_t endIndex() const { DARABONBA_PTR_GET_DEFAULT(endIndex_, 0) };
    inline CreateUserSayRequestUserSayDefinitionSlotInfos& setEndIndex(int32_t endIndex) { DARABONBA_PTR_SET_VALUE(endIndex_, endIndex) };


    // slotId Field Functions 
    bool hasSlotId() const { return this->slotId_ != nullptr;};
    void deleteSlotId() { this->slotId_ = nullptr;};
    inline string slotId() const { DARABONBA_PTR_GET_DEFAULT(slotId_, "") };
    inline CreateUserSayRequestUserSayDefinitionSlotInfos& setSlotId(string slotId) { DARABONBA_PTR_SET_VALUE(slotId_, slotId) };


    // startIndex Field Functions 
    bool hasStartIndex() const { return this->startIndex_ != nullptr;};
    void deleteStartIndex() { this->startIndex_ = nullptr;};
    inline int32_t startIndex() const { DARABONBA_PTR_GET_DEFAULT(startIndex_, 0) };
    inline CreateUserSayRequestUserSayDefinitionSlotInfos& setStartIndex(int32_t startIndex) { DARABONBA_PTR_SET_VALUE(startIndex_, startIndex) };


  protected:
    std::shared_ptr<int32_t> endIndex_ = nullptr;
    std::shared_ptr<string> slotId_ = nullptr;
    std::shared_ptr<int32_t> startIndex_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
