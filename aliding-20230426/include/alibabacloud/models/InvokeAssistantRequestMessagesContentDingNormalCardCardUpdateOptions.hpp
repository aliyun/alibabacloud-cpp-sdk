// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTDINGNORMALCARDCARDUPDATEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTDINGNORMALCARDCARDUPDATEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions& obj) { 
      DARABONBA_PTR_TO_JSON(updateCardDataByKey, updateCardDataByKey_);
      DARABONBA_PTR_TO_JSON(updatePrivateDataByKey, updatePrivateDataByKey_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(updateCardDataByKey, updateCardDataByKey_);
      DARABONBA_PTR_FROM_JSON(updatePrivateDataByKey, updatePrivateDataByKey_);
    };
    InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions() = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions(const InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions &) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions(InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions &&) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions() = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions& operator=(const InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions &) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions& operator=(InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->updateCardDataByKey_ != nullptr
        && this->updatePrivateDataByKey_ != nullptr; };
    // updateCardDataByKey Field Functions 
    bool hasUpdateCardDataByKey() const { return this->updateCardDataByKey_ != nullptr;};
    void deleteUpdateCardDataByKey() { this->updateCardDataByKey_ = nullptr;};
    inline bool updateCardDataByKey() const { DARABONBA_PTR_GET_DEFAULT(updateCardDataByKey_, false) };
    inline InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions& setUpdateCardDataByKey(bool updateCardDataByKey) { DARABONBA_PTR_SET_VALUE(updateCardDataByKey_, updateCardDataByKey) };


    // updatePrivateDataByKey Field Functions 
    bool hasUpdatePrivateDataByKey() const { return this->updatePrivateDataByKey_ != nullptr;};
    void deleteUpdatePrivateDataByKey() { this->updatePrivateDataByKey_ = nullptr;};
    inline bool updatePrivateDataByKey() const { DARABONBA_PTR_GET_DEFAULT(updatePrivateDataByKey_, false) };
    inline InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions& setUpdatePrivateDataByKey(bool updatePrivateDataByKey) { DARABONBA_PTR_SET_VALUE(updatePrivateDataByKey_, updatePrivateDataByKey) };


  protected:
    std::shared_ptr<bool> updateCardDataByKey_ = nullptr;
    std::shared_ptr<bool> updatePrivateDataByKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
