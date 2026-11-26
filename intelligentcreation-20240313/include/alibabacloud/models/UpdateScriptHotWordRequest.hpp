// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCRIPTHOTWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCRIPTHOTWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class UpdateScriptHotWordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScriptHotWordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(hotWord, hotWord_);
      DARABONBA_PTR_TO_JSON(hotWordId, hotWordId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScriptHotWordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(hotWord, hotWord_);
      DARABONBA_PTR_FROM_JSON(hotWordId, hotWordId_);
    };
    UpdateScriptHotWordRequest() = default ;
    UpdateScriptHotWordRequest(const UpdateScriptHotWordRequest &) = default ;
    UpdateScriptHotWordRequest(UpdateScriptHotWordRequest &&) = default ;
    UpdateScriptHotWordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScriptHotWordRequest() = default ;
    UpdateScriptHotWordRequest& operator=(const UpdateScriptHotWordRequest &) = default ;
    UpdateScriptHotWordRequest& operator=(UpdateScriptHotWordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->hotWord_ == nullptr && this->hotWordId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateScriptHotWordRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hotWord Field Functions 
    bool hasHotWord() const { return this->hotWord_ != nullptr;};
    void deleteHotWord() { this->hotWord_ = nullptr;};
    inline string getHotWord() const { DARABONBA_PTR_GET_DEFAULT(hotWord_, "") };
    inline UpdateScriptHotWordRequest& setHotWord(string hotWord) { DARABONBA_PTR_SET_VALUE(hotWord_, hotWord) };


    // hotWordId Field Functions 
    bool hasHotWordId() const { return this->hotWordId_ != nullptr;};
    void deleteHotWordId() { this->hotWordId_ = nullptr;};
    inline string getHotWordId() const { DARABONBA_PTR_GET_DEFAULT(hotWordId_, "") };
    inline UpdateScriptHotWordRequest& setHotWordId(string hotWordId) { DARABONBA_PTR_SET_VALUE(hotWordId_, hotWordId) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> hotWord_ {};
    shared_ptr<string> hotWordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
