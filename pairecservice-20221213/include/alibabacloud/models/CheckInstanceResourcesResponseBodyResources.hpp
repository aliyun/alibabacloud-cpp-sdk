// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCERESOURCESRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCERESOURCESRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CheckInstanceResourcesResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceResourcesResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    CheckInstanceResourcesResponseBodyResources() = default ;
    CheckInstanceResourcesResponseBodyResources(const CheckInstanceResourcesResponseBodyResources &) = default ;
    CheckInstanceResourcesResponseBodyResources(CheckInstanceResourcesResponseBodyResources &&) = default ;
    CheckInstanceResourcesResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceResourcesResponseBodyResources() = default ;
    CheckInstanceResourcesResponseBodyResources& operator=(const CheckInstanceResourcesResponseBodyResources &) = default ;
    CheckInstanceResourcesResponseBodyResources& operator=(CheckInstanceResourcesResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->type_ != nullptr && this->uri_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CheckInstanceResourcesResponseBodyResources& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CheckInstanceResourcesResponseBodyResources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CheckInstanceResourcesResponseBodyResources& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
