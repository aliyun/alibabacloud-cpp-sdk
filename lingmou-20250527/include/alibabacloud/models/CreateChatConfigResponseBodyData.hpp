// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateChatConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
    };
    CreateChatConfigResponseBodyData() = default ;
    CreateChatConfigResponseBodyData(const CreateChatConfigResponseBodyData &) = default ;
    CreateChatConfigResponseBodyData(CreateChatConfigResponseBodyData &&) = default ;
    CreateChatConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatConfigResponseBodyData() = default ;
    CreateChatConfigResponseBodyData& operator=(const CreateChatConfigResponseBodyData &) = default ;
    CreateChatConfigResponseBodyData& operator=(CreateChatConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateChatConfigResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
