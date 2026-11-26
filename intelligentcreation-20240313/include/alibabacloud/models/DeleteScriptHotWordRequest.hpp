// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCRIPTHOTWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCRIPTHOTWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class DeleteScriptHotWordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScriptHotWordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(hotWordId, hotWordId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScriptHotWordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(hotWordId, hotWordId_);
    };
    DeleteScriptHotWordRequest() = default ;
    DeleteScriptHotWordRequest(const DeleteScriptHotWordRequest &) = default ;
    DeleteScriptHotWordRequest(DeleteScriptHotWordRequest &&) = default ;
    DeleteScriptHotWordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScriptHotWordRequest() = default ;
    DeleteScriptHotWordRequest& operator=(const DeleteScriptHotWordRequest &) = default ;
    DeleteScriptHotWordRequest& operator=(DeleteScriptHotWordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotWordId_ == nullptr; };
    // hotWordId Field Functions 
    bool hasHotWordId() const { return this->hotWordId_ != nullptr;};
    void deleteHotWordId() { this->hotWordId_ = nullptr;};
    inline string getHotWordId() const { DARABONBA_PTR_GET_DEFAULT(hotWordId_, "") };
    inline DeleteScriptHotWordRequest& setHotWordId(string hotWordId) { DARABONBA_PTR_SET_VALUE(hotWordId_, hotWordId) };


  protected:
    shared_ptr<string> hotWordId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
