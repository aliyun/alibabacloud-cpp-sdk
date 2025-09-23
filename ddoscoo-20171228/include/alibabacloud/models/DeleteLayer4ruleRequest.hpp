// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELAYER4RULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELAYER4RULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DeleteLayer4RuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLayer4RuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLayer4RuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
    };
    DeleteLayer4RuleRequest() = default ;
    DeleteLayer4RuleRequest(const DeleteLayer4RuleRequest &) = default ;
    DeleteLayer4RuleRequest(DeleteLayer4RuleRequest &&) = default ;
    DeleteLayer4RuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLayer4RuleRequest() = default ;
    DeleteLayer4RuleRequest& operator=(const DeleteLayer4RuleRequest &) = default ;
    DeleteLayer4RuleRequest& operator=(DeleteLayer4RuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->listeners_ != nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline string listeners() const { DARABONBA_PTR_GET_DEFAULT(listeners_, "") };
    inline DeleteLayer4RuleRequest& setListeners(string listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> listeners_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
