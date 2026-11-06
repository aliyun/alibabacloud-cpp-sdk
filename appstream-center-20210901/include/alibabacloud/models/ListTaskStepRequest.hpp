// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSTEPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSTEPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListTaskStepRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskStepRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskStepRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListTaskStepRequest() = default ;
    ListTaskStepRequest(const ListTaskStepRequest &) = default ;
    ListTaskStepRequest(ListTaskStepRequest &&) = default ;
    ListTaskStepRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskStepRequest() = default ;
    ListTaskStepRequest& operator=(const ListTaskStepRequest &) = default ;
    ListTaskStepRequest& operator=(ListTaskStepRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTaskStepRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The task type to which the step belongs. Valid values:
    // 
    // - **ADAPTOR**: Application adaptation steps.
    // - **IMAGE**: Image creation steps.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
