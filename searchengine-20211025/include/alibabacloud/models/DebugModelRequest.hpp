// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEBUGMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class DebugModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebugModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(input, input_);
      DARABONBA_PTR_TO_JSON(isOnline, isOnline_);
    };
    friend void from_json(const Darabonba::Json& j, DebugModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(input, input_);
      DARABONBA_PTR_FROM_JSON(isOnline, isOnline_);
    };
    DebugModelRequest() = default ;
    DebugModelRequest(const DebugModelRequest &) = default ;
    DebugModelRequest(DebugModelRequest &&) = default ;
    DebugModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebugModelRequest() = default ;
    DebugModelRequest& operator=(const DebugModelRequest &) = default ;
    DebugModelRequest& operator=(DebugModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->input_ != nullptr
        && this->isOnline_ != nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline DebugModelRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // isOnline Field Functions 
    bool hasIsOnline() const { return this->isOnline_ != nullptr;};
    void deleteIsOnline() { this->isOnline_ = nullptr;};
    inline string isOnline() const { DARABONBA_PTR_GET_DEFAULT(isOnline_, "") };
    inline DebugModelRequest& setIsOnline(string isOnline) { DARABONBA_PTR_SET_VALUE(isOnline_, isOnline) };


  protected:
    std::shared_ptr<string> input_ = nullptr;
    std::shared_ptr<string> isOnline_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
