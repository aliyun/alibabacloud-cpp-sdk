// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTDINGNORMALCARDCARDUPDATEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTDINGNORMALCARDCARDUPDATEOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions& obj) { 
      DARABONBA_PTR_TO_JSON(updateCardDataByKey, updateCardDataByKey_);
      DARABONBA_PTR_TO_JSON(updatePrivateDataByKey, updatePrivateDataByKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(updateCardDataByKey, updateCardDataByKey_);
      DARABONBA_PTR_FROM_JSON(updatePrivateDataByKey, updatePrivateDataByKey_);
    };
    CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions() = default ;
    CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions(const CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions &) = default ;
    CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions(CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions &&) = default ;
    CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions() = default ;
    CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions& operator=(const CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions &) = default ;
    CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions& operator=(CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions &&) = default ;
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
    inline CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions& setUpdateCardDataByKey(bool updateCardDataByKey) { DARABONBA_PTR_SET_VALUE(updateCardDataByKey_, updateCardDataByKey) };


    // updatePrivateDataByKey Field Functions 
    bool hasUpdatePrivateDataByKey() const { return this->updatePrivateDataByKey_ != nullptr;};
    void deleteUpdatePrivateDataByKey() { this->updatePrivateDataByKey_ = nullptr;};
    inline bool updatePrivateDataByKey() const { DARABONBA_PTR_GET_DEFAULT(updatePrivateDataByKey_, false) };
    inline CreateRunResponseBodyMessagesContentDingNormalCardCardUpdateOptions& setUpdatePrivateDataByKey(bool updatePrivateDataByKey) { DARABONBA_PTR_SET_VALUE(updatePrivateDataByKey_, updatePrivateDataByKey) };


  protected:
    std::shared_ptr<bool> updateCardDataByKey_ = nullptr;
    std::shared_ptr<bool> updatePrivateDataByKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
