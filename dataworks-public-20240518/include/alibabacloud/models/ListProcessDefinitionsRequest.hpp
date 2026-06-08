// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROCESSDEFINITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROCESSDEFINITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProcessDefinitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProcessDefinitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListProcessDefinitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListProcessDefinitionsRequest() = default ;
    ListProcessDefinitionsRequest(const ListProcessDefinitionsRequest &) = default ;
    ListProcessDefinitionsRequest(ListProcessDefinitionsRequest &&) = default ;
    ListProcessDefinitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProcessDefinitionsRequest() = default ;
    ListProcessDefinitionsRequest& operator=(const ListProcessDefinitionsRequest &) = default ;
    ListProcessDefinitionsRequest& operator=(ListProcessDefinitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProcessDefinitionsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
