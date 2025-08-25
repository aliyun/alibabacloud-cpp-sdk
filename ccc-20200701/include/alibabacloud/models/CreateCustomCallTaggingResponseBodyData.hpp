// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCALLTAGGINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCALLTAGGINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class CreateCustomCallTaggingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCallTaggingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCallTaggingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    CreateCustomCallTaggingResponseBodyData() = default ;
    CreateCustomCallTaggingResponseBodyData(const CreateCustomCallTaggingResponseBodyData &) = default ;
    CreateCustomCallTaggingResponseBodyData(CreateCustomCallTaggingResponseBodyData &&) = default ;
    CreateCustomCallTaggingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCallTaggingResponseBodyData() = default ;
    CreateCustomCallTaggingResponseBodyData& operator=(const CreateCustomCallTaggingResponseBodyData &) = default ;
    CreateCustomCallTaggingResponseBodyData& operator=(CreateCustomCallTaggingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->item_ != nullptr
        && this->reason_ != nullptr; };
    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline CreateCustomCallTaggingResponseBodyData& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateCustomCallTaggingResponseBodyData& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    std::shared_ptr<string> item_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
