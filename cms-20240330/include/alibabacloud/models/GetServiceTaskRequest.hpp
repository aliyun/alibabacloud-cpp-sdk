// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetServiceTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetServiceTaskRequest() = default ;
    GetServiceTaskRequest(const GetServiceTaskRequest &) = default ;
    GetServiceTaskRequest(GetServiceTaskRequest &&) = default ;
    GetServiceTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceTaskRequest() = default ;
    GetServiceTaskRequest& operator=(const GetServiceTaskRequest &) = default ;
    GetServiceTaskRequest& operator=(GetServiceTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetServiceTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
