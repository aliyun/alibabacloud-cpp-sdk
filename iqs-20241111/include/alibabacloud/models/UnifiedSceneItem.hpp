// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNIFIEDSCENEITEM_HPP_
#define ALIBABACLOUD_MODELS_UNIFIEDSCENEITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class UnifiedSceneItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnifiedSceneItem& obj) { 
      DARABONBA_PTR_TO_JSON(detail, detail_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UnifiedSceneItem& obj) { 
      DARABONBA_PTR_FROM_JSON(detail, detail_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    UnifiedSceneItem() = default ;
    UnifiedSceneItem(const UnifiedSceneItem &) = default ;
    UnifiedSceneItem(UnifiedSceneItem &&) = default ;
    UnifiedSceneItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnifiedSceneItem() = default ;
    UnifiedSceneItem& operator=(const UnifiedSceneItem &) = default ;
    UnifiedSceneItem& operator=(UnifiedSceneItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detail_ == nullptr
        && this->type_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline UnifiedSceneItem& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UnifiedSceneItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> detail_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
