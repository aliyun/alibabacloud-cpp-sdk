// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDTEXTREQUESTSTREAMEXTENSION_HPP_
#define ALIBABACLOUD_MODELS_SENDTEXTREQUESTSTREAMEXTENSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SendTextRequestStreamExtension : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendTextRequestStreamExtension& obj) { 
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(IsStream, isStream_);
      DARABONBA_PTR_TO_JSON(Position, position_);
    };
    friend void from_json(const Darabonba::Json& j, SendTextRequestStreamExtension& obj) { 
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(IsStream, isStream_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
    };
    SendTextRequestStreamExtension() = default ;
    SendTextRequestStreamExtension(const SendTextRequestStreamExtension &) = default ;
    SendTextRequestStreamExtension(SendTextRequestStreamExtension &&) = default ;
    SendTextRequestStreamExtension(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendTextRequestStreamExtension() = default ;
    SendTextRequestStreamExtension& operator=(const SendTextRequestStreamExtension &) = default ;
    SendTextRequestStreamExtension& operator=(SendTextRequestStreamExtension &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->index_ != nullptr
        && this->isStream_ != nullptr && this->position_ != nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline SendTextRequestStreamExtension& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // isStream Field Functions 
    bool hasIsStream() const { return this->isStream_ != nullptr;};
    void deleteIsStream() { this->isStream_ = nullptr;};
    inline bool isStream() const { DARABONBA_PTR_GET_DEFAULT(isStream_, false) };
    inline SendTextRequestStreamExtension& setIsStream(bool isStream) { DARABONBA_PTR_SET_VALUE(isStream_, isStream) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline SendTextRequestStreamExtension& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


  protected:
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<bool> isStream_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
