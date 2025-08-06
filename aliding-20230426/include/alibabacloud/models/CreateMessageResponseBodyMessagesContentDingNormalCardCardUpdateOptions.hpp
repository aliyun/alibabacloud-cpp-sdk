// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTDINGNORMALCARDCARDUPDATEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODYMESSAGESCONTENTDINGNORMALCARDCARDUPDATEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions& obj) { 
      DARABONBA_PTR_TO_JSON(updateCardDataByKey, updateCardDataByKey_);
      DARABONBA_PTR_TO_JSON(updatePrivateDataByKey, updatePrivateDataByKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(updateCardDataByKey, updateCardDataByKey_);
      DARABONBA_PTR_FROM_JSON(updatePrivateDataByKey, updatePrivateDataByKey_);
    };
    CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions() = default ;
    CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions(const CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions &) = default ;
    CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions(CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions &&) = default ;
    CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions() = default ;
    CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions& operator=(const CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions &) = default ;
    CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions& operator=(CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions &&) = default ;
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
    inline CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions& setUpdateCardDataByKey(bool updateCardDataByKey) { DARABONBA_PTR_SET_VALUE(updateCardDataByKey_, updateCardDataByKey) };


    // updatePrivateDataByKey Field Functions 
    bool hasUpdatePrivateDataByKey() const { return this->updatePrivateDataByKey_ != nullptr;};
    void deleteUpdatePrivateDataByKey() { this->updatePrivateDataByKey_ = nullptr;};
    inline bool updatePrivateDataByKey() const { DARABONBA_PTR_GET_DEFAULT(updatePrivateDataByKey_, false) };
    inline CreateMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions& setUpdatePrivateDataByKey(bool updatePrivateDataByKey) { DARABONBA_PTR_SET_VALUE(updatePrivateDataByKey_, updatePrivateDataByKey) };


  protected:
    std::shared_ptr<bool> updateCardDataByKey_ = nullptr;
    std::shared_ptr<bool> updatePrivateDataByKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
