// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSCRIPTHOTWORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDSCRIPTHOTWORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class AddScriptHotWordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddScriptHotWordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(hotWordId, hotWordId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddScriptHotWordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(hotWordId, hotWordId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    AddScriptHotWordResponseBody() = default ;
    AddScriptHotWordResponseBody(const AddScriptHotWordResponseBody &) = default ;
    AddScriptHotWordResponseBody(AddScriptHotWordResponseBody &&) = default ;
    AddScriptHotWordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddScriptHotWordResponseBody() = default ;
    AddScriptHotWordResponseBody& operator=(const AddScriptHotWordResponseBody &) = default ;
    AddScriptHotWordResponseBody& operator=(AddScriptHotWordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotWordId_ == nullptr
        && this->requestId_ == nullptr; };
    // hotWordId Field Functions 
    bool hasHotWordId() const { return this->hotWordId_ != nullptr;};
    void deleteHotWordId() { this->hotWordId_ = nullptr;};
    inline string getHotWordId() const { DARABONBA_PTR_GET_DEFAULT(hotWordId_, "") };
    inline AddScriptHotWordResponseBody& setHotWordId(string hotWordId) { DARABONBA_PTR_SET_VALUE(hotWordId_, hotWordId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddScriptHotWordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> hotWordId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
