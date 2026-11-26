// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSCRIPTHOTWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSCRIPTHOTWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class AddScriptHotWordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddScriptHotWordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(hotWord, hotWord_);
      DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
    };
    friend void from_json(const Darabonba::Json& j, AddScriptHotWordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(hotWord, hotWord_);
      DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
    };
    AddScriptHotWordRequest() = default ;
    AddScriptHotWordRequest(const AddScriptHotWordRequest &) = default ;
    AddScriptHotWordRequest(AddScriptHotWordRequest &&) = default ;
    AddScriptHotWordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddScriptHotWordRequest() = default ;
    AddScriptHotWordRequest& operator=(const AddScriptHotWordRequest &) = default ;
    AddScriptHotWordRequest& operator=(AddScriptHotWordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->hotWord_ == nullptr && this->scriptRecordId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddScriptHotWordRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hotWord Field Functions 
    bool hasHotWord() const { return this->hotWord_ != nullptr;};
    void deleteHotWord() { this->hotWord_ = nullptr;};
    inline string getHotWord() const { DARABONBA_PTR_GET_DEFAULT(hotWord_, "") };
    inline AddScriptHotWordRequest& setHotWord(string hotWord) { DARABONBA_PTR_SET_VALUE(hotWord_, hotWord) };


    // scriptRecordId Field Functions 
    bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
    void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
    inline string getScriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
    inline AddScriptHotWordRequest& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> hotWord_ {};
    shared_ptr<string> scriptRecordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
